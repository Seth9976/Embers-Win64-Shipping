// 函数: sub_1405b2720
// 地址: 0x1405b2720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[0x2f])
sub_1405ae080(&arg1[0x25])
sub_1405ae100(&arg1[0x1a])
sub_1405ae200(&arg1[0x10])
int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = arg1[8]

if (rcx_5 != 0)
    int32_t temp0_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
