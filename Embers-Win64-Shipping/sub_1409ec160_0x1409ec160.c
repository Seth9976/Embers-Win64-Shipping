// 函数: sub_1409ec160
// 地址: 0x1409ec160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = 0
int64_t var_38 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_40
int32_t arg_10 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_48 = 0
int64_t r14
r14.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:3 = var_48 != 0
int32_t var_44 = 0
int64_t rbp
rbp.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_44, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_44)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
bool cond:5 = var_44 != 0
*(arg2 + 0x20) = rdi + rax_7
rax_7.b = cond:5
int64_t* result = sub_1409b6930(arg1, rsi, r15.b, r14.b, rbp.b, rax_7.b)
int64_t rcx_6 = var_40

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
