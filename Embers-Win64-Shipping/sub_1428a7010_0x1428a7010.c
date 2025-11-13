// 函数: sub_1428a7010
// 地址: 0x1428a7010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t r10 = 0

if (arg3 != 0)
    while (*arg1 != 0)
        r10 += 1
        arg1 = &arg1[1]
        int64_t temp0_1 = arg3
        arg3 -= 1
        
        if (temp0_1 == 1)
            break

int64_t r11 = 0

for (; arg3 u> 1; arg3 -= 1)
    char r9_1 = *arg2
    
    if (r9_1 == 0)
        break
    
    *arg1 = r9_1
    arg2 = &arg2[1]
    arg1 = &arg1[1]
    r11 += 1

if (arg3 != 0)
    *arg1 = 0

if (*arg2 != 0)
    while (i u< 0x80000000)
        arg2 = &arg2[1]
        i += 1
        
        if (*arg2 == 0)
            break

return (zx.q(i) & 0x7fffffff) + r11 + r10
