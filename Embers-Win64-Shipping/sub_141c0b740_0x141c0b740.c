// 函数: sub_141c0b740
// 地址: 0x141c0b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* var_60 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void var_48
sub_140d921c0(&var_48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_4 = *(arg2 + 0x38)
void* rbp = &var_48

if (rax_4 != 0)
    rbp = rax_4

int64_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

*(arg2 + 0x38) = 0
void var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* rsi = &var_58
int32_t var_68 = 0

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_9 = *(arg2 + 0x20)
int64_t r8_10 = var_50
int64_t* rcx_6 = var_60
int64_t rdi
rdi.b = rax_9 != 0
bool cond:3 = var_68 != 0
*(arg2 + 0x20) = rdi + rax_9
rax_9.b = cond:3
uint64_t result = sub_141bdd2c0(rcx_6, rbp, r8_10, rsi, rax_9.b)
__security_check_cookie(rax_1 ^ &var_98)
return result
