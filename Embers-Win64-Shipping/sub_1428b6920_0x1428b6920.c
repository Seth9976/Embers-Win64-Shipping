// 函数: sub_1428b6920
// 地址: 0x1428b6920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t i = 0
char* rax = arg2

if (*arg2 != 0)
    while (i u< 0x80000000)
        rax = &rax[1]
        i += 1
        
        if (*rax == 0)
            break

int32_t rbx = i & 0x7fffffff

if (*(arg1 + 0x20) == 0)
    return 0

int32_t rax_1 = fwrite(arg2, zx.q(rbx), 1, *(arg1 + 0x38))

if (rax_1 != 0)
    return rbx

return rax_1
