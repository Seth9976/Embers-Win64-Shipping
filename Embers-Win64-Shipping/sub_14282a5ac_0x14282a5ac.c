// 函数: sub_14282a5ac
// 地址: 0x14282a5ac
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x20)
int64_t r9 = rcx
int64_t r8 = *(arg1 + 0x18)

if (((rcx + r8).b & 0xf) == 0 && *(arg1 + 0x10) u<= (rcx + 0x10) u>> 4)
    sub_14282ad50(arg1, 1)
    r8 = *(arg1 + 0x18)
    r9 = *(arg1 + 0x20)

int64_t rcx_2 = *(arg1 + 0x10)
int64_t rax_6 = ((rcx_2 << 4) - 1) & r8
*(arg1 + 0x18) = rax_6
int64_t rcx_3 = *(arg1 + 8)
int64_t rdi = rax_6 + r9
int64_t rsi_1 = (rcx_2 - 1) & rdi u>> 4

if (*(rcx_3 + (rsi_1 << 3)) == 0)
    *(*(arg1 + 8) + (rsi_1 << 3)) = sub_14058b9f0(0x10)
    rcx_3 = *(arg1 + 8)

uint64_t result
result.b = *arg2
*((zx.q(rdi.d) & 0xf) + *(rcx_3 + (rsi_1 << 3))) = result.b
*(arg1 + 0x20) += 1
return result
