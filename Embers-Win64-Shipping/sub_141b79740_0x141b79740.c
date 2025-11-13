// 函数: sub_141b79740
// 地址: 0x141b79740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143083930
sub_140d3a3a0(&arg1[1], arg2)
arg1[2] = arg3
sub_14068e310(&arg1[3], arg4)
arg1[0x14].b = arg4[0x11].b
arg1[0x15] = 0
arg1[0x16].d = 0

if (&arg4[0x12] != &arg1[0x15] && arg4[0x13].d != 0)
    int64_t* rcx_2 = arg4[0x12]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2)

arg1[0x17] = sub_140a387b0()
sub_140745b20(&arg4[0x12])
sub_140691a20(arg4)
return arg1
