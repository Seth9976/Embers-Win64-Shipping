// 函数: sub_140d0bbd0
// 地址: 0x140d0bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2 = (*(arg1 + 0xc) + 0x1f) u>> 5
uint32_t rsi_1 = (sub_140a846a0(zx.q(rax_2) << 2, 0) u>> 2).d

if (rax_2 s> rsi_1)
    rsi_1 = 0x7fffffff

uint64_t rdi_2 = zx.q((arg2 + 0x1f) u>> 5)
*(arg1 + 0xc) = rsi_1 << 5
void* result = sub_140a30eb0(arg1, zx.q(rdi_2.d), rsi_1, 4, 0)

if (rsi_1 == 0 || rsi_1 u<= rdi_2.d)
    return result

void* rcx_5 = *arg1

if ((rcx_5.b & 1) != 0)
    rcx_5 = (rcx_5 s>> 1) + arg1

return memset(rcx_5 + (rdi_2 << 2), 0, zx.q(rsi_1 - rdi_2.d) << 2)
