// 函数: sub_142646b80
// 地址: 0x142646b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143452770
sub_1426519a0(&arg1[0x8a], 0)
sub_1405ae100(&arg1[0x8a])
int32_t rdx = sub_140745b20(&arg1[0x88])
int64_t* rcx_3 = arg1[0x87]

if (rcx_3 != 0)
    int32_t rax_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_3 != 0)
        rdx = (*(*rcx_3 + 8))(rcx_3, 1)

sub_1426454b0(&arg1[2], rdx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
