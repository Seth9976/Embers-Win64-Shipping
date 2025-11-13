// 函数: sub_142600bb0
// 地址: 0x142600bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2

if (rax == -0x1768176856f43fff && arg2[1] == 0x1000000479ee455)
    void* rcx = &arg1[6]
    
    if (arg1 == 0)
        rcx = nullptr
    
    *arg3 = rcx
    *(arg1 + 0x2c) += 1
    return 0

if ((rax != -0x1768176856f43fff || arg2[1] != 0x479ee455)
        && (*arg2 != 0 || arg2[1] != 0x46000000000000c0))
    *arg3 = 0
    return 0x80004002

*arg3 = arg1
(*(*arg1 + 8))()
return 0
