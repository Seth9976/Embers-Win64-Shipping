// 函数: sub_140bd5660
// 地址: 0x140bd5660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0xffffffff
__builtin_memset(arg1 + 0xc, 0, 0x14)
sub_140ccfa10()
char rax_1

if (*arg2 != 0)
    rax_1 = sub_140d3e110(&arg2[1])

if ((*arg2 == 0 || rax_1 == 0) && arg2[3].d != 0)
    void* rax_2 = sub_140cd0630(arg2, nullptr, 0)
    
    if (rax_2 != 0 && (data_1439a9d98 & *(*(rax_2 + 8) + 0x10)) != 0)
        *arg2 = rax_2
    else if (*arg2 != 0)
        arg2[1].d = 0xffffffff
        *(arg2 + 0xc) = 0
        *arg2 = 0

sub_1405af670(arg1, arg2)
arg1[4].d = arg2[4].d
return arg1
