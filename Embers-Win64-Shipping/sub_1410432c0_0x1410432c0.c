// 函数: sub_1410432c0
// 地址: 0x1410432c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x26].b == 0
*arg1 = &data_142f01328
arg1[0xe] = &data_142f01380

if (not(cond:0))
    void* rcx = arg1[0x19]
    
    if (rcx != 0 && *(rcx + 0x28) == 0)
        *(arg1 + 0x20c)
        sub_14105c0e0(rcx + 0x88, neg.q(sx.q(arg1[0x2a].d)))

sub_1410406a0(&arg1[0xe])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
