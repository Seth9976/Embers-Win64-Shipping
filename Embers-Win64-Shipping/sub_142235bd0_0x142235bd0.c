// 函数: sub_142235bd0
// 地址: 0x142235bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
arg1[0x29].b = 1
arg1[0x45].b = 1
int64_t rsi = sx.q(arg1[5].d)
int32_t rax_2 = (rsi + 1).d
arg1[5].d = rax_2

if (rax_2 s> *(arg1 + 0x2c))
    sub_1405a4df0(&arg1[4])

int64_t* r15 = arg1[4] + rsi * 0x18

if (r15 == 0)
    r15 = nullptr
else
    __builtin_memset(r15, 0, 0x18)

int32_t rbx_1 = arg1[5].d - 1
int128_t* rax_4
float zmm0[0x4]
rax_4, zmm0 = j_sub_140a82f30(0x40)
int128_t* r14 = rax_4

if (rax_4 == 0)
    r14 = nullptr
else
    *rax_4 = data_143dbb0c0
    rax_4[1] = data_143dbb0d0
    zmm0 = data_143dbb0e0
    rax_4[2] = zmm0
    rax_4[3].q = arg1
    *(rax_4 + 0x38) = rbx_1

int64_t rbx_2 = sx.q(arg1[1].d)
int32_t rax_5 = (rbx_2 + 1).d
arg1[1].d = rax_5

if (rax_5 s> *(arg1 + 0xc))
    zmm0 = sub_1405a4d70(arg1)

*(*arg1 + (rbx_2 << 3)) = r14
int64_t r13 = sx.q(arg1[0xd].d)
int32_t rax_7 = (r13 + 1).d
arg1[0xd].d = rax_7

if (rax_7 s> *(arg1 + 0x6c))
    zmm0 = sub_1405fdd60(&arg1[0xc])

int64_t rcx_4 = r13 * 0x70

if (rcx_4 != neg.q(arg1[0xc]))
    zmm0 = memset(rcx_4 + arg1[0xc], 0, 0x70)

int64_t rbx_3 = sx.q(arg1[0xb].d)
int32_t rax_8 = (rbx_3 + 1).d
arg1[0xb].d = rax_8

if (rax_8 s> *(arg1 + 0x5c))
    zmm0 = sub_14090a6a0(&arg1[0xa])

int64_t rbx_5 = rbx_3 * 0x60
void* const rbx_6 = rbx_5 + arg1[0xa]

if (rbx_5 == neg.q(arg1[0xa]))
    rbx_6 = nullptr
else
    zmm0 = memset(rbx_6, 0, 0x60)

*(rbx_6 + 0xc) = 0
*(rbx_6 + 0x14) = 0
*(rbx_6 + 0x1c) = 0x7f7fffff
*(rbx_6 + 0x24) = 0

if (arg2 == 0)
    zmm0 = 0x7f7fffff
else
    (*(*arg2 + 0x1a8))(arg2)

*(rbx_6 + 0x2c) = zmm0[0]
float var_158[0x4]
float var_118[0x4]
float var_108[0x4]
int128_t* rax_12
float zmm1[0x4]

if (arg2 == 0)
    rax_12 = &var_118
    zmm1 = data_143dbb0d0
    var_118 = data_143dbb0c0
    float var_f8_1[0x4] = data_143dbb0e0
    var_108 = zmm1
else
    rax_12 = sub_1417cbc40(&var_158, (*(*arg2 + 0xf0))(arg2, &var_118))

