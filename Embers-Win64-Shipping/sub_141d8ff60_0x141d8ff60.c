// 函数: sub_141d8ff60
// 地址: 0x141d8ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_141d8fd20(&var_28, arg2)
int16_t* const rdi = &data_142d40450
int16_t* const rsi = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rsi = var_28

int64_t* rax = sub_140b257f0()
int16_t* rax_1

if (rax[1].d == 0)
    rax_1 = &data_142d40450
else
    rax_1 = *rax

int16_t* const var_18 = rax_1
uint64_t var_38 = 0
wchar16 const* const var_10 = u"Demos/"
int32_t var_30 = 0
sub_140b0f5f0(&var_38, &var_18, 2)
*arg1 = 0

if (var_30 != 0)
    rdi = var_38

var_18 = rdi
int16_t* const var_10_1 = rsi
arg1[1] = 0
sub_140b0f5f0(arg1, &var_18, 2)
uint64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg1
