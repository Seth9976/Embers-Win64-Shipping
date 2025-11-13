// 函数: sub_1403ec3b0
// 地址: 0x1403ec3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t i_3 = 0
uint128_t zmm1

if (*(arg1 + 0x12cd) == 2)
    float zmm0[0x4] = *(arg2 + 0x368)
    zmm0[0] = zmm0[0] - 12f
    zmm0[0] = zmm0[0] * 0.25f
    zmm0 ^= data_142d3f780
    zmm0[0].q = fconvert.d(zmm0[0])
    zmm0 = exp(zmm0[0].q)
    zmm1 = 0x3ff0000000000000
    float zmm2[0x4] = 0x3f800000
    int32_t i = 0
    zmm0[0].q = zmm0[0].q f+ zmm1.q
    zmm1.q = zmm1.q f/ zmm0[0].q
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm1)
    temp0_1[0] = temp0_1[0] * 0.5f
    zmm2[0] = 1f - temp0_1[0]
    
    if (*(arg1 + 0x11fc) s> 0)
        void* rax_2 = arg2
        
        do
            i += 1
            rax_2 += 4
            zmm2[0] = zmm2[0] f* *(rax_2 - 4)
            *(rax_2 - 4) = zmm2[0]
        while (i s< *(arg1 + 0x11fc))

float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x129c)))
temp0_2[0] = temp0_2[0] * 0.0078125f
zmm1.d = 21f - temp0_2[0]
zmm1.d = zmm1.d f* 0.330000013f
zmm1 = _mm_cvtps_pd(zmm1.q)
int32_t i_1 = 0
uint128_t zmm7
zmm7.d =
    fconvert.s(pow(0x4000000000000000[0].q, zmm1.q) f/ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x1204))).q)
double zmm0_1

if (*(arg1 + 0x11fc) s> 0)
    void* rdi_1 = arg2
    
    do
        zmm0_1 = *rdi_1
        zmm1.d = zmm7.d f* *(rdi_1 + 0x36c)
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        zmm1.d = zmm1.d f+ zmm0_1.d
        zmm1.d = fconvert.s(sqrt(fconvert.d(zmm1.d)))
        
        if (not(32767f f> zmm1.d))
            zmm1 = 0x46fffe00
        
        *rdi_1 = zmm1.d
        i_1 += 1
        rdi_1 += 4
    while (i_1 s< *(arg1 + 0x11fc))

int64_t r9 = sx.q(*(arg1 + 0x11fc))
void var_78

if (r9.d s> 0)
    void* rcx = &var_78
    uint64_t i_4 = zx.q(r9.d)
    uint64_t i_2
    
    do
        zmm0_1 = *(arg2 - &var_78 + rcx)
        rcx += 4
        zmm0_1.d = zmm0_1.d f* 65536f
        *(rcx - 4) = int.d(zmm0_1.d)
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

memcpy(arg2 + 0x37c, &var_78, (r9 << 2).d)
*(arg2 + 0x38c) = *(arg1 + 0x1c38)
int32_t r9_1
r9_1.b = arg3 == 2
sub_1403e8270(arg1 + 0x12b0, &var_78, arg1 + 0x1c38, r9_1, *(arg1 + 0x11fc))
void* rax_6
uint128_t result

if (*(arg1 + 0x11fc) s> 0)
    rax_6 = arg2
    
    do
        result = zx.o(*(&var_78 - arg2 + rax_6))
        i_3 += 1
        rax_6 += 4
        result.d = _mm_cvtepi32_ps(result).d f* 1.52587891e-05f
        *(rax_6 - 4) = result.d
    while (i_3 s< *(arg1 + 0x11fc))

char rcx_4 = *(arg1 + 0x12cd)

if (rcx_4 == 2)
    result.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1298))).d f* 3.05175781e-05f
    result.d = result.d f+ *(arg2 + 0x368)
    rax_6.b = result.d f<= 1f
    *(arg1 + 0x12ce) = rax_6.b

int64_t rax_7 = sx.q(*(arg1 + 0x12ce))
zmm1 = zx.o(*(arg1 + 0x11cc))
result.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x122c))).d f* 0.0500000007f
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* 0.200000003f
float zmm3 = 1.20000005f f- result.d
result.d = (*(arg2 + 0x358)).d f* 0.100000001f
zmm1.d = zmm1.d f* 0.00390625f
zmm3 = zmm3 f- zmm1.d
zmm1.d = (*(arg2 + 0x35c)).d f* 0.200000003f
zmm3 = zmm3 f- result.d
result.d =
    _mm_cvtepi32_ps(zx.o(sx.d(*(&data_1436fc948 + ((rax_7 + (sx.q(rcx_4) s>> 1 << 1)) << 1))))).d
    f* 0.0009765625f
result.d = result.d f* 0.800000012f
*(arg2 + 0x354) = zmm3 f- zmm1.d f+ result.d
__security_check_cookie(rax_1 ^ &var_a8)
return result
