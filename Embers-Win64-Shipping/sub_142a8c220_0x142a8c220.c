// 函数: sub_142a8c220
// 地址: 0x142a8c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_10 = arg2

if ((zx.d(arg2) & 0xfffff800) == 0xd800)
    return sub_142a8bda0(arg1, 0xffffffff, &arg_10, 1)

int16_t rax_3 = *arg1

while (rax_3 != arg2)
    if (rax_3 == 0)
        return 0
    
    rax_3 = arg1[1]
    arg1 = &arg1[1]

return arg1
