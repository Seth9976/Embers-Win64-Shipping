// 函数: sub_142728300
// 地址: 0x142728300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_60

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_60
int32_t var_6c = (zx.o(0)).d

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_6c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_6c)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int32_t arg_20 = 0
int64_t r13
r13.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_78 = 0
int64_t r12
r12.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:3 = var_78 != 0
int32_t var_74 = 0
int64_t r15
r15.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_74, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

bool cond:4 = var_74 != 0
int64_t var_68 = 0
int64_t r14
r14.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_68, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_70, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_10 = *(arg2 + 0x20)
int128_t zmm2 = var_6c
bool var_88 = var_70 != 0
int64_t rdi
rdi.b = rax_10 != 0
char rax_11 = var_68.b
*(arg2 + 0x20) = rdi + rax_10
char result = sub_1426b77a0(arg1, rsi, zmm2, r13.b, r12.b, r15.b, r14.b, rax_11)
*arg3 = result
return result
