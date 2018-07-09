// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// integratedExpectation
NumericVector integratedExpectation(NumericVector geneIds, NumericVector log_alt_guide_probs, NumericVector log_null_guide_probs, NumericVector q, NumericVector p, NumericVector weights);
RcppExport SEXP _CRISPhieRmix_integratedExpectation(SEXP geneIdsSEXP, SEXP log_alt_guide_probsSEXP, SEXP log_null_guide_probsSEXP, SEXP qSEXP, SEXP pSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type geneIds(geneIdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_alt_guide_probs(log_alt_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_null_guide_probs(log_null_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(integratedExpectation(geneIds, log_alt_guide_probs, log_null_guide_probs, q, p, weights));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CRISPhieRmix_integratedExpectation", (DL_FUNC) &_CRISPhieRmix_integratedExpectation, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_CRISPhieRmix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}