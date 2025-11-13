// 函数: sub_140380790
// 地址: 0x140380790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_3 = zx.q(arg6)
int64_t rdi = sx.q(arg5)
int64_t rdx = 0
uint128_t result = _mm_cvtepi32_ps(zx.o(arg7))
uint128_t zmm5
zmm5.d = _mm_cvtepi32_ps(zx.o(arg2)).d f* 4f
zmm5.d = zmm5.d f/ result.d

if (i_3.d s> 0)
    uint64_t i_1 = zx.q(i_3.d)
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        int64_t r11_1 = 0
        float zmm1
        float zmm2
        uint128_t result_1
        
        if (rdi s>= 4)
            int64_t rcx = sx.q(i_3.d)
            int64_t r15_1 = rcx << 2
            int32_t* rbx_1 = arg3 + ((rcx + rdx) << 2)
            int64_t j_2 = ((rdi - 4) u>> 2) + 1
            r11_1 = j_2 << 2
            int64_t j
            
            do
                zmm2 = *(arg4 + (rdx << 3) + 4)
                result_1.d = (*(arg1 - r15_1 - arg3 + rbx_1)).d f- *(arg4 + (rdx << 3))
                zmm1 = result_1.d
                result = result_1
                result_1.d = result_1.d f- zmm2
                result.d = result.d f* zmm5.d
                result.d = result.d f+ *(arg4 + (rdx << 3))
                result.d = result.d f+ 1e-30f
                *(arg4 + (rdx << 3)) = result.d
                *(arg4 + (rdx << 3) + 4) = (zmm1 - zmm2) f* zmm5.d + zmm2 + 1e-30f
                rbx_1[neg.q(rcx)] = result_1.d
                result_1.d = (*(arg1 - arg3 + rbx_1)).d f- *(arg4 + (rdx << 3))
                zmm2 = *(arg4 + (rdx << 3) + 4)
                zmm1 = result_1.d - zmm2
                result.d = result_1.d f* zmm5.d
                result.d = result.d f+ *(arg4 + (rdx << 3))
                result_1.d = result_1.d f- zmm2
                result.d = result.d f+ 1e-30f
                *(arg4 + (rdx << 3)) = result.d
                *(arg4 + (rdx << 3) + 4) = zmm1 f* zmm5.d + zmm2 + 1e-30f
                *rbx_1 = result_1.d
                zmm2 = *(arg4 + (rdx << 3) + 4)
                uint128_t zmm4
                zmm4.d = (*(r15_1 - arg3 + arg1 + rbx_1)).d f- *(arg4 + (rdx << 3))
                zmm1 = zmm4.d - zmm2
                result.d = zmm4.d f* zmm5.d
                result.d = result.d f+ *(arg4 + (rdx << 3))
                zmm4.d = zmm4.d f- zmm2
                result.d = result.d f+ 1e-30f
                *(arg4 + (rdx << 3)) = result.d
                *(arg4 + (rdx << 3) + 4) = zmm1 f* zmm5.d + zmm2 + 1e-30f
                rbx_1[rcx] = zmm4.d
                result_1.d = (*((rcx << 3) - arg3 + arg1 + rbx_1)).d f- *(arg4 + (rdx << 3))
                zmm2 = *(arg4 + (rdx << 3) + 4)
                zmm1 = result_1.d - zmm2
                result.d = result_1.d f* zmm5.d
                result.d = result.d f+ *(arg4 + (rdx << 3))
                result_1.d = result_1.d f- zmm2
                result.d = result.d f+ 1e-30f
                *(arg4 + (rdx << 3)) = result.d
                *(arg4 + (rdx << 3) + 4) = zmm1 f* zmm5.d + zmm2 + 1e-30f
                rbx_1[rcx * 2] = result_1.d
                rbx_1 = &rbx_1[rcx * 4]
                j = j_2
                j_2 -= 1
            while (j != 1)
            rdi = sx.q(arg5)
            i_3 = zx.q(arg6)
            i_1 = i_2
        
        if (r11_1 s< rdi)
            int64_t rax_10 = sx.q(i_3.d)
            int32_t* rcx_2 = arg3 + ((rax_10 * r11_1 + rdx) << 2)
            int64_t j_3 = rdi - r11_1
            int64_t j_1
            
            do
                zmm2 = *(arg4 + (rdx << 3) + 4)
                result_1.d = (*(rcx_2 + arg1 - arg3)).d f- *(arg4 + (rdx << 3))
                zmm1 = result_1.d
                result = result_1
                result_1.d = result_1.d f- zmm2
                result.d = result.d f* zmm5.d
                result.d = result.d f+ *(arg4 + (rdx << 3))
                result.d = result.d f+ 1e-30f
                *(arg4 + (rdx << 3)) = result.d
                *(arg4 + (rdx << 3) + 4) = (zmm1 - zmm2) f* zmm5.d + zmm2 + 1e-30f
                *rcx_2 = result_1.d
                rcx_2 = &rcx_2[rax_10]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        rdx += 1
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
