// 函数: sub_140f8d430
// 地址: 0x140f8d430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[3].b != 0)
    if (arg2[5].d == 0)
        return sub_140f8d4f0(arg1, sub_140d44910(arg2)) __tailcall
    
    int64_t* rcx = arg2[4]
    
    if (rcx == 0)
        return sub_140f8d4f0(arg1, sub_140d44910(arg2)) __tailcall
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        return sub_140f8d4f0(arg1, sub_140d44910(arg2)) __tailcall

sub_14065da90(&arg1[0x55], arg2)
arg1[0x58].b = arg2[3].b
sub_140692f90(&arg1[0x59], &arg2[4])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5) __tailcall
