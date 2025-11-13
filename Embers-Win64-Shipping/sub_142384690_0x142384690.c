// 函数: sub_142384690
// 地址: 0x142384690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x12) == 0 && *(arg1 + 0x11) == 0)
    *(arg1 + 0x11) = 1
    *(arg1 + 0x98) = 0

sub_140d94cb0(arg1 + 0x88)
sub_140596d80(arg1 + 0x78)
sub_1408464b0(arg1 + 0x68)
int64_t rcx_3 = *(arg1 + 0x48)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140745b20(arg1 + 0x38)
sub_140745b20(arg1 + 0x28)
sub_140745b20(arg1 + 0x18)
int64_t* rcx_7 = *(arg1 + 8)

if (rcx_7 != 0)
    int32_t temp0_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
