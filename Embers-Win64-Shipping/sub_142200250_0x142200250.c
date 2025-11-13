// 函数: sub_142200250
// 地址: 0x142200250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint32_t rcx = zx.d(arg1[0x23].b)
int64_t rdi = 1
int64_t r14 = 2

if (rcx == 0)
    rdi = 2
    rbx = 1
    r14 = 0
else if (rcx == 1)
    rdi = 2
    r14 = 1

uint64_t var_120 = arg4
int32_t var_d8[0x4]
sub_141fe56b0(&arg1[0xd], &var_d8, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
int64_t r8 = *(arg2 + 0x18)
int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
int64_t var_118 = 0
int32_t var_110 = 0
float zmm0[0x4]
int512_t zmm1_1
zmm0, zmm1_1 = sub_141fe5610(&arg1[0x17], zmm1, r8, arg4)
zmm1_1.o = *(arg2 + 0x12c)
float zmm12[0x4] = sub_141fe5610(&arg1[0x1d], zmm1_1, *(arg2 + 0x18), arg4)
uint64_t rsi
rsi.b = 0
zmm12[0] = zmm12[0] * 0.5f
int32_t r15 = 0
zmm0[0] = zmm0[0] * zmm0[0]
int32_t var_f8
uint32_t zmm6_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]

do
    int32_t var_e8[0x4]
    (*(*arg1 + 0x348))(arg1, arg2, &var_e8, arg4)
    zmm6_1 = var_e8[r14]
    (&var_f8)[rbx] = var_e8[rbx]
    (&var_f8)[rdi] = var_e8[rdi]
    (&var_f8)[r14] = zmm6_1[0]
    zmm10_1 = (&var_f8)[rbx]
    zmm9_1 = (&var_f8)[rdi]
    zmm10_1[0] = zmm10_1[0] * zmm0[0]
    zmm9_1[0] = zmm9_1[0] * zmm0[0]
    zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
    zmm9_1[0] = zmm9_1[0] + zmm10_1[0]
    
    if (zmm9_1[0] <= zmm0[0])
        break
    
    rsi = zx.q(rsi.b)
    
    if (r15 s>= 0x32)
        rsi = 1
    
    r15 += 1
while (rsi.b == 0)

float zmm13[0x4] = var_f8
int32_t var_f4
float zmm14[0x4] = var_f4
int32_t var_f0
float zmm15[0x4] = var_f0
float zmm3[0x4] = 0x322bcc77
zmm14[0] = zmm14[0] * zmm14[0]
zmm13[0] = zmm13[0] * zmm13[0]
zmm15[0] = zmm15[0] * zmm15[0]
zmm14[0] = zmm14[0] + zmm13[0]
float var_108 = zmm13[0]
float var_104 = zmm14[0]
float var_100 = zmm15[0]
zmm14[0] = zmm14[0] + zmm15[0]
float zmm2_1[0x4]

