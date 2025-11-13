// 函数: sub_142570260
// 地址: 0x142570260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_78 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_7c = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_7c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_7c)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_88 = 0
int64_t r12
r12.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

bool cond:3 = var_88 != 0
int32_t var_84 = 0
int64_t r15
r15.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_84, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

bool cond:4 = var_84 != 0
int32_t var_80 = 0
int64_t r14
r14.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_80, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

bool cond:5 = var_80 != 0
char arg_10 = 0
int64_t rsi
rsi.b = cond:5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &arg_10, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_70 = -1
int64_t var_68 = 0
int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &var_70, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_9 = *(arg2 + 0x20)
int128_t zmm0 = var_70.o
int64_t rdi
rdi.b = rax_9 != 0
int128_t zmm2 = var_7c
uint64_t var_48 = var_60
uint128_t zmm1 = var_78
char rax_10 = arg_10
*(arg2 + 0x20) = rdi + rax_9
int128_t var_58 = zmm0
return sub_142273c00(arg1, zmm1, zmm2, r12.b, r15.b, r14.b, rsi.b, rax_10, &var_58)
