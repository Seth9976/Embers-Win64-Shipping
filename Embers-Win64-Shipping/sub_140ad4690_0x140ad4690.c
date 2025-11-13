// 函数: sub_140ad4690
// 地址: 0x140ad4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
char rcx = r15.b
int32_t i_2 = arg2
int32_t i = arg4.d & ((1 << rcx) - 1)
int32_t i_1 = (arg4 u>> 0x20).d & ((1 << rcx) - 1)
int32_t rax_5 = ((arg5 u>> 0x20).d & 0xffffff) s>> rcx
int32_t r11_2 = (arg5.d & 0xffffff) s>> rcx

if (arg3 s> 0)
    int64_t rsi_1 = 0
    
    while (i != 0)
        int32_t rdx_1 = i & 1
        int64_t r8_2 = (r15 << 5) + rsi_1
        i s>>= 1
        rsi_1 += 1
        r11_2 ^= *(&data_142e679f0 + (r8_2 << 3)) * rdx_1
        rax_5 ^= *((r8_2 << 3) + 0x142e679f4) * rdx_1
        
        if (rsi_1 s>= r15)
            break

int64_t r10_1 = sx.q((r15 * 2).d)

if (r15 s< r10_1)
    int64_t rsi_2 = r15
    
    while (i_1 != 0)
        int32_t rdx_3 = i_1 & 1
        int64_t r8_5 = (r15 << 5) + rsi_2
        i_1 s>>= 1
        rsi_2 += 1
        r11_2 ^= *(&data_142e679f0 + (r8_5 << 3)) * rdx_3
        rax_5 ^= *((r8_5 << 3) + 0x142e679f4) * rdx_3
        
        if (rsi_2 s>= r10_1)
            break

if (r10_1 s< 0x20)
    while (i_2 != 0)
        int32_t rdx_5 = i_2 & 1
        int64_t r8_8 = (r15 << 5) + r10_1
        i_2 s>>= 1
        r10_1 += 1
        r11_2 ^= *(&data_142e679f0 + (r8_8 << 3)) * rdx_5
        rax_5 ^= *((r8_8 << 3) + 0x142e679f4) * rdx_5
        
        if (r10_1 s>= 0x20)
            break

uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r11_2))
float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(1 << (0x18 - r15.b))).d
zmm1.d = zmm1.d f* zmm2
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f* zmm2
*arg1 = zmm1.d
arg1[1] = zmm0.d
return arg1
