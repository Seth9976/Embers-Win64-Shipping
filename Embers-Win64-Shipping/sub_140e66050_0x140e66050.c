// 函数: sub_140e66050
// 地址: 0x140e66050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
uint128_t zmm0
rax, zmm0 = sub_140d9f540(arg1 + 0x3c0, arg2)

if (rax == 0)
    return zx.o(0)

float zmm0_1 = sub_140da85e0(arg1 + 0x3c0, zmm0)
return (sinf(zmm0_1 * 34.5575218f) + 1f) * 0.5f * (1f - zmm0_1)
