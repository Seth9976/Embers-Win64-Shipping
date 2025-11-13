// 函数: sub_1419fa200
// 地址: 0x1419fa200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg5
char var_268 = *(arg4 + 0x38) & 1
sub_1419fab70(arg1, arg2, arg3, rbx, arg6, arg8, arg9, arg10)
*(arg1 + 0xa0) = *(arg3 + 0x5d8)
void* rax_6 = *(arg3 + 0x5e0)
*(arg1 + 0xa8) = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

*(arg1 + 0xb0) = *(arg3 + 0x5d8)
void* rsi = *(arg3 + 0x5d8)
sub_1405ba560(rsi + 0x10, &arg5, arg4)
int64_t rax_8 = sx.q(arg5.d)
int64_t rcx_3

if (rax_8.d == 0xffffffff)
    rcx_3 = 0
else
    rcx_3 = (rax_8 << 5) + *(rsi + 0x10)

int64_t rax_9 = rcx_3 + 8

if (rcx_3 == 0)
    rax_9 = 0

*(arg1 + 0xb8) = rax_9
*(arg1 + 0xc0) = *(arg3 + 0x410) + 1
arg1[0xc8] = rbx[4].b
*(arg1 + 0xcc) = *(rbx + 0x24)
*(arg1 + 0xd4) = *(rbx + 0x2c)
*(arg1 + 0xdc) = *(rbx + 0x34)
arg1[0xe4] = *(rbx + 0x3c)
uint128_t zmm0
zmm0.d = rbx[5].d.d f- *(rbx + 0x24)
char rax_13

if (zmm0.d f> 0f)
    rax_13 = 1
else
    zmm0.d = rbx[6].d.d f- *(rbx + 0x2c)
    
    if (zmm0.d f> 0f)
        rax_13 = 1
    else
        zmm0.d = rbx[7].d.d f- *(rbx + 0x34)
        
        rax_13 = zmm0.d f> 0f ? 1 : 0

