// 函数: sub_142c5ba10
// 地址: 0x142c5ba10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx_1 = *arg1
char* result = *(rcx_1 + 0xd0)

if (result != 0 && (*result & 0x10) != 0)
    return sub_142c52530(rcx_1, 4, 2) __tailcall

return result
