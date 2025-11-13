// 函数: sub_141b03b50
// 地址: 0x141b03b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x2d8))()

if (result != 0)
    void* rax_1 = sub_141b3a320()
    void* rdx = result[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rax_5 = sub_140d226f0(arg1, sub_141a6e000())
        int64_t rbp = *result
        int64_t rbx = *(rax_5 + 0x108)
        char rax_7 = (*(*arg1 + 0x2a8))(arg1)
        int64_t temp0 = _mm_cvtepi32_pd(zx.q(rbx.d))
        uint128_t zmm2
        zmm2.q = 0x4014000000000000 f/ _mm_cvtepi32_pd(zx.q((rbx u>> 0x20).d))
        zmm2.q = zmm2.q f* temp0
        int64_t rcx_5 = int.q(zmm2.q)
        
        if (rcx_5 != -0x8000000000000000 && not(float.d(rcx_5) f== zmm2.q))
            zmm2.q = float.d(rcx_5 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))
        
        (*(rbp + 0x2b0))(result, &arg1[0xb], zx.q(arg2), zx.q(int.d(zmm2.q)), rax_7)
        result[0x1c] = arg3
        int64_t r8_3 = *arg1
        (*(r8_3 + 0x2d0))(arg1, result, r8_3)
        return result

return 0
