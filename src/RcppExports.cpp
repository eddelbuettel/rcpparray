// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// foo
void foo();
RcppExport SEXP _Rcpp_asArray_foo() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    foo();
    return R_NilValue;
END_RCPP
}
// intArray
void intArray(RObject x);
RcppExport SEXP _Rcpp_asArray_intArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    intArray(x);
    return R_NilValue;
END_RCPP
}
// doubleArray
void doubleArray(RObject x);
RcppExport SEXP _Rcpp_asArray_doubleArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    doubleArray(x);
    return R_NilValue;
END_RCPP
}
// stringArray
void stringArray(RObject x);
RcppExport SEXP _Rcpp_asArray_stringArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    stringArray(x);
    return R_NilValue;
END_RCPP
}
// int64Array
void int64Array(RObject x);
RcppExport SEXP _Rcpp_asArray_int64Array(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    int64Array(x);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rcpp_asArray_foo", (DL_FUNC) &_Rcpp_asArray_foo, 0},
    {"_Rcpp_asArray_intArray", (DL_FUNC) &_Rcpp_asArray_intArray, 1},
    {"_Rcpp_asArray_doubleArray", (DL_FUNC) &_Rcpp_asArray_doubleArray, 1},
    {"_Rcpp_asArray_stringArray", (DL_FUNC) &_Rcpp_asArray_stringArray, 1},
    {"_Rcpp_asArray_int64Array", (DL_FUNC) &_Rcpp_asArray_int64Array, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rcpp_asArray(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
