// 函数: sub_142c2f5f0
// 地址: 0x142c2f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = arg1
uint64_t rcx = zx.q(*(arg1 + 0x13))
uint64_t rax_2 = zx.q(*(arg1 + 0x12)) + (((zx.q(*(arg1 + 0x10)) << 8) + zx.q(*(arg1 + 0x11))) << 8)
char var_30 = 0
void* var_28 = arg2
char var_20 = 0
void* var_10 = rcx + (rax_2 << 8) + arg1
void* rcx_2 = *(arg2 + 0x10)
int64_t var_40 = *(arg2 + 0x18)
int32_t var_1c = 0
void* var_48 = arg1
int32_t rax_6 = *(rcx_2 + 0x30)

if (rax_6 == 0xffffffff)
    rax_6 = sub_142bf77e0(rcx_2)

int32_t var_38 = rax_6
sub_142c2b890(&var_48, &var_30)
return zx.q(var_30)
