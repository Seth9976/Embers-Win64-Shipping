// 函数: sub_141cda530
// 地址: 0x141cda530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x70)
int64_t rbx = sx.q(arg2)
int64_t rdi = sx.q(arg4)
int64_t rdx = rbx * 3
*(rax + (rdx << 3)) = arg3
*(rax + (rdx << 3) + 4) = rdi.d
void* rsi_2 = (sx.q(arg3) << 5) + *arg1
int64_t rbp = sx.q(*(rsi_2 + 0x18))
int32_t rax_1 = (rbp + 1).d
*(rsi_2 + 0x18) = rax_1

if (rax_1 s> *(rsi_2 + 0x1c))
    sub_1405a4cf0(rsi_2 + 0x10)

*(*(rsi_2 + 0x10) + (rbp << 2)) = rbx.d
void* rdi_2 = (rdi << 5) + *arg1
int64_t rsi_3 = sx.q(*(rdi_2 + 0x18))
int32_t rax_3 = (rsi_3 + 1).d
*(rdi_2 + 0x18) = rax_3

if (rax_3 s> *(rdi_2 + 0x1c))
    sub_1405a4cf0(rdi_2 + 0x10)

*(*(rdi_2 + 0x10) + (rsi_3 << 2)) = rbx.d
return sub_14090bdf0(arg1 + 0x200, rbx.d) __tailcall
