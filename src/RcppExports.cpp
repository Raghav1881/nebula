// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// pmg_ll_eigen
double pmg_ll_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::VectorXd& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXd& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXd& posind_c, const Eigen::VectorXd& posindy_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const double sigma_c);
RcppExport SEXP _nebula_pmg_ll_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(pmg_ll_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// pmg_der_eigen
Eigen::VectorXd pmg_der_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::VectorXd& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXd& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXd& posind_c, const Eigen::VectorXd& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const double sigma_c);
RcppExport SEXP _nebula_pmg_der_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(pmg_der_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// pmg_hes_eigen
Eigen::MatrixXd pmg_hes_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::VectorXd& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXd& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXd& posind_c, const Eigen::VectorXd& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const double sigma_c);
RcppExport SEXP _nebula_pmg_hes_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(pmg_hes_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// ptmg_ll_eigen
double ptmg_ll_eigen(const Eigen::MatrixXd& X_c, const Eigen::VectorXd& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXd& fam_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c);
RcppExport SEXP _nebula_ptmg_ll_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fam_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type fam_c(fam_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(ptmg_ll_eigen(X_c, offset_c, Y_c, fam_c, fid_c, cumsumy_c, posind_c, posindy_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// ptmg_der_eigen
Eigen::VectorXd ptmg_der_eigen(const Eigen::MatrixXd& X_c, const Eigen::VectorXd& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXd& fam_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c);
RcppExport SEXP _nebula_ptmg_der_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fam_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type fam_c(fam_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(ptmg_der_eigen(X_c, offset_c, Y_c, fam_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// call_cumsumy
Eigen::MatrixXd call_cumsumy(const Eigen::MappedSparseMatrix<double> count, const Eigen::VectorXi& fid, const int k, const int ng);
RcppExport SEXP _nebula_call_cumsumy(SEXP countSEXP, SEXP fidSEXP, SEXP kSEXP, SEXP ngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double> >::type count(countSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid(fidSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int >::type ng(ngSEXP);
    rcpp_result_gen = Rcpp::wrap(call_cumsumy(count, fid, k, ng));
    return rcpp_result_gen;
END_RCPP
}
// call_posindy
Rcpp::List call_posindy(const Eigen::MappedSparseMatrix<double> count, const int k, const int nc);
RcppExport SEXP _nebula_call_posindy(SEXP countSEXP, SEXP kSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MappedSparseMatrix<double> >::type count(countSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(call_posindy(count, k, nc));
    return rcpp_result_gen;
END_RCPP
}
// center_m
Rcpp::List center_m(const Eigen::Map<Eigen::MatrixXd>& X_c);
RcppExport SEXP _nebula_center_m(SEXP X_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    rcpp_result_gen = Rcpp::wrap(center_m(X_c));
    return rcpp_result_gen;
END_RCPP
}
// cv_offset
Rcpp::List cv_offset(const Eigen::Map<Eigen::VectorXd>& offset_c, int input, const int nc);
RcppExport SEXP _nebula_cv_offset(SEXP offset_cSEXP, SEXP inputSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< int >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const int >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(cv_offset(offset_c, input, nc));
    return rcpp_result_gen;
END_RCPP
}
// ptmg_ll_der_eigen
Rcpp::List ptmg_ll_der_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::Map<Eigen::VectorXd>& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c);
RcppExport SEXP _nebula_ptmg_ll_der_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(ptmg_ll_der_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// ptmg_ll_der_hes_eigen
Rcpp::List ptmg_ll_der_hes_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::Map<Eigen::VectorXd>& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c);
RcppExport SEXP _nebula_ptmg_ll_der_hes_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(ptmg_ll_der_hes_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}
// opt_pml
Rcpp::List opt_pml(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::Map<Eigen::VectorXd>& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c, const int reml, const double eps, const int ord);
RcppExport SEXP _nebula_opt_pml(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP, SEXP remlSEXP, SEXP epsSEXP, SEXP ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    Rcpp::traits::input_parameter< const int >::type reml(remlSEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const int >::type ord(ordSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_pml(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c, reml, eps, ord));
    return rcpp_result_gen;
END_RCPP
}
// opt_pml_nbm
Rcpp::List opt_pml_nbm(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::Map<Eigen::VectorXd>& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& sigma_c, const int reml, const double eps, const int ord);
RcppExport SEXP _nebula_opt_pml_nbm(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP sigma_cSEXP, SEXP remlSEXP, SEXP epsSEXP, SEXP ordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    Rcpp::traits::input_parameter< const int >::type reml(remlSEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const int >::type ord(ordSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_pml_nbm(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, sigma_c, reml, eps, ord));
    return rcpp_result_gen;
END_RCPP
}
// pml_ll_der_eigen
Rcpp::List pml_ll_der_eigen(const Eigen::Map<Eigen::MatrixXd>& X_c, const Eigen::Map<Eigen::VectorXd>& offset_c, const Eigen::VectorXd& Y_c, const Eigen::VectorXi& fid_c, const Eigen::VectorXd& cumsumy_c, const Eigen::VectorXi& posind_c, const Eigen::VectorXi& posindy_c, const int nb_c, const int nind_c, const int k_c, const Eigen::VectorXd& beta_c, const Eigen::VectorXd& logw_c, const Eigen::VectorXd& sigma_c);
RcppExport SEXP _nebula_pml_ll_der_eigen(SEXP X_cSEXP, SEXP offset_cSEXP, SEXP Y_cSEXP, SEXP fid_cSEXP, SEXP cumsumy_cSEXP, SEXP posind_cSEXP, SEXP posindy_cSEXP, SEXP nb_cSEXP, SEXP nind_cSEXP, SEXP k_cSEXP, SEXP beta_cSEXP, SEXP logw_cSEXP, SEXP sigma_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X_c(X_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type offset_c(offset_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y_c(Y_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type fid_c(fid_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type cumsumy_c(cumsumy_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posind_c(posind_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type posindy_c(posindy_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nb_c(nb_cSEXP);
    Rcpp::traits::input_parameter< const int >::type nind_c(nind_cSEXP);
    Rcpp::traits::input_parameter< const int >::type k_c(k_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type beta_c(beta_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type logw_c(logw_cSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type sigma_c(sigma_cSEXP);
    rcpp_result_gen = Rcpp::wrap(pml_ll_der_eigen(X_c, offset_c, Y_c, fid_c, cumsumy_c, posind_c, posindy_c, nb_c, nind_c, k_c, beta_c, logw_c, sigma_c));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_nebula_pmg_ll_eigen", (DL_FUNC) &_nebula_pmg_ll_eigen, 11},
    {"_nebula_pmg_der_eigen", (DL_FUNC) &_nebula_pmg_der_eigen, 12},
    {"_nebula_pmg_hes_eigen", (DL_FUNC) &_nebula_pmg_hes_eigen, 12},
    {"_nebula_ptmg_ll_eigen", (DL_FUNC) &_nebula_ptmg_ll_eigen, 12},
    {"_nebula_ptmg_der_eigen", (DL_FUNC) &_nebula_ptmg_der_eigen, 13},
    {"_nebula_call_cumsumy", (DL_FUNC) &_nebula_call_cumsumy, 4},
    {"_nebula_call_posindy", (DL_FUNC) &_nebula_call_posindy, 3},
    {"_nebula_center_m", (DL_FUNC) &_nebula_center_m, 1},
    {"_nebula_cv_offset", (DL_FUNC) &_nebula_cv_offset, 3},
    {"_nebula_ptmg_ll_der_eigen", (DL_FUNC) &_nebula_ptmg_ll_der_eigen, 12},
    {"_nebula_ptmg_ll_der_hes_eigen", (DL_FUNC) &_nebula_ptmg_ll_der_hes_eigen, 12},
    {"_nebula_opt_pml", (DL_FUNC) &_nebula_opt_pml, 15},
    {"_nebula_opt_pml_nbm", (DL_FUNC) &_nebula_opt_pml_nbm, 15},
    {"_nebula_pml_ll_der_eigen", (DL_FUNC) &_nebula_pml_ll_der_eigen, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_nebula(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
