// 函数: sub_1403fbca0
// 地址: 0x1403fbca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = 0
uint64_t rax = 0
int32_t zmm1 = (zx.o(0)).d
uint128_t result

if (arg2 s>= 4)
    void* r9_1 = arg1 + 8
    uint64_t rax_3 = zx.q(((arg2 - 4) u>> 2) + 1)
    uint64_t i_2 = zx.q(rax_3.d)
    r10 = (rax_3 << 2).d
    rax = rax_3 << 2
    uint64_t i
    
    do
        result = *(r9_1 - 8)
        
        if (not(0f f<= result.d))
            result ^= 0x80000000
        
        int128_t zmm2 = *(r9_1 - 4)
        zmm1 = zmm1 f+ result.d
        
        if (not(0f f<= zmm2.d))
            zmm2 ^= 0x80000000
        
        result = *r9_1
        
        if (not(0f f<= result.d))
            result ^= 0x80000000
        
        zmm1 = zmm1 f+ zmm2.d f+ result.d
        result = *(r9_1 + 4)
        
        if (not(0f f<= result.d))
            result ^= 0x80000000
        
        r9_1 += 0x10
        zmm1 = zmm1 f+ result.d
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r10 s< arg2)
    void* rax_4 = arg1 + (rax << 2)
    uint64_t i_3 = zx.q(arg2 - r10)
    uint64_t i_1
    
    do
        result = *rax_4
        
        if (not(0f f<= result.d))
            result ^= 0x80000000
        
        rax_4 += 4
        zmm1 = zmm1 f+ result.d
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

result.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* arg4
result.d = result.d f* zmm1
result.d = result.d f+ zmm1
return result
