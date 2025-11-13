// 函数: sub_1429cebd0
// 地址: 0x1429cebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1.b
int64_t var_18 = -2
int64_t r9 = arg1[1]
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, r9 - *arg1)
int64_t rcx_1 = rdx s>> 2
uint64_t result = rcx_1 u>> 0x3f
int64_t rcx_2 = rcx_1 + result

if (rcx_2 u> arg2)
    result = (arg2 - rcx_2) * 3
    arg1[1] = r9 + (result << 3)
else if (rcx_2 u< arg2)
    sub_1429ce730(arg1, arg2 - rcx_2)
    arg1[1] - *arg1
    arg1[1]
    int64_t rax_5
    int64_t rdx_6
    rdx_6:rax_5 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
    int64_t rdx_7 = rdx_6 s>> 2
    result = (arg2 - (rdx_7 + (rdx_7 u>> 0x3f))) * 0x18
    arg1[1] += result

return result
