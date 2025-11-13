// 函数: sub_141cc5bf0
// 地址: 0x141cc5bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const rcx_1 = &data_142d40450
int16_t* rdx_1

if (arg2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg2

int32_t var_10

if (var_10 != 0)
    rcx_1 = var_18

int32_t rax = sub_140a54510(rcx_1, rdx_1)
int16_t* rcx_2 = var_18
int64_t rdi
rdi.b = rax != 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int16_t* rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rdi.b)
