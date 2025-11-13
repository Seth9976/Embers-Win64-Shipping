// 函数: sub_1406e5690
// 地址: 0x1406e5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = 0
int32_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t var_68 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi = var_60
int64_t var_50 = 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int32_t var_48 = var_58

if (var_58 != 0)
    sub_1405a4c70(&var_50, var_58, 0)
    memcpy(var_50, rdi, var_58 * 2)
else
    int32_t var_44_1 = 0

int64_t var_40
int64_t* result = sub_140597df0(arg3, sub_1406e4430(&var_40, &var_50, rsi.b, var_68, arg_20))
int64_t rcx_10 = var_40

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_60

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
