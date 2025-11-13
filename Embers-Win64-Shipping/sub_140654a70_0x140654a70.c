// 函数: sub_140654a70
// 地址: 0x140654a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88 = 0
int32_t var_80 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t var_98 = 0
int32_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_a8 = 0
int32_t var_a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_b8 = 0
int32_t var_b0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_b8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rsi = var_b8
int64_t var_68 = 0
int64_t rcx_5
rcx_5.b = rax_6 != 0
*(arg2 + 0x20) = rcx_5 + rax_6
int32_t var_60 = var_b0

if (var_b0 != 0)
    sub_1405a4c70(&var_68, var_b0, 0)
    memcpy(var_68, rsi, var_b0 * 2)
else
    int32_t var_5c_1 = 0

int64_t rsi_1 = var_a8
int64_t var_58 = 0
int32_t var_50 = var_a0

if (var_a0 != 0)
    sub_1405a4c70(&var_58, var_a0, 0)
    memcpy(var_58, rsi_1, var_a0 * 2)
else
    int32_t var_4c_1 = 0

int64_t rsi_2 = var_98
int64_t var_48 = 0
int32_t var_40 = var_90

if (var_90 != 0)
    sub_1405a4c70(&var_48, var_90, 0)
    memcpy(var_48, rsi_2, var_90 * 2)
else
    int32_t var_3c_1 = 0

int64_t rsi_3 = var_88
int64_t var_38 = 0
int32_t var_30 = var_80

if (var_80 != 0)
    sub_1405a4c70(&var_38, var_80, 0)
    memcpy(var_38, rsi_3, var_80 * 2)
else
    int32_t var_2c_1 = 0

int64_t rsi_4 = var_78
int64_t var_28 = 0
int32_t var_20 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_28, var_70, 0)
    memcpy(var_28, rsi_4, var_70 * 2)
else
    int32_t var_1c_1 = 0

int64_t var_18
int64_t* result = sub_14063b2a0(&var_18, &var_28, &var_38, &var_48, &var_58, &var_68)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_18 = *arg3
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_20 = var_18

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t rcx_21 = var_b8

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t rcx_22 = var_a8

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

int64_t rcx_23 = var_98

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

int64_t rcx_24 = var_88

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int64_t rcx_25 = var_78

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
