// 函数: sub_141e24b90
// 地址: 0x141e24b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x38))

if (rax.d s<= 0)
    if (arg2 != *(arg1 + 0x1c))
        return zx.o(0)
    
    return 0x3f800000

int64_t i = 0
float zmm0[0x4] = zx.o(0)
float zmm1
float zmm2

if (rax s>= 4)
    void* rax_1 = *(arg1 + 0x30)
    void* rcx = rax_1 + 0x34
    void* rdx = rax_1 + 0x1c4
    
    do
        zmm2 = *(rcx - 0x30)
        zmm1 = 1f - zmm2
        
        if (i s> 0)
            zmm0[0] = zmm0[0] * zmm1
        else if (*rcx == arg2)
            zmm0[0] = zmm0[0] + zmm1
        
        if (*(rcx - 4) == arg2)
            zmm0[0] = zmm0[0] + zmm2
        
        zmm2 = *(rcx + 0x98)
        zmm1 = 1f - zmm2
        
        if (i + 1 s> 0)
            zmm0[0] = zmm0[0] * zmm1
        else if (*(rcx + 0xc8) == arg2)
            zmm0[0] = zmm0[0] + zmm1
        
        if (*(rcx + 0xc4) == arg2)
            zmm0[0] = zmm0[0] + zmm2
        
        zmm2 = *(rdx - 0x30)
        zmm1 = 1f - zmm2
        
        if (i s> -2)
            zmm0[0] = zmm0[0] * zmm1
        else if (*rdx == arg2)
            zmm0[0] = zmm0[0] + zmm1
        
        if (*(rdx - 4) == arg2)
            zmm0[0] = zmm0[0] + zmm2
        
        zmm2 = *(rdx + 0x98)
        zmm1 = 1f - zmm2
        
        if (i + 3 s> 0)
            zmm0[0] = zmm0[0] * zmm1
        else if (*(rdx + 0xc8) == arg2)
            zmm0[0] = zmm0[0] + zmm1
        
        if (*(rdx + 0xc4) == arg2)
            zmm0[0] = zmm0[0] + zmm2
        
        i += 4
        rcx += 0x320
        rdx += 0x320
    while (i s< rax - 3)

if (i s< rax)
    void* rdx_3 = *(arg1 + 0x30) + 0x34 + i * 0xc8
    
    do
        zmm2 = *(rdx_3 - 0x30)
        zmm1 = 1f - zmm2
        
        if (i s> 0)
            zmm0[0] = zmm0[0] * zmm1
        else if (*rdx_3 == arg2)
            zmm0[0] = zmm0[0] + zmm1
        
        if (*(rdx_3 - 4) == arg2)
            zmm0[0] = zmm0[0] + zmm2
        
        i += 1
        rdx_3 += 0xc8
    while (i s< rax)

if (zmm0[0] < 0f)
    return zx.o(0)

return _mm_min_ss(zmm0[0], 0x3f800000)
