// 函数: sub_142c7a980
// 地址: 0x142c7a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
void* rcx = *arg1
int32_t result = sub_142c51e30(rcx, *(rcx + 0x4e38), 0, *(rcx + 0x250) + 8, nullptr, 1)

if (result == 0)
    void* rcx_1 = *arg1
    char* rdx_1 = *(rcx_1 + 0x650)
    
    if (rdx_1 != 0)
        result = sub_142c51e30(rcx_1, rdx_1, 0, *(rcx_1 + 0x250) + 0x10, nullptr, 1)
    
    if (rdx_1 == 0 || result == 0)
        return sub_142c7b4c0(arg1, arg2)

return result
