// 函数: sub_140ea4170
// 地址: 0x140ea4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (arg2 == rcx)
    return 

if (arg2 != 0)
    *(arg2 + 0xc) += 1
    rcx = *arg1

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

*arg1 = arg2
