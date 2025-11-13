// 函数: sub_140a53700
// 地址: 0x140a53700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d

if (rax == 0 || rax == 1)
    return sub_140637dd0(&data_14399e8d0, arg1) __tailcall

int32_t rax_1 = arg1[1].d
int16_t* rdx

if (rax_1 == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

int32_t rcx = rax_1 - 1

if (rax_1 == 0)
    rcx = 0

int32_t rax_2 = sub_1405969c0(rcx, rdx)
int32_t arg_10
sub_140a3a4d0(&data_14399e8d0, &arg_10, rax_2, arg1)
int64_t rcx_1 = sx.q(arg_10)
void* rcx_3

if (rcx_1.d != 0xffffffff)
    rcx_3 = data_14399e8d0 + rcx_1 * 0x28

if (rcx_1.d == 0xffffffff || rcx_3 == 0)
    int32_t var_18
    sub_1405d1820(&data_14399e8d0, &var_18)
    int64_t* var_10
    sub_140596d10(var_10, arg1)
    int32_t rax_3 = var_18
    var_10[2] = 0
    var_10[3] = 0
    var_10[4].d = 0xffffffff
    sub_1405d2a60(&data_14399e8d0, &arg_10, rax_2, var_10, rax_3, nullptr)
    rcx_3 = data_14399e8d0 + sx.q(arg_10) * 0x28

return sub_140597df0(rcx_3 + 0x10, arg2) __tailcall
