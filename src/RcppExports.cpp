// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// coord_matches
List coord_matches(SEXP sldf);
RcppExport SEXP stplanr_coord_matches(SEXP sldfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sldf(sldfSEXP);
    __result = Rcpp::wrap(coord_matches(sldf));
    return __result;
END_RCPP
}
// join_spatiallines_coords
arma::mat join_spatiallines_coords(SEXP sldf, double startx, double starty);
RcppExport SEXP stplanr_join_spatiallines_coords(SEXP sldfSEXP, SEXP startxSEXP, SEXP startySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type sldf(sldfSEXP);
    Rcpp::traits::input_parameter< double >::type startx(startxSEXP);
    Rcpp::traits::input_parameter< double >::type starty(startySEXP);
    __result = Rcpp::wrap(join_spatiallines_coords(sldf, startx, starty));
    return __result;
END_RCPP
}
