// 函数: sub_141b8ca20
// 地址: 0x141b8ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143080d98
int64_t rcx = arg1[7]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[6]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &data_143071640
int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
