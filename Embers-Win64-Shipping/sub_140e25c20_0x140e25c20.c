// 函数: sub_140e25c20
// 地址: 0x140e25c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint32_t zmm6[0x4] = *(arg2 + 4)
uint32_t zmm5[0x4] = *arg2
uint32_t zmm1[0x4] = *arg3
uint32_t zmm3[0x4] = *(arg3 + 4)
float zmm0 = zmm5[0] f+ zmm5[0]
zmm5[0] = zmm5[0] f+ *arg4
zmm1[0] = zmm1[0] f+ *arg1
zmm1[0] = zmm1[0] f+ zmm1[0]
zmm3[0] = zmm3[0] f+ arg1[1]
zmm3[0] = zmm3[0] f+ zmm3[0]
zmm1[0] = zmm1[0] f- zmm0
zmm0 = zmm6[0] f+ zmm6[0]
zmm6[0] = zmm6[0] f+ *(arg4 + 4)
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

if (temp0[0] f<= arg6[0])
    result = sub_140de7d80(arg5, *arg4, &arg5[6])
else
    uint64_t var_58
    int32_t zmm6_1 = sub_140e27c40(arg1, arg2, arg3, arg4, &var_58)
    void var_50
    void var_48
    void var_40
    sub_140e25c20(&var_58, &var_50, &var_48, &var_40, arg5, zmm6_1)
    void var_38
    void var_30
    void var_28
    result = sub_140e25c20(&var_40, &var_38, &var_30, &var_28, arg5, zmm6_1)

__security_check_cookie(rax_1 ^ &var_88)
return result
