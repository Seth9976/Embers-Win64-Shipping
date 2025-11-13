// 函数: sub_142c2f790
// 地址: 0x142c2f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 9))
void* rax_2 = (zx.q(*(arg1 + 8)) << 8) + arg1
char var_30 = 0
void* var_28 = arg2
void* var_18 = r8 + rax_2
void* r8_2 = *(arg2 + 0x10)
int64_t var_40 = *(arg2 + 0x18)
int32_t var_20 = 0
void* var_48 = arg1
int32_t rax_4 = *(r8_2 + 0x30)

if (rax_4 == 0xffffffff)
    rax_4 = sub_142bf77e0(r8_2)

int32_t var_38 = rax_4
sub_142c2c5f0(&var_48, &var_30)
return zx.q(var_30)
