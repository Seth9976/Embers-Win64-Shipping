// 函数: sub_142c2faa0
// 地址: 0x142c2faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_2 = (zx.d(*(arg1 + 0x1d)) << 0x10) + (zx.d(*(arg1 + 0x1e)) << 8)
void* var_30 = arg2
char var_18 = 0
uint32_t var_28 = (r8_2 + (zx.d(*(arg1 + 0x1c)) << 0x18) + zx.d(*(arg1 + 0x1f))) u>> 0x1e
int32_t var_14 = 0
void* var_20 = arg1 + 0xc + (
    zx.q((zx.d(*(arg1 + 0x1d)) << 0x10) + (zx.d(*(arg1 + 0x1e)) << 8) + zx.d(*(arg1 + 0x1f)))
    & 0xffffff)
void* rcx_5 = *(*(arg2 + 8) + 0x18)
void* var_48 = arg1 + 0xc
int64_t var_40 = *(arg2 + 0x18)
int32_t rax_13 = *(rcx_5 + 0x30)

if (rax_13 == 0xffffffff)
    rax_13 = sub_142bf77e0(rcx_5)

int32_t var_38 = rax_13
sub_142c2ce90(&var_48, &var_30)
uint64_t result
result.b = 1
return result
