// 函数: sub_1405e62c0
// 地址: 0x1405e62c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void var_78
sub_1405de430(&var_78)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_78
void* arg_18 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void* const arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
void* const r9 = arg_10
void* r8_8 = arg_18
int64_t* rcx_5 = arg_20
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_1405e0560(rcx_5, rsi, r8_8, r9)
*arg3 = result
int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t var_70

if (var_70 == 0)
    return result

return sub_140a74f90(var_70)
