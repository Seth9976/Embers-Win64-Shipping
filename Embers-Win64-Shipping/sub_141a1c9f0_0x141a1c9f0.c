// 函数: sub_141a1c9f0
// 地址: 0x141a1c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = data_143dbb1f8
uint64_t r11 = arg1
uint128_t zmm2 = data_143dbb1fc
arg1.b = 0
uint128_t zmm0 = data_143dbb200
uint128_t zmm6
uint128_t var_18 = zmm6
int64_t r8 = 0
int64_t* rdx = *(r11 + 0x408)
int32_t zmm3 = zmm1.d
int32_t var_7c = zmm1.d
int32_t zmm4 = zmm2.d
int32_t var_78 = zmm2.d
int32_t zmm5 = zmm0.d
int64_t r10 = sx.q(*(r11 + 0x410)) << 3
int32_t var_74 = zmm0.d
int32_t var_88 = zmm1.d
uint64_t r10_1 = r10 u>> 3
int64_t r9 = 0
int32_t var_84 = zmm2.d
int32_t var_80 = zmm0.d

if (rdx u> &rdx[sx.q(*(r11 + 0x410))])
    r10_1 = 0

char var_70 = 0

if (r10_1 != 0)
    do
        void* rax_2 = *rdx
        
        if (rax_2 != 0)
            if (arg1.b == 0)
                if (*(rax_2 + 0x98) != 0)
                    var_88.o = *(rax_2 + 0x80)
                    zmm5 = var_80
                    zmm4 = var_84
                    zmm3 = var_88
                    var_78.q = *(rax_2 + 0x90)
                    int32_t rax_3 = *(rax_2 + 0x98)
                    arg1 = zx.q(rax_3.b)
                    zmm0 = var_74
                    zmm2 = var_78
                    zmm1 = var_7c
                    var_70.d = rax_3
            else if (*(rax_2 + 0x98) != 0)
                zmm6 = *(rax_2 + 0x80)
                
                if (not(zmm3 f<= zmm6.d))
                    var_88 = zmm6.d
                    zmm3 = zmm6.d
                
                zmm6 = *(rax_2 + 0x84)
                
                if (not(zmm4 f<= zmm6.d))
                    var_84 = zmm6.d
                    zmm4 = zmm6.d
                
                zmm6 = *(rax_2 + 0x88)
                
                if (not(zmm5 f<= zmm6.d))
                    var_80 = zmm6.d
                    zmm5 = zmm6.d
                
                zmm6 = *(rax_2 + 0x8c)
                
                if (not(zmm1.d f>= zmm6.d))
                    var_7c = zmm6.d
                    zmm1 = zmm6
                
                zmm6 = *(rax_2 + 0x90)
                
                if (not(zmm2.d f>= zmm6.d))
                    var_78 = zmm6.d
                    zmm2 = zmm6
                
                zmm6 = *(rax_2 + 0x94)
                
                if (not(zmm0.d f>= zmm6.d))
                    var_74 = zmm6.d
                    zmm0 = zmm6
        
        rdx = &rdx[1]
        r9 += 1
    while (r9 != r10_1)

int64_t* rdx_1 = *(r11 + 0x418)
uint64_t r9_2 = sx.q(*(r11 + 0x420)) << 3 u>> 3

if (rdx_1 u> &rdx_1[sx.q(*(r11 + 0x420))])
    r9_2 = 0

