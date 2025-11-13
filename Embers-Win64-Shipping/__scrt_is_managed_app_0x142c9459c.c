// 函数: __scrt_is_managed_app
// 地址: 0x142c9459c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE result = GetModuleHandleW(nullptr)
int32_t* rcx_2

if (result != 0 && result->unused.w == 0x5a4d)
    rcx_2 = result * 2

if (result == 0 || result->unused.w != 0x5a4d || *rcx_2 != 0x4550 || rcx_2[6].w != 0x20b
        || rcx_2[0x21] u<= 0xe || rcx_2[0x3e] == 0)
    result.b = 0
else
    result.b = 1

return result
