// 函数: sub_140b0e030
// 地址: 0x140b0e030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e75548
int64_t* rcx = arg1[2]

if (rcx != 0)
    if (arg1[1].b == 0)
        sub_140a543a0()
        sub_140b1f700(arg1, u"Log file closed, %s", &data_143db4980)
        rcx = arg1[2]
    
    if (rcx != 0)
        (*(*rcx + 0x28))(rcx, 1)
    
    arg1[2] = 0

int64_t* rcx_2 = arg1[3]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

arg1[3] = 0
arg1[4].w = 0
*(arg1 + 0x821) = 0
sub_140b0ddb0(&arg1[0x105], arg1[0x105])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
