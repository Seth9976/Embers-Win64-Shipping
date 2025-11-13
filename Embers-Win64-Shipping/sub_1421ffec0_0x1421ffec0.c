// 函数: sub_1421ffec0
// 地址: 0x1421ffec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x80) & 1) == 0)
    return 

if ((*(arg1 + 0x30) & 2) != 0 && arg2 != 0)
    void* rax_1 = *(arg2 + 0x18)
    
    if (rax_1 != 0)
        float zmm6[0x4] = *(rax_1 + 0x1e0)
        _mm_shuffle_ps(zmm6, zmm6, 0x55)
        _mm_shuffle_ps(zmm6, zmm6, 0xaa)

int64_t var_50_1 = 0
void var_48
int64_t* rax_2
float zmm6_1[0x4]
int64_t zmm7_1
float zmm8_1
rax_2, zmm6_1, zmm7_1, zmm8_1 =
    sub_141fe56b0(arg1 + 0x38, &var_48, *(arg4 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
zmm6_1[0] = zmm6_1[0] f* *rax_2
zmm7_1.d = zmm7_1.d f* *(rax_2 + 4)
zmm8_1 = zmm8_1 f* rax_2[1].d
float temp0_3[0x4] = _mm_unpacklo_ps(zmm6_1, zmm7_1)
*(arg4 + 0x30) = temp0_3.q
*(arg4 + 0x20) = temp0_3.q
*(arg4 + 0x38) = zmm8_1
*(arg4 + 0x28) = zmm8_1
