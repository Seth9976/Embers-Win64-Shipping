// 函数: sub_1427019a0
// 地址: 0x1427019a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax
char rax_1

if (arg3 != 0)
    rax_1 = sub_140d3e110(arg1 + 0x138)

float rax_3
uint128_t zmm0
float var_38

if (arg3 == 0 || rax_1 == 0)
    sub_1426fbf30(arg1, &var_38)
    int512_t zmm6_1
    zmm6_1.o = data_143b57f5c
    int64_t var_28[0x2]
    int64_t* rax_5
    int32_t zmm6_2
    rax_5, zmm6_2 = sub_141e912d0(arg1 + 0x148, &var_28)
    int32_t var_30
    zmm0.d = var_30.d f* zmm6_2
    uint128_t zmm2_1
    zmm2_1.d = var_38.d f* zmm6_2
    zmm0.d = zmm0.d f+ rax_5[1].d
    int32_t var_34
    int64_t zmm1_1
    zmm1_1.d = var_34.d f* zmm6_2
    zmm2_1.d = zmm2_1.d f+ *rax_5
    zmm1_1.d = zmm1_1.d f+ *(rax_5 + 4)
    rax_3 = zmm0.d
    zmm0 = _mm_unpacklo_ps(zmm2_1, zmm1_1)
else
    void* rcx_2 = *(sub_140d3c6e0(arg1 + 0x138) + 0x130)
    
    if (rcx_2 == 0)
        var_38.q = data_143dbb1f8.q
        zmm0 = zx.o(var_38.q)
        rax_3 = data_143dbb200
    else
        float zmm1[0x4] = *(rcx_2 + 0x1d0)
        var_38 = zmm1[0]
        int32_t var_34_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
        float var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        zmm0 = zx.o(var_38.q)
        rax_3 = var_30_1
*arg2 = zmm0.q
arg2[1].d = rax_3
return arg2
