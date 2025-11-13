// 函数: sub_1409190f0
// 地址: 0x1409190f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e21a80
arg1[2] = 0
arg1[3] = 0
arg1[1] = &data_142e1f860
sub_140596d10(&arg1[4], arg2 + 0x18)
arg1[6] = *(arg2 + 0x28)
arg1[1] = &data_142e1f860
arg1[7] = *(arg2 + 0x30)
arg1[8] = *(arg2 + 0x38)
*(arg2 + 0x38) = 0
*(arg2 + 0x30) = 0
sub_140596d10(&arg1[9], arg2 + 0x40)
sub_140596d10(&arg1[0xb], arg2 + 0x50)
sub_140596d10(&arg1[0xd], arg2 + 0x60)
arg1[0xf] = 0
arg1[0x10].d = 0

if (arg2 + 0x70 != &arg1[0xf] && *(arg2 + 0x78) != 0)
    int64_t* rcx_5 = *(arg2 + 0x70)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x40))(rcx_5)

arg1[0x12] = sub_140a387b0()
*arg1 = &data_142e21ad8
return arg1
