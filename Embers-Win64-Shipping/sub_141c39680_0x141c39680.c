// 函数: sub_141c39680
// 地址: 0x141c39680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t rsi = sx.q(arg2)
arg3[1].d = 0

if (rsi.d s> *(arg3 + 0xc))
    sub_140775b10(arg3, rsi.d)

arg4[1].d = 0

if (rsi.d s> *(arg4 + 0xc))
    sub_140775b10(arg4, rsi.d)

int32_t rax = arg3[1].d + rsi.d
arg3[1].d = rax

if (rax s> *(arg3 + 0xc))
    sub_140775270(arg3)

uint64_t result = zx.q(arg4[1].d + rsi.d)
arg4[1].d = result.d

if (result.d s> *(arg4 + 0xc))
    result = sub_140775270(arg4)

uint64_t r9 = *arg3
uint64_t r10 = *arg4
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm4
float zmm5

if (rsi s>= 4)
    uint64_t r8_1 = r9 - r10
    int64_t i_3 = ((rsi - 4) u>> 2) + 1
    result = r10 + 4
    rbp = i_3 << 2
    int64_t i
    
    do
        zmm1 = *(arg1 + 8)
        zmm7 = *(arg1 + 0xc)
        zmm0.d = _mm_and_ps(zmm1, 0x7fffffff).d f* 0.202642351f
        zmm4.d = 0.636619747f f- zmm0.d
        zmm0.d = _mm_and_ps(zmm7, 0x7fffffff).d f* 0.202642351f
        zmm4.d = zmm4.d f* zmm1.d
        zmm5 = 0.636619747f f- zmm0.d
        zmm0 = *(arg1 + 0x10)
        zmm2.d = zmm0.d f+ zmm1.d
        zmm4.d = zmm4.d f+ 0.5f
        *(arg1 + 8) = zmm2.d
        
        if (not(zmm2.d f<= 3.14159274f))
            zmm2.d = zmm2.d f- 6.28318548f
            *(arg1 + 8) = zmm2.d
        
        zmm0.d = zmm0.d f+ zmm7.d
        *(arg1 + 0xc) = zmm0.d
        
        if (not(zmm0.d f<= 3.14159274f))
            zmm0.d = zmm0.d f- 6.28318548f
            *(arg1 + 0xc) = zmm0.d
        
        zmm0.d = float.s(*(arg1 + 0x68))
        zmm1.d = float.s(*(arg1 + 0x6c))
        zmm1.d = zmm1.d f* zmm4.d
        zmm1.d = zmm1.d f+ zmm0.d
        *(r8_1 + result - 4) = zmm1.d
        zmm0.d = float.s(*(arg1 + 0x98))
        zmm2.d = float.s(*(arg1 + 0x9c))
        zmm2.d = zmm2.d f* (zmm5 f* zmm7.d + 0.5f)
        zmm2.d = zmm2.d f+ zmm0.d
        *(result - 4) = zmm2.d
        zmm1 = *(arg1 + 8)
        zmm4 = *(arg1 + 0xc)
        zmm0.d = _mm_and_ps(zmm1, 0x7fffffff).d f* 0.202642351f
        zmm5 = 0.636619747f f- zmm0.d
        zmm0.d = _mm_and_ps(zmm4, 0x7fffffff).d f* 0.202642351f
        zmm7.d = 0.636619747f f- zmm0.d
        zmm0 = *(arg1 + 0x10)
        zmm2.d = zmm0.d f+ zmm1.d
        zmm5 = zmm5 f* zmm1.d + 0.5f
        zmm7.d = zmm7.d f* zmm4.d
        *(arg1 + 8) = zmm2.d
        zmm7.d = zmm7.d f+ 0.5f
        
        if (not(zmm2.d f<= 3.14159274f))
            zmm2.d = zmm2.d f- 6.28318548f
            *(arg1 + 8) = zmm2.d
        
        zmm0.d = zmm0.d f+ zmm4.d
        *(arg1 + 0xc) = zmm0.d
        
        if (not(zmm0.d f<= 3.14159274f))
            zmm0.d = zmm0.d f- 6.28318548f
            *(arg1 + 0xc) = zmm0.d
        
        zmm0.d = float.s(*(arg1 + 0x68))
        zmm1.d = float.s(*(arg1 + 0x6c))
        zmm1.d = zmm1.d f* zmm5
        zmm1.d = zmm1.d f+ zmm0.d
        *(r8_1 + result) = zmm1.d
        zmm0.d = float.s(*(arg1 + 0x98))
        zmm2.d = float.s(*(arg1 + 0x9c))
        zmm2.d = zmm2.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0.d
        *result = zmm2.d
        zmm1 = *(arg1 + 8)
        zmm4 = *(arg1 + 0xc)
        zmm0.d = _mm_and_ps(zmm1, 0x7fffffff).d f* 0.202642351f
        zmm5 = 0.636619747f f- zmm0.d
        zmm0.d = _mm_and_ps(zmm4, 0x7fffffff).d f* 0.202642351f
        zmm7.d = 0.636619747f f- zmm0.d
        zmm0 = *(arg1 + 0x10)
        zmm2.d = zmm0.d f+ zmm1.d
        zmm5 = zmm5 f* zmm1.d + 0.5f
        zmm7.d = zmm7.d f* zmm4.d
        *(arg1 + 8) = zmm2.d
        zmm7.d = zmm7.d f+ 0.5f
        
        if (not(zmm2.d f<= 3.14159274f))
            zmm2.d = zmm2.d f- 6.28318548f
            *(arg1 + 8) = zmm2.d
        
        zmm0.d = zmm0.d f+ zmm4.d
        *(arg1 + 0xc) = zmm0.d
        
        if (not(zmm0.d f<= 3.14159274f))
            zmm0.d = zmm0.d f- 6.28318548f
            *(arg1 + 0xc) = zmm0.d
        
        zmm0.d = float.s(*(arg1 + 0x68))
        zmm1.d = float.s(*(arg1 + 0x6c))
        zmm1.d = zmm1.d f* zmm5
        zmm1.d = zmm1.d f+ zmm0.d
        *(r8_1 + result + 4) = zmm1.d
        zmm0.d = float.s(*(arg1 + 0x98))
        zmm2.d = float.s(*(arg1 + 0x9c))
        zmm2.d = zmm2.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0.d
        *(result + 4) = zmm2.d
        zmm1 = *(arg1 + 8)
        zmm7 = *(arg1 + 0xc)
        zmm0.d = _mm_and_ps(zmm1, 0x7fffffff).d f* 0.202642351f
        zmm4.d = 0.636619747f f- zmm0.d
        zmm0.d = _mm_and_ps(zmm7, 0x7fffffff).d f* 0.202642351f
        zmm4.d = zmm4.d f* zmm1.d
        zmm5 = 0.636619747f f- zmm0.d
        zmm0 = *(arg1 + 0x10)
        zmm2.d = zmm0.d f+ zmm1.d
        zmm4.d = zmm4.d f+ 0.5f
        *(arg1 + 8) = zmm2.d
        
        if (not(zmm2.d f<= 3.14159274f))
            zmm2.d = zmm2.d f- 6.28318548f
            *(arg1 + 8) = zmm2.d
        
        zmm0.d = zmm0.d f+ zmm7.d
        *(arg1 + 0xc) = zmm0.d
        
        if (not(zmm0.d f<= 3.14159274f))
            zmm0.d = zmm0.d f- 6.28318548f
            *(arg1 + 0xc) = zmm0.d
        
        zmm1 = zx.o(*(arg1 + 0x6c))
        zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x68)))
        zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm4.d
        zmm1.d = zmm1.d f+ zmm0.d
        *(r8_1 + result + 8) = zmm1.d
        zmm0 = zx.o(*(arg1 + 0x98))
        zmm2.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x9c))).d f* (zmm5 f* zmm7.d + 0.5f)
        zmm2.d = zmm2.d f+ _mm_cvtepi32_ps(zmm0).d
        *(result + 8) = zmm2.d
        result += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)

