// 函数: sub_142c6e910
// 地址: 0x142c6e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg4
int64_t rdi_1 = arg2 * arg3
void* rbx = *(rdx + 0x250)

if (*(rbx + 8) == 0)
    return 0

*(rdx + 0x24b) = *(rbx + 0x78) == 1
int64_t r8 = *(rbx + 8)
int64_t rdx_1 = *(rbx + 0x10)

if (r8 s> rdi_1)
    memcpy(arg1, rdx_1, rdi_1.d)
    *(rbx + 0x10) += rdi_1
    *(rbx + 8) -= rdi_1
    return rdi_1

memcpy(arg1, rdx_1, r8.d)
int64_t rcx = *(rbx + 0x70)
int64_t rdx_2 = *(rbx + 8)

if (rcx == 0)
    *(rbx + 8) = 0
    return rdx_2

*(rbx + 0x10) = *(rbx + 0x68)
int64_t rax_3 = *(rbx + 0x58)
*(rbx + 8) = rcx
*(*arg4 + 0x4e80) = rax_3
*(*arg4 + 0x4e88) = *(rbx + 0x60)
*(rbx + 0x78) += 1
*(rbx + 0x70) = 0
return rdx_2
