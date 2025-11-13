// 函数: sub_142236dd0
// 地址: 0x142236dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
arg1[0x29].b = 1
arg1[0x45].b = 1
int64_t rdi = sx.q(arg1[5].d)
int128_t* var_178 = arg3
int32_t rax_2 = (rdi + 1).d
arg1[5].d = rax_2

if (rax_2 s> *(arg1 + 0x2c))
    sub_1405a4df0(&arg1[4])

int64_t* r12 = arg1[4] + rdi * 0x18

if (r12 == 0)
    r12 = nullptr
else
    __builtin_memset(r12, 0, 0x18)

int32_t rbx = arg1[5].d
int128_t* rax_4 = j_sub_140a82f30(0x40)
int128_t* r15 = rax_4

if (rax_4 == 0)
    r15 = nullptr
else
    *rax_4 = data_143dbb0c0
    rax_4[1] = data_143dbb0d0
    rax_4[2] = data_143dbb0e0
    rax_4[3].q = arg1
    *(r15 + 0x38) = rbx - 1

int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rax_6 = (rbx_1 + 1).d
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_1 << 3)) = r15
int64_t rdi_1 = sx.q(arg1[0xd].d)
int32_t rax_8 = (rdi_1 + 1).d
arg1[0xd].d = rax_8

if (rax_8 s> *(arg1 + 0x6c))
    sub_1405fdd60(&arg1[0xc])

int64_t r13 = rdi_1 * 0x70
int64_t r13_1 = r13 + arg1[0xc]

if (r13 == neg.q(arg1[0xc]))
    r13_1 = 0
else
    memset(r13_1, 0, 0x70)

int64_t rdi_2 = sx.q(arg1[0xb].d)
int32_t rax_9 = (rdi_2 + 1).d
arg1[0xb].d = rax_9

if (rax_9 s> *(arg1 + 0x5c))
    sub_14090a6a0(&arg1[0xa])

int64_t rdi_4 = rdi_2 * 0x60
void* const rdi_5 = rdi_4 + arg1[0xa]

if (rdi_4 == neg.q(arg1[0xa]))
    rdi_5 = nullptr
else
    memset(rdi_5, 0, 0x60)

*(rdi_5 + 0xc) = 0
*(rdi_5 + 0x14) = 0
*(rdi_5 + 0x1c) = 0x7f7fffff
*(rdi_5 + 0x24) = 0
*(rdi_5 + 0x2c) = 0x7f7fffff
float zmm12[0x4] = data_143dbb0c0
float zmm14[0x4] = data_143dbb0e0
float zmm15[0x4] = data_143dbb0d0
*r15 = zmm12
r15[1] = zmm15
r15[2] = zmm14
float zmm13[0x4] = var_178[2]
float zmm5[0x4] = *var_178
float zmm0_1[0x4] = _mm_min_ps(zmm14, zmm13)
float var_118[0x4] = zmm12
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm6[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm0_1, data_143f519a0, 1)) == 0)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), _mm_shuffle_ps(zmm5, zmm5, 0))
    zmm13 = _mm_mul_ps(zmm13, zmm15)
    zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm6 = __mulps_xmmps_memps(zmm6, data_143f51580)
    zmm0_1 = _mm_mul_ps(zmm3, zmm12)
    zmm2 = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
    zmm6 = _mm_add_ps(zmm6, zmm0_1)
    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm12, zmm12, 0x4e))
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm12, zmm12, 0xb1))
    zmm1 = __mulps_xmmps_memps(zmm1, data_143f51570)
    zmm0_1 = __mulps_xmmps_memps(zmm0_1, data_143f51560)
    zmm6 = _mm_add_ps(zmm6, zmm1)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    zmm2 = _mm_mul_ps(zmm2, zmm5)
    zmm6 = _mm_add_ps(zmm6, zmm0_1)
    zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc9), zmm1))
    zmm2 = _mm_add_ps(zmm2, zmm2)
    zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
    zmm4 = _mm_mul_ps(zmm4, zmm5)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1)
    zmm2 = _mm_mul_ps(zmm2, zmm3)
    zmm4 = _mm_sub_ps(zmm4, zmm0_1)
    zmm2 = _mm_add_ps(zmm2, zmm13)
    zmm4 = __addps_xmmps_memps(_mm_add_ps(zmm4, zmm2), var_178[1])
