// 函数: sub_140fdc640
// 地址: 0x140fdc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    sub_140ffd690(arg1)

int64_t r8 = sx.q(*(arg1 + 0x18)) * 3
int64_t rax_1 = *(arg1 + 0x10)
int64_t rsi = sx.q(*(rax_1 + (r8 << 3) - 8))
void* rbx_1 = rax_1 + (r8 << 3)
int32_t rax_2 = (rsi + 1).d
*(rbx_1 - 8) = rax_2

if (rax_2 s> *(rbx_1 - 4))
    sub_1405a4d70(rbx_1 - 0x10)

void* rdx_1 = *arg2
*(*(rbx_1 - 0x10) + (rsi << 3)) = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

return sub_14081c9d0(arg2) __tailcall
