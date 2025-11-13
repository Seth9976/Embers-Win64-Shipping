// 函数: sub_140685e70
// 地址: 0x140685e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hLibModule = *(arg1 + 8)

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 8) = 0
