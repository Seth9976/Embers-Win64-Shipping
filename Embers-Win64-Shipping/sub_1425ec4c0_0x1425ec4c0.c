// 函数: sub_1425ec4c0
// 地址: 0x1425ec4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 7).d)

int32_t rcx = *arg1

if (rcx == 0xa || rcx == 0xb)
    CoTaskMemFree(*(arg1 + 8))
else if (rcx == 0xc)
    int64_t* rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 8))(rcx_3)
        *(arg1 + 8) = 0
        *arg1 = 0
        return 0

*arg1 = 0
return 0
