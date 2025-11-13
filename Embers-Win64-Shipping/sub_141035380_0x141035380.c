// 函数: sub_141035380
// 地址: 0x141035380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*(*(arg1 + 8) + 0x38) + 0xe8)
int64_t rax_2 = (*(*rcx + 0x18))(rcx)

if (*(arg1 + 0x40) u>= rax_2)
    rax_2 = *(arg1 + 0x40)

*(arg1 + 0x40) = rax_2
int64_t* rcx_2 = *(*(*(arg1 + 0x50) + 0x38) + 0xe8)
int64_t rax_5 = (*(*rcx_2 + 0x18))(rcx_2)
int64_t rcx_3 = *(arg1 + 0x88)

if (rcx_3 u>= rax_5)
    rax_5 = rcx_3

*(arg1 + 0x88) = rax_5
int64_t var_18 = *(arg1 + 0x10)
int64_t var_10 = *(arg1 + 0x58)
int64_t* rcx_4 = *(*(arg2 + 0x1c8) + 0x30)
return (*(*rcx_4 + 0xe0))(rcx_4, 2, &var_18)
