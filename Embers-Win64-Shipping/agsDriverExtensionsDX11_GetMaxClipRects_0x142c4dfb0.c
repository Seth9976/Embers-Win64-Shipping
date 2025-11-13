// 函数: agsDriverExtensionsDX11_GetMaxClipRects
// 地址: 0x142c4dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

if ((*(arg1 + 0x130) & 0x40000) == 0)
    return 6

int64_t* rcx = *(arg1 + 0x178)
*arg2 = (*(*rcx + 0x28))(rcx)
return 0
