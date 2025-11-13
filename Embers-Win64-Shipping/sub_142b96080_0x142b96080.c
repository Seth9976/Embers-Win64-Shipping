// 函数: sub_142b96080
// 地址: 0x142b96080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (arg2 == 0 || arg2[1] s< 0 || arg2[2] s< 0 || *arg2 s>= 5)
    return 6

*(*(*(arg1 + 0x80) + 0x38) + 0x10) = 0
int64_t rax_3 = *(*(*(arg1 + 0x90) + 0x18) + 0x98)

if (rax_3 != 0)
    return rax_3(*(arg1 + 0x80))

char rax_5 = (*(arg1 + 8)).b

if ((rax_5 & 1) != 0 || (rax_5 & 2) == 0)
    sub_142b95d30(arg1, arg2)
    return 0

int32_t arg_8
int32_t result = sub_142b93470(arg1, arg2, 0, &arg_8)

if (result != 0)
    return result

return sub_142b96320(arg1, arg_8) __tailcall
