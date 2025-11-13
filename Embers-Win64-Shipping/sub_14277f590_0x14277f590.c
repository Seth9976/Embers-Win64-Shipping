// 函数: sub_14277f590
// 地址: 0x14277f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_98 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_9c = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_9c, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_9c)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t var_a0 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

bool cond:3 = *(arg2 + 0x20) == 0
int32_t var_a4 = 0

if (cond:3)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a4, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a4)

bool cond:4 = *(arg2 + 0x20) == 0
uint32_t zmm3[0x4] = data_143f87db0
float zmm1[0x4] = zmm3
float var_48[0x4] = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f87dc0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (cond:4)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:5 = *(arg2 + 0x20) == 0
char var_a8 = 0

if (cond:5)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_a8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_8 = *(arg2 + 0x20)
zmm3 = var_a0
int64_t rcx_6
rcx_6.b = rax_8 != 0
int32_t zmm2 = var_9c
char rax_9 = var_a8
uint32_t var_88[0x4] = var_58
uint32_t var_68[0x4] = temp0
uint32_t zmm0_1[0x4] = var_a4
*(arg2 + 0x20) = rcx_6 + rax_8
float var_78[0x4] = var_48
void* result = sub_14277b660(arg1, var_98, zmm2, zmm3[0], zmm0_1[0], &var_88, rax_9)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_e8)
return result
