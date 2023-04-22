#define SOUFFLE_GENERATOR_VERSION "2.4"
#include "souffle/CompiledSouffle.h"
#include "souffle/SignalHandler.h"
#include "souffle/SouffleInterface.h"
#include "souffle/datastructure/BTree.h"
#include "souffle/io/IOSystem.h"
#include <any>
namespace functors {
extern "C" {
}
} //namespace functors
namespace souffle::t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111 {
using namespace souffle;
struct Type {
static constexpr Relation::arity_type Arity = 4;
using t_tuple = Tuple<RamDomain, 4>;
struct t_comparator_0{
 int operator()(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[1]) < ramBitCast<RamSigned>(b[1])) ? -1 : (ramBitCast<RamSigned>(a[1]) > ramBitCast<RamSigned>(b[1])) ? 1 :((ramBitCast<RamSigned>(a[2]) < ramBitCast<RamSigned>(b[2])) ? -1 : (ramBitCast<RamSigned>(a[2]) > ramBitCast<RamSigned>(b[2])) ? 1 :((ramBitCast<RamSigned>(a[3]) < ramBitCast<RamSigned>(b[3])) ? -1 : (ramBitCast<RamSigned>(a[3]) > ramBitCast<RamSigned>(b[3])) ? 1 :((ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0])) ? -1 : (ramBitCast<RamSigned>(a[0]) > ramBitCast<RamSigned>(b[0])) ? 1 :(0))));
 }
bool less(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[1]) < ramBitCast<RamSigned>(b[1]))|| ((ramBitCast<RamSigned>(a[1]) == ramBitCast<RamSigned>(b[1])) && ((ramBitCast<RamSigned>(a[2]) < ramBitCast<RamSigned>(b[2]))|| ((ramBitCast<RamSigned>(a[2]) == ramBitCast<RamSigned>(b[2])) && ((ramBitCast<RamSigned>(a[3]) < ramBitCast<RamSigned>(b[3]))|| ((ramBitCast<RamSigned>(a[3]) == ramBitCast<RamSigned>(b[3])) && ((ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0]))))))));
 }
bool equal(const t_tuple& a, const t_tuple& b) const {
return (ramBitCast<RamSigned>(a[1]) == ramBitCast<RamSigned>(b[1]))&&(ramBitCast<RamSigned>(a[2]) == ramBitCast<RamSigned>(b[2]))&&(ramBitCast<RamSigned>(a[3]) == ramBitCast<RamSigned>(b[3]))&&(ramBitCast<RamSigned>(a[0]) == ramBitCast<RamSigned>(b[0]));
 }
};
using t_ind_0 = btree_set<t_tuple,t_comparator_0>;
t_ind_0 ind_0;
struct t_comparator_1{
 int operator()(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0])) ? -1 : (ramBitCast<RamSigned>(a[0]) > ramBitCast<RamSigned>(b[0])) ? 1 :((ramBitCast<RamSigned>(a[1]) < ramBitCast<RamSigned>(b[1])) ? -1 : (ramBitCast<RamSigned>(a[1]) > ramBitCast<RamSigned>(b[1])) ? 1 :((ramBitCast<RamSigned>(a[3]) < ramBitCast<RamSigned>(b[3])) ? -1 : (ramBitCast<RamSigned>(a[3]) > ramBitCast<RamSigned>(b[3])) ? 1 :(0)));
 }
bool less(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0]))|| ((ramBitCast<RamSigned>(a[0]) == ramBitCast<RamSigned>(b[0])) && ((ramBitCast<RamSigned>(a[1]) < ramBitCast<RamSigned>(b[1]))|| ((ramBitCast<RamSigned>(a[1]) == ramBitCast<RamSigned>(b[1])) && ((ramBitCast<RamSigned>(a[3]) < ramBitCast<RamSigned>(b[3]))))));
 }
