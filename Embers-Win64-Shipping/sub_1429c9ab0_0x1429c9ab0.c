// 函数: sub_1429c9ab0
// 地址: 0x1429c9ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t r9 = 0
uint64_t r10_3 = (arg2 - arg1 + 1) u>> 1

if (arg1 u> arg2)
    r10_3 = 0

if (r10_3 != 0)
    int16_t* rcx = arg1 - arg3
    
    do
        if (arg3 != 0)
            *arg3 = *(rcx + arg3)
        
        arg3 = &arg3[1]
        r9 += 1
    while (r9 != r10_3)

return arg3
