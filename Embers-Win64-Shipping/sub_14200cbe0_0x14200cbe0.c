// 函数: sub_14200cbe0
// 地址: 0x14200cbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f3f3c4 s> 0)
    int32_t r9_1 = *arg3
    
    if (r9_1 != data_143dbb188 || arg3[1] != data_143dbb18c || arg3[2] != data_143dbb190)
        uint128_t zmm1 = *arg2
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(arg3[1]))
        zmm1.d = zmm1.d f- _mm_cvtepi32_ps(zx.o(r9_1)).d
        uint128_t zmm0
        zmm0.d = (*(arg2 + 4)).d f- zmm2.d
        zmm2 = *(arg2 + 8)
        *arg1 = zmm1.d
        zmm1 = _mm_cvtepi32_ps(zx.o(arg3[2]))
        *(arg1 + 4) = zmm0.d
        zmm2.d = zmm2.d f- zmm1.d
        arg1[1].d = zmm2.d
        return arg1

int32_t rax_4 = *(arg2 + 8)
*arg1 = *arg2
arg1[1].d = rax_4
return arg1
