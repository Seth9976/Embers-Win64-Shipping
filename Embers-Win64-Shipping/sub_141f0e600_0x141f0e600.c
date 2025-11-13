// 函数: sub_141f0e600
// 地址: 0x141f0e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ede5c0(arg1)
void* rcx = *(arg1 + 0x1f0)

if (rcx != 0)
    int32_t var_10_1 = 0x3f800000
    result = 0x3f800000
    *(rcx + 0x420) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    *(rcx + 0x428) = 0x3f800000

return result
