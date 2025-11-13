// 函数: sub_141c1d250
// 地址: 0x141c1d250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58
sub_141b7bae0(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void** rax_2 = *(arg2 + 0x38)
void** r14 = &var_58
int64_t var_88 = 0
int64_t var_80 = 0

if (rax_2 != 0)
    r14 = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &var_88

if (rax_4 != 0)
    rsi = rax_4

int128_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int32_t arg_20 = (zx.o(0)).d
int64_t r15
r15.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_8 = *(arg2 + 0x20)
int32_t zmm1 = arg_20
int64_t rdi
rdi.b = rax_8 != 0
int128_t var_68 = var_78
*(arg2 + 0x20) = rdi + rax_8
int64_t result = sub_141ba4230(r14, rsi, &var_68, r15.b, zmm1)
int64_t rcx_7 = var_88

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
