// 函数: sub_141eff730
// 地址: 0x141eff730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
rax.b = *(arg1 + 0x41c) u>> 3
rax.b &= 1

if (rax.b != 0 && *(arg1 + 0x408) == 0)
    void* rax_1 = sub_140d209c0(arg1)
    int64_t rdx_1 = *rax_1
    rax = (*(rdx_1 + 0x690))(rax_1, rdx_1)
    *(arg1 + 0x408) = rax
    rax.b = rax != 0

if (rax.b != 0)
    float zmm0 = *(arg1 + 0x424)
    uint8_t rdx_2 = *(arg1 + 0x41c)
    void* r8_1 = *(*(arg1 + 0x408) + 0x48)
    uint8_t rcx_1 = rdx_2 u>> 3
    float temp0_1 = _mm_max_ss(*(arg1 + 0x420) - zmm0, 0)
    
    if (zmm0 f!= *(r8_1 + 0x48) || not(temp0_1 + temp0_1 f== *(r8_1 + 0x4c)))
        *(arg1 + 0x408) = 0
        rcx_1 = 0
        rdx_2 = *(arg1 + 0x41c)
    
    *(arg1 + 0x41c) = ((rcx_1 << 3 ^ rdx_2) & 8) ^ rdx_2

int32_t result
float zmm6
float zmm7
int32_t zmm8
result, zmm6, zmm7, zmm8 = sub_141f2bb70(arg1)

if ((*(arg1 + 0x41c) & 8) == 0)
    float var_18_1 = zmm6
    void* rbx_1 = *(*(arg1 + 0x408) + 0x48)
    float var_28_1 = zmm7
    zmm7 = *(arg1 + 0x420) - *(arg1 + 0x424)
    int128_t var_48 = data_143dbb0c0
    _mm_max_ss(zmm7, zmm8)
    int64_t var_58
    float zmm6_1
    float zmm7_1
    zmm6_1, zmm7_1 = sub_140adf5d0(&var_48, &var_58)
    *(rbx_1 + 0x3c) = var_58
    int32_t var_50
    *(rbx_1 + 0x44) = var_50
    uint128_t zmm2_1 = data_143dbb0d0
    *(rbx_1 + 0x48) = zmm6_1
    result = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
    *(rbx_1 + 0x4c) = zmm7_1 + zmm7_1
    *(rbx_1 + 0x30) = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
    *(rbx_1 + 0x38) = result

return result
