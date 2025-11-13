// 函数: ??_GOTM@@QEAAPEAXI@Z
// 地址: 0x14091e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x18)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
