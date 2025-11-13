// 函数: sub_140e9fa50
// 地址: 0x140e9fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142eda170
int64_t rcx = arg1[4]

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = &data_142eda150
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