bool equal(const t_tuple& a, const t_tuple& b) const {
return (ramBitCast<RamSigned>(a[0]) == ramBitCast<RamSigned>(b[0]))&&(ramBitCast<RamSigned>(a[1]) == ramBitCast<RamSigned>(b[1]))&&(ramBitCast<RamSigned>(a[3]) == ramBitCast<RamSigned>(b[3]));
 }
};
using t_ind_1 = btree_multiset<t_tuple,t_comparator_1>;
t_ind_1 ind_1;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0_lower;
t_ind_0::operation_hints hints_0_upper;
t_ind_1::operation_hints hints_1_lower;
t_ind_1::operation_hints hints_1_upper;
};
context createContext() { return context(); }
bool insert(const t_tuple& t);
bool insert(const t_tuple& t, context& h);
bool insert(const RamDomain* ramDomain);
bool insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3);
bool contains(const t_tuple& t, context& h) const;
bool contains(const t_tuple& t) const;
std::size_t size() const;
iterator find(const t_tuple& t, context& h) const;
iterator find(const t_tuple& t) const;
range<iterator> lowerUpperRange_0000(const t_tuple& /* lower */, const t_tuple& /* upper */, context& /* h */) const;
range<iterator> lowerUpperRange_0000(const t_tuple& /* lower */, const t_tuple& /* upper */) const;
range<t_ind_0::iterator> lowerUpperRange_1111(const t_tuple& lower, const t_tuple& upper, context& h) const;
range<t_ind_0::iterator> lowerUpperRange_1111(const t_tuple& lower, const t_tuple& upper) const;
range<t_ind_1::iterator> lowerUpperRange_1101(const t_tuple& lower, const t_tuple& upper, context& h) const;
range<t_ind_1::iterator> lowerUpperRange_1101(const t_tuple& lower, const t_tuple& upper) const;
range<t_ind_0::iterator> lowerUpperRange_0111(const t_tuple& lower, const t_tuple& upper, context& h) const;
range<t_ind_0::iterator> lowerUpperRange_0111(const t_tuple& lower, const t_tuple& upper) const;
bool empty() const;
std::vector<range<iterator>> partition() const;
void purge();
iterator begin() const;
iterator end() const;
void printStatistics(std::ostream& o) const;
};
} // namespace souffle::t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111 
namespace souffle::t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111 {
using namespace souffle;
using t_ind_0 = Type::t_ind_0;
using t_ind_1 = Type::t_ind_1;
using iterator = Type::iterator;
using context = Type::context;
bool Type::insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool Type::insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0_lower)) {
ind_1.insert(t, h.hints_1_lower);
return true;
} else return false;
}
bool Type::insert(const RamDomain* ramDomain) {
RamDomain data[4];
std::copy(ramDomain, ramDomain + 4, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool Type::insert(RamDomain a0,RamDomain a1,RamDomain a2,RamDomain a3) {
RamDomain data[4] = {a0,a1,a2,a3};
return insert(data);
}
bool Type::contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0_lower);
}
bool Type::contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t Type::size() const {
return ind_0.size();
}
iterator Type::find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0_lower);
}
iterator Type::find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> Type::lowerUpperRange_0000(const t_tuple& /* lower */, const t_tuple& /* upper */, context& /* h */) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> Type::lowerUpperRange_0000(const t_tuple& /* lower */, const t_tuple& /* upper */) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> Type::lowerUpperRange_1111(const t_tuple& lower, const t_tuple& upper, context& h) const {
t_comparator_0 comparator;
int cmp = comparator(lower, upper);
if (cmp == 0) {
    auto pos = ind_0.find(lower, h.hints_0_lower);
    auto fin = ind_0.end();
    if (pos != fin) {fin = pos; ++fin;}
    return make_range(pos, fin);
}
if (cmp > 0) {
    return make_range(ind_0.end(), ind_0.end());
}
return make_range(ind_0.lower_bound(lower, h.hints_0_lower), ind_0.upper_bound(upper, h.hints_0_upper));
}
range<t_ind_0::iterator> Type::lowerUpperRange_1111(const t_tuple& lower, const t_tuple& upper) const {
context h;
return lowerUpperRange_1111(lower,upper,h);
}
range<t_ind_1::iterator> Type::lowerUpperRange_1101(const t_tuple& lower, const t_tuple& upper, context& h) const {
t_comparator_1 comparator;
int cmp = comparator(lower, upper);
if (cmp > 0) {
    return make_range(ind_1.end(), ind_1.end());
}
return make_range(ind_1.lower_bound(lower, h.hints_1_lower), ind_1.upper_bound(upper, h.hints_1_upper));
}
range<t_ind_1::iterator> Type::lowerUpperRange_1101(const t_tuple& lower, const t_tuple& upper) const {
context h;
return lowerUpperRange_1101(lower,upper,h);
}
range<t_ind_0::iterator> Type::lowerUpperRange_0111(const t_tuple& lower, const t_tuple& upper, context& h) const {
t_comparator_0 comparator;
int cmp = comparator(lower, upper);
if (cmp > 0) {
    return make_range(ind_0.end(), ind_0.end());
}
return make_range(ind_0.lower_bound(lower, h.hints_0_lower), ind_0.upper_bound(upper, h.hints_0_upper));
}
range<t_ind_0::iterator> Type::lowerUpperRange_0111(const t_tuple& lower, const t_tuple& upper) const {
context h;
return lowerUpperRange_0111(lower,upper,h);
}
bool Type::empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> Type::partition() const {
return ind_0.getChunks(400);
}
void Type::purge() {
ind_0.clear();
ind_1.clear();
}
iterator Type::begin() const {
return ind_0.begin();
}
iterator Type::end() const {
return ind_0.end();
}
void Type::printStatistics(std::ostream& o) const {
o << " arity 4 direct b-tree index 0 lex-order [1,2,3,0]\n";
ind_0.printStats(o);
o << " arity 4 direct b-tree index 1 lex-order [0,1,3]\n";
ind_1.printStats(o);
}
} // namespace souffle::t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111 
namespace souffle::t_btree_i__0__1 {
using namespace souffle;
struct Type {
static constexpr Relation::arity_type Arity = 1;
using t_tuple = Tuple<RamDomain, 1>;
struct t_comparator_0{
 int operator()(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0])) ? -1 : (ramBitCast<RamSigned>(a[0]) > ramBitCast<RamSigned>(b[0])) ? 1 :(0);
 }
bool less(const t_tuple& a, const t_tuple& b) const {
  return (ramBitCast<RamSigned>(a[0]) < ramBitCast<RamSigned>(b[0]));
 }
