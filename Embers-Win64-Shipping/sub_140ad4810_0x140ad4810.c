// 函数: sub_140ad4810
// 地址: 0x140ad4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int32_t* result = arg1
char rcx = r12.b
int32_t i_3 = arg2
int32_t i = *arg4 & ((1 << rcx) - 1)
*arg4 = i
int32_t i_1 = arg4[1] & ((1 << rcx) - 1)
arg4[1] = i_1
int32_t i_2 = arg4[2] & ((1 << rcx) - 1)
arg4[2] = i_2
int32_t r9_2 = (*arg5 & 0xffffff) s>> rcx
int32_t r10_2 = (arg5[1] & 0xffffff) s>> rcx
int32_t r11_2 = (arg5[2] & 0xffffff) s>> rcx

if (r12.d s> 0)
    int64_t r14_1 = 0
    
    while (i != 0)
        int32_t rcx_2 = i & 1
        int64_t rax_5 = (r12 << 5) + r14_1
        i s>>= 1
        r14_1 += 1
        int64_t rdx = rax_5 * 3
        r9_2 ^= *(&data_142e699f0 + (rdx << 2)) * rcx_2
        r10_2 ^= *((rdx << 2) + 0x142e699f4) * rcx_2
        int32_t rax_11 = *((rdx << 2) + 0x142e699f8) * rcx_2
        *arg4 = i
        r11_2 ^= rax_11
        
        if (r14_1 s>= r12)
            break
    
    result = arg1

int64_t rdi_1 = sx.q((r12 * 2).d)

if (r12 s< rdi_1)
    int64_t r14_2 = r12
    
    while (i_1 != 0)
        int32_t rcx_4 = i_1 & 1
        int64_t rax_15 = (r12 << 5) + r14_2
        i_1 s>>= 1
        r14_2 += 1
        int64_t rdx_1 = rax_15 * 3
        r9_2 ^= *(&data_142e699f0 + (rdx_1 << 2)) * rcx_4
        r10_2 ^= *((rdx_1 << 2) + 0x142e699f4) * rcx_4
        int32_t rax_21 = *((rdx_1 << 2) + 0x142e699f8) * rcx_4
        arg4[1] = i_1
        r11_2 ^= rax_21
        
        if (r14_2 s>= rdi_1)
            break
    
    result = arg1

int64_t r8_1 = sx.q((r12 * 3).d)

if (rdi_1 s< r8_1)
    while (i_2 != 0)
        int32_t rcx_6 = i_2 & 1
        int64_t rax_25 = (r12 << 5) + rdi_1
        i_2 s>>= 1
        rdi_1 += 1
        int64_t rdx_2 = rax_25 * 3
        r9_2 ^= *(&data_142e699f0 + (rdx_2 << 2)) * rcx_6
        r10_2 ^= *((rdx_2 << 2) + 0x142e699f4) * rcx_6
        int32_t rax_31 = *((rdx_2 << 2) + 0x142e699f8) * rcx_6
        arg4[2] = i_2
        r11_2 ^= rax_31
        
        if (rdi_1 s>= r8_1)
            break

if (r8_1 s< 0x20)
    while (i_3 != 0)
        int32_t rcx_8 = i_3 & 1
        int64_t rax_34 = (r12 << 5) + r8_1
        i_3 s>>= 1
        r8_1 += 1
        int64_t rdx_3 = rax_34 * 3
        r9_2 ^= *(&data_142e699f0 + (rdx_3 << 2)) * rcx_8
        r10_2 ^= *((rdx_3 << 2) + 0x142e699f4) * rcx_8
        r11_2 ^= *((rdx_3 << 2) + 0x142e699f8) * rcx_8
        
        if (r8_1 s>= 0x20)
            break

uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r9_2))
float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(1 << (0x18 - r12.b))).d
zmm1.d = zmm1.d f* zmm2
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r10_2))
*result = zmm1.d
zmm0.d = zmm0.d f* zmm2
zmm1.d = _mm_cvtepi32_ps(zx.o(r11_2)).d f* zmm2
result[1] = zmm0.d
result[2] = zmm1.d
return result
