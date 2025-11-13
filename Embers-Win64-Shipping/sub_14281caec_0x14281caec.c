// 函数: sub_14281caec
// 地址: 0x14281caec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int32_t rcx = *(arg1 + 0x10)
    
    if (rcx == 3)
        *(arg2 + 8) = *(arg1 + 0x60)
        *arg2 = 1
    else if (rcx != 4)
        *arg2 = 0
        __builtin_memset(&arg2[2], 0, 0x18)
    else
        int64_t rcx_2 = *(arg1 + 0x88)
        int64_t* i = *(arg1 + 0x80)
        *arg2 = 2
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = i
        *(arg2 + 0x18) = rcx_2
        
        for (; i != rcx_2; i = &i[2])
            if (****i != 0 && ***i[1] != 0)
                break
        
        *(arg2 + 0x10) = i
else
    *arg2 = 0
    __builtin_memset(&arg2[2], 0, 0x18)

return arg2
