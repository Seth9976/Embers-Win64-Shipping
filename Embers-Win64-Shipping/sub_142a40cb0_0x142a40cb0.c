// 函数: sub_142a40cb0
// 地址: 0x142a40cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg2[2] == 0x200010
char rax = *(arg3 + 6)
*(arg3 + 0x38) = arg1
*(arg3 + 6) = cond:0 | (rax & 0xfe)
*(arg3 + 0x40) = *arg2
*(arg3 + 0x48) = 0
void* rax_2 = *arg2

if (rax_2 == 0)
    arg2[1] = arg3
else
    *(rax_2 + 0x48) = arg3

*arg2 = arg3
int64_t result = sub_142a40530(arg1, arg2)
*(arg1 + 0xb40) += 1
return result
