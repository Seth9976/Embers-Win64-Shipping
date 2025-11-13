// 函数: sub_140f0ce20
// 地址: 0x140f0ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x338) == 0)
label_140f0ce98:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx = *(arg1 + 0x330)
    
    if (rcx == 0)
        goto label_140f0ce98
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140f0ce98
    
    if (*(arg1 + 0x338) == 0)
        (*(*nullptr + 0x48))(0, arg2, arg3, arg4)
    else
        int64_t* rcx_1 = *(arg1 + 0x330)
        (*(*rcx_1 + 0x48))(rcx_1, arg2, arg3, arg4)

return arg2
