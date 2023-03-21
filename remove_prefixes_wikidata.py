from argparse import ArgumentParser
import sys
import io
from typing import Optional, Union, List
from pathlib import Path
from rdflib import Graph

prefixes_first = {
    "pqn": "http://www.wikidata.org/prop/qualifier/value-normalized/",
    "pqv": "http://www.wikidata.org/prop/qualifier/value/",
    "prn": "http://www.wikidata.org/prop/reference/value-normalized/",
    "prv": "http://www.wikidata.org/prop/reference/value/",
    "psn": "http://www.wikidata.org/prop/statement/value-normalized/",
    "psv": "http://www.wikidata.org/prop/statement/value/"
}

prefixes_second = {
    "pq": "http://www.wikidata.org/prop/qualifier/",
    "pr": "http://www.wikidata.org/prop/reference/",
    "ps": "http://www.wikidata.org/prop/statement/",
    "wds": "http://www.wikidata.org/entity/statement/",
    "wdno": "http://www.wikidata.org/prop/novalue/",
    "wdt": "http://www.wikidata.org/prop/direct/",
    "wdtn": "http://www.wikidata.org/prop/direct-normalized/",
}

prefixes_third = {
    "owl": "http://www.w3.org/2002/07/owl#",
    "prov": "http://www.w3.org/ns/prov#",
    "rdf": "http://www.w3.org/1999/02/22-rdf-syntax-ns#",
    "rdfs": "http://www.w3.org/2000/01/rdf-schema#",
    "schema": "http://schema.org/",
    "skos": "http://www.w3.org/2004/02/skos/core#",
    "xsd": "http://www.w3.org/2001/XMLSchema#",
    "p": "http://www.wikidata.org/prop/",
    "wd": "http://www.wikidata.org/entity/",
    "wdata": "http://www.wikidata.org/wiki/Special:EntityData/",
    "wdref": "http://www.wikidata.org/reference/",
    "wdv": "http://www.wikidata.org/value/",
    "wikibase": "http://wikiba.se/ontology#"
}

def genargs(prog: Optional[str] = None) -> ArgumentParser:
    parser = ArgumentParser(prog)
    parser.add_argument("input", help="Input graph in RDF")
    parser.add_argument("output", help="Output graph with prefixes excluded")
    return parser

def remove_prefixes_nt(input_file: str, output_file: str):
    with open(input_file, "r") as infile, open(output_file, "w") as outfile:
        for line in infile:
            for prefix, namespace in prefixes_first.items():
                line = line.replace(f"<{namespace}", f"{prefix}:")
            for prefix, namespace in prefixes_second.items():
                line = line.replace(f"<{namespace}", f"{prefix}:")
            for prefix, namespace in prefixes_third.items():
                line = line.replace(f"<{namespace}", f"{prefix}:")
            line = line.replace(">", "")
            outfile.write(line)
    print('DONE')

def remove_prefixes(argv: Optional[Union[str, List[str]]] = None, prog: Optional[str] = None) -> int:
    if isinstance(argv, str):
        argv = argv.split()
    opts = genargs(prog).parse_args(argv if argv is not None else sys.argv[1:])
    
    opts.input = Path(opts.input)
    if not opts.input.exists():
        print('There is no input file on: '.format(opts.input))
        return 1
    opts.output = Path(opts.output)

    remove_prefixes_nt(opts.input, opts.output)


if __name__ == '__main__':
    remove_prefixes(sys.argv[1:])

