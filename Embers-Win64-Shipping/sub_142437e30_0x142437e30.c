// 函数: sub_142437e30
// 地址: 0x142437e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x30)

if (rcx == 0)
    return 0

int64_t result = sub_1420e4e60(rcx)

if (arg2 == 0 || *(arg1 + 0xa0) s<= 0)
    return result

void* rcx_1 = **(arg1 + 0x98)

if (rcx_1 != 0 && sub_142427880(rcx_1) != 0)
    void* rcx_3 = *(**(arg1 + 0x98) + 0x128)
    
    if (rcx_3 != 0)
        return sub_1420e4e60(rcx_3)

return result
