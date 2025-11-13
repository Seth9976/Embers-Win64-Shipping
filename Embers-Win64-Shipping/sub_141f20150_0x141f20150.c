// 函数: sub_141f20150
// 地址: 0x141f20150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xa8)

if (result != 0)
label_141f2016f:
    int64_t* rcx = *(result + 0x1b0)
    
    if (rcx != 0)
        jump(*(*rcx + 0x28))
else
    result = sub_141ee69e0(arg1)
    
    if (result != 0)
        goto label_141f2016f

return result
