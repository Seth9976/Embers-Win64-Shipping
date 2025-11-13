// 函数: sub_141468b80
// 地址: 0x141468b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_24 = 0x12
wchar16 const* const var_30 = u"FSSRTTileClassificationParameters"
int32_t var_20 = 0
int32_t var_1c = 1
sub_141458480(arg1)
int64_t rdi = sx.q(arg2[1].d)
void* var_10 = &data_143ed7af0
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"ClassificationParameters".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0xf0.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_141469660
