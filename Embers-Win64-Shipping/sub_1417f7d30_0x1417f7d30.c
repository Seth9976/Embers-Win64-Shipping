// 函数: sub_1417f7d30
// 地址: 0x1417f7d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* var_70 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

void var_68
sub_1405d5290(&var_68)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_68
int32_t var_78 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

uint32_t zmm3[0x4] = data_143ef9910
bool cond:1 = var_78 != 0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143ef9920)
zmm3[0].q = zx.o(0) u>> 0x40
int64_t rbp
rbp.b = cond:1
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_48 = zx.o(0)
uint32_t var_38[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t* rax_7 = *(arg2 + 0x38)
int128_t* r9 = &var_58
void* rcx_5 = var_70

if (rax_7 != 0)
    r9 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
int64_t* result = sub_1417eb9f0(rcx_5, rsi, rbp.b, r9)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_98)
return result
