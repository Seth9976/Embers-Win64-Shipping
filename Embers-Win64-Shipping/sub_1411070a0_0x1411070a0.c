// 函数: sub_1411070a0
// 地址: 0x1411070a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int64_t* rax = sub_14139bef0(arg2)
int32_t zmm0 = *(arg3 + 0x2a8)
int32_t zmm1 = *(arg3 + 0x2b8)
int64_t arg_10 = *(arg2 + 0x1a0)
int32_t arg_8 = zmm0
int32_t arg_c = zmm1
int64_t* arg_18 = rax
sub_1405d0cd0(arg2, &arg_10, arg1 + 0x118, &arg_8, 0)
int32_t zmm0_1 = (zx.o(0)).d

if (arg4 != 0)
    zmm0_1 = 0x3f800000

arg_10 = *(arg2 + 0x1a0)
int32_t arg_20 = zmm0_1
sub_1405eb490(arg2, &arg_10, arg1 + 0x132, &arg_20, 0)
int64_t r15_1 = *(rax + 0x37c)
int32_t rbx_1 = arg_18[0x74].d
int64_t rax_5 = *(arg2 + 0x1a0)
int64_t var_88 = 0
int32_t var_7c = 0
arg_10 = rax_5
float var_80 = 1f f/ float.s(zx.q(divu.dp.d(0:(r15_1.d), rbx_1)))
int32_t var_70 = sub_1405d0e10(arg2, &arg_10, arg1 + 0x11e, &var_88, 0)
int32_t var_78 = 0
arg_10 = *(arg2 + 0x1a0)
int128_t zmm7
zmm7.d = 1f f/ float.s(zx.q(divu.dp.d(0:((r15_1 u>> 0x20).d), rbx_1)))
int32_t var_74 = zmm7.d
int32_t var_6c = zmm7.d
sub_1405d0e10(arg2, &arg_10, arg1 + 0x124, &var_78, 0)
int32_t r8_5 = *(arg3 + 0x1548)
arg_18 = *(arg2 + 0x1a0)
uint32_t rax_12 = (r15_1 u>> 0x20).d

if (*(arg1 + 0x130) != 0xffff)
    int64_t* rcx_8 = &arg_10
    
    if (r8_5 s< 3)
        sub_14137b7f0(rcx_8, arg2)
        sub_141083500(arg2, &arg_18, arg1 + 0x130, arg_10)
        sub_1405d1550(&arg_10)
        rax_12 = (r15_1 u>> 0x20).d
    else
        sub_14137baa0(rcx_8, arg2, 0xf, r8_5)
        sub_141083500(arg2, &arg_18, arg1 + 0x130, arg_10)
        sub_1405d1550(&arg_10)
        rax_12 = (r15_1 u>> 0x20).d

int32_t arg_28
uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(arg_28)).d f- 0.5f
zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(r15_1.d)).d
int64_t rax_13 = *(arg2 + 0x1a0)
int32_t var_98 = zmm1_1.d
zmm1_1 = _mm_cvtepi32_ps(zx.o(arg5))
arg_28.q = rax_13
zmm1_1.d = zmm1_1.d f- 0.5f
zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(rax_12)).d
int32_t var_94 = zmm1_1.d
return sub_1405d0cd0(arg2, &arg_28, arg1 + 0x12a, &var_98, 0)
