// 函数: sub_1413b6b90
// 地址: 0x1413b6b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
wchar16 const* const var_30 = u"SamplerState"
int32_t var_20 = 0
int64_t var_10 = 0
int32_t rax = (rdi + 1).d
char var_24 = 8
int32_t var_1c = 1
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"ScreenSpaceAOTextureSampler".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0xd8.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_1413b6af0
