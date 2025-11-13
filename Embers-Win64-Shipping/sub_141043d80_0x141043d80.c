// 函数: sub_141043d80
// 地址: 0x141043d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x13]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1 && rcx != 0)
        (**rcx)(rcx, 1)

sub_14081c9d0(&arg1[0x11])
arg1[3] = &data_142f009b0
void* rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_1410224a0(rcx_2 + 0x230, arg1[5], arg1[6].d)
    arg1[5] = 0

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
