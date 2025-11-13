// 函数: sub_140f769a0
// 地址: 0x140f769a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x7b].b != 0)
    if (sub_140e66040(data_143e29f28).d f> *(arg1 + 0x3fc))
    label_140f769ee:
        
        if (not(zx.o(0).d f!= arg1[0x97].d))
            int32_t rax_3 = (*(*arg1 + 0x268))(arg1)
            uint128_t zmm0 = zx.o(arg1[0x7e])
            int64_t temp0 = _mm_cvtepi32_pd(zx.q(rax_3))
            zmm0.q = zmm0.q f/ temp0
            int64_t rcx_3 = int.q(zmm0.q)
            
            if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm0.q))
                zmm0.q = float.d(rcx_3 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
            
            zmm0.q = zmm0.q f- arg1[0x7a]
            zmm0.q = zmm0.q f* temp0
            return _mm_max_sd(zmm0.q, 0)
    else
        char rax_1 = sub_140f4a5f0(arg1[0x76])
        
        if (rax_1 == 0 && *(arg1 + 0x4e4) != rax_1)
            goto label_140f769ee

return zx.o(arg1[0x7e])
