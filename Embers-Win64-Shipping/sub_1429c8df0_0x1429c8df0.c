// 函数: sub_1429c8df0
// 地址: 0x1429c8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = arg2
uint128_t zmm0

if ((*arg1 & 0x60) == 0 || arg3 s< 2)
    zmm0 = zx.o(0)
    
    if (not(0f f>= zmm3.d))
        if (not(zmm3.d f< 10f))
            return 0x41200000
        
        if (not(zmm3.d f<= 1f))
            zmm0.d = zmm3.d f- 1f
    
    return zmm0

if (not(0f f< zmm3.d))
    return zx.o(0)

if (not(zmm3.d f< 10f))
    return 0x41200000

int32_t rcx = 0
arg2 = zx.o(0)
uint32_t r9 = 0

if (arg3 s>= 4)
    void* rdx_1 = arg4 + 8
    uint64_t rax_3 = zx.q(((arg3 - 4) u>> 2) + 1)
    uint64_t i_3 = zx.q(rax_3.d)
    r9 = (rax_3 << 2).d
    uint64_t i
    
    do
        zmm0 = *(rdx_1 - 8)
        
        if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
            rcx += 1
            arg2.d = arg2.d f+ zmm0.d
        
        zmm0 = *(rdx_1 - 4)
        
        if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
            rcx += 1
            arg2.d = arg2.d f+ zmm0.d
        
        zmm0 = *rdx_1
        
        if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
            rcx += 1
            arg2.d = arg2.d f+ zmm0.d
        
        zmm0 = *(rdx_1 + 4)
        
        if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
            rcx += 1
            arg2.d = arg2.d f+ zmm0.d
        
        rdx_1 += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r9 s< arg3)
    void* rdx_2 = arg4 + (sx.q(r9) << 2)
    uint64_t i_2 = zx.q(arg3 - r9)
    uint64_t i_1
    
    do
        zmm0 = *rdx_2
        
        if (not(zmm0.d f<= 0f) && not(10f f<= zmm0.d))
            rcx += 1
            arg2.d = arg2.d f+ zmm0.d
        
        rdx_2 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rcx s> 1)
    arg2.d = arg2.d f- zmm3.d
    arg2.d = arg2.d f/ _mm_cvtepi32_ps(zx.o(rcx - 1)).d
    arg2.d = arg2.d f* 0.25f
    zmm0.d = zmm3.d f* 0.75f
    zmm3.d = arg2.d f+ zmm0.d

zmm3.d = zmm3.d f+ -1f

if (zmm3.d f> 0f)
    return zmm3

return zx.o(0)
