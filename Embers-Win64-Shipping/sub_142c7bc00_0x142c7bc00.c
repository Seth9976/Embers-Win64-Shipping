// 函数: sub_142c7bc00
// 地址: 0x142c7bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
void* rcx = *arg1
char* rdx = *(rcx + 0x650)

if (rdx != 0)
    int32_t result = sub_142c51e30(rcx, rdx, 0, *(rcx + 0x250) + 8, nullptr, 1)
    
    if (result != 0)
        return result

return sub_142c7c810(arg1, arg2)
