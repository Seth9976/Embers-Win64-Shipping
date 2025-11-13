// 函数: sub_1428a70f0
// 地址: 0x1428a70f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = arg1

while (arg2 != 0)
    arg2 -= 1
    
    if (*rax == 0)
        break
    
    rax = &rax[1]

return rax - arg1
