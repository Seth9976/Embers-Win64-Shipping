// 函数: sub_1424c5b90
// 地址: 0x1424c5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_68 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_60, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_3 = *(arg2 + 0x38)
void* r15 = &var_60
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r15 = rax_3

void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_5 = *(arg2 + 0x38)
void* r14 = &var_58
uint64_t var_50 = 0
int64_t var_48 = 0

if (rax_5 != 0)
    r14 = rax_5

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

uint64_t* rax_7 = *(arg2 + 0x38)
uint64_t* rsi = &var_50
int32_t arg_10 = 0

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:3 = arg_10 != 0
int32_t arg_20 = 0
int64_t r12
r12.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_10 = *(arg2 + 0x20)
void* rdx_12 = var_68
int64_t rdi
rdi.b = rax_10 != 0
bool cond:5 = arg_20 != 0
*(arg2 + 0x20) = rdi + rax_10
rax_10.b = cond:5
int64_t result = sub_14208b960(arg1, rdx_12, r15, r14, rsi, r12.b, rax_10.b)
uint64_t rcx_7 = var_50

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
