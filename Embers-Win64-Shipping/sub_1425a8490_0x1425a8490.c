// 函数: sub_1425a8490
// 地址: 0x1425a8490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_60 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

bool cond:1 = *(arg2 + 0x20) == 0
char var_68 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t var_64 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_64, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_64)

bool cond:2 = var_64 != 0
int64_t rax_5 = *(arg2 + 0x20)
uint32_t r9 = zx.d(var_68)
int128_t zmm2 = var_60
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
uint128_t var_58[0x3]
uint128_t* result = sub_141f68b80(arg1, &var_58, zmm2, r9, cond:2)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_98)
return result
