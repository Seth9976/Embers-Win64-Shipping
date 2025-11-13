// 函数: sub_1424fd130
// 地址: 0x1424fd130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_28
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_18

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float zmm2[0x4] = *(rcx_2 + 4)
zmm2[0] = zmm2[0] f* *(rdi + 4)
float zmm0[0x4] = *rcx_2
zmm0[0] = zmm0[0] f* *rdi
float zmm1[0x4] = *(rcx_2 + 8)
zmm1[0] = zmm1[0] f* *(rdi + 8)
zmm2[0] = zmm2[0] + zmm0[0]
zmm0 = *(rcx_2 + 0xc)
zmm0[0] = zmm0[0] f* *(rdi + 0xc)
zmm2[0] = zmm2[0] + zmm1[0]
zmm1 = 0xbf800000
zmm2[0] = zmm2[0] + zmm0[0]
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm2[0] = zmm2[0] - 1f

if (not(zmm2[0] < -1f))
    zmm1 = _mm_min_ss(zmm2[0], 0x3f800000)

float result = acosf(zmm1[0])
*arg3 = result
return result
