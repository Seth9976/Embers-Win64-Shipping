// 函数: sub_1405cb200
// 地址: 0x1405cb200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_198
sub_1405ab4c0(&var_198)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_198, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_198)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_198
void* var_1a0 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_1a0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1a0)

int64_t var_1a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_1a8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1a8)

int64_t rax_6 = *(arg2 + 0x20)
int64_t r9 = var_1a8
void* r8_6 = var_1a0
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
*arg3 = sub_1405c3ed0(arg1, rsi, r8_6, r9)
void* result = sub_1405c8dc0(&var_198)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
