// 函数: sub_14173b6b0
// 地址: 0x14173b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*(arg1 + 0x60))
int32_t rax = *(arg1 + 0x68)
uint128_t zmm3 = zx.o(*(arg1 + 0x6c))
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
uint128_t zmm2
zmm2.d = (*(arg1 + 0x6c)).d f- zmm1.d
zmm3.d = zmm3.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
uint128_t zmm7 = arg4
zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
uint128_t zmm0
zmm0.d = (*(arg1 + 0x74)).d f- rax
zmm3.d = _mm_max_ss(_mm_max_ss(zmm3.d, _mm_and_ps(zmm2, 0x7fffffff).d).d, 
    _mm_and_ps(zmm0, 0x7fffffff).d).d f* 9.99999975e-05f

if (not(zmm7.d f>= zmm3.d))
    zmm7 = zmm3

int32_t r11 = *(arg1 + 0x18)
int32_t i = 0
int32_t zmm4 = 0x7f7fffff
int32_t i_1 = -1
int128_t zmm6
int128_t var_18 = zmm6
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
uint128_t zmm10
uint128_t var_58 = zmm10
float zmm5

if (r11 s>= 4)
    void* rax_2 = *(arg1 + 0x10)
    int32_t i_2 = 2
    zmm8 = *arg2
    zmm9 = *(arg2 + 4)
    zmm10 = *(arg2 + 8)
    int32_t* r10_1 = rax_2 + 8
    void* rax_3 = rax_2 + 0x2c
    
    do
        zmm5 = *(rax_3 - 0x1c)
        zmm2.d = zmm8.d f- r10_1[-2]
        zmm3 = r10_1[1]
        zmm0.d = zmm9.d f- r10_1[-1]
        zmm6 = *(rax_3 - 0x18)
        zmm1.d = zmm10.d f- *r10_1
        zmm2.d = zmm2.d f* zmm3.d
        zmm0.d = zmm0.d f* zmm5
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff).d f>= zmm7.d))
            zmm3.d = zmm3.d f* *arg3
            zmm6.d = zmm6.d f* arg3[2]
            zmm3.d = zmm3.d f+ zmm5 f* arg3[1]
            zmm3.d = zmm3.d f+ zmm6.d
            
            if (not(zmm3.d f>= zmm4))
                zmm4 = zmm3.d
                i_1 = i
        
        zmm5 = *(rax_3 - 4)
        zmm2.d = zmm9.d f- *(rax_3 - 0x10)
        zmm3 = *(rax_3 - 8)
        zmm0.d = zmm8.d f- r10_1[4]
        zmm6 = *rax_3
        zmm1.d = zmm10.d f- *(rax_3 - 0xc)
        zmm2.d = zmm2.d f* zmm5
        zmm0.d = zmm0.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff).d f>= zmm7.d))
            zmm3.d = zmm3.d f* *arg3
            zmm6.d = zmm6.d f* arg3[2]
            zmm3.d = zmm3.d f+ zmm5 f* arg3[1]
            zmm3.d = zmm3.d f+ zmm6.d
            
            if (not(zmm3.d f>= zmm4))
                zmm4 = zmm3.d
                i_1 = i_2 - 1
        
        zmm5 = *(rax_3 + 0x14)
        zmm2.d = zmm9.d f- *(rax_3 + 8)
        zmm3 = *(rax_3 + 0x10)
        zmm0.d = zmm8.d f- r10_1[0xa]
        zmm6 = *(rax_3 + 0x18)
        zmm1.d = zmm10.d f- *(rax_3 + 0xc)
        zmm2.d = zmm2.d f* zmm5
        zmm0.d = zmm0.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff).d f>= zmm7.d))
            zmm3.d = zmm3.d f* *arg3
            zmm6.d = zmm6.d f* arg3[2]
            zmm3.d = zmm3.d f+ zmm5 f* arg3[1]
            zmm3.d = zmm3.d f+ zmm6.d
            
            if (not(zmm3.d f>= zmm4))
                zmm4 = zmm3.d
                i_1 = i_2
        
        zmm5 = *(rax_3 + 0x2c)
        zmm2.d = zmm8.d f- r10_1[0x10]
        zmm3 = *(rax_3 + 0x28)
        zmm0.d = zmm9.d f- *(rax_3 + 0x20)
        zmm6 = *(rax_3 + 0x30)
        zmm1.d = zmm10.d f- *(rax_3 + 0x24)
        zmm2.d = zmm2.d f* zmm3.d
        zmm0.d = zmm0.d f* zmm5
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff).d f>= zmm7.d))
            zmm3.d = zmm3.d f* *arg3
            zmm6.d = zmm6.d f* arg3[2]
            zmm3.d = zmm3.d f+ zmm5 f* arg3[1]
            zmm3.d = zmm3.d f+ zmm6.d
            
            if (not(zmm3.d f>= zmm4))
                zmm4 = zmm3.d
                i_1 = i_2 + 1
        
        r10_1 = &r10_1[0x18]
        rax_3 += 0x60
        i += 4
        i_2 += 4
    while (i s< r11 - 3)

if (i s< r11)
    zmm8 = *arg2
    zmm9 = *(arg2 + 4)
    zmm10 = *(arg2 + 8)
    void* r10_2 = *(arg1 + 0x10) + sx.q(i) * 0x18
    void* rcx_1 = r10_2 + 0x14
    
    do
        zmm3 = *(rcx_1 - 4)
        zmm2.d = zmm9.d f- *(rcx_1 - 0x10)
        zmm5 = *(rcx_1 - 8)
        zmm0.d = zmm8.d f- *r10_2
        zmm6 = *rcx_1
        zmm1.d = zmm10.d f- *(rcx_1 - 0xc)
        zmm2.d = zmm2.d f* zmm3.d
        zmm0.d = zmm0.d f* zmm5
        zmm1.d = zmm1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff).d f>= zmm7.d))
            zmm3.d = zmm3.d f* arg3[1]
            zmm6.d = zmm6.d f* arg3[2]
            zmm3.d = zmm3.d f+ zmm5 f* *arg3
            zmm3.d = zmm3.d f+ zmm6.d
            
            if (not(zmm3.d f>= zmm4))
                zmm4 = zmm3.d
                i_1 = i
        
        r10_2 += 0x18
        rcx_1 += 0x18
        i += 1
    while (i s< r11)

return zx.q(i_1)
