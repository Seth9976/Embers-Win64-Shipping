// 函数: sub_142890560
// 地址: 0x142890560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)

if (rsi.d == 0)
    return 0

int64_t r10 = *(*arg1 + (rsi << 3) - 8)
uint64_t rax_3 = r10 u>> 0x20
int64_t rdi_3 = neg.q(neg.q(rax_3) u>> 0x3f)
int64_t r10_1 = r10 ^ ((rax_3 ^ r10) & rdi_3)
uint64_t rax_7 = r10_1 u>> 0x10
int64_t r11_3 = neg.q(neg.q(rax_7) u>> 0x3f)
int64_t r10_2 = r10_1 ^ ((rax_7 ^ r10_1) & r11_3)
uint64_t rax_11 = r10_2 u>> 8
int64_t r9_3 = neg.q(neg.q(rax_11) u>> 0x3f)
int64_t r10_3 = r10_2 ^ ((rax_11 ^ r10_2) & r9_3)
uint64_t rax_15 = r10_3 u>> 4
int64_t r8_3 = neg.q(neg.q(rax_15) u>> 0x3f)
int64_t r10_4 = r10_3 ^ ((rax_15 ^ r10_3) & r8_3)
uint64_t rdx_1 = r10_4 u>> 2
int64_t rcx_3 = neg.q(neg.q(rdx_1) u>> 0x3f)
int32_t rax_18
rax_18.b = r10 != 0
int32_t rax_23 = rax_18 - 0x40
    + (neg.d((neg.q((((rdx_1 ^ r10_4) & rcx_3) ^ r10_4) u>> 1) u>> 0x3f).d) & 1) + (rsi.d << 6)
    + (rdi_3.d & 0x20) + (r11_3.d & 0x10)
return zx.q(rax_23 + (r8_3.d & 4) + (r9_3.d & 8) + (rcx_3.d & 2))