arg1[0xe5] = rax_13
arg1[0xe6] = *(rbx + 0x3d)
*(arg1 + 0xe8) = rbx[2].d
int32_t rax_16 = *(arg7 + 0x4c0)
*(arg1 + 0xec) = rax_16
*(arg1 + 0xf0) = rax_16
uint128_t zmm1 = *(arg7 + 0x1c0)
uint128_t zmm4 = zmm1
uint128_t zmm3 = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
zmm4 = _mm_mul_ps(zmm4, zmm3)
uint128_t zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
zmm1 = *(arg7 + 0x1e0)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
uint128_t zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
zmm4 = data_143f280c0
float temp0_12[0x4] = _mm_add_ps(zmm3, zmm2)
zmm2 = _mm_sub_ps(zmm2, zmm3)
zmm3 = _mm_sub_ps(zmm4, zmm0)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1)
zmm5 = _mm_mul_ps(zmm5, zmm2)
zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(zmm3, zmm1), data_143f280d0)
zmm0 = _mm_shuffle_ps(zmm5, zmm3, 0x32)
zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), zmm0, 0x82)
zmm0 = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm3, 0x10), zmm0, 0x88)
zmm0 = *(arg7 + 0x1d0)
zmm4.q = zmm0 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, zmm5, 0x12)
zmm0 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
uint128_t var_208 = zmm0
uint128_t var_238 = zmm1
uint128_t var_228 = zmm2
float var_218[0x4] = temp0_27
uint32_t var_138[0x4][0x4]
uint32_t (* rax_17)[0x4] = sub_140631b10(&var_238, &var_138)
float zmm2_1[0x4] = *(arg1 + 0x30)
float temp0_28[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float zmm7[0x4] = rax_17[1]
uint32_t zmm6_1[0x4] = *rax_17
float zmm8[0x4] = rax_17[2]
float zmm9[0x4] = rax_17[3]
float temp0_29[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_30[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, zmm6_1)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
float temp0_34[0x4] = _mm_mul_ps(temp0_29, zmm7)
float temp0_35[0x4] = _mm_mul_ps(temp0_30, zmm8)
float temp0_38[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_31, temp0_34), temp0_35), temp0_33)
zmm2_1 = *(arg1 + 0x40)
float temp0_39[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_40[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_41[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm7)
float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm8)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
float temp0_49[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_39, zmm6_1), temp0_42), temp0_43), temp0_45)
zmm2_1 = *(arg1 + 0x50)
float temp0_50[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_51[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_52[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm7)
float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm8)
float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
float temp0_60[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_50, zmm6_1), temp0_53), temp0_54), temp0_56)
zmm2_1 = *(arg1 + 0x20)
*(arg1 + 0x110) = temp0_38
float temp0_61[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_62[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_63[0x4] = _mm_mul_ps(temp0_61, zmm6_1)
float temp0_64[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm7)
float temp0_66[0x4] = _mm_mul_ps(temp0_64, zmm8)
float temp0_67[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
float temp0_68[0x4] = _mm_add_ps(temp0_63, temp0_65)
float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm9)
*(arg1 + 0x120) = temp0_49
*(arg1 + 0x130) = temp0_60
*(arg1 + 0x100) = _mm_add_ps(_mm_add_ps(temp0_68, temp0_66), temp0_69)
void var_178
int128_t* rax_18 = sub_1423633d0(*rbx, &var_178)
float zmm3_1[0x4] = *rax_18
float zmm1_2[0x4] = *(rax_18 + 8)
zmm2_1 = *(rax_18 + 4)
zmm1_2[0] = zmm1_2[0] f+ *(rax_18 + 0x14)
zmm3_1[0] = zmm3_1[0] f- *(rax_18 + 0xc)
zmm3_1[0] = zmm3_1[0] f+ *(rax_18 + 0xc)
zmm1_2[0] = zmm1_2[0] f- *(rax_18 + 0x14)
zmm2_1[0] = zmm2_1[0] f- rax_18[1].d
zmm2_1[0] = zmm2_1[0] f+ rax_18[1].d
float var_244 = zmm1_2[0]
float var_250 = zmm1_2[0]
*(arg1 + 0x140) = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
float temp0_73[0x4] = _mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)
*(arg1 + 0x148) = var_250
*(arg1 + 0x14c) = temp0_73.q
*(arg1 + 0x154) = var_244
arg1[0x158] = 1
*(arg1 + 0x15c) = sub_1420545f0(arg7)
*(arg1 + 0x160) = 0
*(arg1 + 0x168) = 0
void* r14_1 = &arg1[0x1b8]
*(arg1 + 0x16c) = arg11
arg1[0x170] = *(rbx + 0x3e)
*(arg1 + 0x174) = data_143dbb1f0.d[0]
*(arg1 + 0x178) = data_143dbb1f0:4.d[0]
*(arg1 + 0x17c) = data_14399f658[0]
*(arg1 + 0x180) = data_14399f65c[0]
*(arg1 + 0x184) = data_143dbb1f0.d[0]
*(arg1 + 0x188) = data_143dbb1f0:4.d[0]
*(arg1 + 0x18c) = data_14399f658[0]
*(arg1 + 0x190) = data_14399f65c[0]
*(arg1 + 0x194) = data_143dbb1f0.d[0]
*(arg1 + 0x198) = data_143dbb1f0:4.d[0]
*(arg1 + 0x19c) = data_14399f658[0]
*(arg1 + 0x1a0) = data_14399f65c[0]
arg1[0x1a4] = *(rbx + 0x42)
*(arg1 + 0x1a8) = 0
*(arg1 + 0x1b0) = 0
__builtin_memset(r14_1, 0, 0x48)
*(r14_1 + 0x48) = 1
sub_141a00740(r14_1, 0, 0)
__builtin_memset(&arg1[0x208], 0, 0x14)
int64_t rax_25

if (*(arg12 + 8) != 0)
    zmm1_2 = *(arg7 + 0x1c0)
    float temp0_74[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
    float temp0_75[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
    float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x29), temp0_75)
    float temp0_78[0x4] = _mm_mul_ps(temp0_74, zmm1_2)
    float temp0_81[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x12), _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff))
    zmm1_2 = *(arg7 + 0x1e0)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x1a)
    float temp0_83[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xc9)
    float temp0_85[0x4] = _mm_add_ps(temp0_82, _mm_shuffle_ps(temp0_78, temp0_78, 1))
    float zmm4_2[0x4] = data_143f280c0
    zmm6_1 = _mm_add_ps(temp0_81, temp0_77)
    float temp0_87[0x4] = _mm_sub_ps(temp0_77, temp0_81)
    float temp0_88[0x4] = _mm_sub_ps(zmm4_2, temp0_85)
    zmm6_1 = _mm_mul_ps(zmm6_1, zmm1_2)
    float temp0_90[0x4] = _mm_mul_ps(temp0_83, temp0_87)
    zmm3_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_88, zmm1_2), data_143f280d0)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_90, zmm3_1, 0x32)
    float temp0_95[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm3_1, 0), temp0_93, 0x82)
    float temp0_96[0x4] = _mm_shuffle_ps(zmm6_1, zmm3_1, 0x31)
    float temp0_98[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_90, zmm3_1, 0x10), temp0_96, 0x88)
    float zmm0_3[0x4] = *(arg7 + 0x1d0)
    zmm4_2[0].q = zmm0_3 u>> 0x40
    zmm6_1 = _mm_shuffle_ps(zmm6_1, temp0_90, 0x12)
    float temp0_100[0x4] = _mm_shuffle_ps(zmm0_3, zmm4_2, 0xc4)
    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm3_1, 0xe8)
    float var_1c8_1[0x4] = temp0_100
    float var_1f8[0x4] = temp0_95
    float var_1e8_1[0x4] = temp0_98
    uint32_t var_1d8_1[0x4] = zmm6_1
    uint32_t var_f8[0x4][0x4]
    uint32_t (* rax_26)[0x4] = sub_140631b10(&arg1[0x100], &var_f8)
    uint32_t var_b8[0x4][0x4]
    uint32_t (* rax_27)[0x4] = sub_140631b10(&var_1f8, &var_b8)
    float zmm7_1[0x4] = rax_26[1]
    uint32_t zmm6_2[0x4] = *rax_26
    float zmm8_1[0x4] = rax_26[2]
    uint32_t zmm2_2[0x4] = *rax_27
    uint32_t zmm4_3[0x4] = rax_27[1]
    float zmm9_1[0x4] = rax_26[3]
    float zmm5_3[0x4] = rax_27[2]
    float zmm10_1[0x4] = rax_27[3]
    float temp0_102[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
    uint32_t zmm0_4[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
    float temp0_104[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    float temp0_105[0x4] = _mm_mul_ps(temp0_102, zmm6_2)
    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm9_1)
    zmm0_4 = _mm_mul_ps(zmm0_4, zmm7_1)
    float temp0_109[0x4] = _mm_mul_ps(temp0_104, zmm8_1)
    float temp0_112[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_105, zmm0_4), temp0_109), zmm2_2)
    zmm2_2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0)
    float var_1b8[0x4] = temp0_112
    int64_t* rax_28 = arg12
    zmm0_4 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
    zmm2_2 = _mm_mul_ps(zmm2_2, zmm6_2)
    int128_t* rbx_2 = *rax_28
    rax_25 = sx.q(rax_28[1].d)
    float temp0_116[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
    zmm0_4 = _mm_mul_ps(zmm0_4, zmm7_1)
    float temp0_118[0x4] = _mm_mul_ps(temp0_116, zmm8_1)
    float temp0_119[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0)
    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_4)
    float temp0_121[0x4] = _mm_mul_ps(temp0_119, zmm6_2)
    zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_3, zmm5_3, 0x55), zmm7_1)
    zmm2_2 = _mm_add_ps(zmm2_2, temp0_118)
    zmm4_3 = _mm_mul_ps(zmm4_3, zmm9_1)
    float temp0_127[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
    float temp0_128[0x4] = _mm_add_ps(temp0_121, zmm0_4)
    float temp0_129[0x4] = _mm_mul_ps(temp0_127, zmm8_1)
    zmm2_2 = _mm_add_ps(zmm2_2, zmm4_3)
    zmm0_4 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55)
    float temp0_132[0x4] = _mm_add_ps(temp0_128, temp0_129)
    zmm0_4 = _mm_mul_ps(zmm0_4, zmm7_1)
    uint32_t var_1a8_1[0x4] = zmm2_2
    float temp0_134[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa)
    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), zmm6_2)
    void* r12_2 = rax_25 * 0x1c + rbx_2
    float temp0_137[0x4] = _mm_mul_ps(temp0_134, zmm8_1)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
    float temp0_139[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xff)
    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_4)
    float temp0_141[0x4] = _mm_mul_ps(temp0_138, zmm9_1)
    float temp0_142[0x4] = _mm_mul_ps(temp0_139, zmm9_1)
    zmm2_2 = _mm_add_ps(zmm2_2, temp0_137)
    float var_198_1[0x4] = _mm_add_ps(temp0_132, temp0_141)
    uint32_t var_188_1[0x4] = _mm_add_ps(zmm2_2, temp0_142)
    
    if (rbx_2 != r12_2)
        do
            uint64_t var_15c[0x4]
            int128_t* rax_29 = sub_140ae2b00(rbx_2, &var_15c, &var_1b8)
            int64_t r14_2 = sx.q(*(arg1 + 0x1b0))
            int32_t rcx_11 = (r14_2 + 1).d
            *(arg1 + 0x1b0) = rcx_11
            
            if (rcx_11 s> *(arg1 + 0x1b4))
                sub_1405c50f0(&arg1[0x1a8])
            
            int64_t rcx_13 = *(arg1 + 0x1a8)
            rbx_2 += 0x1c
            int128_t* rdx_7 = r14_2 * 0x1c
            *(rdx_7 + rcx_13) = *rax_29
            *(rdx_7 + rcx_13 + 0x10) = rax_29[1].q
            *(rdx_7 + rcx_13 + 0x18) = *(rax_29 + 0x18)
        while (rbx_2 != r12_2)
        
        r14_1 = &arg1[0x1b8]

