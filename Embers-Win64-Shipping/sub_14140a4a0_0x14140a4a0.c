// 函数: sub_14140a4a0
// 地址: 0x14140a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_24 = 0x12
wchar16 const* const var_30 = u"FSkyLightQuasiRandomData"
int32_t var_20 = 0
int32_t var_1c = 1
sub_1413eb3b0(arg1)
int64_t rdi = sx.q(arg2[1].d)
void* var_10 = &data_143ecc770
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t rax_1 = *arg2
int64_t rcx_2 = rdi * 6
*(rax_1 + (rcx_2 << 3)) = u"SkyLightQuasiRandomData".o
*(rax_1 + (rcx_2 << 3) + 0x10) = 0x120.o
*(rax_1 + (rcx_2 << 3) + 0x20) = 1.o
return sub_14140a0b0
