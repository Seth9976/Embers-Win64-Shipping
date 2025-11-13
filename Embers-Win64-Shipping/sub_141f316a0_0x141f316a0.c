// 函数: sub_141f316a0
// 地址: 0x141f316a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1b0))
void* rbx = arg1
int32_t rax = rdi.d + arg3
*(arg1 + 0x1b0) = rax

if (rax s> *(arg1 + 0x1b4))
    sub_141f229d0(arg1, rdi.d)

void* rcx = *(rbx + 0x1a8)

if (rcx != 0)
    rbx = rcx

return memcpy(rdi * 0x8c + rbx, arg2, arg3 * 0x8c) __tailcall
