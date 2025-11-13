// 函数: sub_14200cd50
// 地址: 0x14200cd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f3f3c4 s> 0)
    int32_t r9_1 = *arg3
    
    if (r9_1 != data_143dbb188 || arg3[1] != data_143dbb18c || arg3[2] != data_143dbb190)
        uint128_t zmm1 = zx.o(arg3[1])
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r9_1))
        zmm1 = _mm_cvtepi32_ps(zmm1)
        zmm0.d = zmm0.d f+ *arg2
        zmm1.d = zmm1.d f+ arg2[1]
        *arg1 = zmm0.d
        zmm0 = _mm_cvtepi32_ps(zx.o(arg3[2]))
        arg1[1] = zmm1.d
        zmm0.d = zmm0.d f+ arg2[2]
        arg1[2] = zmm0.d
        return arg1

int32_t rax_4 = arg2[2]
*arg1 = *arg2
arg1[2] = rax_4
return arg1
