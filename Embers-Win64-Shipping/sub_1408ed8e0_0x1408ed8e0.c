// 函数: sub_1408ed8e0
// 地址: 0x1408ed8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2
int32_t arg_8
sub_1408ec3b0(&arg_8, arg2, arg4)
int32_t rax_1 = arg_8 + 1
int32_t r10 = *(arg1 + 0x40)
int32_t r8_1 = *(arg1 + 0x44)
uint128_t zmm0
zmm0.d = arg5.d f+ 0.5f
int32_t r9 = *(arg1 + 0xc)
int32_t r14_1 = *(arg1 + 0x10) + r9
arg5 = 0
int32_t arg_1c = 0
int64_t var_88 = arg3
int32_t rdx_1 = int.d(zmm0.d) + rax_1
int64_t rax_2 = r10.q
int64_t var_78 = rax_2
arg_8 = r8_1 - 1
int64_t rcx_1 = arg_8.q
int64_t var_80 = rcx_1
int32_t arg_18
arg_18.q = rax_2
arg_8.q = arg3
int64_t* rax_3

if (arg3.d s< r10 || (arg3.d == r10 && arg5.d f< arg_1c))
    rax_3 = &var_78
else
    arg_18.q = rcx_1
    arg_8.q = arg3
    
    if (arg3.d s< r8_1 - 1 || (arg3.d == r8_1 - 1 && arg5.d f< arg_1c))
        rax_3 = &var_88
    else
        rax_3 = &var_80

uint128_t zmm3 = *(arg1 + 0x14)
int64_t rax_4 = *rax_3

if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770).d f> 9.99999994e-09f))
    zmm3 = 0x3f800000

int64_t r15 = sx.q(*(arg1 + 8))
arg_8 = r14_1
arg5 = 0
arg_8.q = arg_8.q
int64_t rcx_3 = sx.q(arg4:4.d)
uint128_t zmm2
zmm2.q = fconvert.d(zmm6.d)
int64_t arg_20
arg_20.d = r10
arg_20:4.d = 0
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rcx_3.d))
zmm0.d = zmm7.d f* arg5
uint128_t zmm10 = _mm_cvtepi32_pd(zx.q(arg4.d))
double temp0_3[0x2] = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(sx.q(r14_1) * rcx_3)
arg_8.q = arg_20
temp0_3[0] = temp0_3[0] f+ zmm0.q
temp0_3[0] = temp0_3[0] f/ zmm10.q
zmm2.q = zmm2.q f- temp0_3[0]
float temp0_4[0x4] = _mm_cvtpd_ps(zmm2)
zmm2.d = rax_4:4.d.d f- arg5
double zmm1[0x2] = zmm2
zmm1[0].d = zmm1[0].d f+ zmm2.d
zmm1[0].d = zmm1[0].d f- 0.5f
int32_t rcx_8 = int.d(zmm1[0].d) s>> 1
zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_8)).d

if (zmm2.d f>= 0f)
    zmm2 = _mm_min_ss(zmm2.d, 0x3f7fffff)
else
    zmm2 = zx.o(0)

zmm2 = _mm_cvtps_pd(zmm2.q)
double temp0_8[0x2] = _mm_cvtps_pd(zmm3.q)
zmm2.q = zmm2.q f+ _mm_cvtepi32_pd(zx.q(rax_4.d - r10 + rcx_8)).q
zmm2.q = zmm2.q f* temp0_8[0]
int64_t rcx_9 = int.q(zmm2.q)
zmm0 = zmm2

if (rcx_9 != -0x8000000000000000)
    zmm1 = zx.o(0)
    zmm1[0] = float.d(rcx_9)
    
    if (not(zmm1[0] f== zmm2.q))
        zmm0.q = float.d(rcx_9 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

zmm2.q = zmm2.q f- zmm0.q
int32_t r8_4 = int.d(zmm0.q)
zmm1 = _mm_cvtpd_ps(zmm2)
arg_20.d = r8_4

if (zmm1[0].d f>= 0f)
    zmm1 = _mm_min_ss(zmm1[0].d, 0x3f7fffff)
    
    if (zmm1[0].d f>= 0f)
        arg_20:4.d = _mm_min_ss(zmm1[0].d, 0x3f7fffff)[0].d
    else
        arg_20:4.d = 0
else
    arg_20:4.d = _mm_min_ss(zx.o(0)[0].d, 0x3f7fffff)[0].d

arg_8.q = arg_20
uint32_t rdi_1 = (arg4 u>> 0x20).d
arg_20.d = r15.d
arg_20:4.d = 0
zmm0.d = float.s(rdi_1)
zmm0.d = zmm0.d f* arg5
double temp0_14[0x2] = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(sx.q(rdi_1) * sx.q(r8_4))
bool cond:5 = temp0_4[0] <= 0f
temp0_14[0] = temp0_14[0] f+ zmm0.q
temp0_14[0] = temp0_14[0] f/ zmm10.q
zmm0 = _mm_cvtpd_ps(temp0_14)
zmm1 = zmm7
zmm1[0].d = zmm1[0].d f* arg_20:4.d
zmm3 = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(r15 * rcx_3)
zmm2.q = _mm_cvtps_pd(zmm1[0]).q f+ zmm0.q
zmm2.q = zmm2.q f/ zmm10.q
zmm3.q = zmm3.q f+ zmm2.q
zmm0 = _mm_cvtpd_ps(zmm3)

if (not(cond:5))
    if (r8_1 - r10 + r14_1 s<= rdx_1)
        zmm2.d = zmm0.d f- temp0_4[0]
        zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
    
    if (r8_1 - r10 + r14_1 s> rdx_1 || not(zmm2.d f<= 9.99999975e-05f))
        zmm0, zmm6, zmm7 = sub_140a454f0(zmm0, temp0_4)
        r9 = *(arg1 + 0xc)

zmm1 = zx.o(0)
arg_20.d = r9
arg_20:4.d = 0
zmm7.d = zmm7.d f* arg_20:4.d
zmm2 = _mm_cvtps_pd(zmm7.q)
bool cond:4 = (*(arg1 + 0x18) & 1) == 0
zmm1[0] = float.d(sx.q(r9) * rcx_3)
zmm2.q = zmm2.q f+ zmm1[0]
zmm1 = zx.o(0)
zmm1[0] = fconvert.d(zmm0.d)
zmm2.q = zmm2.q f/ zmm10.q
zmm2.q = zmm2.q f+ zmm1[0]
zmm0 = _mm_cvtpd_ps(zmm2)

if (cond:4)
    return zmm0

zmm6.d = zmm6.d f- zmm0.d
return zmm6