if (not(zmm14[0] <= 9.99999994e-09f))
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
    zmm2_1 = 0x3f000000
    zmm14[0] = zmm14[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm14[0] = zmm14[0] * temp0_1[0]
    zmm2_1[0] = 0.5f - zmm14[0]
    temp0_1[0] = temp0_1[0] * zmm2_1[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm14[0] = zmm14[0] * temp0_1[0]
    zmm3 = 0x322bcc77
    temp0_1[0] = temp0_1[0] * (0.5f - zmm14[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm13[0] = zmm13[0] * temp0_1[0]
    zmm14[0] = zmm14[0] * temp0_1[0]
    zmm15[0] = zmm15[0] * temp0_1[0]
    var_108 = zmm13[0]
    float var_104_1 = zmm14[0]
    float var_100_1 = zmm15[0]

zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
zmm9_1[0] = zmm9_1[0] + zmm10_1[0]
float zmm0_1[0x4]
float zmm1_2[0x4]

if (zmm9_1[0] <= zmm3[0])
    zmm0_1 = zx.o(0)
    zmm1_2 = zx.o(0)
else
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm9_1[0], zmm9_1[0])
    zmm2_1 = 0x3f000000
    zmm9_1[0] = zmm9_1[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9_1[0] = zmm9_1[0] * temp0_2[0]
    zmm2_1[0] = 0.5f - zmm9_1[0]
    temp0_2[0] = temp0_2[0] * zmm2_1[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm9_1[0] = zmm9_1[0] * temp0_2[0]
    zmm1_2 = zmm9_1
    zmm3 = 0x322bcc77
    temp0_2[0] = temp0_2[0] * (0.5f - zmm9_1[0])
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm0_1 = zmm10_1
    zmm0_1[0] = zmm0_1[0] * temp0_2[0]
    zmm1_2[0] = zmm1_2[0] * temp0_2[0]

bool cond:1 = (arg1[6].b & 0x40) == 0
zmm6_1[0] = zmm6_1[0] f* zmm12[0]
(&var_108)[rbx] = zmm0_1[0]
(&var_108)[rdi] = zmm1_2[0]
*(&var_118 + (r14 << 2)) = zmm6_1[0]

if (cond:1)
    *(&var_118 + (rbx << 2)) = zmm10_1[0]
else
    uint32_t temp0_3[0x4] = _mm_and_ps(zmm6_1, 0x7fffffff)
    temp0_3[0] = temp0_3[0] f- zmm12[0]
    
    if (not(_mm_and_ps(temp0_3, 0x7fffffff)[0] f<= zmm3[0]))
        zmm10_1 = (&var_108)[rbx]
        zmm9_1 = zmm1_2
    
    zmm10_1[0] = zmm10_1[0] * zmm0[0]
    zmm9_1[0] = zmm9_1[0] * zmm0[0]
    *(&var_118 + (rbx << 2)) = zmm10_1[0]

*(&var_118 + (rdi << 2)) = zmm9_1[0]
zmm1_2 = _mm_and_ps(zmm1_2, 0x7fffffff)
zmm0_1 = _mm_and_ps((&var_108)[rbx], 0x7fffffff)
zmm1_2[0] = zmm1_2[0] * zmm0[0]
zmm0_1[0] = zmm0_1[0] * zmm0[0]
(&var_f8)[rbx] = zmm0_1[0]
(&var_f8)[rdi] = zmm1_2[0]
zmm1_2 = *(&var_118 + (rbx << 2))
(&var_f8)[r14] = zmm12[0]
zmm3 = (&var_f8)[rbx]
zmm0_1 = zmm3 ^ 0x80000000

if (not(zmm1_2[0] < zmm0_1[0]))
    zmm0_1 = _mm_min_ss(zmm1_2[0], zmm3[0])

zmm3 = (&var_f8)[rdi]
*(&var_118 + (rbx << 2)) = zmm0_1[0]
zmm1_2 = *(&var_118 + (rdi << 2))
zmm0_1 = zmm3 ^ 0x80000000

if (not(zmm1_2[0] < zmm0_1[0]))
    zmm0_1 = _mm_min_ss(zmm1_2[0], zmm3[0])

*(&var_118 + (rdi << 2)) = zmm0_1[0]
zmm0_1 = *(&var_118 + (r14 << 2))
zmm1_2 = zmm12 ^ 0x80000000

if (not(zmm0_1[0] < zmm1_2[0]))
    zmm1_2 = _mm_min_ss(zmm0_1[0], zmm12[0])

float zmm5_1[0x4] = var_d8[rbx]
zmm6_1 = var_d8[rdi]
float zmm7_1[0x4] = var_d8[r14]
*(&var_118 + (r14 << 2)) = zmm1_2[0]
float zmm4_1 = zmm7_1[0]
zmm5_1[0] = zmm5_1[0] f+ *(&var_118 + (rbx << 2))
zmm1_2 = zmm6_1
int32_t var_ec = 0
zmm3 = var_f8.o
var_108.q = 0
int32_t var_100_2 = 0
*(&var_118 + (rbx << 2)) = zmm5_1[0]
zmm1_2[0] = zmm1_2[0] f+ *(&var_118 + (rdi << 2))
*(&var_118 + (rdi << 2)) = zmm1_2[0]
zmm4_1 = zmm4_1 f+ *(&var_118 + (r14 << 2))
*(&var_118 + (r14 << 2)) = zmm4_1
zmm1_2 = var_118:4.d
zmm3[0] = var_118.d[0]
float temp0_10[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_10[0] = zmm1_2[0]
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
temp0_11[0] = var_110[0]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
var_f8.o = temp0_12
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_12, temp0_12, 0xff), *(arg2 + 0x90))
float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_12, temp0_12, 0x55), *(arg2 + 0x70))
float temp0_18[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_12, temp0_12, 0xaa), *(arg2 + 0x80))
float temp0_20[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_12, temp0_12, 0), *(arg2 + 0x60))
float temp0_23[0x4] = _mm_add_ps(_mm_add_ps(temp0_14, temp0_18), _mm_add_ps(temp0_16, temp0_20))
temp0_23[0] = temp0_23[0] f+ *(arg5 + 0x10)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
temp0_24[0] = temp0_24[0] f+ *(arg5 + 0x14)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
temp0_25[0] = temp0_25[0] f+ *(arg5 + 0x18)
*(arg5 + 0x10) = temp0_23[0]
*(arg5 + 0x14) = temp0_24[0]
*(arg5 + 0x18) = temp0_25[0]

