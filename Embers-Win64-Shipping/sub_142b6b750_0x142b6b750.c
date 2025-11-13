// 函数: sub_142b6b750
// 地址: 0x142b6b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *arg4
int32_t* r11_1

if (arg6 != 0)
    r11_1 = *arg6

if (arg6 != 0 && r11_1 != 0)
    if (arg3 s> 0)
        while (r10 u< arg5)
            arg3 -= 1
            *r10 = *arg2
            arg2 = &arg2[1]
            *r11_1 = arg7
            r10 = &r10[1]
            r11_1 = &r11_1[1]
            
            if (arg3 s<= 0)
                break
    
    *arg6 = r11_1
else if (arg3 s> 0)
    while (r10 u< arg5)
        arg3 -= 1
        *r10 = *arg2
        arg2 = &arg2[1]
        r10 = &r10[1]
        
        if (arg3 s<= 0)
            break

*arg4 = r10

if (arg3 s<= 0)
    return 

if (arg1 != 0)
    *(arg1 + 0x5d) = arg3.b
    void* rcx_3 = arg1 + 0x90 - arg2
    
    do
        arg3 -= 1
        *(rcx_3 + arg2) = *arg2
        arg2 = &arg2[1]
    while (arg3 s> 0)

*arg8 = 0xf
