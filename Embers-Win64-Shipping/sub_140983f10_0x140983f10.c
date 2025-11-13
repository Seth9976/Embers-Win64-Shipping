// 函数: sub_140983f10
// 地址: 0x140983f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t var_38 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_38, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi = var_58
int64_t var_48 = 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
int64_t rax_6 = var_38.q
*(arg2 + 0x20) = rcx_4 + rax_5
int64_t rcx_6 = 0

if (rax_6 != 0)
    rcx_6 = var_38:8.q

int64_t var_20 = rcx_6
int64_t var_28 = rax_6
int32_t var_40 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_48, var_50, 0)
    memcpy(var_48, rdi, var_50 * 2)
else
    int32_t var_3c_1 = 0

void* result = sub_14095dc00(arg_18, arg_10, &var_48, &var_28)
int64_t rcx_10 = var_58
*arg3 = result

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
