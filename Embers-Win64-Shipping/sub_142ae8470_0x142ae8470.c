// 函数: sub_142ae8470
// 地址: 0x142ae8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_142aea170(arg1, arg2, arg4)

if (arg3 == 0 || *arg4 s> 0)
    return result

int64_t* rcx = *(arg2 + 0x48)
int64_t rdx = *rcx
int64_t rax = (*(rdx + 0x30))(rcx, rdx)
result[2] |= 0x28
*(result + 0x48) = rax
return result
