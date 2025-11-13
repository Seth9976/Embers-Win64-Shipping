// 函数: sub_142770780
// 地址: 0x142770780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_142770c30(arg1, &var_28)
int64_t* var_20
*var_20 = 0
*var_20 = *arg2
*arg2 = 0
var_20[1].d = arg2[1].d
*(var_20 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
sub_140596d10(&var_20[2], arg3)
*(var_20 + 0x20) = *(arg3 + 0x10)
var_20[6].d = 0xffffffff
int32_t rax_3 = var_20[1].d
int16_t* rdx_2

if (rax_3 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *var_20

int32_t rcx_1 = rax_3 - 1

if (rax_3 == 0)
    rcx_1 = 0

int32_t arg_8
sub_142771c40(arg1, &arg_8, sub_1405969c0(rcx_1, rdx_2), var_20, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 0x10
