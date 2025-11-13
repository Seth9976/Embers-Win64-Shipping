// 函数: sub_142c67040
// 地址: 0x142c67040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = zx.q(arg2)

if (arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0)
    return 1

arg1[1] = arg3
arg1[2] = arg4
arg1[3] = arg5
arg1[4].d = i_1.d
int64_t rbx = 0
arg1[5] = 0
int64_t rax_2 = data_143ccb898(sx.q(i_1.d) << 5)
*arg1 = rax_2

if (rax_2 == 0)
    arg1[4].d = 0
    return 1

if (i_1.d s> 0)
    uint64_t i
    
    do
        sub_142c69f40(*arg1 + rbx, sub_142c672d0)
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
