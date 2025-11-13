// 函数: agsDriverExtensionsDX11_IASetPrimitiveTopology
// 地址: 0x142c4e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *(arg1 + 0x120) == 0)
    return 2

int64_t* r8 = *(arg1 + 0x138)

if (r8 == 0 || (arg2 == 9 && (*(arg1 + 0x130) & 2) == 0))
    return 6

int32_t rax_1 = (*(*r8 + 0x28))(r8)
int32_t rax_2 = neg.d(rax_1)
return zx.q(sbb.d(rax_2, rax_2, rax_1 != 0)) & 8
