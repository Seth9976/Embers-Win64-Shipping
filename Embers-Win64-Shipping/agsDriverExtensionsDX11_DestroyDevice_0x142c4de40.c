// 函数: agsDriverExtensionsDX11_DestroyDevice
// 地址: 0x142c4de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

if (*(arg1 + 0x120) != arg2)
    return 1

sub_142c4d240(arg1)

if (arg4 != 0)
    int32_t rax_3 = (*(*arg4 + 0x10))(arg4)
    
    if (arg5 != 0)
        *arg5 = rax_3

int32_t rax_5 = (*(*arg2 + 0x10))(arg2)

if (arg3 != 0)
    *arg3 = rax_5

HMODULE hLibModule = *(arg1 + 0x110)
*(arg1 + 0x120) = 0

if (hLibModule != 0)
    FreeLibrary(hLibModule)
    *(arg1 + 0x110) = 0

HMODULE hLibModule_1 = *(arg1 + 0x118)

if (hLibModule_1 != 0)
    FreeLibrary(hLibModule_1)
    *(arg1 + 0x118) = 0

HMODULE hLibModule_2 = *(arg1 + 0x108)

if (hLibModule_2 != 0)
    FreeLibrary(hLibModule_2)
    *(arg1 + 0x108) = 0

return 0
