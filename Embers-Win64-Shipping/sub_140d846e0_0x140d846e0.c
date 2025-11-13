// 函数: sub_140d846e0
// 地址: 0x140d846e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2

if (rdi == 0 || arg3 == 0)
    return 0x80070057

int64_t* rcx = *(arg1 + 0x18)
int32_t var_18
void var_14
(*(*rcx + 0x20))(rcx, &arg2, &var_18, &var_14)
int32_t rcx_1 = arg2.d
*rdi = rcx_1
*arg3 = rcx_1 + var_18
return 0
