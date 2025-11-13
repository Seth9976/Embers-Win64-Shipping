// 函数: sub_140b80fd0
// 地址: 0x140b80fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = sub_140a464c0()
int32_t rdi = arg4[1].d
int64_t rbx_1 = *arg4
int16_t* var_28 = nullptr
sub_1405a4c70(&var_28, sbb.d(rdx, rdx, rdi != 0) + 2 + rdi, 0)
memcpy(var_28, rbx_1, rdi * 2)
int16_t* const rbx_2 = &data_142d40450
sub_140a2cf70(&var_28, &data_142d40450, 0)
int16_t* const r8_2 = &data_142d40450

if (rdi != 0)
    r8_2 = var_28

int16_t* var_18
(*(data_14399ea08 + 0x100))(&data_14399ea08, &var_18, r8_2)
int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140b20bf0(&var_18)
sub_140596d10(arg2, arg3)
int32_t var_10

if (var_10 != 0)
    rbx_2 = var_18

sub_140b20770(arg2, rbx_2)
int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
