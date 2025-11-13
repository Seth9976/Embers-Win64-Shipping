// 函数: sub_140d97ac0
// 地址: 0x140d97ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec2750
sub_140dba420(arg1)
int64_t* rcx = arg1[0x12]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140691a20(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
