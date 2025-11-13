// 函数: sub_142c2f700
// 地址: 0x142c2f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_2 = (zx.q(*(arg1 + 0x10)) << 8) + zx.q(*(arg1 + 0x11))
char var_30 = 0
void* var_28 = arg2
int32_t var_20 = 0
void* rcx_1 = zx.q(*(arg1 + 0x13)) + ((zx.q(*(arg1 + 0x12)) + (r8_2 << 8)) << 8) + arg1
void* var_48 = arg1
void* var_18 = rcx_1
void* rcx_2 = *(arg2 + 0x10)
int64_t var_40 = *(arg2 + 0x18)
int32_t rax_6 = *(rcx_2 + 0x30)

if (rax_6 == 0xffffffff)
    rax_6 = sub_142bf77e0(rcx_2)

int32_t var_38 = rax_6
sub_142c2c0c0(&var_48, &var_30)
return zx.q(var_30)
