// 函数: sub_141d75ee0
// 地址: 0x141d75ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432320c8
sub_141d77d20(arg1, 0)
int64_t* rbx = arg1[0xe]
int16_t* var_18
sub_140a2e390(&var_18, u"%d", zx.q(arg1[0x11].d))
int16_t* const rsi = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

(*(*rbx + 0x80))(rbx, rdx, 0x8000000)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_1 = arg1[0xf]
sub_140a2e390(&var_18, u"%d", zx.q(*(arg1 + 0x8c)))

if (var_10 != 0)
    rsi = var_18

(*(*rbx_1 + 0x80))(rbx_1, rsi, 0x8000000)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1422dbb10(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
