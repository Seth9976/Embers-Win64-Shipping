// 函数: sub_140f9f130
// 地址: 0x140f9f130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x80)
sub_140745b20(&arg1[0xe])
int64_t* rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

sub_140d95470(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
