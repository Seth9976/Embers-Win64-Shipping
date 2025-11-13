// 函数: sub_142511500
// 地址: 0x142511500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_48 = 0
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_58 = 0
int64_t var_50 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r14 = &var_58
int64_t var_68 = 0
int64_t var_60 = 0

if (rax_4 != 0)
    r14 = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_6 = *(arg2 + 0x38)
int64_t* rsi = &var_68
char arg_18 = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_9 = *(arg2 + 0x20)
uint32_t rcx_6 = zx.d(arg_18)
int64_t rdi
rdi.b = rax_9 != 0
uint32_t rax_10 = zx.d(arg_10)
*(arg2 + 0x20) = rdi + rax_9
char result = j_sub_14060a620(&var_38, &var_48, r14, rsi, rcx_6, rax_10)
int64_t rcx_8 = var_68
*arg3 = result

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_58

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
