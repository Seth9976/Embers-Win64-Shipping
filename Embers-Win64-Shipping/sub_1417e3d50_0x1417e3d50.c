// 函数: sub_1417e3d50
// 地址: 0x1417e3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int32_t arg_20 = 0
int64_t r15
r15.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:3 = arg_20 != 0
int32_t var_88 = 0
int64_t r14
r14.b = cond:3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

bool cond:4 = var_88 != 0
int32_t var_84 = 0
int64_t rsi
rsi.b = cond:4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_84, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_84)

int64_t rax_7 = *(arg2 + 0x20)
char var_98 = var_84 != 0
int64_t var_58 = var_80
int64_t zmm0 = var_70
int64_t rdi
rdi.b = rax_7 != 0
int32_t var_78
int32_t var_50 = var_78
int32_t var_68
int32_t var_40 = var_68
*(arg2 + 0x20) = rdi + rax_7
int64_t var_48 = zmm0
void var_38
sub_1417d6ca0(arg3, sub_1417ddee0(&var_38, &var_48, &var_58, r15.b, r14.b, rsi.b, var_98))
return sub_1417d6b00(&var_38)
