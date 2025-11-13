// 函数: sub_141c88be0
// 地址: 0x141c88be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xc8)
int64_t var_18
void arg_8
int64_t* rax_2 = sub_140b63b70((**rcx)(rcx, &arg_8), &var_18)
int16_t* const rdi = &data_142d40450
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

int16_t* var_28
sub_140a2e390(&var_28, u"FMessageBridge (%s)", r8)
int32_t var_20

if (var_20 != 0)
    rdi = var_28

sub_140b58260(arg2, rdi, 1)
int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
