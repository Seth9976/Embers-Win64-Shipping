// 函数: sub_141a5bb90
// 地址: 0x141a5bb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x28)
void* rbx = arg1 + 0x28

if (rax == 1)
    *rbx = rax - 1
    return rax - 1

void* rax_1 = *(arg1 + 0x20)

if (rax_1 != 0)
    arg1 = rax_1

int64_t result = memmove(arg1, arg1 + 4, (rax - 1) << 2)
*rbx -= 1
return result
