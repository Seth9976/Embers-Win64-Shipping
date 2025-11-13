// 函数: sub_14265bca0
// 地址: 0x14265bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = (*(arg1 + 0x98)).b

if ((rcx & 2) != 0)
    int32_t r8_1 = *(arg1 + 0x30)
    
    if (r8_1 s> 1 && (rcx & 1) != 0 && arg2 s< r8_1)
        int32_t r9 = arg2 + 1
        int32_t result = (zx.o(0)).d
        float* rcx_3 = (sx.q(arg2) << 5) + *(arg1 + 0x28)
        float* r10 = &rcx_3[8]
        
        if (r9 s< r8_1)
            float zmm1
            float zmm2
            
            if (r8_1 - r9 s>= 4)
                uint64_t rax_6 = zx.q(((r8_1 - r9 - 4) u>> 2) + 1)
                uint64_t i_2 = zx.q(rax_6.d)
                r9 += (rax_6 << 2).d
                uint64_t i
                
                do
                    zmm1 = *r10 - *rcx_3
                    zmm2 = r10[1] - rcx_3[1]
                    float zmm0 = r10[2] - rcx_3[2]
                    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
                    zmm1 = r10[8] - rcx_3[8]
                    float temp0_1 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
                    zmm2 = r10[9] - rcx_3[9]
                    zmm0 = r10[0xa] - rcx_3[0xa]
                    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
                    zmm1 = r10[0x10] - rcx_3[0x10]
                    float temp0_2 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
                    zmm2 = r10[0x11] - rcx_3[0x11]
                    zmm0 = r10[0x12] - rcx_3[0x12]
                    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
                    zmm1 = r10[0x18] - rcx_3[0x18]
                    float temp0_3 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
                    zmm2 = r10[0x19] - rcx_3[0x19]
                    zmm0 = r10[0x1a] - rcx_3[0x1a]
                    r10 -= -0x80
                    rcx_3 -= -0x80
                    result = result f+ temp0_1 f+ temp0_2 f+ temp0_3
                        f+ _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            if (r9 s< r8_1)
                void* rdx = &rcx_3[2]
                void* rax_7 = &r10[2]
                int64_t i_3 = sx.q(r8_1 - r9)
                int64_t i_1
                
                do
                    zmm1 = *rax_7 f- *rdx
                    float zmm3 = *(rax_7 - 4) f- *(rdx - 4)
                    zmm2 = *(rax_7 - 8) f- *(rcx_3 - r10 + rax_7 - 8)
                    rax_7 += 0x20
                    rdx += 0x20
                    result = result f+ _mm_sqrt_ss(0, zmm3 * zmm3 + zmm2 * zmm2 + zmm1 * zmm1)
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        
        return result

return (zx.o(0)).d
