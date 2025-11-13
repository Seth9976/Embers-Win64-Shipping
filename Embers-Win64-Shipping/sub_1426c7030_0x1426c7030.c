// 函数: sub_1426c7030
// 地址: 0x1426c7030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c5f80(arg1, arg2)
int32_t rdx = 0
*arg1 = &data_14346b870
arg1[5] = &data_14346bb60
arg1[0x12] = 0

if (arg1[6] != u"Is BlackBoard value of given Class")
    arg1[7].d = 0
    
    if (*(arg1 + 0x3c) != 0x23)
        sub_1405947f0(&arg1[6], 0x23)
        rdx = arg1[7].d
    
    arg1[7].d = rdx + 0x23
    
    if (rdx + 0x23 s> *(arg1 + 0x3c))
        sub_140594770(&arg1[6])
    
    __builtin_wcscpy(arg1[6], u"Is BlackBoard value of given Class")

void* rax_2 = sub_140d41340()
void arg_8
sub_1426a9410(&arg1[0xd], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1), rax_2)
return arg1
