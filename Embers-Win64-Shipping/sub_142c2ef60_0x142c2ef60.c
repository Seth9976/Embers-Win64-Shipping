// 函数: sub_142c2ef60
// 地址: 0x142c2ef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
arg1[2] = *(arg3 + 0x18)
arg1[3] = arg4
arg1[4].d = 0
__builtin_memset(&arg1[5], 0, 0x15)
arg1[8].d = 0
arg1[9] = 0
arg1[0xa].d = 0x10000
*(arg1 + 0x54) = 0
arg1[0xb] = &data_14369a5d0
arg1[0xc] = 0
arg1[9] = sub_142bf2890(arg5)
*(arg1 + 0x3c) = 0
void* rcx_1 = arg1[2]
int32_t rax_2 = *(rcx_1 + 0x30)

if (rax_2 == 0xffffffff)
    rax_2 = sub_142bf77e0(rcx_1)

arg1[0xa].d = rax_2
uint32_t rcx_2 = 0x4000
*(arg1 + 0x54) = 1
void* rax_3 = arg1[9]
int64_t rdx = *(rax_3 + 0x10)
arg1[5] = rdx
int64_t r9_1 = zx.q(*(rax_3 + 0x18)) + rdx
arg1[8].d = 0
arg1[6] = r9_1
uint64_t r8_1 = zx.q(r9_1.d - rdx.d)
arg1[4].d = 0
int32_t var_10 = r8_1.d
int64_t var_18 = r9_1
int64_t var_20 = rdx
uint32_t rax_4 = (r8_1 << 3).d

if (rax_4 u> 0x4000)
    rcx_2 = rax_4

char const* const var_28 = "start [%p..%p] (%lu bytes)"
arg1[7].d = rcx_2
int32_t var_30 = 1
int64_t var_38 = 0
arg1[7].d = 0x3fffffff
return arg1
