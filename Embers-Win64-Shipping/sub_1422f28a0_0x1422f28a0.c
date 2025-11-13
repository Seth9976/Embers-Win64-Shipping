// 函数: sub_1422f28a0
// 地址: 0x1422f28a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x610
*(rbx + 0x88) = 0

if (*(rbx + 0x8c) s<= 0xffffffff)
    sub_1419d71e0(rbx, 0)

int64_t rdx
int64_t var_10 = rdx
int64_t rdi_1 = sx.q(*(rbx + 0x88))
int32_t rax = (rdi_1 + 1).d
*(rbx + 0x88) = rax

if (rax s> *(rbx + 0x8c))
    sub_140d2b100(rbx, rdi_1.d)

void* rax_1 = *(rbx + 0x80)

if (rax_1 != 0)
    rbx = rax_1

int64_t result = rdi_1 * 2
*(rbx + (result << 3)) = 0x3f800000.o
return result
