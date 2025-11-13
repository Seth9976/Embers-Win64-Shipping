// 函数: sub_1418f5850
// 地址: 0x1418f5850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff18d0
sub_1418f81f0(arg1)
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1 && rcx != 0)
        (**rcx)(rcx, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
