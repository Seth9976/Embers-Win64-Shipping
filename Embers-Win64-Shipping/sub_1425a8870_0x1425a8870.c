// 函数: sub_1425a8870
// 地址: 0x1425a8870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_6c = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_6c, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_6c)

bool cond:1 = *(arg2 + 0x20) == 0
char var_78 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_74, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

bool cond:2 = var_74 != 0
int32_t var_70 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_70, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

bool cond:3 = var_70 != 0
int64_t rax_6 = *(arg2 + 0x20)
uint32_t r9 = zx.d(var_78)
uint128_t zmm2 = var_6c
int64_t rdi
rdi.b = rax_6 != 0
char var_88 = rsi.b
*(arg2 + 0x20) = rdi + rax_6
uint128_t var_68[0x3]
uint128_t* result = sub_141f692b0(arg1, &var_68, zmm2, r9, var_88, cond:3)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_a8)
return result