bool equal(const t_tuple& a, const t_tuple& b) const {
return (ramBitCast<RamSigned>(a[0]) == ramBitCast<RamSigned>(b[0]));
 }
};
using t_ind_0 = btree_set<t_tuple,t_comparator_0>;
t_ind_0 ind_0;
using iterator = t_ind_0::iterator;
struct context {
t_ind_0::operation_hints hints_0_lower;
t_ind_0::operation_hints hints_0_upper;
};
context createContext() { return context(); }
bool insert(const t_tuple& t);
bool insert(const t_tuple& t, context& h);
bool insert(const RamDomain* ramDomain);
bool insert(RamDomain a0);
bool contains(const t_tuple& t, context& h) const;
bool contains(const t_tuple& t) const;
std::size_t size() const;
iterator find(const t_tuple& t, context& h) const;
iterator find(const t_tuple& t) const;
range<iterator> lowerUpperRange_0(const t_tuple& /* lower */, const t_tuple& /* upper */, context& /* h */) const;
range<iterator> lowerUpperRange_0(const t_tuple& /* lower */, const t_tuple& /* upper */) const;
range<t_ind_0::iterator> lowerUpperRange_1(const t_tuple& lower, const t_tuple& upper, context& h) const;
range<t_ind_0::iterator> lowerUpperRange_1(const t_tuple& lower, const t_tuple& upper) const;
bool empty() const;
std::vector<range<iterator>> partition() const;
void purge();
iterator begin() const;
iterator end() const;
void printStatistics(std::ostream& o) const;
};
} // namespace souffle::t_btree_i__0__1 
namespace souffle::t_btree_i__0__1 {
using namespace souffle;
using t_ind_0 = Type::t_ind_0;
using iterator = Type::iterator;
using context = Type::context;
bool Type::insert(const t_tuple& t) {
context h;
return insert(t, h);
}
bool Type::insert(const t_tuple& t, context& h) {
if (ind_0.insert(t, h.hints_0_lower)) {
return true;
} else return false;
}
bool Type::insert(const RamDomain* ramDomain) {
RamDomain data[1];
std::copy(ramDomain, ramDomain + 1, data);
const t_tuple& tuple = reinterpret_cast<const t_tuple&>(data);
context h;
return insert(tuple, h);
}
bool Type::insert(RamDomain a0) {
RamDomain data[1] = {a0};
return insert(data);
}
bool Type::contains(const t_tuple& t, context& h) const {
return ind_0.contains(t, h.hints_0_lower);
}
bool Type::contains(const t_tuple& t) const {
context h;
return contains(t, h);
}
std::size_t Type::size() const {
return ind_0.size();
}
iterator Type::find(const t_tuple& t, context& h) const {
return ind_0.find(t, h.hints_0_lower);
}
iterator Type::find(const t_tuple& t) const {
context h;
return find(t, h);
}
range<iterator> Type::lowerUpperRange_0(const t_tuple& /* lower */, const t_tuple& /* upper */, context& /* h */) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<iterator> Type::lowerUpperRange_0(const t_tuple& /* lower */, const t_tuple& /* upper */) const {
return range<iterator>(ind_0.begin(),ind_0.end());
}
range<t_ind_0::iterator> Type::lowerUpperRange_1(const t_tuple& lower, const t_tuple& upper, context& h) const {
t_comparator_0 comparator;
int cmp = comparator(lower, upper);
if (cmp == 0) {
    auto pos = ind_0.find(lower, h.hints_0_lower);
    auto fin = ind_0.end();
    if (pos != fin) {fin = pos; ++fin;}
    return make_range(pos, fin);
}
if (cmp > 0) {
    return make_range(ind_0.end(), ind_0.end());
}
return make_range(ind_0.lower_bound(lower, h.hints_0_lower), ind_0.upper_bound(upper, h.hints_0_upper));
}
range<t_ind_0::iterator> Type::lowerUpperRange_1(const t_tuple& lower, const t_tuple& upper) const {
context h;
return lowerUpperRange_1(lower,upper,h);
}
bool Type::empty() const {
return ind_0.empty();
}
std::vector<range<iterator>> Type::partition() const {
return ind_0.getChunks(400);
}
void Type::purge() {
ind_0.clear();
}
iterator Type::begin() const {
return ind_0.begin();
}
iterator Type::end() const {
return ind_0.end();
}
void Type::printStatistics(std::ostream& o) const {
o << " arity 1 direct b-tree index 0 lex-order [0]\n";
ind_0.printStats(o);
}
} // namespace souffle::t_btree_i__0__1 
namespace  souffle {
using namespace souffle;
class Stratum_Q_20de10639a4fc0d4 {
public:
 Stratum_Q_20de10639a4fc0d4(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_i__0__1::Type& rel_Q_4a2916012c3e6e99,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isDisease_d17b5bc8bd9a5ac4,t_btree_i__0__1::Type& rel_isGene_19054cb0dc2123f2);
void run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret);
private:
SymbolTable& symTable;
RecordTable& recordTable;
ConcurrentCache<std::string,std::regex>& regexCache;
bool& pruneImdtRels;
bool& performIO;
SignalHandler*& signalHandler;
std::atomic<std::size_t>& iter;
std::atomic<RamDomain>& ctr;
std::string& inputDirectory;
std::string& outputDirectory;
t_btree_i__0__1::Type* rel_Q_4a2916012c3e6e99;
t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type* rel_Triple_9893529cf9068b5d;
t_btree_i__0__1::Type* rel_isDisease_d17b5bc8bd9a5ac4;
t_btree_i__0__1::Type* rel_isGene_19054cb0dc2123f2;
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
 Stratum_Q_20de10639a4fc0d4::Stratum_Q_20de10639a4fc0d4(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_i__0__1::Type& rel_Q_4a2916012c3e6e99,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isDisease_d17b5bc8bd9a5ac4,t_btree_i__0__1::Type& rel_isGene_19054cb0dc2123f2):
symTable(symTable),
recordTable(recordTable),
regexCache(regexCache),
pruneImdtRels(pruneImdtRels),
performIO(performIO),
signalHandler(signalHandler),
iter(iter),
ctr(ctr),
inputDirectory(inputDirectory),
outputDirectory(outputDirectory),
rel_Q_4a2916012c3e6e99(&rel_Q_4a2916012c3e6e99),
rel_Triple_9893529cf9068b5d(&rel_Triple_9893529cf9068b5d),
rel_isDisease_d17b5bc8bd9a5ac4(&rel_isDisease_d17b5bc8bd9a5ac4),
rel_isGene_19054cb0dc2123f2(&rel_isGene_19054cb0dc2123f2){
}

void Stratum_Q_20de10639a4fc0d4::run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret){
signalHandler->setMsg(R"_(Q(g) :- 
   isGene(g),
   isDisease(d),
   Triple(g,"<http://www.wikidata.org/prop/direct/P2293>",d,".").
in file gene_milos.dl [12:1-12:99])_");
if(!(rel_isDisease_d17b5bc8bd9a5ac4->empty()) && !(rel_Triple_9893529cf9068b5d->empty()) && !(rel_isGene_19054cb0dc2123f2->empty())) {
[&](){
CREATE_OP_CONTEXT(rel_Q_4a2916012c3e6e99_op_ctxt,rel_Q_4a2916012c3e6e99->createContext());
CREATE_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt,rel_Triple_9893529cf9068b5d->createContext());
CREATE_OP_CONTEXT(rel_isDisease_d17b5bc8bd9a5ac4_op_ctxt,rel_isDisease_d17b5bc8bd9a5ac4->createContext());
CREATE_OP_CONTEXT(rel_isGene_19054cb0dc2123f2_op_ctxt,rel_isGene_19054cb0dc2123f2->createContext());
for(const auto& env0 : *rel_isGene_19054cb0dc2123f2) {
for(const auto& env1 : *rel_isDisease_d17b5bc8bd9a5ac4) {
if( rel_Triple_9893529cf9068b5d->contains(Tuple<RamDomain,4>{{ramBitCast(env0[0]),ramBitCast(RamSigned(0)),ramBitCast(env1[0]),ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt))) {
Tuple<RamDomain,1> tuple{{ramBitCast(env0[0])}};
rel_Q_4a2916012c3e6e99->insert(tuple,READ_OP_CONTEXT(rel_Q_4a2916012c3e6e99_op_ctxt));
break;
}
}
}
}
();}
signalHandler->setMsg(R"_(Q(g) :- 
   isGene(g),
   isDisease(d),
   Triple(v,"<http://www.wikidata.org/prop/direct/P3433>",g,"."),
   Triple(v,"<http://www.wikidata.org/prop/P3354>",n,"."),
   Triple(n,"<http://www.wikidata.org/prop/qualifier/P2175>",d,".").
in file gene_milos.dl [13:1-13:227])_");
if(!(rel_isGene_19054cb0dc2123f2->empty()) && !(rel_isDisease_d17b5bc8bd9a5ac4->empty()) && !(rel_Triple_9893529cf9068b5d->empty())) {
[&](){
CREATE_OP_CONTEXT(rel_Q_4a2916012c3e6e99_op_ctxt,rel_Q_4a2916012c3e6e99->createContext());
CREATE_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt,rel_Triple_9893529cf9068b5d->createContext());
CREATE_OP_CONTEXT(rel_isDisease_d17b5bc8bd9a5ac4_op_ctxt,rel_isDisease_d17b5bc8bd9a5ac4->createContext());
CREATE_OP_CONTEXT(rel_isGene_19054cb0dc2123f2_op_ctxt,rel_isGene_19054cb0dc2123f2->createContext());
for(const auto& env0 : *rel_isGene_19054cb0dc2123f2) {
for(const auto& env1 : *rel_isDisease_d17b5bc8bd9a5ac4) {
auto range = rel_Triple_9893529cf9068b5d->lowerUpperRange_0111(Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MIN_RAM_SIGNED), ramBitCast(RamSigned(2)), ramBitCast(env0[0]), ramBitCast(RamSigned(1))}},Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MAX_RAM_SIGNED), ramBitCast(RamSigned(2)), ramBitCast(env0[0]), ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt));
for(const auto& env2 : range) {
auto range = rel_Triple_9893529cf9068b5d->lowerUpperRange_1101(Tuple<RamDomain,4>{{ramBitCast(env2[0]), ramBitCast(RamSigned(3)), ramBitCast<RamDomain>(MIN_RAM_SIGNED), ramBitCast(RamSigned(1))}},Tuple<RamDomain,4>{{ramBitCast(env2[0]), ramBitCast(RamSigned(3)), ramBitCast<RamDomain>(MAX_RAM_SIGNED), ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt));
for(const auto& env3 : range) {
if( rel_Triple_9893529cf9068b5d->contains(Tuple<RamDomain,4>{{ramBitCast(env3[2]),ramBitCast(RamSigned(4)),ramBitCast(env1[0]),ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt))) {
Tuple<RamDomain,1> tuple{{ramBitCast(env0[0])}};
rel_Q_4a2916012c3e6e99->insert(tuple,READ_OP_CONTEXT(rel_Q_4a2916012c3e6e99_op_ctxt));
break;
}
}
}
}
}
}
();}
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","x"},{"auxArity","0"},{"filename","./pathogenc_genes.out"},{"name","Q"},{"operation","output"},{"output-dir","."},{"params","{\"records\": {}, \"relation\": {\"arity\": 1, \"params\": [\"x\"]}}"},{"types","{\"ADTs\": {}, \"records\": {}, \"relation\": {\"arity\": 1, \"types\": [\"s:symbol\"]}}"}});
if (outputDirectory == "-"){directiveMap["IO"] = "stdout"; directiveMap["headers"] = "true";}
else if (!outputDirectory.empty()) {directiveMap["output-dir"] = outputDirectory;}
IOSystem::getInstance().getWriter(directiveMap, symTable, recordTable)->writeAll(*rel_Q_4a2916012c3e6e99);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}
if (pruneImdtRels) rel_Triple_9893529cf9068b5d->purge();
if (pruneImdtRels) rel_isDisease_d17b5bc8bd9a5ac4->purge();
if (pruneImdtRels) rel_isGene_19054cb0dc2123f2->purge();
}

} // namespace  souffle

