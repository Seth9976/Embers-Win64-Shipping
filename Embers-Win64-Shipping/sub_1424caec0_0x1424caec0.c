// 函数: sub_1424caec0
// 地址: 0x1424caec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int32_t var_8c = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_8c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_8c)

uint32_t zmm3[0x4] = data_143f64e10
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f64e20)
zmm3[0].q = zx.o(0) u>> 0x40
float var_78[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_68 = zx.o(0)
uint32_t var_58[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_78
int32_t var_98 = 0

if (rax_5 != 0)
    rsi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

bool cond:1 = var_98 != 0
int32_t var_94 = 0
int64_t r15
r15.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_94, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

bool cond:2 = var_94 != 0
int32_t var_90 = 0
int64_t r14
r14.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_90, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

bool cond:3 = var_90 != 0
int64_t rax_9 = *(arg2 + 0x20)
uint64_t r8_12 = zx.q(var_8c)
uint64_t rdx_13 = zx.q(var_88)
int64_t rdi
rdi.b = rax_9 != 0
char var_b0 = r14.b
char var_b8 = r15.b
*(arg2 + 0x20) = rdi + rax_9
char result = (*(*arg1 + 0x928))(arg1, rdx_13, r8_12, rsi, var_b8, var_b0, cond:3)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_d8)
return result
