// 函数: sub_1420b1200
// 地址: 0x1420b1200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *arg2
float zmm6[0x4] = *(arg1 + 0x14)

if (*(arg1 + 0x1c) == 0)
    if (not(zmm0 f< zmm6[0]))
        zmm6 = _mm_min_ss(arg1[3].d[0], zmm0)
    
    int64_t rdi_1 = sx.q(arg1[1].d)
    int32_t rax_2 = (rdi_1 + 1).d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1406105e0(arg1)
    
    int64_t rdx_3 = *arg1
    memmove(rdx_3 + 4, rdx_3, (rdi_1 << 2).d)
    **arg1 = zmm6[0]
else
    *(arg1 + 0x14) = _mm_min_ss(zmm0, zmm6[0])
    arg1[3].d = __maxss_xmmss_memss(arg1[3].d, *arg2)
    int64_t rsi_1 = sx.q(arg1[1].d)
    int32_t rax = (rsi_1 + 1).d
    arg1[1].d = rax
    
    if (rax s> *(arg1 + 0xc))
        sub_1406105e0(arg1)
    
    int64_t rdx_1 = *arg1
    memmove(rdx_1 + 4, rdx_1, (rsi_1 << 2).d)
    **arg1 = *arg2

int32_t result = arg1[1].d
float zmm1 = arg1[2].d
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(result))

if (not(zmm0_1.d f<= zmm1))
    zmm0_1.d = zmm0_1.d f- zmm1
    int32_t r10_1 = int.d(zmm1)
    int32_t rdi_2 = int.d(zmm0_1.d)
    
    if (rdi_2 != 0)
        int32_t rcx_4 = result - rdi_2
        
        if (rcx_4 != r10_1)
            int64_t r9_1 = *arg1
            memmove(r9_1 + (sx.q(r10_1) << 2), r9_1 + (sx.q(rdi_2 + r10_1) << 2), 
                (rcx_4 - r10_1) << 2)
            result = arg1[1].d
        
        arg1[1].d = result - rdi_2
        return sub_1405dac90(arg1)

return result