if (*arg1 == 0)
    rax_25.b = 0
else
    rax_25 = *(arg1 + 0xb8)
    
    if (rax_25 == 0)
        rax_25.b = 0
    else
        int32_t rcx_14 = *(arg1 + 0xc0)
        int32_t rcx_15 = rcx_14 * rcx_14
        
        if (*(rax_25 + 8) != rcx_15 || *(*(arg1 + 0xb0) + 8) != rcx_15)
            rax_25.b = 0
        else
            rax_25.b = 1

char rbx_3 = arg1[0x1a4]
*arg1 = rax_25.b
int64_t* rcx_16 = *r14_1

if (rcx_16 != 0)
    int64_t* rax_31 = (*(*rcx_16 + 0x38))(rcx_16)
    int64_t r8_2 = *rax_31
    (*(r8_2 + 0x38))(rax_31, zx.q(rbx_3), r8_2)

int64_t* rcx_18 = *(r14_1 + 0x20)

if (rcx_18 != 0)
    int64_t* rax_33 = (*(*rcx_18 + 0x38))(rcx_18)
    int64_t r8_3 = *rax_33
    (*(r8_3 + 0x38))(rax_33, zx.q(rbx_3), r8_3)

int64_t* rcx_20 = *(r14_1 + 0x10)

if (rcx_20 != 0)
    int64_t* rax_35 = (*(*rcx_20 + 0x38))(rcx_20)
    int64_t r8_4 = *rax_35
    (*(r8_4 + 0x38))(rax_35, zx.q(rbx_3), r8_4)

int64_t* rcx_22 = *(r14_1 + 0x30)

if (rcx_22 != 0)
    int64_t* rax_37 = (*(*rcx_22 + 0x38))(rcx_22)
    int64_t r8_5 = *rax_37
    (*(r8_5 + 0x38))(rax_37, zx.q(rbx_3), r8_5)

if (arg1[0x170] != 0)
    sub_141a107d0(arg1, arg3)

return arg1
