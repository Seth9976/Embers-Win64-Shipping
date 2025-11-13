// 函数: sub_1429da1d0
// 地址: 0x1429da1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 == 0)
    result = 8
else if (arg2 == 0)
    if (arg3 == 0)
        goto label_1429da200
    
    result = 8
else if (arg3 == 0)
    result = 8
else
label_1429da200:
    int64_t r10_1 = *(arg1 + 8)
    int64_t rcx
    
    if (r10_1 != 0)
        rcx = *(arg1 + 0x30)
    
    if (r10_1 == 0 || rcx == 0)
        result = 1
    else
        int32_t var_18_1 = arg4
        result = (*(r10_1 + 0x38))(rcx)

if (arg1 != 0)
    *(arg1 + 0x10) = result

return result
