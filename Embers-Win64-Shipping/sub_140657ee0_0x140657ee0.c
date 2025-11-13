// 函数: sub_140657ee0
// 地址: 0x140657ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_4 = *(arg2 + 0x38)
char* r14 = &arg_10
int64_t rsi = var_68
int64_t var_48 = 0

if (rax_4 != 0)
    r14 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rcx_3
rcx_3.b = rax_5 != 0
*(arg2 + 0x20) = rcx_3 + rax_5
int32_t var_40 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_48, var_60, 0)
    memcpy(var_48, rsi, var_60 * 2)
else
    int32_t var_3c_1 = 0

int64_t rsi_1 = var_58
int64_t var_38 = 0
int32_t var_30 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_38, var_50, 0)
    memcpy(var_38, rsi_1, var_50 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28
int64_t* result = sub_14063e590(&var_28, &var_38, &var_48, r14)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_10 = *arg3
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_12 = var_28

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_68

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_58

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
