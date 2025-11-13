// 函数: sub_14186b030
// 地址: 0x14186b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[7]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142d4cb20

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
