// 函数: sub_140e65e90
// 地址: 0x140e65e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2
int64_t* rcx = *(data_143e20d18 + 8)

if (rcx == 0)
    *arg2 = 0x3f800000
    arg2[1] = 0x3f800000
    return result

int32_t arg_18
int32_t arg_20
(*(*rcx + 0x38))(rcx, &arg_18, &arg_20)
uint128_t zmm1 = zx.o(arg_20)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg_18))
zmm1 = _mm_cvtepi32_ps(zmm1)
*result = zmm0.d
result[1] = zmm1.d
return result
