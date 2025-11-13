// 函数: sub_142c192e0
// 地址: 0x142c192e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 - arg2 u< 0x1f)
    int32_t r8 = 1 << (arg2.b & 0x1f)
    int32_t rdx = 1 << (arg3.b & 0x1f)
    int32_t rax_2
    rax_2.b = rdx u< r8
    *arg1 |= rdx * 2 - rax_2 - r8
else
    *arg1 = 0xffffffff

uint32_t r9_1 = arg3 u>> 9
uint32_t r10_1 = arg2 u>> 9

if (r9_1 - r10_1 u>= 0x1f)
    arg1[1] = 0xffffffff
    return 1

int32_t rdx_1 = 1 << (r10_1.b & 0x1f)
int32_t rbx = 1 << (r9_1.b & 0x1f)
int32_t rdi
rdi.b = rbx u< rdx_1
arg1[1] |= rbx * 2 - rdi - rdx_1
int32_t result
result.b = 1
return result
