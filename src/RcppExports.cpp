// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fcm_cpp
List fcm_cpp(List& texts, const CharacterVector& types, const int& window, const int& n);
RcppExport SEXP quanteda_fcm_cpp(SEXP textsSEXP, SEXP typesSEXP, SEXP windowSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List& >::type texts(textsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type types(typesSEXP);
    Rcpp::traits::input_parameter< const int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    __result = Rcpp::wrap(fcm_cpp(texts, types, window, n));
    return __result;
END_RCPP
}
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
