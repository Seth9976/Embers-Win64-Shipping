// 函数: sub_141466200
// 地址: 0x141466200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_24 = 0x11
wchar16 const* const var_30 = u"FSSDSignalUAVs"
int32_t var_20 = 0
int32_t var_1c = 1
int32_t var_14 = 2
sub_1414581a0(arg1)
int64_t rdi = sx.q(arg2[1].d)
void* var_10 = &data_143ed55c0
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"SignalOutputMips".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0x260.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_1414660a0
