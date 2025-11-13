// 函数: sub_142a86ba0
// 地址: 0x142a86ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg1 == arg2)
    rax.b = 1
    return rax

if (arg1 == 0 || arg2 == 0)
    rax.b = 0
    return rax

int16_t i = *arg1

if (i != 0)
    while (i == *arg2)
        i = arg1[1]
        arg1 = &arg1[1]
        arg2 = &arg2[1]
        
        if (i == 0)
            break

int16_t rax_1
rax_1.b = *arg1 == *arg2
return rax_1
