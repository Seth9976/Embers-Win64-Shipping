// 函数: sub_1426e1cb0
// 地址: 0x1426e1cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140b63b70(arg1 + 0x80, &var_28)
int16_t* const rsi = &data_142d40450
int64_t var_18
int64_t* rax = sub_1426b3750(arg1, &var_18)

if (rax[1].d != 0)
    rsi = *rax

sub_140a2e390(arg2, u"%s: %s", rsi)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
