// 函数: sub_1405cb070
// 地址: 0x1405cb070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
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
int32_t var_1a4 = (zx.o(0)).d

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_1a4, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1a4)

int64_t var_1a0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_1a0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1a0)

char var_1a8 = 0
int64_t r8_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_8[4]
    r8_7 = sub_140d30490(arg2, &var_1a8, r8_8)
else
    r8_7 = sub_140d30460(arg2, *(arg2 + 0x18), &var_1a8)

int64_t rax_7 = *(arg2 + 0x20)
int64_t r9 = var_1a0
int512_t zmm2
zmm2.o = var_1a4
int64_t rdi
rdi.b = rax_7 != 0
char rax_8 = var_1a8
*(arg2 + 0x20) = rdi + rax_7
*arg3 = sub_1405c3c60(arg1, rsi, r8_7, r9, rax_8)
void* result = sub_1405c8dc0(&var_198)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
