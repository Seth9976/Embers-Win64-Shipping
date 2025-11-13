// 函数: sub_142af5540
// 地址: 0x142af5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg2
char r9 = 0
char* r11 = arg1

if (i == 0)
    *arg1 = 0
    return arg1

do
    arg2 = &arg2[1]
    char r10
    
    if (i s< 0)
        r10 = 0
    else
        r10 = *(zx.q(i) + &data_14365d260)
    
    uint32_t rax_2 = zx.d(r10)
    
    if (r10 == 0)
        r9 = 0
    else if (rax_2 == 1)
        char rax_4
        
        if (r9 == 0)
            rax_4 = *arg2
        
        if (r9 != 0 || rax_4 s< 0 || *(zx.q(rax_4) + &data_14365d260) - 1 u> 1)
            *r11 = i
            r11 = &r11[1]
    else if (rax_2 == 2)
        *r11 = i
        r9 = 1
        r11 = &r11[1]
    else
        r9 = 0
        *r11 = r10
        r11 = &r11[1]
    
    i = *arg2
while (i != 0)

*r11 = i
return arg1
