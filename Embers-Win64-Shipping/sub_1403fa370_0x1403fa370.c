// 函数: sub_1403fa370
// 地址: 0x1403fa370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = 0
int128_t zmm1 = zx.o(0)
uint64_t result = 0
int128_t zmm0 = zx.o(0)
int128_t zmm2

if (arg2 s>= 4)
    void* r8_1 = arg1 + 8
    uint64_t rax_2 = zx.q(((arg2 - 4) u>> 2) + 1)
    uint64_t i_2 = zx.q(rax_2.d)
    r9 = (rax_2 << 2).d
    result = rax_2 << 2
    uint64_t i
    
    do
        zmm2 = *(r8_1 - 8)
        
        if (not(zmm1.d f> zmm2.d))
            zmm1 = zmm2
        
        if (not(zmm2.d f> zmm0.d))
            zmm0 = zmm2
        
        zmm2 = *(r8_1 - 4)
        
        if (not(zmm1.d f> zmm2.d))
            zmm1 = zmm2
        
        if (not(zmm2.d f> zmm0.d))
            zmm0 = zmm2
        
        zmm2 = *r8_1
        
        if (not(zmm1.d f> zmm2.d))
            zmm1 = zmm2
        
        if (not(zmm2.d f> zmm0.d))
            zmm0 = zmm2
        
        zmm2 = *(r8_1 + 4)
        
        if (not(zmm1.d f> zmm2.d))
            zmm1 = zmm2
        
        if (not(zmm2.d f> zmm0.d))
            zmm0 = zmm2
        
        r8_1 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r9 s< arg2)
    result = arg1 + (result << 2)
    uint64_t i_3 = zx.q(arg2 - r9)
    uint64_t i_1
    
    do
        zmm2 = *result
        
        if (not(zmm1.d f> zmm2.d))
            zmm1 = zmm2
        
        if (not(zmm2.d f> zmm0.d))
            zmm0 = zmm2
        
        result += 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

data_142d3f780
return result
