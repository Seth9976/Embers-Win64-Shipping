// 函数: sub_141043160
// 地址: 0x141043160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x25].b == 0
*arg1 = &data_142f00b08
arg1[0xd] = &data_142f00b60

if (not(cond:0))
    void* rcx = arg1[0x18]
    
    if (rcx != 0 && *(rcx + 0x28) == 0)
        *(arg1 + 0x204)
        sub_14105c0e0(rcx + 0x88, neg.q(sx.q(arg1[0x29].d)))

sub_1410406a0(&arg1[0xd])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
