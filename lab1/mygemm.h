void dgemm0(const double* A, const double* B, double* C, const int n);
void dgemm1(const double *A, const double *B, double *C, const int n);
void dgemm2(const double *A, const double *B, double *C, const int n);
void dgemm2_2x2_v2(const double* A, const double* B, double* C, const int n);
void dgemm3(const double *A, const double *B, double *C, const int n);
void dgemm3_3x4(const double* A, const double* B, double* C, const int n);
void dgemm3_3x3_v2(const double* A, const double* B, double* C, const int n);
void dgemm3_3x4_nocheck(const double* A, const double* B, double* C, const int n);
void ijk(const double *A, const double *B, double *C, const int n);
void jik(const double *A, const double *B, double *C, const int n);
void kij(const double *A, const double *B, double *C, const int n);
void ikj(const double *A, const double *B, double *C, const int n);
void jki(const double *A, const double *B, double *C, const int n);
void kji(const double *A, const double *B, double *C, const int n);
void bijk(const double *A, const double *B, double *C, const int n, const int b);
void bjik(const double *A, const double *B, double *C, const int n, const int b);
void bkij(const double *A, const double *B, double *C, const int n, const int b);
void bikj(const double *A, const double *B, double *C, const int n, const int b);
void bjki(const double *A, const double *B, double *C, const int n, const int b);
void bkji(const double *A, const double *B, double *C, const int n, const int b);
void optimal(const double* A, const double* B, double *C, const int n, const int b);
void strassen(const double *A, const double *B, double *C, const int n);