namespace  souffle {
using namespace souffle;
class Stratum_Triple_d1006b32a9235859 {
public:
 Stratum_Triple_d1006b32a9235859(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d);
void run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret);
private:
SymbolTable& symTable;
RecordTable& recordTable;
ConcurrentCache<std::string,std::regex>& regexCache;
bool& pruneImdtRels;
bool& performIO;
SignalHandler*& signalHandler;
std::atomic<std::size_t>& iter;
std::atomic<RamDomain>& ctr;
std::string& inputDirectory;
std::string& outputDirectory;
t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type* rel_Triple_9893529cf9068b5d;
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
 Stratum_Triple_d1006b32a9235859::Stratum_Triple_d1006b32a9235859(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d):
symTable(symTable),
recordTable(recordTable),
regexCache(regexCache),
pruneImdtRels(pruneImdtRels),
performIO(performIO),
signalHandler(signalHandler),
iter(iter),
ctr(ctr),
inputDirectory(inputDirectory),
outputDirectory(outputDirectory),
rel_Triple_9893529cf9068b5d(&rel_Triple_9893529cf9068b5d){
}

void Stratum_Triple_d1006b32a9235859::run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret){
if (performIO) {
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","x y z w"},{"auxArity","0"},{"delimiter"," "},{"fact-dir","."},{"filename","./gene_variant_disease2.nt"},{"name","Triple"},{"operation","input"},{"params","{\"records\": {}, \"relation\": {\"arity\": 4, \"params\": [\"x\", \"y\", \"z\", \"w\"]}}"},{"types","{\"ADTs\": {}, \"records\": {}, \"relation\": {\"arity\": 4, \"types\": [\"s:symbol\", \"s:symbol\", \"s:symbol\", \"s:symbol\"]}}"}});
if (!inputDirectory.empty()) {directiveMap["fact-dir"] = inputDirectory;}
IOSystem::getInstance().getReader(directiveMap, symTable, recordTable)->readAll(*rel_Triple_9893529cf9068b5d);
} catch (std::exception& e) {std::cerr << "Error loading Triple data: " << e.what() << '\n';
exit(1);
}
}
}

} // namespace  souffle

