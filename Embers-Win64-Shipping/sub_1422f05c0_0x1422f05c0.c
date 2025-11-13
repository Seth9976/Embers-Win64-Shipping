// 函数: sub_1422f05c0
// 地址: 0x1422f05c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x698))
void* rbx = arg1 + 0x610
int64_t var_10 = arg2
int32_t rax = (rdi + 1).d
*(rbx + 0x88) = rax

if (rax s> *(rbx + 0x8c))
    sub_140d2b100(rbx, rdi.d)

void* rax_1 = *(rbx + 0x80)

if (rax_1 != 0)
    rbx = rax_1

int64_t result = rdi * 2
*(rbx + (result << 3)) = arg3.o
return result