float zmm12[0x4] = *rax_12
*r14 = zmm12
float zmm13[0x4] = rax_12[1]
r14[1] = zmm13
float zmm14[0x4] = rax_12[2]
r14[2] = zmm14
float zmm15[0x4] = arg3[2]
float zmm5[0x4] = *arg3
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm6[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm15), data_143f519a0, 1)) == 0)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), _mm_shuffle_ps(zmm5, zmm5, 0))
    zmm13 = _mm_mul_ps(zmm13, zmm15)
    zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm6 = __mulps_xmmps_memps(zmm6, data_143f51580)
    zmm0 = _mm_mul_ps(zmm3, zmm12)
    zmm2 = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
    zmm6 = _mm_add_ps(zmm6, zmm0)
    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm12, zmm12, 0x4e))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm12, zmm12, 0xb1))
    zmm1 = __mulps_xmmps_memps(zmm1, data_143f51570)
    zmm0 = __mulps_xmmps_memps(zmm0, data_143f51560)
    zmm6 = _mm_add_ps(zmm6, zmm1)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    zmm2 = _mm_mul_ps(zmm2, zmm5)
    zmm6 = _mm_add_ps(zmm6, zmm0)
    zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc9), zmm1))
    zmm2 = _mm_add_ps(zmm2, zmm2)
    zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
    zmm4 = _mm_mul_ps(zmm4, zmm5)
    zmm0 = _mm_mul_ps(zmm0, zmm1)
    zmm2 = _mm_mul_ps(zmm2, zmm3)
    zmm4 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm4, zmm0), _mm_add_ps(zmm2, zmm13)), arg3[1])
else
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 4)
    zmm2 = _mm_add_ps(zmm5, zmm5)
    float zmm8[0x4] = arg3[1]
    zmm4 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    zmm3 = _mm_mul_ps(zmm2, zmm5)
    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x29))
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x12)
    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm5, zmm5, 0xff))
    zmm3 = zmm12
    float zmm11[0x4] = data_143f515b0
    float zmm10[0x4] = _mm_add_ps(zmm2, zmm1)
    zmm1 = _mm_sub_ps(zmm1, zmm2)
    zmm2 = _mm_shuffle_ps(zmm12, zmm12, 4)
    zmm10 = _mm_mul_ps(zmm10, zmm15)
    zmm4 = _mm_mul_ps(zmm4, zmm1)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, zmm0), zmm15), data_143f515c0)
    zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
    float zmm9[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
    zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
    float zmm7[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 0x12), zmm1, 0xe8)
    zmm1 = _mm_add_ps(zmm12, zmm12)
    zmm11[0].q = zmm8 u>> 0x40
    zmm8 = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    zmm3 = _mm_mul_ps(zmm3, zmm1)
    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
    zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
    zmm12 = _mm_mul_ps(zmm12, zmm1)
    zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
    zmm6 = _mm_add_ps(zmm12, zmm2)
    zmm2 = _mm_sub_ps(zmm2, zmm12)
    zmm1 = _mm_sub_ps(zmm11, zmm0)
    zmm6 = _mm_mul_ps(zmm6, zmm14)
    zmm4 = _mm_mul_ps(zmm4, zmm2)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f515c0)
    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x82)
    zmm5 = _mm_shuffle_ps(zmm4, zmm1, 0x10)
    zmm0 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm5 = _mm_shuffle_ps(zmm5, zmm0, 0x88)
    zmm2 = _mm_mul_ps(zmm2, zmm7)
    zmm11[0].q = zmm13 u>> 0x40
    zmm13 = _mm_shuffle_ps(zmm13, zmm11, 0xc4)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm9)
    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0x12), zmm1, 0xe8)
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm2 = _mm_add_ps(zmm2, zmm0)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
    zmm1 = _mm_mul_ps(zmm1, zmm10)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
    zmm2 = _mm_add_ps(zmm2, zmm1)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
    zmm2 = _mm_add_ps(zmm2, zmm3)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm7)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    var_158 = zmm2
    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm3 = _mm_add_ps(zmm3, zmm0)
    zmm2 = _mm_mul_ps(zmm2, zmm7)
    zmm5 = _mm_mul_ps(zmm5, zmm8)
    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
    zmm3 = _mm_add_ps(zmm3, zmm1)
    zmm0 = _mm_mul_ps(zmm0, zmm9)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
    zmm3 = _mm_add_ps(zmm3, zmm5)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    zmm2 = _mm_add_ps(zmm2, zmm0)
    zmm6 = _mm_mul_ps(zmm6, zmm8)
    zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0)
    int96_t var_148_1 = zmm3[0].12
    zmm3 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
    zmm2 = _mm_add_ps(zmm2, zmm1)
    zmm3 = _mm_mul_ps(zmm3, zmm7)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xaa), zmm10)
    zmm0 = _mm_mul_ps(zmm0, zmm9)
    zmm2 = _mm_add_ps(zmm2, zmm6)
    zmm13 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), zmm8)
    zmm3 = _mm_add_ps(zmm3, zmm0)
    int96_t var_138_1 = zmm2[0].12
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm13)[0].12
    int128_t zmm11_1
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm11_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
    float zmm2_1[0x4] = var_158[0]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f519a0, _mm_mul_ps(zmm15_1, zmm14_1), 2), 
        data_143f51990 ^ zmm11_1) ^ data_143f51990
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_1[0x4] = var_158[2]
    float zmm1_1 = var_158[1] * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_158[0] = zmm2_1[0]
    zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_158[1] = zmm1_1
    zmm1_1 = var_148_1:4.d * zmm2_1[0]
    var_158[2] = zmm0_1[0]
    zmm0_1 = var_148_1:8.d
    zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
    float zmm3_1 = var_148_1.d * zmm2_1[0]
    zmm2_1 = var_138_1.d
    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_148_1:4.d = zmm1_1
    var_148_1:8.d = zmm0_1[0]
    zmm0_1 = var_138_1:8.d
    zmm1_1 = var_138_1:4.d * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    var_138_1:4.d = zmm1_1
    var_138_1:8.d = zmm0_1[0]
    var_148_1.d = zmm3_1
    var_138_1.d = zmm2_1[0]
    sub_14077e4a0(&var_118, &var_158)
    float zmm5_1[0x4] = var_118
    zmm6 = data_143f515a0
    zmm1 = _mm_mul_ps(zmm5_1, zmm5_1)
    int128_t* var_168
    var_168.d = 0x322bcc77
    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
    zmm1 = _mm_rsqrt_ps(zmm4)
    zmm3 = _mm_mul_ps(zmm4, zmm6)
    zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
        zmm1)
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
    zmm2 = _mm_unpacklo_ps(var_128_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_1) ^ data_143f51590, zmm0) ^ data_143f51590
    zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), zmm2[0].q)

