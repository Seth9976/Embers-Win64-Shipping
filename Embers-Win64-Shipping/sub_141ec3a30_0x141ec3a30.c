// 函数: sub_141ec3a30
// 地址: 0x141ec3a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eb0420(arg1 + 0x220, 1)
sub_141eb02f0(arg1 + 0x220, 1)
int32_t rax_1 = *(arg1 + 0x2e0) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

*(sx.q(rax_1) * 0x60 + arg1 + 0x220 + 0x28) = 0
*(arg1 + 0x2e0) += 1
int32_t rax_6 = *(arg1 + 0x2e0) & 0x80000001

if (rax_6 s< 0)
    rax_6 = ((rax_6 - 1) | 0xfffffffe) + 1

int64_t rcx_5 = sx.q(rax_6) * 0x60
*(rcx_5 + arg1 + 0x220 + 0x28) = 1
*(rcx_5 + arg1 + 0x220 + 0x20) = 0
return 0
