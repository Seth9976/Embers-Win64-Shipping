// 函数: sub_141b797f0
// 地址: 0x141b797f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143083f50
sub_140d3a3a0(&arg1[1], arg2)
arg1[2] = arg3
arg1[3].b = *arg4
*(arg1 + 0x19) = arg4[1]
arg1[4] = 0
arg1[5].d = 0

if (&arg4[8] != &arg1[4] && *(arg4 + 0x10) != 0)
    int64_t* rcx_1 = *(arg4 + 8)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

arg1[6] = sub_140a387b0()
sub_140745b20(&arg4[8])
return arg1
