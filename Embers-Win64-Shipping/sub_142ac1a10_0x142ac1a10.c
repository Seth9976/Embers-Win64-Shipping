// 函数: sub_142ac1a10
// 地址: 0x142ac1a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::ErrorCode::VTable* var_20 = &icu_64::ErrorCode::`vftable'
int32_t var_18 = 0
char rax = sub_142abb6b0(arg1 + 0x88, 0xffffffff, &var_18)
char rax_1

if (rax == 0)
    rax_1 = sub_142abb6b0(arg1 + 0xc8, 0xffffffff, &var_18)

void* rbx

if (rax != 0 || rax_1 != 0)
    rbx.b = 1
else
    rbx.b = 0

sub_142ab6000(&var_20)
return zx.q(rbx.b)
