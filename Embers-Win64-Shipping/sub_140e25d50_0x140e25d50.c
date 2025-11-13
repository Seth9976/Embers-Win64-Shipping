// 函数: sub_140e25d50
// 地址: 0x140e25d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint32_t zmm1[0x4] = *arg6
uint32_t zmm6[0x4] = *(arg5 + 4)
zmm1[0] = zmm1[0] f+ *arg4
uint32_t zmm5[0x4] = *arg5
zmm1[0] = zmm1[0] f+ zmm1[0]
uint32_t zmm3[0x4] = *(arg6 + 4)
float zmm0 = zmm5[0] f+ zmm5[0]
zmm3[0] = zmm3[0] f+ arg4[1]
zmm5[0] = zmm5[0] f+ *arg7
zmm3[0] = zmm3[0] f+ zmm3[0]
zmm1[0] = zmm1[0] f- zmm0
zmm0 = zmm6[0] f+ zmm6[0]
zmm6[0] = zmm6[0] f+ arg7[1]
zmm5[0] = zmm5[0] f- zmm1[0]
zmm3[0] = zmm3[0] f- zmm0
uint32_t temp0[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
zmm6[0] = zmm6[0] f- zmm3[0]
uint32_t temp0_1[0x4] = _mm_and_ps(zmm5, 0x7fffffff)
uint32_t temp0_2[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
temp0[0] = temp0[0] f+ temp0_2[0]
uint32_t temp0_3[0x4] = _mm_and_ps(zmm6, 0x7fffffff)
temp0[0] = temp0[0] f+ temp0_1[0]
temp0[0] = temp0[0] f+ temp0_3[0]
int64_t result

if (temp0[0] f<= arg9[0])
    void var_98
    sub_140ae16d0(arg2, &var_98, *(arg3 + 0x28))
    result = sub_140de7d80(arg8, *arg7, &var_98)
else
    uint64_t var_80
    sub_140e27c40(arg4, arg5, arg6, arg7, &var_80)
    int512_t zmm3_1
    zmm3_1.o = 0x3f000000
    void var_90
    int32_t zmm6_1 = sub_140ad9660(&var_90, arg1, arg2)
    void var_78
    void var_70
    void var_68
    sub_140e25d50(arg1, &var_90, arg3, &var_80, &var_78, &var_70, &var_68, arg8, zmm6_1)
    void var_60
    void var_58
    void var_50
    result = sub_140e25d50(&var_90, arg2, arg3, &var_68, &var_60, &var_58, &var_50, arg8, zmm6_1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
