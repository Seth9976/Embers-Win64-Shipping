// 函数: sub_141dd3bc0
// 地址: 0x141dd3bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != 0)
    result = sub_140d21950(arg2, sub_142581680())

if (arg2 == 0 || result == 0)
    result.b = 0
else
    int32_t rax_1 = sub_141dca220(arg1)
    int64_t r8_1 = *result
    (*(r8_1 + 0x10))(result, zx.q(rax_1), r8_1)
    int512_t zmm1
    zmm1.o = arg3
    (*(*result + 0x20))(result, zmm1)
    float zmm0_1[0x4]
    int64_t zmm1_1
    int512_t zmm2
    zmm0_1, zmm1_1, zmm2 = sub_141dd4e80(arg1)
    void var_58
    sub_141db7470(&var_58, arg1, result, zmm0_1, zmm1_1, zmm2)
    sub_141ddbf70(arg1, rax_1, &var_58)
    result.b = 1

return result
