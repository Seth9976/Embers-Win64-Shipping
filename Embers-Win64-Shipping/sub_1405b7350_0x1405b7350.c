// 函数: sub_1405b7350
// 地址: 0x1405b7350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405aecf0(arg1 + 0x40)
int64_t rcx_1 = *(arg1 + 0x28)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x10) = &data_142d4ba40
int64_t* rcx_2 = *(arg1 + 0x20)

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_2 + 8))

return &data_142d4ba40