if (rbp s< rsi)
    result = r10 + (rbp << 2)
    int64_t i_2 = rsi - rbp
    int64_t i_1
    
    do
        zmm1 = *(arg1 + 8)
        zmm7 = *(arg1 + 0xc)
        zmm0.d = _mm_and_ps(zmm1, 0x7fffffff).d f* 0.202642351f
        zmm4.d = 0.636619747f f- zmm0.d
        zmm0.d = _mm_and_ps(zmm7, 0x7fffffff).d f* 0.202642351f
        zmm4.d = zmm4.d f* zmm1.d
        zmm5 = 0.636619747f f- zmm0.d
        zmm0 = *(arg1 + 0x10)
        zmm2.d = zmm0.d f+ zmm1.d
        zmm4.d = zmm4.d f+ 0.5f
        *(arg1 + 8) = zmm2.d
        
        if (not(zmm2.d f<= 3.14159274f))
            zmm2.d = zmm2.d f- 6.28318548f
            *(arg1 + 8) = zmm2.d
        
        zmm0.d = zmm0.d f+ zmm7.d
        *(arg1 + 0xc) = zmm0.d
        
        if (not(zmm0.d f<= 3.14159274f))
            zmm0.d = zmm0.d f- 6.28318548f
            *(arg1 + 0xc) = zmm0.d
        
        zmm1 = zx.o(*(arg1 + 0x6c))
        zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x68)))
        zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm4.d
        zmm1.d = zmm1.d f+ zmm0.d
        *(result + r9 - r10) = zmm1.d
        zmm0 = zx.o(*(arg1 + 0x98))
        zmm2.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x9c))).d f* (zmm5 f* zmm7.d + 0.5f)
        zmm2.d = zmm2.d f+ _mm_cvtepi32_ps(zmm0).d
        *result = zmm2.d
        result += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
