// 函数: sub_141f093b0
// 地址: 0x141f093b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3

if ((*(arg1 + 0x440) & 1) == 0)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
    int32_t var_70 = 0x49800000
    *(arg2 + 0xc) = (_mm_unpacklo_ps(0x49800000, 0x49800000)).q
    *(arg2 + 0x14) = 0x49800000
    arg2[3].d = 0x49ddb3d7
    return arg2

int128_t* rdx = *(arg1 + 0x408)
arg3.b = 0
uint128_t zmm3 = data_143dbb1f8
uint128_t zmm2 = data_143dbb1fc
uint128_t zmm1 = data_143dbb200
uint128_t zmm6 = zmm3
uint128_t zmm7 = zmm2
uint128_t zmm8 = zmm1
void* r9_1 = sx.q(*(arg1 + 0x410)) * 0x34 + rdx
uint128_t zmm0
uint128_t zmm4
uint128_t zmm5

if (rdx != r9_1)
    void* rcx = rdx + 0x14
    
    do
        if (arg3.b == 0)
            zmm0 = zx.o(*rdx)
            arg3.b = 1
            zmm3 = zmm0
            zmm6 = zmm3
            zmm2 = zmm0.q:4.d
            zmm7 = zmm2
            zmm1 = *(rdx + 8)
            zmm8 = zmm1
        else
            zmm5 = *rdx
            
            if (not(zmm6.d f<= zmm5.d))
                zmm6 = zmm5
            
            zmm0 = *(rcx - 0x10)
            
            if (not(zmm7.d f<= zmm0.d))
                zmm7 = zmm0
            
            zmm4 = *(rcx - 0xc)
            
            if (not(zmm8.d f<= zmm4.d))
                zmm8 = zmm4
            
            if (not(zmm3.d f>= zmm5.d))
                zmm3 = zmm5
            
            if (not(zmm2.d f>= zmm0.d))
                zmm2 = zmm0
            
            if (not(zmm1.d f>= zmm4.d))
                zmm1 = zmm4
        
        zmm0 = *(rcx - 8)
        
        if (not(zmm6.d f<= zmm0.d))
            zmm6 = zmm0
        
        zmm4 = *(rcx - 4)
        
        if (not(zmm7.d f<= zmm4.d))
            zmm7 = zmm4
        
        zmm5 = *rcx
        
        if (not(zmm8.d f<= zmm5.d))
            zmm8 = zmm5
        
        if (not(zmm3.d f>= zmm0.d))
            zmm3 = zmm0
        
        if (not(zmm2.d f>= zmm4.d))
            zmm2 = zmm4
        
        if (not(zmm1.d f>= zmm5.d))
            zmm1 = zmm5
        
        rdx += 0x34
        rcx += 0x34
    while (rdx != r9_1)

uint128_t* i = *(arg1 + 0x418)

for (void* r9_2 = i + sx.q(*(arg1 + 0x420)) * 0x28; i != r9_2; i += 0x28)
    if (arg3.b == 0)
        zmm0 = zx.o(*i)
        arg3.b = 1
        zmm3 = zmm0
        zmm6 = zmm3
        zmm2 = zmm0.q:4.d
        zmm7 = zmm2
        zmm1 = *(i + 8)
        zmm8 = zmm1
    else
        zmm5 = *i
        
        if (not(zmm6.d f<= zmm5.d))
            zmm6 = zmm5
        
        zmm0 = *(i + 4)
        
        if (not(zmm7.d f<= zmm0.d))
            zmm7 = zmm0
        
        zmm4 = *(i + 8)
        
        if (not(zmm8.d f<= zmm4.d))
            zmm8 = zmm4
        
        if (not(zmm3.d f>= zmm5.d))
            zmm3 = zmm5
        
        if (not(zmm2.d f>= zmm0.d))
            zmm2 = zmm0
        
        if (not(zmm1.d f>= zmm4.d))
            zmm1 = zmm4

for (uint128_t** i_1 = *(arg1 + 0x430); i_1 != &i_1[sx.q(*(arg1 + 0x438)) * 6]; i_1 = &i_1[6])
    uint128_t* j = *i_1
    
    for (void* r9_3 = j + sx.q(i_1[1].d) * 0xc; j != r9_3; j += 0xc)
        if (arg3.b == 0)
            zmm0 = zx.o(*j)
            arg3.b = 1
            zmm3 = zmm0
            zmm6 = zmm3
            zmm2 = zmm0.q:4.d
            zmm7 = zmm2
            zmm1 = *(j + 8)
            zmm8 = zmm1
        else
            zmm5 = *j
            
            if (not(zmm6.d f<= zmm5.d))
                zmm6 = zmm5
            
            zmm0 = *(j + 4)
            
            if (not(zmm7.d f<= zmm0.d))
                zmm7 = zmm0
            
            zmm4 = *(j + 8)
            
            if (not(zmm8.d f<= zmm4.d))
                zmm8 = zmm4
            
            if (not(zmm3.d f>= zmm5.d))
                zmm3 = zmm5
            
            if (not(zmm2.d f>= zmm0.d))
                zmm2 = zmm0
            
            if (not(zmm1.d f>= zmm4.d))
                zmm1 = zmm4

if (arg3.b == 0)
    zmm2 = *(rdi + 0x10)
    int32_t var_70_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    *arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
    zmm0 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    int32_t var_60_1 = 0x3f800000
    arg2[1].d = var_70_3
    *(arg2 + 0xc) = zmm0.q
    *(arg2 + 0x14) = 0x3f800000
    arg2[3].d = 0x3f800000
else
    zmm2.d = zmm2.d f- zmm7.d
    zmm1.d = zmm1.d f- zmm8.d
    zmm3.d = zmm3.d f- zmm6.d
    zmm2.d = zmm2.d f* 0.5f
    zmm1.d = zmm1.d f* 0.5f
    zmm3.d = zmm3.d f* 0.5f
    *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
    *(arg2 + 0x14) = zmm1.d
    zmm6.d = zmm6.d f+ *(arg2 + 0xc)
    zmm7.d = zmm7.d f+ arg2[2].d
    zmm8.d = zmm8.d f+ *(arg2 + 0x14)
    *arg2 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
    arg2[1].d = zmm8.d
    zmm0 = arg2[2].d
    zmm2 = *(arg2 + 0xc)
    zmm1 = *(arg2 + 0x14)
    zmm0.d = zmm0.d f* zmm0.d
    zmm2.d = zmm2.d f* zmm2.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    arg2[3].d = _mm_sqrt_ss(0, zmm2.d).d

return arg2
