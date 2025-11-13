// 函数: sub_142233ed0
// 地址: 0x142233ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14222c330(arg1)
void var_18
int64_t* result = sub_140b214c0(&var_18)
bool cond:0 = (*(arg1 + 0x89) & 0x20) != 0
*(arg1 + 0xc0) = *result

if (cond:0)
    return result

return sub_14222edb0(arg1 + 0xa8) __tailcall
