// 函数: sub_142521200
// 地址: 0x142521200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_e8 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

int64_t var_b0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_b0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

int64_t var_c0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_c0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c0)

uint64_t var_f0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_f0, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f0)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:0 = arg_18 != 0
int64_t var_d0 = 0
int64_t r12
r12.b = cond:0
int64_t var_c8 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_d0, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d0)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r14 = &var_d0
char arg_10 = 0

if (rax_7 != 0)
    r14 = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_e0 = 0
int64_t var_d8 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_e0, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

int64_t rax_10 = *(arg2 + 0x38)
char rsi = &var_e0
int32_t arg_20 = 0

if (rax_10 != 0)
    rsi = rax_10.b

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_20, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t r15
r15.b = arg_20 != 0
int128_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_19 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_19[4]
    sub_140d30490(arg2, &var_68, r8_19)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

uint128_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_21 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_21[4]
    sub_140d30490(arg2, &var_78, r8_21)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t var_f8 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_23 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_23[4]
    sub_140d30490(arg2, &var_f8, r8_23)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f8)

int64_t rax_15 = *(arg2 + 0x20)
uint64_t r9 = var_f0
int128_t zmm1 = var_68
int64_t rdi
rdi.b = rax_15 != 0
uint128_t var_58 = var_78
uint64_t var_98 = var_c0
int32_t var_b8
int32_t var_90 = var_b8
uint64_t var_88 = var_b0
int32_t var_100 = var_f8.d
uint128_t* var_108 = &var_58
int128_t var_48
int128_t* var_110 = &var_48
int64_t* rcx_12 = var_e8
char var_118 = r15.b
int32_t var_a8
int32_t var_80 = var_a8
uint32_t rax_18 = zx.d(arg_10)
*(arg2 + 0x20) = rdi + rax_15
var_48 = zmm1
char result = sub_1420cb4a0(rcx_12, &var_88, &var_98, r9, r12.b, r14, rax_18, rsi)
int64_t rcx_13 = var_e0
*arg3 = result

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_d0

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
