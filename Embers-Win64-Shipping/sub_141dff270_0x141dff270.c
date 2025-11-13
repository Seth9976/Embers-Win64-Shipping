// 函数: sub_141dff270
// 地址: 0x141dff270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg3 + 0x10)
int64_t r9 = sx.q((arg4 << 2).d)
uint128_t zmm6
uint128_t var_18 = zmm6
int64_t rax_1 = *(rcx + 0x10)
int64_t r11_1 = sx.q(*(rax_1 + (r9 << 2))) + *(rcx + 0x38)
int32_t r10 = *(rax_1 + (r9 << 2) + 4)
uint128_t result

if (r10 s>= 2)
    result = *(arg3 + 0x1c)

uint64_t rcx_1
uint128_t zmm2
uint128_t zmm3

if (r10 s< 2 || result.d f<= 0f)
    rcx_1 = 0
else
    uint64_t r10_1 = zx.q(r10 - 1)
    
    if (result.d f< 1f)
        zmm6.d = _mm_cvtepi32_ps(zx.o(r10_1.d)).d f* result.d
        zmm2 = zmm6
        int32_t rcx_3 = int.d(zmm2.d)
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm2.d))
            zmm2 =
                _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
        
        rcx_1 = zx.q(r10_1.d)
        int32_t rax_12 = int.d(zmm2.d)
        
        if (rax_12 s<= r10_1.d)
            rcx_1 = zx.q(rax_12)
        
        if (*(arg3 + 4) != 1)
            zmm6.d = zmm6.d f- zmm2.d
        else
            zmm6 = zx.o(0)
        
        int32_t rax_13 = (rcx_1 + 1).d
        
        if (rax_13 s<= r10_1.d)
            r10_1 = zx.q(rax_13)
        
        if (rcx_1.d != r10_1.d)
            int64_t rcx_5 = sx.q((rcx_1 * 3).d << 2)
            int64_t rdx = sx.q((r10_1 * 3).d << 2)
            int32_t rax_21 = zx.d(*(rcx_5 + r11_1 + 2)) - 0x7fff
            result.d = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_5 + r11_1)) - 0x7fff)).d f* 0.00390636921f
            int32_t rax_23 = zx.d(*(rcx_5 + r11_1 + 4)) - 0x7fff
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_21))
            int32_t rax_25 = zx.d(*(rdx + r11_1)) - 0x7fff
            zmm1.d = zmm1.d f* 0.00390636921f
            zmm3 = _mm_cvtepi32_ps(zx.o(rax_23))
            uint32_t rax_26 = zx.d(*(rdx + r11_1 + 2))
            zmm3.d = zmm3.d f* 0.00390636921f
            uint128_t zmm4
            zmm4.d = _mm_cvtepi32_ps(zx.o(rax_25)).d f* 0.00390636921f
            zmm4.d = zmm4.d f- result.d
            int32_t rax_29 = zx.d(*(rdx + r11_1 + 4)) - 0x7fff
            zmm4.d = zmm4.d f* zmm6.d
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_26 - 0x7fff)).d f* 0.00390636921f
            zmm4.d = zmm4.d f+ result.d
            zmm2.d = zmm2.d f- zmm1.d
            result.d = _mm_cvtepi32_ps(zx.o(rax_29)).d f* 0.00390636921f
            result.d = result.d f- zmm3.d
            zmm2.d = zmm2.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm1.d
            result.d = result.d f* zmm6.d
            result.d = result.d f+ zmm3.d
            zmm2 = _mm_unpacklo_ps(zmm2, 0)
            *(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, result.q), zmm2.q)
            return result
    else
        rcx_1 = zx.q(r10_1.d)

int64_t rcx_2 = sx.q((rcx_1 * 3).d << 2)
int32_t rax_7 = zx.d(*(rcx_2 + r11_1 + 2)) - 0x7fff
zmm3.d = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_2 + r11_1)) - 0x7fff)).d f* 0.00390636921f
int32_t rax_9 = zx.d(*(rcx_2 + r11_1 + 4)) - 0x7fff
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_7)).d f* 0.00390636921f
result.d = _mm_cvtepi32_ps(zx.o(rax_9)).d f* 0.00390636921f
zmm2 = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result.q), zmm2.q)
return result
