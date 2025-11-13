// 函数: sub_14252f0f0
// 地址: 0x14252f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_6 = *(arg2 + 0x38)
char* rdi = &arg_10
int64_t rsi = var_48

if (rax_6 != 0)
    rdi = rax_6

int64_t var_68 = var_88
int64_t rax_7 = *(arg2 + 0x20)
int64_t var_58 = var_78
int64_t rcx_5
rcx_5.b = rax_7 != 0
int64_t var_38 = 0
*(arg2 + 0x20) = rcx_5 + rax_7
int32_t var_80
int32_t var_60 = var_80
int32_t var_70
int32_t var_50 = var_70
int32_t var_30 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_38, var_40, 0)
    memcpy(var_38, rsi, var_40 * 2)
else
    int32_t var_2c_1 = 0

int64_t* result = sub_1420e67a0(arg_18, &var_38, &var_58, &var_68, rdi)
int64_t rcx_10 = var_48
*arg3 = result

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
