// 函数: sub_1405ac210
// 地址: 0x1405ac210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
arg1[2].d = 0xffffffff
__builtin_memset(arg1 + 0x14, 0, 0x14)
sub_140cea340()
char rax_1

if (arg2[1] != 0)
    rax_1 = sub_140d3e110(&arg2[2])

if ((arg2[1] == 0 || rax_1 == 0) && arg2[4].d != 0)
    void* rax_2 = sub_140cd0630(&arg2[1], nullptr, 0)
    
    if (rax_2 != 0 && (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) != 0)
        arg2[1] = rax_2
    else if (arg2[1] != 0)
        arg2[2].d = 0xffffffff
        *(arg2 + 0x14) = 0
        arg2[1] = 0

sub_1405af670(&arg1[1], &arg2[1])
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
return arg1
