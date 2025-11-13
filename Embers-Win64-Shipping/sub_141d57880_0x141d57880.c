// 函数: sub_141d57880
// 地址: 0x141d57880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
**(arg1 + 0x28) = 0
int64_t rax_1 = *(arg1 + 8)
int64_t r8 = *(arg1 + 0x14)
int32_t r9 = *(arg1 + 0x10)
*(arg2 + 0x60) = 1
int64_t rdi = sx.q(*(arg2 + 0x58))
int32_t var_20 = r9
int32_t rax_2 = (rdi + 1).d
*(arg2 + 0x58) = rax_2

if (rax_2 s> *(arg2 + 0x5c))
    sub_140679970(rbx, rdi.d)

void* rax_3 = *(rbx + 0x50)
int64_t rcx_1 = rdi * 5

if (rax_3 != 0)
    rbx = rax_3

int32_t result = r8:4.d
*(rbx + (rcx_1 << 2)) = rax_1.o
*(rbx + (rcx_1 << 2) + 0x10) = result
return result
