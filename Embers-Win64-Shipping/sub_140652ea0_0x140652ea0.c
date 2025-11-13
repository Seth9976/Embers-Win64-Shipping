// 函数: sub_140652ea0
// 地址: 0x140652ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rcx_1 = &arg_10
int32_t arg_18 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rcx_1 = rax_2

int32_t* var_48 = rcx_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rcx_3 = &arg_18
int32_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rcx_3 = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* r13 = &arg_20
int32_t var_68 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r13 = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* r12 = &var_68
int32_t var_64 = 0
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r12 = rax_8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_64, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

int32_t* rax_10 = *(arg2 + 0x38)
int32_t* r15 = &var_64
int32_t var_60 = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r15 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t* rax_12 = *(arg2 + 0x38)
int32_t* r14 = &var_60
int32_t var_5c = 0
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    r14 = rax_12

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_5c, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_5c)

int32_t* rax_14 = *(arg2 + 0x38)
int32_t* rsi = &var_5c

if (rax_14 != 0)
    rsi = rax_14

int32_t var_58 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_58, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t* rax_16 = *(arg2 + 0x38)
int32_t* r10 = &var_58
int32_t* rdx_16 = var_48

if (rax_16 != 0)
    r10 = rax_16

int64_t rax_17 = *(arg2 + 0x20)
int64_t rcx_10
rcx_10.b = rax_17 != 0
*(arg2 + 0x20) = rcx_10 + rax_17
int64_t* result = sub_140636960(&var_48, rdx_16, rcx_3, r13, r12, r15, r14, rsi, r10)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_13 = *arg3
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int32_t* rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
