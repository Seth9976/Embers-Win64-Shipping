// 函数: sub_140ddf980
// 地址: 0x140ddf980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ecccb8
sub_140d94cb0(&arg1[0xa])
sub_140d94cb0(&arg1[8])
int64_t* rcx_2 = arg1[7]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rcx_3 = arg1[4]

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

*arg1 = &data_142ec87a0
int64_t* rcx_4 = arg1[2]

if (rcx_4 != 0)
    int32_t temp2_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp2_1 == 1)
        jump(*(*rcx_4 + 8))

return &data_142ec87a0
