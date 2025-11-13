// 函数: sub_140b746f0
// 地址: 0x140b746f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140a3ef70(arg1, &var_18)
int64_t* var_10
sub_140596d10(var_10, arg2)
var_10[2] = *arg3
void* rax_1 = arg3[1]
var_10[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

var_10[4].d = 0xffffffff
int32_t rax_2 = var_10[1].d
int16_t* rdx_2

if (rax_2 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *var_10

int32_t rcx_1 = rax_2 - 1

if (rax_2 == 0)
    rcx_1 = 0

int32_t arg_8
sub_140b74e80(arg1, &arg_8, sub_1405969c0(rcx_1, rdx_2), var_10, var_18, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
