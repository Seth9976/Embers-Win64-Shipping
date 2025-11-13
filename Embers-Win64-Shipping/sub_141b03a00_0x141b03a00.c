// 函数: sub_141b03a00
// 地址: 0x141b03a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x2d8))()

if (result != 0)
    void* rax_1 = sub_141b36de0()
    void* rdx = result[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rax_5 = sub_140d226f0(arg1, sub_141a6e000())
        double zmm1[0x2] = _mm_cvtps_pd((*(arg3 + 0x30))[0])
        int64_t rax_6 = *(rax_5 + 0x108)
        int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rax_6.d))
        zmm1[0] = zmm1[0] f* temp0_1
        int64_t temp0_2 = _mm_cvtepi32_pd(zx.q((rax_6 u>> 0x20).d))
        zmm1[0] = zmm1[0] f/ temp0_2
        int64_t rcx_2 = int.q(zmm1[0])
        
        if (rcx_2 != -0x8000000000000000 && not(float.d(rcx_2) f== zmm1[0]))
            uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1[0]))
            zmm1 = zx.o(0)
            zmm1[0] = float.d(rcx_2 - (zx.q(temp0_4) & 1))
        
        (*(*result + 0x2b0))(result, &arg1[0xb], zx.q(arg2), zx.q(int.d(zmm1[0])), 
            (*(*arg1 + 0x2a8))(arg1, zmm1))
        result[0x1c] = arg3
        int64_t r8_1 = *arg1
        (*(r8_1 + 0x2d0))(arg1, result, r8_1)
        return result

return 0
