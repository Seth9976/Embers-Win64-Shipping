// 函数: sub_1429cecc0
// 地址: 0x1429cecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) += arg2[2]
*(arg1 + 0x18) += arg2[1]
*(arg1 + 0x1c) += *arg2
*(arg1 + 0x20) += ((*(arg2 + 0x38) - *(arg2 + 0x30)) s>> 2).d
int32_t arg_8
int32_t* rax_5 = &arg_8
int32_t rcx = arg2[5]
bool cond:0 = *(arg1 + 0x24) s>= rcx
arg_8 = rcx

if (cond:0)
    rax_5 = arg1 + 0x24

int32_t result = *rax_5
*(arg1 + 0x24) = result
return result
