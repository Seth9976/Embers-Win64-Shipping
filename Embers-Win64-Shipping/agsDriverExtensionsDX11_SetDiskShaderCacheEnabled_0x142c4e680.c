// 函数: agsDriverExtensionsDX11_SetDiskShaderCacheEnabled
// 地址: 0x142c4e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

if ((*(arg1 + 0x130) & 0x20000) == 0)
    return 6

int64_t* rcx = *(arg1 + 0x170)
int64_t rdx
rdx.b = arg2 == 1
int32_t rax_3 = (*(*rcx + 0x30))(rcx, rdx)
int32_t rax_4 = neg.d(rax_3)
return zx.q(sbb.d(rax_4, rax_4, rax_3 != 0)) & 8
