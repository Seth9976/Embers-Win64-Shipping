// 函数: sub_142896b90
// 地址: 0x142896b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax_1

if (arg1 != 0)
    rax_1 = sub_142896cb0(arg1, 0x1c)

int32_t rbx_1

if (arg1 == 0 || rax_1 == 0)
    rbx_1 = 0
else
    *(arg1 + 0x28) = arg2
    rbx_1.b = arg2 != 0
    
    if (arg2 != 0)
        sub_1428c1b50(arg2)

return zx.q(rbx_1)
