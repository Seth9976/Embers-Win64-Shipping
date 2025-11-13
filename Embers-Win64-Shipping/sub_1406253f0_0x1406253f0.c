// 函数: sub_1406253f0
// 地址: 0x1406253f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_1405d1820(arg1, &var_28)
int64_t* var_20
int64_t* rbx = var_20

if (rbx == 0)
    rbx = nullptr
else
    sub_140596d10(rbx, arg2)
    sub_140596d10(&rbx[2], arg3)
    rbx[4].d = 0xffffffff

int32_t rax = rbx[1].d
int16_t* rdx_3

if (rax == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rbx

int32_t rcx_2 = rax - 1

if (rax == 0)
    rcx_2 = 0

int32_t arg_8
sub_1405d2a60(arg1, &arg_8, sub_1405969c0(rcx_2, rdx_3), rbx, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
