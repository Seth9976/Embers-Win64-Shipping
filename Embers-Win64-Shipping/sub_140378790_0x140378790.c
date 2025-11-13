// 函数: sub_140378790
// 地址: 0x140378790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t pv = *(arg1 + 0x18)

if (pv != 0)
    CoTaskMemFree(pv)
    *(arg1 + 0x18) = 0
