// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// archive.cpp
cpp11::sexp archive_metadata(const std::string& path);
extern "C" SEXP _archive_archive_metadata(SEXP path) {
  BEGIN_CPP11
    return cpp11::as_sexp(archive_metadata(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(path)));
  END_CPP11
}
// archive.cpp
cpp11::integers archive_filters();
extern "C" SEXP _archive_archive_filters() {
  BEGIN_CPP11
    return cpp11::as_sexp(archive_filters());
  END_CPP11
}
// archive.cpp
cpp11::integers archive_formats();
extern "C" SEXP _archive_archive_formats() {
  BEGIN_CPP11
    return cpp11::as_sexp(archive_formats());
  END_CPP11
}
// archive.cpp
std::string libarchive_version_();
extern "C" SEXP _archive_libarchive_version_() {
  BEGIN_CPP11
    return cpp11::as_sexp(libarchive_version_());
  END_CPP11
}
// extract.cpp
void archive_extract_(const std::string& archive_filename, cpp11::strings filenames, size_t sz);
extern "C" SEXP _archive_archive_extract_(SEXP archive_filename, SEXP filenames, SEXP sz) {
  BEGIN_CPP11
    archive_extract_(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(archive_filename), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(filenames), cpp11::as_cpp<cpp11::decay_t<size_t>>(sz));
    return R_NilValue;
  END_CPP11
}
// r_archive.h
void rchive_init(SEXP xptr);
extern "C" SEXP _archive_rchive_init(SEXP xptr) {
  BEGIN_CPP11
    rchive_init(cpp11::as_cpp<cpp11::decay_t<SEXP>>(xptr));
    return R_NilValue;
  END_CPP11
}
// read_file.cpp
SEXP read_file_connection(const std::string& filename, const std::string& mode, size_t sz);
extern "C" SEXP _archive_read_file_connection(SEXP filename, SEXP mode, SEXP sz) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_file_connection(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(mode), cpp11::as_cpp<cpp11::decay_t<size_t>>(sz)));
  END_CPP11
}
// read.cpp
SEXP read_connection(const std::string& archive_filename, const std::string& filename, const std::string& mode, cpp11::integers format, cpp11::integers filters, size_t sz);
extern "C" SEXP _archive_read_connection(SEXP archive_filename, SEXP filename, SEXP mode, SEXP format, SEXP filters, SEXP sz) {
  BEGIN_CPP11
    return cpp11::as_sexp(read_connection(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(archive_filename), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(mode), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(format), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(filters), cpp11::as_cpp<cpp11::decay_t<size_t>>(sz)));
  END_CPP11
}
// write_file.cpp
SEXP write_file_connection(const std::string& filename, cpp11::integers filters, cpp11::strings options);
extern "C" SEXP _archive_write_file_connection(SEXP filename, SEXP filters, SEXP options) {
  BEGIN_CPP11
    return cpp11::as_sexp(write_file_connection(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(filters), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(options)));
  END_CPP11
}
// write_file.cpp
SEXP write_files_(const std::string& archive_filename, cpp11::strings files, int format, cpp11::integers filters, cpp11::strings options, size_t sz);
extern "C" SEXP _archive_write_files_(SEXP archive_filename, SEXP files, SEXP format, SEXP filters, SEXP options, SEXP sz) {
  BEGIN_CPP11
    return cpp11::as_sexp(write_files_(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(archive_filename), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(files), cpp11::as_cpp<cpp11::decay_t<int>>(format), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(filters), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(options), cpp11::as_cpp<cpp11::decay_t<size_t>>(sz)));
  END_CPP11
}
// write.cpp
SEXP write_connection(const std::string& archive_filename, const std::string& filename, int format, cpp11::integers filters, cpp11::strings options, size_t sz);
extern "C" SEXP _archive_write_connection(SEXP archive_filename, SEXP filename, SEXP format, SEXP filters, SEXP options, SEXP sz) {
  BEGIN_CPP11
    return cpp11::as_sexp(write_connection(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(archive_filename), cpp11::as_cpp<cpp11::decay_t<const std::string&>>(filename), cpp11::as_cpp<cpp11::decay_t<int>>(format), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(filters), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(options), cpp11::as_cpp<cpp11::decay_t<size_t>>(sz)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _archive_archive_extract_(SEXP, SEXP, SEXP);
extern SEXP _archive_archive_filters();
extern SEXP _archive_archive_formats();
extern SEXP _archive_archive_metadata(SEXP);
extern SEXP _archive_libarchive_version_();
extern SEXP _archive_rchive_init(SEXP);
extern SEXP _archive_read_connection(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _archive_read_file_connection(SEXP, SEXP, SEXP);
extern SEXP _archive_write_connection(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _archive_write_file_connection(SEXP, SEXP, SEXP);
extern SEXP _archive_write_files_(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_archive_archive_extract_",      (DL_FUNC) &_archive_archive_extract_,      3},
    {"_archive_archive_filters",       (DL_FUNC) &_archive_archive_filters,       0},
    {"_archive_archive_formats",       (DL_FUNC) &_archive_archive_formats,       0},
    {"_archive_archive_metadata",      (DL_FUNC) &_archive_archive_metadata,      1},
    {"_archive_libarchive_version_",   (DL_FUNC) &_archive_libarchive_version_,   0},
    {"_archive_rchive_init",           (DL_FUNC) &_archive_rchive_init,           1},
    {"_archive_read_connection",       (DL_FUNC) &_archive_read_connection,       6},
    {"_archive_read_file_connection",  (DL_FUNC) &_archive_read_file_connection,  3},
    {"_archive_write_connection",      (DL_FUNC) &_archive_write_connection,      6},
    {"_archive_write_file_connection", (DL_FUNC) &_archive_write_file_connection, 3},
    {"_archive_write_files_",          (DL_FUNC) &_archive_write_files_,          6},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_archive(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