if (r9_2 != 0)
    do
        void* rax_6 = *rdx_1
        
        if (rax_6 != 0)
            if (arg1.b == 0)
                if (*(rax_6 + 0x98) != 0)
                    var_88.o = *(rax_6 + 0x80)
                    zmm5 = var_80
                    zmm4 = var_84
                    zmm3 = var_88
                    var_78.q = *(rax_6 + 0x90)
                    int32_t rax_7 = *(rax_6 + 0x98)
                    arg1 = zx.q(rax_7.b)
                    zmm0 = var_74
                    zmm2 = var_78
                    zmm1 = var_7c
                    var_70.d = rax_7
            else if (*(rax_6 + 0x98) != 0)
                zmm6 = *(rax_6 + 0x80)
                
                if (not(zmm3 f<= zmm6.d))
                    var_88 = zmm6.d
                    zmm3 = zmm6.d
                
                zmm6 = *(rax_6 + 0x84)
                
                if (not(zmm4 f<= zmm6.d))
                    var_84 = zmm6.d
                    zmm4 = zmm6.d
                
                zmm6 = *(rax_6 + 0x88)
                
                if (not(zmm5 f<= zmm6.d))
                    var_80 = zmm6.d
                    zmm5 = zmm6.d
                
                zmm6 = *(rax_6 + 0x8c)
                
                if (not(zmm1.d f>= zmm6.d))
                    var_7c = zmm6.d
                    zmm1 = zmm6
                
                zmm6 = *(rax_6 + 0x90)
                
                if (not(zmm2.d f>= zmm6.d))
                    var_78 = zmm6.d
                    zmm2 = zmm6
                
                zmm6 = *(rax_6 + 0x94)
                
                if (not(zmm0.d f>= zmm6.d))
                    var_74 = zmm6.d
                    zmm0 = zmm6
        
        rdx_1 = &rdx_1[1]
        r8 += 1
    while (r8 != r9_2)

if (arg1.b == 0)
    void* rax_12 = *(r11 + 0xc0)
    int32_t rax_13
    
    if (rax_12 == 0)
        zmm2 = arg3[1]
        rax_13 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        zmm2 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)
    else
        zmm2 = zx.o(*(rax_12 + 0x100))
        rax_13 = *(rax_12 + 0x108)
    
    int32_t var_80_2 = rax_13
    var_7c.q = data_143dbb1f8.q
    zmm0 = zx.o(0)
    int32_t var_74_2 = data_143dbb200
else
    uint64_t var_68
    uint64_t* rax_8 = sub_140ae2c60(&var_88, &var_68, arg3)
    zmm6 = *rax_8
    var_88.o = zmm6
    var_78.q = rax_8[2]
    int32_t rax_9 = rax_8[3].d
    uint128_t zmm9
    zmm9.d = _mm_shuffle_ps(zmm6, zmm6, 0xff).d f- zmm6.d
    uint128_t zmm5_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    uint128_t zmm8
    zmm8.d = var_78.d f- zmm5_1.d
    uint128_t zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    uint128_t zmm7_1
    zmm7_1.d = var_74.d f- zmm4_1.d
    var_70.d = rax_9
    uint128_t zmm3_1 = zmm9
    zmm9.d = zmm9.d f* zmm9.d
    zmm3_1.d = zmm3_1.d f* 0.5f
    zmm2.d = zmm8.d f* 0.5f
    zmm1.d = zmm7_1.d f* 0.5f
    zmm0 = zmm3_1
    zmm8.d = zmm8.d f* zmm8.d
    zmm3_1.d = zmm3_1.d f+ zmm6.d
    zmm0 = _mm_unpacklo_ps(zmm0, zmm2.q)
    zmm2.d = zmm2.d f+ zmm5_1.d
    var_7c.q = zmm0.q
    zmm9.d = zmm9.d f+ zmm8.d
    int32_t var_90_1 = zmm1.d
    zmm1.d = zmm1.d f+ zmm4_1.d
    zmm7_1.d = zmm7_1.d f* zmm7_1.d
    zmm2 = _mm_unpacklo_ps(zmm3_1, zmm2.q)
    int32_t var_74_1 = var_90_1
    zmm9.d = zmm9.d f+ zmm7_1.d
    int32_t var_80_1 = zmm1.d
    zmm9.d = zmm9.d f* 0.25f
    zmm0 = _mm_sqrt_ss(0, zmm9.d)

var_70.d = zmm0.d
zmm1.q = zmm2.q
*arg2 = zmm1
arg2[1].q = var_78.q
*(arg2 + 0x18) = var_70.d
return arg2
