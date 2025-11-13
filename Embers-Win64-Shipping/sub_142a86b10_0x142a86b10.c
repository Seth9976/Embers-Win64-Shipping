// 函数: sub_142a86b10
// 地址: 0x142a86b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg2
char* rbx = arg1
int64_t result

if (arg1 == arg2)
    result.b = 1
    return result

if (arg1 == 0 || arg2 == 0)
    result.b = 0
    return result

if (*arg1 != 0)
    do
        if (sub_142a86220(zx.d(*rbx)) != sub_142a86220(zx.d(*rsi)))
            break
        
        rbx = &rbx[1]
        rsi = &rsi[1]
    while (*rbx != 0)

return *rbx == *rsi
