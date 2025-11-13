// 函数: sub_141d77d20
// 地址: 0x141d77d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) == 0 && arg2 == 0)
    return 

*(arg1 + 0x20) = 0
uint64_t r8_1

if (arg2 == 0)
    r8_1 = zx.q(*(arg1 + 0x80))
else
    r8_1 = 0
    *(arg1 + 0x80) = 0

int64_t* rbx_1 = *(arg1 + 0x60)
int16_t* var_18
sub_140a2e390(&var_18, u"%d", r8_1)
int16_t* const rsi_1 = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

(*(*rbx_1 + 0x80))(rbx_1, rdx, 0x8000000)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_2 = *(arg1 + 0x68)
sub_140a2e390(&var_18, u"%d", zx.q(*(arg1 + 0x84)))
int16_t* const rdx_1 = &data_142d40450

if (var_10 != 0)
    rdx_1 = var_18

(*(*rbx_2 + 0x80))(rbx_2, rdx_1, 0x8000000)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rbx_3 = *(arg1 + 0x58)
sub_140a2e390(&var_18, u"%d", 0)

if (var_10 != 0)
    rsi_1 = var_18

(*(*rbx_3 + 0x80))(rbx_3, rsi_1, 0x8000000)
int16_t* rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)
