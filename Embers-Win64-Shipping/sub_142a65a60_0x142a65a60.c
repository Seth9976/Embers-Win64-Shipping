// 函数: sub_142a65a60
// 地址: 0x142a65a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (*arg3 s> 0)
    return 0

if (arg1 == 0)
    char rax_19
    
    if (data_144015884 != 2)
        rax_19 = sub_142a85f00(&data_144015884)
    
    if (data_144015884 == 2 || rax_19 == 0)
        int32_t rax_21 = data_144015888
        
        if (rax_21 s> 0)
            *arg3 = rax_21
    else
        sub_142a66040(0, arg3)
        data_144015888 = *arg3
        sub_142a85e80(&data_144015884)
    
    int64_t r8_4 = data_144015860
    *arg2 = data_144015878
    return r8_4

if (arg1 == 1)
    if (data_14401588c != 2 && sub_142a85f00(&data_14401588c) != 0)
        sub_142a66040(1, arg3)
        data_144015890 = *arg3
        sub_142a85e80(&data_14401588c)
        int64_t r8_2 = data_144015868
        *arg2 = data_14401587c
        return r8_2
    
    int32_t rax_15 = data_144015890
    
    if (rax_15 s> 0)
        *arg3 = rax_15
    
    int64_t r8_3 = data_144015868
    *arg2 = data_14401587c
    return r8_3

if (arg1 != 2)
    *arg3 = 1
    *arg2 = 0
    return 0

if (data_144015894 != 2 && sub_142a85f00(&data_144015894) != 0)
    sub_142a66040(2, arg3)
    data_144015898 = *arg3
    sub_142a85e80(&data_144015894)
    int64_t r8 = data_144015870
    *arg2 = data_144015880
    return r8

int32_t rax_7 = data_144015898

if (rax_7 s> 0)
    *arg3 = rax_7

int64_t r8_1 = data_144015870
*arg2 = data_144015880
return r8_1
