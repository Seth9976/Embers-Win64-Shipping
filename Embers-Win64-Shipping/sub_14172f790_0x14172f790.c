// 函数: sub_14172f790
// 地址: 0x14172f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0xf8
int64_t rdi = sx.q(*(rbx + 0x38))
int32_t rax = (rdi + 1).d
*(rbx + 0x38) = rax

if (rax s> *(rbx + 0x3c))
    sub_140775760(rbx, rdi.d)

void* rax_1 = *(rbx + 0x30)
int64_t rcx_1 = rdi * 3

if (rax_1 != 0)
    rbx = rax_1

*(rbx + (rcx_1 << 2)) = *arg2
int32_t result = arg2[1].d
*(rbx + (rcx_1 << 2) + 8) = result
return result
