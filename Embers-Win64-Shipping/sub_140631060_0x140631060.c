// 函数: sub_140631060
// 地址: 0x140631060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = data_143dbb1f0
int32_t* result = sub_1423de540(data_143f5b298, arg1, 0)
float zmm0_1[0x4]

if (result != 0)
    int32_t arg_20
    sub_14202bf60(sub_142436920(result), &arg_20)
    int64_t* rcx_4 = *(sub_142436920(result) + 0xb8)
    int32_t arg_1c = int.d(fconvert.t(arg2[1]))
    void var_18
    result = (*(*rcx_4 + 0x110))(rcx_4, &var_18, int.d(fconvert.t(*arg2)).q)
    zmm0_1 = arg_20
    zmm0_1[0] = zmm0_1[0] f* *result
    int64_t zmm1_1
    zmm1_1.d = arg4.d f* result[1]
    *arg3 = (_mm_unpacklo_ps(zmm0_1, zmm1_1)).q

zmm0_1 = zx.o(0)

if (not(zmm0_1[0] f!= *arg3) && not(zmm0_1[0] f!= *(arg3 + 4)))
    result.b = 0
    return result

result.b = 1
return result
