// 函数: sub_142770aa0
// 地址: 0x142770aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14349d370
sub_140a74f90(arg1[5])
arg1[5] = 0
*arg1 = &data_14349d2f8
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
