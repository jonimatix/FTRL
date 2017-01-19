// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// omp_thread_count
int omp_thread_count();
RcppExport SEXP FTRL_omp_thread_count() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(omp_thread_count());
    return rcpp_result_gen;
END_RCPP
}
// create_ftrl_model
SEXP create_ftrl_model(NumericVector z_inp, NumericVector n_inp, double alpha, double beta, double lambda1, double lambda2, double dropout, int n_features);
RcppExport SEXP FTRL_create_ftrl_model(SEXP z_inpSEXP, SEXP n_inpSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP dropoutSEXP, SEXP n_featuresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type z_inp(z_inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_inp(n_inpSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< double >::type dropout(dropoutSEXP);
    Rcpp::traits::input_parameter< int >::type n_features(n_featuresSEXP);
    rcpp_result_gen = Rcpp::wrap(create_ftrl_model(z_inp, n_inp, alpha, beta, lambda1, lambda2, dropout, n_features));
    return rcpp_result_gen;
END_RCPP
}
// get_ftrl_weights
NumericVector get_ftrl_weights(SEXP ptr);
RcppExport SEXP FTRL_get_ftrl_weights(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(get_ftrl_weights(ptr));
    return rcpp_result_gen;
END_RCPP
}
// ftrl_partial_fit
NumericVector ftrl_partial_fit(const S4& m, const NumericVector& y, SEXP ptr, int do_update, int nthread);
RcppExport SEXP FTRL_ftrl_partial_fit(SEXP mSEXP, SEXP ySEXP, SEXP ptrSEXP, SEXP do_updateSEXP, SEXP nthreadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const S4& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< int >::type do_update(do_updateSEXP);
    Rcpp::traits::input_parameter< int >::type nthread(nthreadSEXP);
    rcpp_result_gen = Rcpp::wrap(ftrl_partial_fit(m, y, ptr, do_update, nthread));
    return rcpp_result_gen;
END_RCPP
}