else
    zmm1 = _mm_add_ps(zmm5, zmm5)
    float zmm8[0x4] = var_178[1]
    zmm2 = _mm_shuffle_ps(zmm5, zmm5, 4)
    zmm3 = _mm_mul_ps(zmm1, zmm5)
    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
    zmm4 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    zmm3 = zmm12
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm1)
    float zmm11[0x4] = data_143f515b0
    zmm1 = _mm_sub_ps(zmm11, zmm0_1)
    float zmm10[0x4] = _mm_add_ps(zmm5, zmm2)
    zmm2 = _mm_sub_ps(zmm2, zmm5)
    zmm1 = _mm_mul_ps(zmm1, zmm13)
    zmm4 = _mm_mul_ps(zmm4, zmm2)
    zmm10 = _mm_mul_ps(zmm10, zmm13)
    zmm1 = __andps_xmmxud_memxud(zmm1, data_143f515c0)
    zmm2 = _mm_shuffle_ps(zmm12, zmm12, 4)
    zmm0_1 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
    float zmm7[0x4] = _mm_shuffle_ps(zmm4, zmm1, 0x10)
    float zmm9[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0_1, 0x82)
    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm10, zmm1, 0x31), 0x88)
    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 0x12), zmm1, 0xe8)
    zmm1 = _mm_add_ps(zmm12, zmm12)
    zmm11[0].q = zmm8 u>> 0x40
    zmm8 = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    zmm3 = _mm_mul_ps(zmm3, zmm1)
    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
    zmm12 = _mm_mul_ps(zmm12, zmm1)
    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm3, zmm3, 1))
    zmm6 = _mm_add_ps(zmm12, zmm2)
    zmm2 = _mm_sub_ps(zmm2, zmm12)
    zmm1 = _mm_sub_ps(zmm11, zmm0_1)
    zmm6 = _mm_mul_ps(zmm6, zmm14)
    zmm4 = _mm_mul_ps(zmm4, zmm2)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f515c0)
    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x82)
    zmm5 = _mm_shuffle_ps(zmm4, zmm1, 0x10)
    zmm0_1 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm5 = _mm_shuffle_ps(zmm5, zmm0_1, 0x88)
    zmm2 = _mm_mul_ps(zmm2, zmm7)
    zmm11[0].q = zmm15 u>> 0x40
    zmm15 = _mm_shuffle_ps(zmm15, zmm11, 0xc4)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm9)
    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0x12), zmm1, 0xe8)
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm2 = _mm_add_ps(zmm2, zmm0_1)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
    zmm1 = _mm_mul_ps(zmm1, zmm10)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
    zmm2 = _mm_add_ps(zmm2, zmm1)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
    zmm2 = _mm_add_ps(zmm2, zmm3)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm7)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float var_168[0x4] = zmm2
    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm3 = _mm_add_ps(zmm3, zmm0_1)
    zmm2 = _mm_mul_ps(zmm2, zmm7)
    zmm5 = _mm_mul_ps(zmm5, zmm8)
    zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0)
    zmm3 = _mm_add_ps(zmm3, zmm1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
    zmm3 = _mm_add_ps(zmm3, zmm5)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    zmm2 = _mm_add_ps(zmm2, zmm0_1)
    zmm6 = _mm_mul_ps(zmm6, zmm8)
    zmm0_1 = _mm_shuffle_ps(zmm15, zmm15, 0)
    int96_t var_158_1 = zmm3[0].12
    zmm3 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
    zmm2 = _mm_add_ps(zmm2, zmm1)
    zmm3 = _mm_mul_ps(zmm3, zmm7)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), zmm10)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm9)
    zmm2 = _mm_add_ps(zmm2, zmm6)
    zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xff), zmm8)
    zmm3 = _mm_add_ps(zmm3, zmm0_1)
    int96_t var_148_1 = zmm2[0].12
    int96_t var_138_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm15)[0].12
    int128_t zmm11_1
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    zmm11_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_168, 0x322bcc77)
    float zmm2_1[0x4] = var_168[0]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f519a0, _mm_mul_ps(zmm13_1, zmm14_1), 2), 
        data_143f51990 ^ zmm11_1) ^ data_143f51990
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_2[0x4] = var_168[2]
    float zmm1_1 = var_168[1] * zmm4_1[0]
    zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
    var_168[0] = zmm2_1[0]
    zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_168[1] = zmm1_1
    zmm1_1 = var_158_1:4.d * zmm2_1[0]
    var_168[2] = zmm0_2[0]
    zmm0_2 = var_158_1:8.d
    zmm0_2[0] = zmm0_2[0] f* zmm2_1[0]
    float zmm3_1 = var_158_1.d * zmm2_1[0]
    zmm2_1 = var_148_1.d
    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_158_1:4.d = zmm1_1
    var_158_1:8.d = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    zmm1_1 = var_148_1:4.d * zmm4_1[0]
    zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    var_148_1:4.d = zmm1_1
    var_148_1:8.d = zmm0_2[0]
    var_158_1.d = zmm3_1
    var_148_1.d = zmm2_1[0]
    sub_14077e4a0(&var_118, &var_168)
    float zmm5_1[0x4] = var_118
    zmm6 = data_143f515a0
    zmm1 = _mm_mul_ps(zmm5_1, zmm5_1)
    var_178.d = 0x322bcc77
    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
    zmm1 = _mm_rsqrt_ps(zmm4)
    zmm3 = _mm_mul_ps(zmm4, zmm6)
    zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), 
        zmm1)
    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
    zmm2 = _mm_unpacklo_ps(var_138_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_1) ^ data_143f51590, zmm0_1) ^ data_143f51590
    zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), zmm2[0].q)

*(rdi_5 + 0x30) = zmm6[0]
*(rdi_5 + 0x34) = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
*(rdi_5 + 0x38) = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
zmm0_1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
*(rdi_5 + 0x3c) = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
*(rdi_5 + 0x40) = zmm4[0]
*(rdi_5 + 0x44) = zmm0_1[0]
*(rdi_5 + 0x48) = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
*(rdi_5 + 0x4c) = 0
*(rdi_5 + 0x54) = 0x7f7fffff
sub_1422404a0(&arg1[0x10], 1)
sub_140820230(&arg1[0xe], 1)
*(rdi_5 + 0x58) = 0x7f7fffff
PxConstructStaticSolverBody(rdi_5 + 0x30, r13_1, zmm2, zmm3, var_178)
zmm2 = *r15
zmm3 = r15[1]
var_118[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float zmm0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
var_118[0] = zmm2[0]
float var_108 = zmm3[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float var_100 = zmm3[0]
var_118[2] = zmm1[0]
var_118[3] = zmm2[0]
float var_104 = zmm0_3[0]
sub_1422436a0(r12, arg2, &var_118)
uint64_t result = zx.q(*(r15 + 0x38))
__security_check_cookie(rax_1 ^ &var_198)
return result
