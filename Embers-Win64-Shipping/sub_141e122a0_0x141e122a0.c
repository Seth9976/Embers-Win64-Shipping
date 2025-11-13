// 函数: sub_141e122a0
// 地址: 0x141e122a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = data_143dbb1f8.q
int64_t i_3 = 0
float zmm7[0x4]
float var_48[0x4] = zmm7
arg1[1].d = data_143dbb200
*(arg1 + 0x10) = data_14399f720
__builtin_memset(&arg1[4], 0, 0x18)
arg1[7].d = 0x3f800000
*(arg1 + 0x3c) = 0x3f800000
*(arg1 + 0x40) = data_14399f6e0
*(arg1 + 0x50) = data_14399f6f0
*(arg1 + 0x60) = data_14399f700
*(arg1 + 0x70) = data_14399f710
*(arg1 + 0x80) = data_14399f6e0
*(arg1 + 0x90) = data_14399f6f0
*(arg1 + 0xa0) = data_14399f700
*(arg1 + 0xb0) = data_14399f710
*(arg1 + 0xd0) = data_14399f720
*(arg1 + 0xf0) = data_14399f720
*(arg1 + 0x110) = data_14399f720
*(arg1 + 0x13c) = 0
arg1[0x28].d = 0
*(arg1 + 0x144) = 0
arg1[0x29].d = 0
*(arg1 + 0x14c) = 0x3f800000
arg1[0x2a].b = 0
*(arg1 + 0x154) = data_143dbb1f8.q
*(arg1 + 0x15c) = data_143dbb200
arg1[0x2c] = data_143dbb1f8.q
arg1[0x2d].d = data_143dbb200
*(arg1 + 0x170) = data_14399f720
__builtin_memset(&arg1[0x30], 0, 0x18)
arg1[0x37] = 0
sub_141a87cd0(&arg1[0x37], *arg2, arg2[1].d, 0, 0)
arg1[0x20] = *arg3
arg1[0x21].d = arg3[1].d
arg1[0x1c] = *arg3
arg1[0x1d].d = arg3[1].d
arg1[0x18] = *arg3
arg1[0x19].d = arg3[1].d
int128_t zmm11 = zx.o(0)
*arg1 = *arg3
uint128_t zmm6 = zx.o(0)
int128_t zmm8 = zx.o(0)
arg1[1].d = arg3[1].d
int128_t zmm9 = zx.o(0)
int64_t* rbx_1 = arg1[0x37]
int128_t zmm10 = zx.o(0)
void* r15_2 = &rbx_1[sx.q(arg1[0x38].d) * 6]
uint128_t zmm0_1
float zmm1[0x4]

if (rbx_1 != r15_2)
    int64_t* r14_1 = &rbx_1[2]
    
    do
        int32_t var_158
        zmm9, zmm10, zmm11 = sub_141e17910(&var_158, rbx_1, r14_1)
        zmm0_1, zmm6, zmm8 = sub_141e18090(rbx_1, r14_1)
        zmm1 = var_158
        zmm10.d = zmm10.d f+ zmm0_1.d
        rbx_1 = &rbx_1[6]
        zmm1[0] = zmm1[0] f* zmm0_1.d
        r14_1 = &r14_1[6]
        zmm6.d = zmm6.d f+ zmm1[0]
        int32_t var_150
        zmm1 = var_150
        zmm1[0] = zmm1[0] f* zmm0_1.d
        float var_154
        zmm8.d = zmm8.d f+ var_154 f* zmm0_1.d
        zmm9.d = zmm9.d f+ zmm1[0]
    while (rbx_1 != r15_2)

zmm7 = 0x3f800000
zmm0_1.d = 1f f/ zmm10.d
zmm9.d = zmm9.d f* zmm0_1.d
zmm6.d = zmm6.d f* zmm0_1.d
zmm8.d = zmm8.d f* zmm0_1.d
int32_t var_150_1 = zmm9.d
arg1[0x34] = (_mm_unpacklo_ps(zmm6, zmm8.q)).q
arg1[0x35].d = var_150_1
zmm0_1.d = arg1[0x34].d.d f+ *arg1
*arg1 = zmm0_1.d
zmm1 = *(arg1 + 0x1a4)
zmm1[0] = zmm1[0] f+ *(arg1 + 4)
*(arg1 + 4) = zmm1[0]
zmm0_1.d = arg1[0x35].d.d f+ arg1[1].d
arg1[1].d = zmm0_1.d
int32_t rax_9 = arg1[1].d
zmm0_1 = zx.o(*arg1)
arg1[0x20] = zmm0_1.q
arg1[0x1c] = zmm0_1.q
arg1[0x18] = zmm0_1.q
arg1[0x21].d = rax_9
arg1[0x1d].d = rax_9
arg1[0x19].d = rax_9
void** i = arg1[0x37]

