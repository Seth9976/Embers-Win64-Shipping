// 函数: sub_1423dde70
// 地址: 0x1423dde70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* arg_8
int64_t* var_38 = &arg_8
int64_t* var_30 = arg1
int64_t** var_20 = &var_38
*arg1 = 0
arg1[1] = 0
void (* var_28)(int64_t* arg1, int64_t* arg2) = sub_1423d3e00
arg_8 = nullptr
int64_t var_18
int64_t* rax = sub_140b63b70(&arg_10, &var_18)
int16_t* rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

void (** var_48)(int64_t* arg1, int64_t* arg2) = &var_28
int64_t var_50 = 0
sub_140cc1bd0(nullptr, rdx_1, (zx.d(arg3) << 0x13) + 0x82, 0, nullptr)
int64_t rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void* rcx_2 = arg_8

if (rcx_2 != 0)
    sub_140ccddc0(rcx_2)

return arg1
