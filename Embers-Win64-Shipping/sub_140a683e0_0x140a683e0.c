// 函数: sub_140a683e0
// 地址: 0x140a683e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e62e28
sub_140a6f430(data_143db7a48, &arg1[1])
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &data_142e62310

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
