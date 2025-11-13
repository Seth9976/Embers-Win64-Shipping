// 函数: sub_142c56610
// 地址: 0x142c56610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1
int32_t rdi = 0

if (isdigit(zx.d(*arg1)) != 0)
    int32_t i
    
    do
        int32_t rax_1 = sx.d(*rbx)
        rbx = &rbx[1]
        rdi = rax_1 + ((rdi + ((rdi - 6) << 2)) << 1)
        i = isdigit(zx.d(*rbx))
    while (i != 0)
    
    if (rdi != 0 && *rbx == 0x24)
        *arg2 = &rbx[1]
        return zx.q(rdi)

return 0
