// 函数: sub_14248c830
// 地址: 0x14248c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rsi = &arg_8
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rcx_2 = &arg_10

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
float zmm0[0x4] = *(arg1 + 0x1e0)
float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x424)
*rsi = temp0_1[0]
zmm0 = *(arg1 + 0x1e8)
zmm0[0] = zmm0[0] f* *(arg1 + 0x420)
*rcx_2 = zmm0[0]
return result
