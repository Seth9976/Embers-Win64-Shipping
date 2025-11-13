// 函数: sub_141b30fa0
// 地址: 0x141b30fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg1 + 8)
int64_t result
int64_t rdx_1
result, rdx_1 = sub_1420ee450(arg2, rbx)

if (rbx == 0 || arg2[0x25] != 0)
    return result

rdx_1.b = 1
return (*(*arg2 + 0x260))(arg2, rdx_1)
