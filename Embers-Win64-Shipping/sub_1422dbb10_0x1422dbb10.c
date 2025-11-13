// 函数: sub_1422dbb10
// 地址: 0x1422dbb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d45b28
int64_t* rcx = arg1[2]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

*arg1 = &data_142d45ac0
return &data_142d45ac0
