// 函数: sub_140a0df80
// 地址: 0x140a0df80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e4cd50
int64_t* rcx = arg1[4]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp1_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &data_142e4cc00

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
