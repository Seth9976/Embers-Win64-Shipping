// 函数: sub_140b11b90
// 地址: 0x140b11b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3[1].d
int64_t rbp = *arg3
int64_t var_18 = 0
int32_t var_10 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rbp, rbx * 2)
else
    int32_t var_c_1 = 0

int32_t rbx_1 = arg2[1].d
int64_t rsi_1 = *arg2
int64_t var_28 = 0
int32_t var_20 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_28, rbx_1, 0)
    memcpy(var_28, rsi_1, rbx_1 * 2)
else
    int32_t var_1c_1 = 0

sub_140b11da0(arg1, &var_28, &var_18)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg1
