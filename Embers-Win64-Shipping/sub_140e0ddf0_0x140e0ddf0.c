// 函数: sub_140e0ddf0
// 地址: 0x140e0ddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x2e8)

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140dde9c0(arg1 + 0x2c8)
*(arg1 + 0x2b8) = &data_142d82a88
return sub_140de0ac0(arg1 + 0x10) __tailcall
