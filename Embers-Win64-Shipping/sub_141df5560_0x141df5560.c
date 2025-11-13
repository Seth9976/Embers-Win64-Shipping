// 函数: sub_141df5560
// 地址: 0x141df5560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x6d9) & 1) == 0 || *(arg1 + 0xd8) == 0)
    return 

*(arg1 + 0x5ec) += 1
*(arg1 + 0x410) += 1
int16_t rcx = *(arg1 + 0x410)
*(arg1 + 0x408) = data_143de5458

if (rcx == 0xffff)
    *(arg1 + 0x410) = rcx + 1

void arg_8
sub_140dd5b90(&arg_8, arg1)
int64_t* rcx_2 = *(arg1 + 0xd8)
(*(*rcx_2 + 8))(rcx_2, &arg_8)
int32_t temp0_1 = *(arg1 + 0x5ec)
*(arg1 + 0x5ec) -= 1

if (temp0_1 == 1)
    *(arg1 + 0x6d9) &= 0xfe