namespace  souffle {
using namespace souffle;
class Stratum_isDisease_851ab5840b1f6d17 {
public:
 Stratum_isDisease_851ab5840b1f6d17(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isDisease_d17b5bc8bd9a5ac4);
void run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret);
private:
SymbolTable& symTable;
RecordTable& recordTable;
ConcurrentCache<std::string,std::regex>& regexCache;
bool& pruneImdtRels;
bool& performIO;
SignalHandler*& signalHandler;
std::atomic<std::size_t>& iter;
std::atomic<RamDomain>& ctr;
std::string& inputDirectory;
std::string& outputDirectory;
t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type* rel_Triple_9893529cf9068b5d;
t_btree_i__0__1::Type* rel_isDisease_d17b5bc8bd9a5ac4;
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
 Stratum_isDisease_851ab5840b1f6d17::Stratum_isDisease_851ab5840b1f6d17(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isDisease_d17b5bc8bd9a5ac4):
symTable(symTable),
recordTable(recordTable),
regexCache(regexCache),
pruneImdtRels(pruneImdtRels),
performIO(performIO),
signalHandler(signalHandler),
iter(iter),
ctr(ctr),
inputDirectory(inputDirectory),
outputDirectory(outputDirectory),
rel_Triple_9893529cf9068b5d(&rel_Triple_9893529cf9068b5d),
rel_isDisease_d17b5bc8bd9a5ac4(&rel_isDisease_d17b5bc8bd9a5ac4){
}

void Stratum_isDisease_851ab5840b1f6d17::run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret){
signalHandler->setMsg(R"_(isDisease(d) :- 
   Triple(d,"<http://www.wikidata.org/prop/direct/P31>","<http://www.wikidata.org/entity/Q12136>",".").
in file gene_milos.dl [11:1-11:118])_");
if(!(rel_Triple_9893529cf9068b5d->empty())) {
[&](){
CREATE_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt,rel_Triple_9893529cf9068b5d->createContext());
CREATE_OP_CONTEXT(rel_isDisease_d17b5bc8bd9a5ac4_op_ctxt,rel_isDisease_d17b5bc8bd9a5ac4->createContext());
auto range = rel_Triple_9893529cf9068b5d->lowerUpperRange_0111(Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MIN_RAM_SIGNED), ramBitCast(RamSigned(5)), ramBitCast(RamSigned(6)), ramBitCast(RamSigned(1))}},Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MAX_RAM_SIGNED), ramBitCast(RamSigned(5)), ramBitCast(RamSigned(6)), ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt));
for(const auto& env0 : range) {
Tuple<RamDomain,1> tuple{{ramBitCast(env0[0])}};
rel_isDisease_d17b5bc8bd9a5ac4->insert(tuple,READ_OP_CONTEXT(rel_isDisease_d17b5bc8bd9a5ac4_op_ctxt));
}
}
();}
}

} // namespace  souffle

