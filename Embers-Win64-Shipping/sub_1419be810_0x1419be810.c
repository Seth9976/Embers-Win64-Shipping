// 函数: sub_1419be810
// 地址: 0x1419be810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_14098dfb0(arg1, &var_28)
int64_t* var_20
*var_20 = 0
*var_20 = *arg2
*arg2 = 0
var_20[1].d = arg2[1].d
*(var_20 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
var_20[2] = *arg3
void* rax_4 = arg3[1]
var_20[3] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

var_20[4].d = 0xffffffff
int32_t rax_5 = var_20[1].d
int16_t* rdx_1

if (rax_5 == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *var_20

int32_t rcx = rax_5 - 1

if (rax_5 == 0)
    rcx = 0

int32_t arg_8
sub_140924ec0(arg1, &arg_8, sub_1405969c0(rcx, rdx_1), var_20, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
