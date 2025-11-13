// 函数: sub_142bc4f40
// 地址: 0x142bc4f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
uint64_t rbx_1 = zx.q(arg2 - arg1.d)

if (arg3[0xc] != 0)
    return 0

int64_t rax = sub_142b99860(*arg3, (rbx_1 + 1).d, &result_1)
arg3[0xc] = rax
int32_t result = result_1

if (result != 0)
    return result

memcpy(rax, arg1, rbx_1.d)
*(rbx_1 + arg3[0xc]) = 0
return zx.q(result_1)
