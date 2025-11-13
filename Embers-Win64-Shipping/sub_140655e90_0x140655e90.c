// 函数: sub_140655e90
// 地址: 0x140655e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_a0 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

void* var_a8 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

*(arg2 + 0x38) = 0
void var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_90, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

void* rax_4 = *(arg2 + 0x38)
void* rcx_3 = &var_90
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rcx_3 = rax_4

void var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_80, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

void* rax_6 = *(arg2 + 0x38)
void* r13 = &var_80
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    r13 = rax_6

void var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_70, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

void* rax_8 = *(arg2 + 0x38)
void* r12 = &var_70
*(arg2 + 0x38) = 0

if (rax_8 != 0)
    r12 = rax_8

void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_60, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_10 = *(arg2 + 0x38)
void* r15 = &var_60
int64_t arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_10 != 0)
    r15 = rax_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_20, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t* rax_12 = *(arg2 + 0x38)
int64_t* r14 = &arg_20
*(arg2 + 0x38) = 0

if (rax_12 != 0)
    r14 = rax_12

void var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_50, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

uint64_t* rax_14 = *(arg2 + 0x38)
uint64_t* rsi = &var_50
char arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_14 != 0)
    rsi = rax_14

if (*(arg2 + 0x20) == 0)
    int64_t* r8_17 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_17[4]
    sub_140d30490(arg2, &arg_10, r8_17)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_16 = *(arg2 + 0x38)
char* rcx_10 = &arg_10
void* rdx_18 = var_a8

if (rax_16 != 0)
    rcx_10 = rax_16

int64_t rax_17 = *(arg2 + 0x20)
int64_t* rcx_11 = var_a0
int64_t rdi
rdi.b = rax_17 != 0
*(arg2 + 0x20) = rdi + rax_17
uint64_t result = sub_14063c780(rcx_11, rdx_18, rcx_3, r13, r12, r15, r14, rsi, rcx_10)
*arg3 = result
return result
