// 函数: sub_142bf7ca0
// 地址: 0x142bf7ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (arg1 == 0 || arg2 == 0 || *arg1 == 0)
    return 0

if (arg2 u> 4)
    i = 4

uint64_t rax = 0
char arg_8

if (i != 0)
    char* r8_1 = &arg_8 - arg1
    
    do
        char rdx = *arg1
        
        if (rdx == 0)
            break
        
        *(r8_1 + arg1) = rdx
        rax = zx.q(rax.d + 1)
        arg1 = &arg1[1]
    while (rax.d u< i)

if (i == 0 || rax.d u< 4)
    __builtin_memset(&(&arg_8)[rax], 0x20, zx.q(4 - rax.d))

return zx.q(((zx.d(arg3) | sx.d(arg_8) << 8) << 8 | zx.d(arg4)) << 8) | zx.q(arg5)
