// 函数: png_set_expand_16
// 地址: 0x1403c6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    *(arg1 + 0x15c) = (0xfdffe9ff & *(arg1 + 0x15c)) | 0x2001200
    *(arg1 + 0x158) &= 0xbf
