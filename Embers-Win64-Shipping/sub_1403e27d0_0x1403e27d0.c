// 函数: sub_1403e27d0
// 地址: 0x1403e27d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg3 - 1
int64_t result_1 = sx.q(result)

if (result s>= 0)
    if (result_1 + 1 s>= 4)
        uint64_t i_1 = (result_1 + 1) u>> 2
        void* r9_2 = arg1 - 8 + (result_1 << 2)
        void* rdx_1 = arg2 - 4 + (result_1 << 1)
        result_1 -= i_1 << 2
        uint64_t i
        
        do
            int32_t rax_1 = sx.d(*(rdx_1 + 4))
            r9_2 -= 0x10
            rdx_1 -= 8
            *(r9_2 + 0x18) = _mm_cvtepi32_ps(zx.o(rax_1)).d
            *(r9_2 + 0x14) = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_1 + 0xa)))).d
            *(r9_2 + 0x10) = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_1 + 8)))).d
            result = sx.d(*(rdx_1 + 6))
            *(r9_2 + 0xc) = _mm_cvtepi32_ps(zx.o(result)).d
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (result_1 s>= 0)
        int64_t result_2
        
        do
            result = sx.d(*(arg2 + (result_1 << 1)))
            result_2 = result_1
            result_1 -= 1
            *(arg1 + (result_1 << 2) + 4) = _mm_cvtepi32_ps(zx.o(result)).d
        while (result_2 - 1 s>= 0)

return result
