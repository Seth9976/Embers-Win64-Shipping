// 函数: sub_140b1d930
// 地址: 0x140b1d930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int64_t rsi = *arg1
int16_t* var_18 = nullptr

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rsi, rbx * 2)
else
    int32_t var_c_1 = 0

int32_t rbx_1 = arg2[1].d
int64_t rdi_1 = *arg2
int16_t* var_28 = nullptr

if (rbx_1 != 0)
    sub_1405a4c70(&var_28, rbx_1, 0)
    memcpy(var_28, rdi_1, rbx_1 * 2)
else
    int32_t var_1c_1 = 0

sub_140b20c40(&var_18)
sub_140b20c40(&var_28)
int16_t* const rcx_6 = &data_142d40450
int16_t* rdx_4 = &data_142d40450

if (rbx_1 != 0)
    rdx_4 = var_28

if (rbx != 0)
    rcx_6 = var_18

int32_t rax = sub_140a54510(rcx_6, rdx_4)
int16_t* rcx_7 = var_28
rbx_1.b = rax == 0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rbx_1.b)
