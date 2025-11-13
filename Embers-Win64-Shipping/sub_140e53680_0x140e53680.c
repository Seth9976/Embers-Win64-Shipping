// 函数: sub_140e53680
// 地址: 0x140e53680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    int32_t temp1_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 8)

if (rcx_2 == 0)
    return 

int32_t temp2_1 = *(rcx_2 + 0xc)
*(rcx_2 + 0xc) -= 1

if (temp2_1 == 1)
    jump(*(*rcx_2 + 8))