namespace  souffle {
using namespace souffle;
class Stratum_isGene_b66fefd14bdaff18 {
public:
 Stratum_isGene_b66fefd14bdaff18(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isGene_19054cb0dc2123f2);
void run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret);
private:
SymbolTable& symTable;
RecordTable& recordTable;
ConcurrentCache<std::string,std::regex>& regexCache;
bool& pruneImdtRels;
bool& performIO;
SignalHandler*& signalHandler;
std::atomic<std::size_t>& iter;
std::atomic<RamDomain>& ctr;
std::string& inputDirectory;
std::string& outputDirectory;
t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type* rel_Triple_9893529cf9068b5d;
t_btree_i__0__1::Type* rel_isGene_19054cb0dc2123f2;
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
 Stratum_isGene_b66fefd14bdaff18::Stratum_isGene_b66fefd14bdaff18(SymbolTable& symTable,RecordTable& recordTable,ConcurrentCache<std::string,std::regex>& regexCache,bool& pruneImdtRels,bool& performIO,SignalHandler*& signalHandler,std::atomic<std::size_t>& iter,std::atomic<RamDomain>& ctr,std::string& inputDirectory,std::string& outputDirectory,t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type& rel_Triple_9893529cf9068b5d,t_btree_i__0__1::Type& rel_isGene_19054cb0dc2123f2):
symTable(symTable),
recordTable(recordTable),
regexCache(regexCache),
pruneImdtRels(pruneImdtRels),
performIO(performIO),
signalHandler(signalHandler),
iter(iter),
ctr(ctr),
inputDirectory(inputDirectory),
outputDirectory(outputDirectory),
rel_Triple_9893529cf9068b5d(&rel_Triple_9893529cf9068b5d),
rel_isGene_19054cb0dc2123f2(&rel_isGene_19054cb0dc2123f2){
}

void Stratum_isGene_b66fefd14bdaff18::run([[maybe_unused]] const std::vector<RamDomain>& args,[[maybe_unused]] std::vector<RamDomain>& ret){
signalHandler->setMsg(R"_(isGene(g) :- 
   Triple(g,"<http://www.wikidata.org/prop/direct/P31>","<http://www.wikidata.org/entity/Q7187>",".").
in file gene_milos.dl [10:1-10:114])_");
if(!(rel_Triple_9893529cf9068b5d->empty())) {
[&](){
CREATE_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt,rel_Triple_9893529cf9068b5d->createContext());
CREATE_OP_CONTEXT(rel_isGene_19054cb0dc2123f2_op_ctxt,rel_isGene_19054cb0dc2123f2->createContext());
auto range = rel_Triple_9893529cf9068b5d->lowerUpperRange_0111(Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MIN_RAM_SIGNED), ramBitCast(RamSigned(5)), ramBitCast(RamSigned(7)), ramBitCast(RamSigned(1))}},Tuple<RamDomain,4>{{ramBitCast<RamDomain>(MAX_RAM_SIGNED), ramBitCast(RamSigned(5)), ramBitCast(RamSigned(7)), ramBitCast(RamSigned(1))}},READ_OP_CONTEXT(rel_Triple_9893529cf9068b5d_op_ctxt));
for(const auto& env0 : range) {
Tuple<RamDomain,1> tuple{{ramBitCast(env0[0])}};
rel_isGene_19054cb0dc2123f2->insert(tuple,READ_OP_CONTEXT(rel_isGene_19054cb0dc2123f2_op_ctxt));
}
}
();}
}

} // namespace  souffle

