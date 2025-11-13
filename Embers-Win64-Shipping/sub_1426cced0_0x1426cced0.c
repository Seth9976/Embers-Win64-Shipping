// 函数: sub_1426cced0
// 地址: 0x1426cced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f7200c * 0xbb38435 + 0x3619636b
data_143f7200c = rax
uint128_t zmm0
zmm0.d = (rax u>> 9 | 0x3f800000).d f- 1f
float zmm2 = (*(arg1 + 0x44) f- *(arg1 + 0x40)) f* zmm0.d f+ *(arg1 + 0x40)
int32_t rdx_1 = int.d(zmm2 + zmm2 + 0.5f) s>> 1
*(arg1 + 0x34) = rdx_1
int32_t result
result.b = rdx_1 != 0
bool cond:1 = (*(arg1 + 0x48) & 1) == 0
*(arg1 + 0x38) = result.b

if (cond:1)
    *(arg1 + 0x30) = zmm2
    return result

*(arg1 + 0x30) = _mm_cvtepi32_ps(zx.o(rdx_1)).d
return result
