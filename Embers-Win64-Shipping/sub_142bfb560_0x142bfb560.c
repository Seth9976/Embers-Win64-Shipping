// 函数: sub_142bfb560
// 地址: 0x142bfb560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_142bf2890(arg2)
*(arg1 + 0x28) = rax
arg1[7].b = 0
int64_t rdx = *(rax + 0x10)
uint32_t rcx_1 = 0x4000
*(arg1 + 8) = rdx
int64_t r9_1 = zx.q(rax[6]) + rdx
*(arg1 + 0x10) = r9_1
uint64_t r8_1 = zx.q(r9_1.d - rdx.d)
int32_t var_10 = r8_1.d
int64_t var_18 = r9_1
int64_t var_20 = rdx
uint32_t rax_1 = (r8_1 << 3).d

if (rax_1 u> 0x4000)
    rcx_1 = rax_1

arg1[6] = rcx_1
char const* const var_28 = "start [%p..%p] (%lu bytes)"
int32_t var_30 = 1
arg1[8] = 0
*arg1 = 0
int64_t var_38 = 0

if (*(arg1 + 8) == 0)
    sub_142bf75d0(arg1)
    return arg2

if (arg1[8] != 0)
    arg1[8] = 0

sub_142bf75d0(arg1)
sub_142bf2880(arg2)
return arg2