namespace  souffle {
using namespace souffle;
class Sf_gene_milos: public SouffleProgram {
public:
 Sf_gene_milos();
 ~Sf_gene_milos();
void run();
void runAll(std::string inputDirectoryArg = "",std::string outputDirectoryArg = "",bool performIOArg = true,bool pruneImdtRelsArg = true);
void printAll([[maybe_unused]] std::string outputDirectoryArg = "");
void loadAll([[maybe_unused]] std::string inputDirectoryArg = "");
void dumpInputs();
void dumpOutputs();
SymbolTable& getSymbolTable();
RecordTable& getRecordTable();
void setNumThreads(std::size_t numThreadsValue);
void executeSubroutine(std::string name,const std::vector<RamDomain>& args,std::vector<RamDomain>& ret);
private:
void runFunction(std::string inputDirectoryArg,std::string outputDirectoryArg,bool performIOArg,bool pruneImdtRelsArg);
SymbolTableImpl symTable;
SpecializedRecordTable<0> recordTable;
ConcurrentCache<std::string,std::regex> regexCache;
Own<t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type> rel_Triple_9893529cf9068b5d;
souffle::RelationWrapper<t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type> wrapper_rel_Triple_9893529cf9068b5d;
Own<t_btree_i__0__1::Type> rel_isDisease_d17b5bc8bd9a5ac4;
souffle::RelationWrapper<t_btree_i__0__1::Type> wrapper_rel_isDisease_d17b5bc8bd9a5ac4;
Own<t_btree_i__0__1::Type> rel_isGene_19054cb0dc2123f2;
souffle::RelationWrapper<t_btree_i__0__1::Type> wrapper_rel_isGene_19054cb0dc2123f2;
Own<t_btree_i__0__1::Type> rel_Q_4a2916012c3e6e99;
souffle::RelationWrapper<t_btree_i__0__1::Type> wrapper_rel_Q_4a2916012c3e6e99;
Stratum_Q_20de10639a4fc0d4 stratum_Q_e3f83711521e1f27;
Stratum_Triple_d1006b32a9235859 stratum_Triple_d251e4e406be9246;
Stratum_isDisease_851ab5840b1f6d17 stratum_isDisease_5118a50e7aa697bd;
Stratum_isGene_b66fefd14bdaff18 stratum_isGene_cbd7a26ecb01aa9e;
std::string inputDirectory;
std::string outputDirectory;
SignalHandler* signalHandler{SignalHandler::instance()};
std::atomic<RamDomain> ctr{};
std::atomic<std::size_t> iter{};
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
 Sf_gene_milos::Sf_gene_milos():
symTable({
	R"_(<http://www.wikidata.org/prop/direct/P2293>)_",
	R"_(.)_",
	R"_(<http://www.wikidata.org/prop/direct/P3433>)_",
	R"_(<http://www.wikidata.org/prop/P3354>)_",
	R"_(<http://www.wikidata.org/prop/qualifier/P2175>)_",
	R"_(<http://www.wikidata.org/prop/direct/P31>)_",
	R"_(<http://www.wikidata.org/entity/Q12136>)_",
	R"_(<http://www.wikidata.org/entity/Q7187>)_",
}),
recordTable(),
regexCache(),
rel_Triple_9893529cf9068b5d(mk<t_btree_iiii__1_2_3_0__0_1_3__1111__1101__0111::Type>()),
wrapper_rel_Triple_9893529cf9068b5d(0, *rel_Triple_9893529cf9068b5d, *this, "Triple", std::array<const char *,4>{{"s:symbol","s:symbol","s:symbol","s:symbol"}}, std::array<const char *,4>{{"x","y","z","w"}}, 0),
rel_isDisease_d17b5bc8bd9a5ac4(mk<t_btree_i__0__1::Type>()),
wrapper_rel_isDisease_d17b5bc8bd9a5ac4(1, *rel_isDisease_d17b5bc8bd9a5ac4, *this, "isDisease", std::array<const char *,1>{{"s:symbol"}}, std::array<const char *,1>{{"d"}}, 0),
rel_isGene_19054cb0dc2123f2(mk<t_btree_i__0__1::Type>()),
wrapper_rel_isGene_19054cb0dc2123f2(2, *rel_isGene_19054cb0dc2123f2, *this, "isGene", std::array<const char *,1>{{"s:symbol"}}, std::array<const char *,1>{{"g"}}, 0),
rel_Q_4a2916012c3e6e99(mk<t_btree_i__0__1::Type>()),
wrapper_rel_Q_4a2916012c3e6e99(3, *rel_Q_4a2916012c3e6e99, *this, "Q", std::array<const char *,1>{{"s:symbol"}}, std::array<const char *,1>{{"x"}}, 0),
stratum_Q_e3f83711521e1f27(symTable,recordTable,regexCache,pruneImdtRels,performIO,signalHandler,iter,ctr,inputDirectory,outputDirectory,*rel_Q_4a2916012c3e6e99,*rel_Triple_9893529cf9068b5d,*rel_isDisease_d17b5bc8bd9a5ac4,*rel_isGene_19054cb0dc2123f2),
stratum_Triple_d251e4e406be9246(symTable,recordTable,regexCache,pruneImdtRels,performIO,signalHandler,iter,ctr,inputDirectory,outputDirectory,*rel_Triple_9893529cf9068b5d),
stratum_isDisease_5118a50e7aa697bd(symTable,recordTable,regexCache,pruneImdtRels,performIO,signalHandler,iter,ctr,inputDirectory,outputDirectory,*rel_Triple_9893529cf9068b5d,*rel_isDisease_d17b5bc8bd9a5ac4),
stratum_isGene_cbd7a26ecb01aa9e(symTable,recordTable,regexCache,pruneImdtRels,performIO,signalHandler,iter,ctr,inputDirectory,outputDirectory,*rel_Triple_9893529cf9068b5d,*rel_isGene_19054cb0dc2123f2){
addRelation("Triple", wrapper_rel_Triple_9893529cf9068b5d, true, false);
addRelation("isDisease", wrapper_rel_isDisease_d17b5bc8bd9a5ac4, false, false);
addRelation("isGene", wrapper_rel_isGene_19054cb0dc2123f2, false, false);
addRelation("Q", wrapper_rel_Q_4a2916012c3e6e99, false, true);
}

 Sf_gene_milos::~Sf_gene_milos(){
}

void Sf_gene_milos::runFunction(std::string inputDirectoryArg,std::string outputDirectoryArg,bool performIOArg,bool pruneImdtRelsArg){

    this->inputDirectory  = std::move(inputDirectoryArg);
    this->outputDirectory = std::move(outputDirectoryArg);
    this->performIO       = performIOArg;
    this->pruneImdtRels   = pruneImdtRelsArg;

    // set default threads (in embedded mode)
    // if this is not set, and omp is used, the default omp setting of number of cores is used.
#if defined(_OPENMP)
    if (0 < getNumThreads()) { omp_set_num_threads(static_cast<int>(getNumThreads())); }
#endif

    signalHandler->set();
// -- query evaluation --
{
 std::vector<RamDomain> args, ret;
stratum_Triple_d251e4e406be9246.run(args, ret);
}
{
 std::vector<RamDomain> args, ret;
stratum_isDisease_5118a50e7aa697bd.run(args, ret);
}
{
 std::vector<RamDomain> args, ret;
stratum_isGene_cbd7a26ecb01aa9e.run(args, ret);
}
{
 std::vector<RamDomain> args, ret;
stratum_Q_e3f83711521e1f27.run(args, ret);
}

// -- relation hint statistics --
signalHandler->reset();
}

void Sf_gene_milos::run(){
runFunction("", "", false, false);
}

void Sf_gene_milos::runAll(std::string inputDirectoryArg,std::string outputDirectoryArg,bool performIOArg,bool pruneImdtRelsArg){
runFunction(inputDirectoryArg, outputDirectoryArg, performIOArg, pruneImdtRelsArg);
}

void Sf_gene_milos::printAll([[maybe_unused]] std::string outputDirectoryArg){
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","x"},{"auxArity","0"},{"filename","./pathogenc_genes.out"},{"name","Q"},{"operation","output"},{"output-dir","."},{"params","{\"records\": {}, \"relation\": {\"arity\": 1, \"params\": [\"x\"]}}"},{"types","{\"ADTs\": {}, \"records\": {}, \"relation\": {\"arity\": 1, \"types\": [\"s:symbol\"]}}"}});
if (!outputDirectoryArg.empty()) {directiveMap["output-dir"] = outputDirectoryArg;}
IOSystem::getInstance().getWriter(directiveMap, symTable, recordTable)->writeAll(*rel_Q_4a2916012c3e6e99);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}

