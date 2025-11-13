// 函数: agsDriverExtensionsDX12_PopMarker
// 地址: 0x142c4faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

int64_t* rcx = *(arg1 + 0x1d8)

if (rcx == 0)
    return zx.q((rcx + 6).d)

(*(*rcx + 0x28))(rcx)
return 0
