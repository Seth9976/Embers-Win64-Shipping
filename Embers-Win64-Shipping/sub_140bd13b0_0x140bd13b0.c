// 函数: sub_140bd13b0
// 地址: 0x140bd13b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1a0) = 1
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t* rdx = *(arg1 + 0x180)
int128_t zmm0
zmm0.q = float.d(performanceCount)
void* rdi = *(arg1 + 0xc8)
zmm0.q = zmm0.q f* data_143d796f8
zmm0.q = zmm0.q f+ 16777216.0
*(arg1 + 0x78) = zmm0.q
*(rdi + 0x170) += 1
int64_t rsi = sx.q(*(rdi + 0x378))
int32_t var_10 = *rdx
int32_t var_c = rdx[1]
int32_t rax_2 = (rsi + 1).d
performanceCount = arg1
*(rdi + 0x378) = rax_2

if (rax_2 s> *(rdi + 0x37c))
    sub_1405a4f90(rdi + 0x370)

uint64_t result = *(rdi + 0x370)
*(result + rsi * 0x10) = performanceCount.o
int64_t r9 = *(rdi + 0x370)
int32_t r8_1 = *(rdi + 0x378) - 1

if (r8_1 s> 0)
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_1 - 1)
        int128_t* r8_4 = (sx.q(r8_1) << 4) + r9
        result = zx.q((temp1_1 - temp0_1) s>> 1)
        int128_t* rdx_5 = (sx.q(result.d) << 4) + r9
        
        if (*(r8_4 + 8) u>= *(rdx_5 + 8))
            break
        
        if (r8_4 != rdx_5)
            int128_t zmm1 = *r8_4
            *r8_4 = *rdx_5
            *rdx_5 = zmm1
        
        r8_1 = result.d
    while (result.d s> 0)

return result
