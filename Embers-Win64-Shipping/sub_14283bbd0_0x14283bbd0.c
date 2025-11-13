// 函数: sub_14283bbd0
// 地址: 0x14283bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = 0
int32_t i = 0
void* rsi = &data_14401f140
uint128_t zmm1

do
    zmm1.q = _mm_cvtepi32_pd(zx.q(i)).q f/ 1200.0
    i += 1
    zmm1.d = fconvert.s(pow(2.0, zmm1.q))
    *rsi = zmm1.d
    rsi += 4
while (i s< 0x4b0)

uint128_t zmm6 = -0x3f97000000000000
void* rsi_1 = &data_14401e220

for (int32_t i_1 = 0; i_1 s< 0x3c1; )
    zmm1.q = _mm_cvtepi32_pd(zx.q(i_1)).q f/ zmm6.q
    i_1 += 1
    zmm1.d = fconvert.s(pow(10.0, zmm1.q))
    *rsi_1 = zmm1.d
    rsi_1 += 4

int32_t i_2 = 0
void* rsi_2 = &data_14401b7c0

do
    zmm1.q = _mm_cvtepi32_pd(zx.q(i_2)).q f/ zmm6.q
    i_2 += 1
    zmm1.d = fconvert.s(pow(10.0, zmm1.q))
    *rsi_2 = zmm1.d
    rsi_2 += 4
while (i_2 s< 0x5a1)

data_14401e020 = 0
data_14401de20 = 0
data_14401e21c = 0x3f800000
data_14401e01c = 0x3f800000
log10(1.0078740157480315)
int32_t i_3 = 1
void* rsi_3 = &data_14401de24
int32_t* rbp = &data_14401e218
double result

do
    zmm6.q = log(_mm_cvtepi32_pd(zx.q(i_3 * i_3)) / 16129.0).q f* -0.20833333333333334
    i_3 += 1
    zmm6.q = zmm6.q f/ log(0x4024000000000000)
    zmm1.q = 0x3ff0000000000000 f- zmm6.q
    result.d = fconvert.s(zmm6.q)
    zmm1 = _mm_cvtpd_ps(zmm1)
    *rbp = result.d
    rbp -= 4
    *rsi_3 = zmm1.d
    rsi_3 += 4
while (i_3 s< 0x7f)

int32_t* rdi = &data_14401ce60

do
    result = sin(_mm_cvtepi32_pd(zx.q(i_4)) * 0.0015692270999001)
    i_4 += 1
    zmm1.d = fconvert.s(result)
    *rdi = zmm1.d
    rdi = &rdi[1]
while (i_4 s< 0x3ea)

return result
