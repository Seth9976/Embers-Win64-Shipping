// 函数: sub_140d43740
// 地址: 0x140d43740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a96170(arg1)
arg1[3].b = 1
arg1[4] = 0
arg1[5].d = 0

if (arg2 != &arg1[4] && arg2[1].d != 0)
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx)

return arg1
