// 函数: sub_1420ad890
// 地址: 0x1420ad890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
int128_t zmm6_1
result, zmm6_1 = sub_1420a5450(arg3)

if (result == 0)
    return result

int64_t* rax_2 = sub_142437e30((*(*arg3 + 0x150))(arg3), 0, 1)
int32_t var_28 = 0
float zmm0_1
int512_t zmm1_2
zmm0_1, zmm1_2 = sub_141f5bc90(arg1 + 0x70, zmm6_1, &var_28)
zmm1_2.o = 0x38d1b717

if (not(zmm0_1 >= 9.99999975e-05f))
    zmm0_1 = 9.99999975e-05f

int64_t rax_3 = *rax_2
*(rax_2 + 0x2ec) = zmm0_1
return (*(rax_3 + 0x5e8))(rax_2, zmm1_2)
