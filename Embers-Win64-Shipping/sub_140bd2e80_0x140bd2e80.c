// 函数: sub_140bd2e80
// 地址: 0x140bd2e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_1405d1820(arg1, &var_28)
int64_t* var_20
*var_20 = 0
*var_20 = *arg2
*arg2 = 0
var_20[1].d = arg2[1].d
*(var_20 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
var_20[2] = 0
var_20[2] = *arg3
*arg3 = 0
var_20[3].d = arg3[1].d
*(var_20 + 0x1c) = *(arg3 + 0xc)
arg3[1] = 0
var_20[4].d = 0xffffffff
int32_t rax_6 = var_20[1].d
int16_t* rdx_1

if (rax_6 == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *var_20

int32_t rcx = rax_6 - 1

if (rax_6 == 0)
    rcx = 0

int32_t arg_8
sub_1405d2a60(arg1, &arg_8, sub_1405969c0(rcx, rdx_1), var_20, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
