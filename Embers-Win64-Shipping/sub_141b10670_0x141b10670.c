// 函数: sub_141b10670
// 地址: 0x141b10670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x28)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x10) = &data_142d4ba40
int64_t* rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_1 + 8))

return &data_142d4ba40
