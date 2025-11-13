// 函数: sub_140409a10
// 地址: 0x140409a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rdi = sx.q(arg2)
int64_t r13 = sx.q(arg3)

if (rdi s< r13)
    result = arg5
    void* rbx_1 = result + (rdi << 2)
    
    do
        if (*rbx_1 s> 0)
            int64_t i = 0
            
            do
                result = sub_1403f7340(arg6, *rbx_1)
                int32_t rdx_1 = 1 << (0xe - (*rbx_1).b)
                int64_t r8_2 = sx.q(*(arg1 + 8)) * i + rdi
                i += 1
                uint128_t zmm0
                zmm0.d = _mm_cvtepi32_ps(zx.o(result.d)).d f+ 0.5f
                uint128_t zmm1
                zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* zmm0.d
                zmm1.d = zmm1.d f* 6.10351562e-05f
                zmm1.d = zmm1.d f- 0.5f
                zmm1.d = zmm1.d f+ *(arg4 + (r8_2 << 2))
                *(arg4 + (r8_2 << 2)) = zmm1.d
            while (i s< sx.q(arg7))
        
        rdi += 1
        rbx_1 += 4
    while (rdi s< r13)

return result
