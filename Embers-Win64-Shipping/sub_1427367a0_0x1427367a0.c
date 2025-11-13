// 函数: sub_1427367a0
// 地址: 0x1427367a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_24
int32_t var_24_1 = var_24 & 0xfffffffe
int64_t var_48
__builtin_memset(&var_48, 0, 0x20)
char var_28 = 0xff
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rdi = &var_48
int64_t var_68 = 0
int32_t var_60 = 0

if (rax_3 != 0)
    rdi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi = var_68
int64_t var_58 = 0
int64_t rcx_3
rcx_3.b = rax_5 != 0
*(arg2 + 0x20) = rcx_3 + rax_5
int32_t var_50 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_58, var_60, 0)
    memcpy(var_58, rsi, var_60 * 2)
else
    int32_t var_4c_1 = 0

uint64_t result = sub_1426bebd0(arg_10, rdi, &var_58)
int64_t rcx_8 = var_68

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_48

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
