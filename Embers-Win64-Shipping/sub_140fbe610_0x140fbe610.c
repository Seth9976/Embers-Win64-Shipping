// 函数: sub_140fbe610
// 地址: 0x140fbe610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)

if (result == 0)
    return result

float zmm0[0x4] = *(arg1 + 0x94)
zmm0[0] = zmm0[0] * 0.5f
float zmm2[0x4] = *(arg2 + 0x18)
int64_t zmm1 = *(arg2 + 0x1c)
zmm2[0] = zmm2[0] - zmm0[0]
zmm0 = *(arg1 + 0x98)
zmm0[0] = zmm0[0] * 0.5f
zmm1.d = zmm1.d f- zmm0[0]
return sub_140e1c780(result, _mm_unpacklo_ps(zmm2, zmm1)[0].q) __tailcall
