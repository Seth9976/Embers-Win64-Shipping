// 函数: sub_141dfcbe0
// 地址: 0x141dfcbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
uint128_t zmm6
uint128_t var_18 = zmm6
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t r11_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
int32_t r9 = *(rax_2 + (rcx << 2) + 4)
uint128_t result

if (r9 s>= 2)
    result = *(arg3 + 0x1c)

uint64_t rcx_1
uint128_t zmm2
uint128_t zmm3

if (r9 s< 2 || result.d f<= 0f)
    rcx_1 = 0
else
    uint64_t r9_1 = zx.q(r9 - 1)
    
    if (result.d f< 1f)
        zmm6.d = _mm_cvtepi32_ps(zx.o(r9_1.d)).d f* result.d
        zmm2 = zmm6
        int32_t rcx_3 = int.d(zmm2.d)
        
        if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm2.d))
            zmm2 =
                _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))
        
        rcx_1 = zx.q(r9_1.d)
        int32_t rax_13 = int.d(zmm2.d)
        
        if (rax_13 s<= r9_1.d)
            rcx_1 = zx.q(rax_13)
        
        if (*(arg3 + 4) != 1)
            zmm6.d = zmm6.d f- zmm2.d
        else
            zmm6 = zx.o(0)
        
        int32_t rax_14 = (rcx_1 + 1).d
        
        if (rax_14 s<= r9_1.d)
            r9_1 = zx.q(rax_14)
        
        if (rcx_1.d != r9_1.d)
            int64_t rcx_5 = sx.q((rcx_1 * 3).d << 2)
            int64_t rdx = sx.q((r9_1 * 3).d << 2)
            int32_t rax_22 = zx.d(*(rcx_5 + r11_1 + 2)) - 0x7fff
            result.d = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_5 + r11_1)) - 0x7fff)).d f* 0.00390636921f
            int32_t rax_24 = zx.d(*(rcx_5 + r11_1 + 4)) - 0x7fff
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_22))
            int32_t rax_26 = zx.d(*(rdx + r11_1)) - 0x7fff
            zmm1.d = zmm1.d f* 0.00390636921f
            zmm3 = _mm_cvtepi32_ps(zx.o(rax_24))
            uint32_t rax_27 = zx.d(*(rdx + r11_1 + 2))
            zmm3.d = zmm3.d f* 0.00390636921f
            uint128_t zmm4
            zmm4.d = _mm_cvtepi32_ps(zx.o(rax_26)).d f* 0.00390636921f
            zmm4.d = zmm4.d f- result.d
            int32_t rax_30 = zx.d(*(rdx + r11_1 + 4)) - 0x7fff
            zmm4.d = zmm4.d f* zmm6.d
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_27 - 0x7fff)).d f* 0.00390636921f
            zmm4.d = zmm4.d f+ result.d
            zmm2.d = zmm2.d f- zmm1.d
            result.d = _mm_cvtepi32_ps(zx.o(rax_30)).d f* 0.00390636921f
            result.d = result.d f- zmm3.d
            zmm2.d = zmm2.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm1.d
            result.d = result.d f* zmm6.d
            result.d = result.d f+ zmm3.d
            zmm2 = _mm_unpacklo_ps(zmm2, 0)
            *(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, result.q), zmm2.q)
            return result
    else
        rcx_1 = zx.q(r9_1.d)

int64_t rcx_2 = sx.q((rcx_1 * 3).d << 2)
int32_t rax_8 = zx.d(*(rcx_2 + r11_1 + 2)) - 0x7fff
zmm3.d = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_2 + r11_1)) - 0x7fff)).d f* 0.00390636921f
int32_t rax_10 = zx.d(*(rcx_2 + r11_1 + 4)) - 0x7fff
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* 0.00390636921f
result.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* 0.00390636921f
zmm2 = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result.q), zmm2.q)
return result
