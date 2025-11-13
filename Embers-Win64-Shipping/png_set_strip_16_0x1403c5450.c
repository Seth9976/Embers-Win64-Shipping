// 函数: png_set_strip_16
// 地址: 0x1403c5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    *(arg1 + 0x15c) = (0xfffff9ff & *(arg1 + 0x15c)) | 0x400
