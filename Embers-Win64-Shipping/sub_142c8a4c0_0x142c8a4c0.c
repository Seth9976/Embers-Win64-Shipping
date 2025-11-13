// 函数: sub_142c8a4c0
// 地址: 0x142c8a4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = strrchr(arg1, 0x2f)
char* rax_1 = strrchr(arg1, 0x5c)

if (rax == 0)
    if (rax_1 == 0)
        return arg1
    
    return &rax_1[1]

if (rax_1 == 0)
    return &rax[1]

if (rax u> rax_1)
    rax_1 = rax

return &rax_1[1]
