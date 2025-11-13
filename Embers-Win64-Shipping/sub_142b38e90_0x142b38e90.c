// 函数: sub_142b38e90
// 地址: 0x142b38e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 9
arg1[1] = 0x3b9ac9ff
arg1[2] = 0xc4653601
arg1[3] = 2
*(arg1 + 0x10) = 0x22df
arg1[6].b = 0

if (arg2 != 0)
    if (arg2 != 0x20)
        if (arg2 == 0x40)
            *arg1 = 0x10
            arg1[1] = 0x180
            arg1[2] = 0xfffffe81
            arg1[6].b = 1
            *(arg1 + 0xc) = 3
            return arg1
        
        if (arg2 != 0x80)
            arg1[5] = 0x80
            return arg1
        
        *arg1 = 0x22
        arg1[1] = 0x1800
        arg1[2] = 0xffffe801
        *(arg1 + 0xc) = 3
        arg1[6].b = 1
        return arg1
    
    *arg1 = 7
    arg1[1] = 0x60
    arg1[2] = 0xffffffa1
    arg1[6].b = 1
    *(arg1 + 0xc) = 3

return arg1