for (void* r9_2 = &i[sx.q(arg1[0x38].d) * 6]; i != r9_2; i = &i[6])
    void* j = *i
    
    for (void* rax_12 = j + sx.q(i[1].d) * 0xc; j != rax_12; j += 0xc)
        zmm0_1.d = (*j).d f- arg1[0x34].d
        zmm1 = *(j + 4)
        *j = zmm0_1.d
        zmm0_1 = *(j + 8)
        zmm1[0] = zmm1[0] f- *(arg1 + 0x1a4)
        *(j + 4) = zmm1[0]
        zmm0_1.d = zmm0_1.d f- arg1[0x35].d
        *(j + 8) = zmm0_1.d

int64_t* r14_2 = arg1[0x37]
int64_t var_148
__builtin_memset(&var_148, 0, 0x40)
int64_t i_6 = 4
void* r13_2 = &r14_2[sx.q(arg1[0x38].d) * 6]
int64_t var_138_1
int64_t var_128_1
int64_t var_118_1
uint128_t var_108
float var_f8[0x4]
uint128_t var_e8
float var_d8[0x4]
void var_c8

if (r14_2 != r13_2)
    int64_t* r15_3 = &r14_2[2]
    
    do
        int128_t zmm0_2
        int512_t zmm6_1
        zmm0_2, zmm6_1 = sub_141e18090(r14_2, r15_3)
        zmm6_1.o = zmm0_2
        int32_t* rax_14
        uint128_t zmm6_2
        rax_14, zmm6_2, zmm7, zmm11 = sub_141e17b70(&var_108, r14_2, r15_3)
        void* rcx_6 = &rax_14[2]
        int64_t rax_15 = neg.q(rax_14)
        void* rdx_5 = &var_c8 + rax_15
        void var_c4
        void* r8_3 = &var_c4 + rax_15
        int64_t i_5 = 4
        int64_t i_1
        
        do
            rcx_6 += 0x10
            zmm0_1.d = zmm6_2.d f* *(rcx_6 - 0x18)
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* *(rcx_6 - 0x14)
            *(rdx_5 + rcx_6 - 0x18) = zmm0_1.d
            zmm0_1.d = zmm6_2.d f* *(rcx_6 - 0x10)
            *(r8_3 + rcx_6 - 0x18) = zmm1[0]
            zmm1 = zmm6_2
            zmm1[0] = zmm1[0] f* *(rcx_6 - 0xc)
            *(rdx_5 + rcx_6 - 0x10) = zmm0_1.d
            *(r8_3 + rcx_6 - 0x10) = zmm1[0]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        
        for (int64_t i_2 = 0; i_2 s< 0x40; i_2 += 0x10)
            *(&var_108 + i_2) = _mm_add_ps(*(&var_c8 + i_2), *(&var_148 + i_2))
        
        zmm11.d = zmm11.d f+ zmm6_2.d
        r14_2 = &r14_2[6]
        var_148.o = var_108
        r15_3 = &r15_3[6]
        var_138_1.o = var_f8
        var_128_1.o = var_e8
        var_118_1.o = var_d8
    while (r14_2 != r13_2)

zmm7[0] = zmm7[0] f/ zmm11.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)

do
    *(&var_108 + i_3) = _mm_mul_ps(*(&var_148 + i_3), temp0_2)
    i_3 += 0x10
while (i_3 s< 0x40)

zmm0_1 = var_108
zmm7[0] = zmm7[0] f/ arg1[7].d
var_138_1.o = var_f8
var_148.o = zmm0_1
var_118_1.o = var_d8
*(arg1 + 0x3c) = zmm7[0]
var_128_1.o = var_e8
int64_t var_110
var_110:4.d = 0x3f800000
float (* rax_16)[0x4]
float zmm7_1[0x4]
rax_16, zmm7_1 = sub_1408041d0(&var_148, &var_c8)
*(arg1 + 0x40) = *rax_16
*(arg1 + 0x50) = rax_16[1]
*(arg1 + 0x60) = rax_16[2]
void* rax_17 = arg1 + 0x44
*(arg1 + 0x70) = rax_16[3]
int64_t i_4

do
    rax_17 += 0x10
    zmm7_1[0] = zmm7_1[0] f* *(rax_17 - 0x14)
    zmm7_1[0] = zmm7_1[0] f* *(rax_17 - 0x10)
    *(rax_17 + &var_148 - arg1 - 0x54) = zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] f* *(rax_17 - 0xc)
    *(rax_17 + &var_148:4 - arg1 - 0x54) = zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] f* *(rax_17 - 8)
    int64_t var_140
    *(rax_17 + &var_140 - arg1 - 0x54) = zmm7_1[0]
    *(rax_17 + &var_140:4 - arg1 - 0x54) = zmm7_1[0]
    i_4 = i_6
    i_6 -= 1
while (i_4 != 1)
*(arg1 + 0x80) = var_148.o
*(arg1 + 0x90) = var_138_1.o
*(arg1 + 0xa0) = var_128_1.o
*(arg1 + 0xb0) = var_118_1.o
return arg1