*(rbx_6 + 0x30) = zmm6[0]
*(rbx_6 + 0x34) = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
*(rbx_6 + 0x38) = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
*(rbx_6 + 0x3c) = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
*(rbx_6 + 0x40) = zmm4[0]
*(rbx_6 + 0x44) = zmm0[0]
*(rbx_6 + 0x48) = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
*(rbx_6 + 0x4c) = 0
*(rbx_6 + 0x54) = 0x7f7fffff
sub_1422404a0(&arg1[0x10], 1)
sub_140820230(&arg1[0xe], 1)
*(rbx_6 + 0x58) = 0x7f7fffff
zmm2 = *r14
zmm3 = r14[1]
var_118[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float zmm0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
var_118[0] = zmm2[0]
var_108[0] = zmm3[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
var_108[2] = zmm3[0]
var_118[2] = zmm1[0]
var_118[3] = zmm2[0]
var_108[1] = zmm0_2[0]
sub_1422436a0(r15, arg2, &var_118)
int32_t rax_14 = arg1[0x2e].d
int32_t rdx_9 = arg1[0x2d].d + rax_14

if (rdx_9 s< rbx_1)
    sub_142253f80(arg1, rdx_9, rbx_1)
    rax_14 = arg1[0x2e].d

arg1[0x2e].d = rax_14 + 1
uint64_t result = zx.q(*(r14 + 0x38))
__security_check_cookie(rax_1 ^ &var_188)
return result
