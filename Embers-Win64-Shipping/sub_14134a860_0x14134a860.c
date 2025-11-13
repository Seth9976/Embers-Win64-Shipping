// 函数: sub_14134a860
// 地址: 0x14134a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *(arg4 + 0x50)
uint64_t var_218 = *(arg4 + 0x60)
void* r10 = zmm1.q
int32_t var_240 = _mm_bsrli_si128(zmm1, 8).d
int32_t rax = *(r10 + 0x44)
int32_t var_244 = *(r10 + 0x48)
uint32_t var_23c = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
uint32_t var_234 = (var_218 u>> 0x20).d
uint128_t var_208 = rax.o
uint64_t var_218_1 = *(arg4 + 0x30)
uint64_t var_1f8 = var_218.d.q
zmm1 = *(arg4 + 0x20)
void* rcx = zmm1.q
uint128_t temp0_2 = _mm_bsrli_si128(zmm1, 8)
int32_t var_240_1 = _mm_bsrli_si128(zmm1, 8).d
int32_t var_244_1 = *(rcx + 0x48)
uint32_t var_23c_1 = (temp0_2.q u>> 0x20).d
uint32_t var_234_1 = (var_218_1 u>> 0x20).d
uint64_t var_218_2 = var_218_1.d.q
uint128_t var_228 = (*(rcx + 0x44)).o
void var_1e8
sub_141345e60(&var_1e8, &var_228, &var_208)
int64_t r9 = *(arg4 + 0x20)
int64_t arg_8
int32_t var_250 = &arg_8
void**** rax_14 = *(arg4 + 0x50)
int64_t rax_15 = *(arg4 + 0x38)
void*** arg_20 = nullptr
arg_8 = 0
sub_14134aab0(arg2, arg3, &var_1e8, r9, rax_15, rax_14, &arg_20)
*arg1 = 0
int32_t var_1e0
arg1[1].d = var_1e0
int32_t var_1dc
*(arg1 + 0xc) = var_1dc
int32_t var_1d8
arg1[2].d = var_1d8
int32_t var_1d4
*(arg1 + 0x14) = var_1d4
int128_t* r8_2 = &var_1e8
int32_t rax_20 = *(arg4 + 0x68)
void* r9_1 = *(arg4 + 0x20)
void**** var_258

if (*(arg4 + 0x6c) != 1)
    var_258.d = 2
    *arg1 = sub_14134a0b0(arg2, arg3, r8_2, r9_1, arg_20, arg_8, var_258.d, rax_20)
else
    var_258.d = 0
    void*** rbx_1 = arg_20
    int64_t rdi_1 = arg_8
    *arg1 = sub_14134a0b0(arg2, arg3, &var_1e8, 
        sub_14134a0b0(arg2, arg3, r8_2, r9_1, rbx_1, rdi_1, var_258.d, rax_20), rbx_1, rdi_1, 1, 
        *(arg4 + 0x68))
return arg1
