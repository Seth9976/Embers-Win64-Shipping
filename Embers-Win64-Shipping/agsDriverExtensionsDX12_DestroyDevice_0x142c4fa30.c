// 函数: agsDriverExtensionsDX12_DestroyDevice
// 地址: 0x142c4fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

if (*(arg1 + 0x1b0) != arg2)
    return 1

sub_142c4ec80(arg1)
int32_t rax_2 = (*(*arg2 + 0x10))(arg2)

if (arg3 != 0)
    *arg3 = rax_2

HMODULE hLibModule = *(arg1 + 0x1a0)
*(arg1 + 0x1b0) = 0

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 0x1a0) = 0

HMODULE hLibModule_1 = *(arg1 + 0x1a8)

if (hLibModule_1 != 0)
    FreeLibrary(hLibModule_1)
    *(arg1 + 0x1a8) = 0

return 0
