// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// skipgramcpp
StringVector skipgramcpp(std::vector < std::string > tokens, std::vector < int > ns, std::vector < int > ks, std::string delim);
RcppExport SEXP quanteda_skipgramcpp(SEXP tokensSEXP, SEXP nsSEXP, SEXP ksSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type tokens(tokensSEXP);
    Rcpp::traits::input_parameter< std::vector < int > >::type ns(nsSEXP);
    Rcpp::traits::input_parameter< std::vector < int > >::type ks(ksSEXP);
    Rcpp::traits::input_parameter< std::string >::type delim(delimSEXP);
    __result = Rcpp::wrap(skipgramcpp(tokens, ns, ks, delim));
    return __result;
END_RCPP
}
// match_bit
int match_bit(const std::vector<std::string>& tokens1, const std::vector<std::string>& tokens2);
RcppExport SEXP quanteda_match_bit(SEXP tokens1SEXP, SEXP tokens2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type tokens1(tokens1SEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type tokens2(tokens2SEXP);
    __result = Rcpp::wrap(match_bit(tokens1, tokens2));
    return __result;
END_RCPP
}
// find_sequence_cppl
Rcpp::List find_sequence_cppl(List texts, const std::vector<std::string>& types, const int& count_min, const double& smooth, const bool& nested);
RcppExport SEXP quanteda_find_sequence_cppl(SEXP textsSEXP, SEXP typesSEXP, SEXP count_minSEXP, SEXP smoothSEXP, SEXP nestedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const int& >::type count_min(count_minSEXP);
    Rcpp::traits::input_parameter< const double& >::type smooth(smoothSEXP);
    Rcpp::traits::input_parameter< const bool& >::type nested(nestedSEXP);
    __result = Rcpp::wrap(find_sequence_cppl(texts, types, count_min, smooth, nested));
    return __result;
END_RCPP
}
// join_tokens_cpp
void join_tokens_cpp(CharacterVector tokens, CharacterVector tokens_join, const String& delim);
RcppExport SEXP quanteda_join_tokens_cpp(SEXP tokensSEXP, SEXP tokens_joinSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type tokens(tokensSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type tokens_join(tokens_joinSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    join_tokens_cpp(tokens, tokens_join, delim);
    return R_NilValue;
END_RCPP
}
// join_tokens_cppl
void join_tokens_cppl(List texts, const std::vector<bool>& flags, const CharacterVector& tokens_join, const String& delim);
RcppExport SEXP quanteda_join_tokens_cppl(SEXP textsSEXP, SEXP flagsSEXP, SEXP tokens_joinSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type tokens_join(tokens_joinSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    join_tokens_cppl(texts, flags, tokens_join, delim);
    return R_NilValue;
END_RCPP
}
// select_tokens_cppl
void select_tokens_cppl(Rcpp::List texts, const std::vector<bool>& flags, const std::vector< std::string >& types, const bool& remove, const bool& spacer);
RcppExport SEXP quanteda_select_tokens_cppl(SEXP textsSEXP, SEXP flagsSEXP, SEXP typesSEXP, SEXP removeSEXP, SEXP spacerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::string >& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type remove(removeSEXP);
    Rcpp::traits::input_parameter< const bool& >::type spacer(spacerSEXP);
    select_tokens_cppl(texts, flags, types, remove, spacer);
    return R_NilValue;
END_RCPP
}
// select_tokens_cppl_mt2
List select_tokens_cppl_mt2(SEXP x, CharacterVector& types, const bool& remove, const bool& spacer);
RcppExport SEXP quanteda_select_tokens_cppl_mt2(SEXP xSEXP, SEXP typesSEXP, SEXP removeSEXP, SEXP spacerSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type remove(removeSEXP);
    Rcpp::traits::input_parameter< const bool& >::type spacer(spacerSEXP);
    __result = Rcpp::wrap(select_tokens_cppl_mt2(x, types, remove, spacer));
    return __result;
END_RCPP
}
// select_tokens_cppl_mt3
List select_tokens_cppl_mt3(SEXP x, CharacterVector& types, const bool& remove, const bool& spacer);
RcppExport SEXP quanteda_select_tokens_cppl_mt3(SEXP xSEXP, SEXP typesSEXP, SEXP removeSEXP, SEXP spacerSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type remove(removeSEXP);
    Rcpp::traits::input_parameter< const bool& >::type spacer(spacerSEXP);
    __result = Rcpp::wrap(select_tokens_cppl_mt3(x, types, remove, spacer));
    return __result;
END_RCPP
}
// select_tokens_cppl_mt
List select_tokens_cppl_mt(List input, CharacterVector& types, const bool& remove, const bool& spacer);
RcppExport SEXP quanteda_select_tokens_cppl_mt(SEXP inputSEXP, SEXP typesSEXP, SEXP removeSEXP, SEXP spacerSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type remove(removeSEXP);
    Rcpp::traits::input_parameter< const bool& >::type spacer(spacerSEXP);
    __result = Rcpp::wrap(select_tokens_cppl_mt(input, types, remove, spacer));
    return __result;
END_RCPP
}
// split_df_cpp
std::vector<CharacterVector> split_df_cpp(DataFrame df);
RcppExport SEXP quanteda_split_df_cpp(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    __result = Rcpp::wrap(split_df_cpp(df));
    return __result;
END_RCPP
}
// deepcopy
Rcpp::List deepcopy(Rcpp::List x);
RcppExport SEXP quanteda_deepcopy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    __result = Rcpp::wrap(deepcopy(x));
    return __result;
END_RCPP
}
// wordfishcpp
Rcpp::List wordfishcpp(SEXP wfm, SEXP dir, SEXP priors, SEXP tol, SEXP disp, SEXP dispfloor);
RcppExport SEXP quanteda_wordfishcpp(SEXP wfmSEXP, SEXP dirSEXP, SEXP priorsSEXP, SEXP tolSEXP, SEXP dispSEXP, SEXP dispfloorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type wfm(wfmSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dir(dirSEXP);
    Rcpp::traits::input_parameter< SEXP >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< SEXP >::type disp(dispSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dispfloor(dispfloorSEXP);
    __result = Rcpp::wrap(wordfishcpp(wfm, dir, priors, tol, disp, dispfloor));
    return __result;
END_RCPP
}
