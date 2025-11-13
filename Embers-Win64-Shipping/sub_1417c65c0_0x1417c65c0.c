// 函数: sub_1417c65c0
// 地址: 0x1417c65c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_14098dfb0(arg1, &var_28)
int64_t* var_20
sub_140596d10(var_20, arg2)
var_20[2] = 0
int64_t rbp = sx.q(arg3[1].d)
int64_t rdi_1 = *arg3
var_20[3].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a00(&var_20[2], rbp.d, 0)
    memcpy(var_20[2], rdi_1, (rbp << 3).d)
else
    *(var_20 + 0x1c) = 0

var_20[4].d = 0xffffffff
int32_t rax = var_20[1].d
int16_t* rdx_4

if (rax == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *var_20

int32_t rcx_3 = rax - 1

if (rax == 0)
    rcx_3 = 0

int32_t arg_8
sub_1405d2a60(arg1, &arg_8, sub_1405969c0(rcx_3, rdx_4), var_20, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
