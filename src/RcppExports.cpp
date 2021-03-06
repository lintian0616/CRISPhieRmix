// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// integratedExpectation2groups
NumericVector integratedExpectation2groups(NumericVector geneIds, NumericVector log_alt_guide_probs, NumericVector log_null_guide_probs, NumericVector q, double tau, NumericVector weights);
RcppExport SEXP _CRISPhieRmix_integratedExpectation2groups(SEXP geneIdsSEXP, SEXP log_alt_guide_probsSEXP, SEXP log_null_guide_probsSEXP, SEXP qSEXP, SEXP tauSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type geneIds(geneIdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_alt_guide_probs(log_alt_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_null_guide_probs(log_null_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(integratedExpectation2groups(geneIds, log_alt_guide_probs, log_null_guide_probs, q, tau, weights));
    return rcpp_result_gen;
END_RCPP
}
// integratedExpectation3groups
NumericVector integratedExpectation3groups(NumericVector geneIds, NumericVector log_pos_guide_probs, NumericVector log_neg_guide_probs, NumericVector log_null_guide_probs, NumericVector q, double tau_pos, double tau_neg, NumericVector weights);
RcppExport SEXP _CRISPhieRmix_integratedExpectation3groups(SEXP geneIdsSEXP, SEXP log_pos_guide_probsSEXP, SEXP log_neg_guide_probsSEXP, SEXP log_null_guide_probsSEXP, SEXP qSEXP, SEXP tau_posSEXP, SEXP tau_negSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type geneIds(geneIdsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_pos_guide_probs(log_pos_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_neg_guide_probs(log_neg_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_null_guide_probs(log_null_guide_probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_pos(tau_posSEXP);
    Rcpp::traits::input_parameter< double >::type tau_neg(tau_negSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(integratedExpectation3groups(geneIds, log_pos_guide_probs, log_neg_guide_probs, log_null_guide_probs, q, tau_pos, tau_neg, weights));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CRISPhieRmix_integratedExpectation2groups", (DL_FUNC) &_CRISPhieRmix_integratedExpectation2groups, 6},
    {"_CRISPhieRmix_integratedExpectation3groups", (DL_FUNC) &_CRISPhieRmix_integratedExpectation3groups, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_CRISPhieRmix(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
