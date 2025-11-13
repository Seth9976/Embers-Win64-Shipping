// 函数: agsDriverExtensionsDX11_SetViewBroadcastMasks
// 地址: 0x142c4e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

if ((*(arg1 + 0x130) & 0x40000) == 0)
    return 6

int64_t* rcx = *(arg1 + 0x178)
int64_t r9
r9.b = arg4 == 1
int32_t rax_3 = (*(*rcx + 0x20))(rcx, arg2, arg3, r9)
int32_t rax_4 = neg.d(rax_3)
return zx.q(sbb.d(rax_4, rax_4, rax_3 != 0)) & 8
