// 函数: sub_14250b1b0
// 地址: 0x14250b1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int128_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t var_e4 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_e4, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e4)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rcx_2 = &var_e4
char var_e8 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rcx_2 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_e8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

char* rax_6 = *(arg2 + 0x38)
char* rcx_4 = &var_e8
int32_t var_e0 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rcx_4 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_e0, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r13 = &var_e0
char var_e7 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r13 = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_e7, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e7)

char* rax_10 = *(arg2 + 0x38)
char* r12 = &var_e7
int32_t var_dc = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r12 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_dc, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_dc)

int32_t* rax_12 = *(arg2 + 0x38)
int32_t* r15 = &var_dc
char var_e6 = 0
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    r15 = rax_12

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_e6, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e6)

char* rax_14 = *(arg2 + 0x38)
char* r14 = &var_e6
int32_t var_d8 = 0
*(arg2 + 0x38) = 0

if (rax_14 != 0)
    r14 = rax_14

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_d8, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

int32_t* rax_16 = *(arg2 + 0x38)
int32_t* rsi = &var_d8
char var_e5 = 0
*(arg2 + 0x38) = 0

if (rax_16 != 0)
    rsi = rax_16

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &var_e5, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e5)

char* rax_18 = *(arg2 + 0x38)
char* rcx_11 = &var_e5

if (rax_18 != 0)
    rcx_11 = rax_18

int64_t rax_19 = *(arg2 + 0x20)
int128_t var_b8 = var_78
int64_t rdi
rdi.b = rax_19 != 0
uint128_t var_68
uint128_t var_a8 = var_68
*(arg2 + 0x20) = rdi + rax_19
int32_t var_40
int32_t var_80 = var_40
int128_t var_58
int128_t var_98 = var_58
int64_t var_48
uint64_t var_88 = var_48
char* result = sub_1420b3e90(&var_b8, rcx_2, rcx_4, r13, r12, r15, r14, rsi, rcx_11)
__security_check_cookie(rax_1 ^ &var_138)
return result