void Sf_gene_milos::loadAll([[maybe_unused]] std::string inputDirectoryArg){
try {std::map<std::string, std::string> directiveMap({{"IO","file"},{"attributeNames","x y z w"},{"auxArity","0"},{"delimiter"," "},{"fact-dir","."},{"filename","./gene_variant_disease2.nt"},{"name","Triple"},{"operation","input"},{"params","{\"records\": {}, \"relation\": {\"arity\": 4, \"params\": [\"x\", \"y\", \"z\", \"w\"]}}"},{"types","{\"ADTs\": {}, \"records\": {}, \"relation\": {\"arity\": 4, \"types\": [\"s:symbol\", \"s:symbol\", \"s:symbol\", \"s:symbol\"]}}"}});
if (!inputDirectoryArg.empty()) {directiveMap["fact-dir"] = inputDirectoryArg;}
IOSystem::getInstance().getReader(directiveMap, symTable, recordTable)->readAll(*rel_Triple_9893529cf9068b5d);
} catch (std::exception& e) {std::cerr << "Error loading Triple data: " << e.what() << '\n';
exit(1);
}
}

void Sf_gene_milos::dumpInputs(){
try {std::map<std::string, std::string> rwOperation;
rwOperation["IO"] = "stdout";
rwOperation["name"] = "Triple";
rwOperation["types"] = "{\"relation\": {\"arity\": 4, \"auxArity\": 0, \"types\": [\"s:symbol\", \"s:symbol\", \"s:symbol\", \"s:symbol\"]}}";
IOSystem::getInstance().getWriter(rwOperation, symTable, recordTable)->writeAll(*rel_Triple_9893529cf9068b5d);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}

void Sf_gene_milos::dumpOutputs(){
try {std::map<std::string, std::string> rwOperation;
rwOperation["IO"] = "stdout";
rwOperation["name"] = "Q";
rwOperation["types"] = "{\"relation\": {\"arity\": 1, \"auxArity\": 0, \"types\": [\"s:symbol\"]}}";
IOSystem::getInstance().getWriter(rwOperation, symTable, recordTable)->writeAll(*rel_Q_4a2916012c3e6e99);
} catch (std::exception& e) {std::cerr << e.what();exit(1);}
}

SymbolTable& Sf_gene_milos::getSymbolTable(){
return symTable;
}

RecordTable& Sf_gene_milos::getRecordTable(){
return recordTable;
}

void Sf_gene_milos::setNumThreads(std::size_t numThreadsValue){
SouffleProgram::setNumThreads(numThreadsValue);
symTable.setNumLanes(getNumThreads());
recordTable.setNumLanes(getNumThreads());
regexCache.setNumLanes(getNumThreads());
}

void Sf_gene_milos::executeSubroutine(std::string name,const std::vector<RamDomain>& args,std::vector<RamDomain>& ret){
if (name == "Q") {
stratum_Q_e3f83711521e1f27.run(args, ret);
return;}
if (name == "Triple") {
stratum_Triple_d251e4e406be9246.run(args, ret);
return;}
if (name == "isDisease") {
stratum_isDisease_5118a50e7aa697bd.run(args, ret);
return;}
if (name == "isGene") {
stratum_isGene_cbd7a26ecb01aa9e.run(args, ret);
return;}
fatal(("unknown subroutine " + name).c_str());
}

} // namespace  souffle
namespace souffle {
SouffleProgram *newInstance_gene_milos(){return new  souffle::Sf_gene_milos;}
SymbolTable *getST_gene_milos(SouffleProgram *p){return &reinterpret_cast<souffle::Sf_gene_milos*>(p)->getSymbolTable();}
} // namespace souffle

#ifndef __EMBEDDED_SOUFFLE__
#include "souffle/CompiledOptions.h"
int main(int argc, char** argv)
{
try{
souffle::CmdOptions opt(R"(gene_milos.dl)",
R"()",
R"()",
false,
R"()",
1);
if (!opt.parse(argc,argv)) return 1;
souffle::Sf_gene_milos obj;
#if defined(_OPENMP) 
obj.setNumThreads(opt.getNumJobs());

#endif
obj.runAll(opt.getInputFileDir(), opt.getOutputFileDir());
return 0;
} catch(std::exception &e) { souffle::SignalHandler::instance()->error(e.what());}
}
#endif

namespace  souffle {
using namespace souffle;
class factory_Sf_gene_milos: souffle::ProgramFactory {
public:
souffle::SouffleProgram* newInstance();
 factory_Sf_gene_milos();
private:
};
} // namespace  souffle
namespace  souffle {
using namespace souffle;
souffle::SouffleProgram* factory_Sf_gene_milos::newInstance(){
return new  souffle::Sf_gene_milos();
}

 factory_Sf_gene_milos::factory_Sf_gene_milos():
souffle::ProgramFactory("gene_milos"){
}

} // namespace  souffle
namespace souffle {

#ifdef __EMBEDDED_SOUFFLE__
extern "C" {
souffle::factory_Sf_gene_milos __factory_Sf_gene_milos_instance;
}
#endif
} // namespace souffle

