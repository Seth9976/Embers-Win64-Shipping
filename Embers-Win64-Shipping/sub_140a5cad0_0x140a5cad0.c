// 函数: sub_140a5cad0
// 地址: 0x140a5cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140598750(arg1, &var_18)
int64_t* var_10
*var_10 = 0
*var_10 = *arg3
*arg3 = 0
var_10[1].d = arg3[1].d
*(var_10 + 0xc) = *(arg3 + 0xc)
arg3[1] = 0
var_10[2].d = 0xffffffff
int32_t rax_3 = var_10[1].d
int16_t* rdx_1

if (rax_3 == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *var_10

int32_t rcx = rax_3 - 1

if (rax_3 == 0)
    rcx = 0

sub_14059a6d0(arg1, arg2, sub_1405969c0(rcx, rdx_1), var_10, var_18, arg4)
return arg2