if ((arg1[6].b & 0x80) != 0)
    bool cond:2_1 = (arg1[0x16].b & 1) == 0
    zmm4_1 = zmm4_1 - zmm7_1[0]
    zmm0_1 = *(&var_118 + (rbx << 2))
    zmm1_2 = *(&var_118 + (rdi << 2))
    zmm0_1[0] = zmm0_1[0] - zmm5_1[0]
    zmm1_2[0] = zmm1_2[0] f- zmm6_1[0]
    (&var_f8)[rbx] = zmm0_1[0]
    (&var_f8)[rdi] = zmm1_2[0]
    (&var_f8)[r14] = zmm4_1
    
    if (not(cond:2_1))
        (&var_f8)[r14] = 0
    
    zmm0_1 = sub_141fe5610(&arg1[7], *(arg2 + 0x12c), *(arg2 + 0x18), arg4)
    float zmm1_3[0x4] = var_f8
    float zmm2_2[0x4] = var_f4
    float zmm3_1[0x4] = var_f0
    zmm1_3[0] = zmm1_3[0] * zmm0_1[0]
    int32_t var_ec_1 = 0
    float zmm4_2[0x4] = var_f8.o
    zmm3_1[0] = zmm3_1[0] * zmm0_1[0]
    var_108.q = 0
    zmm4_2[0] = zmm1_3[0]
    zmm2_2[0] = zmm2_2[0] * zmm0_1[0]
    int32_t var_100_3 = 0
    float temp0_26[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
    temp0_26[0] = zmm2_2[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
    temp0_27[0] = zmm3_1[0]
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
    float temp0_30[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_28, temp0_28, 0xaa), *(arg2 + 0x80))
    float temp0_32[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_28, temp0_28, 0x55), *(arg2 + 0x70))
    float temp0_34[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_28, temp0_28, 0xff), *(arg2 + 0x90))
    float temp0_36[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_28, temp0_28, 0), *(arg2 + 0x60))
    float temp0_39[0x4] = _mm_add_ps(_mm_add_ps(temp0_34, temp0_30), _mm_add_ps(temp0_32, temp0_36))
    temp0_39[0] = temp0_39[0] f+ *(arg5 + 0x30)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
    *(arg5 + 0x30) = temp0_39[0]
    temp0_40[0] = temp0_40[0] f+ *(arg5 + 0x34)
    *(arg5 + 0x34) = temp0_40[0]
    temp0_41[0] = temp0_41[0] f+ *(arg5 + 0x38)
    *(arg5 + 0x38) = temp0_41[0]
    temp0_39[0] = temp0_39[0] f+ *(arg5 + 0x20)
    temp0_40[0] = temp0_40[0] f+ *(arg5 + 0x24)
    temp0_41[0] = temp0_41[0] f+ *(arg5 + 0x28)
    *(arg5 + 0x20) = temp0_39[0]
    *(arg5 + 0x24) = temp0_40[0]
    *(arg5 + 0x28) = temp0_41[0]

if (_finite(_mm_cvtps_pd((*(arg5 + 0x10))[0].q)[0].q) != 0
        && _finite(_mm_cvtps_pd((*(arg5 + 0x14))[0].q)[0].q) != 0)
    _finite(_mm_cvtps_pd((*(arg5 + 0x18))[0].q)[0].q)

int32_t result = _finite(_mm_cvtps_pd((*(arg5 + 0x30))[0].q)[0].q)

if (result != 0)
    result = _finite(_mm_cvtps_pd((*(arg5 + 0x34))[0].q)[0].q)
    
    if (result != 0)
        return _finite(_mm_cvtps_pd((*(arg5 + 0x38))[0].q)[0].q)

return result
