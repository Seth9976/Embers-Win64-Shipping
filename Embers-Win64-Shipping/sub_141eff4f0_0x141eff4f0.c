// 函数: sub_141eff4f0
// 地址: 0x141eff4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
uint64_t rax
rax.b = *(arg1 + 0x41c) u>> 3
rax.b &= 1

if (rax.b != 0 && *(arg1 + 0x408) == 0)
    void* rax_1 = sub_140d209c0(arg1)
    int64_t rdx_1 = *rax_1
    rax = (*(rdx_1 + 0x690))(rax_1, rdx_1)
    *(arg1 + 0x408) = rax
    rax.b = rax != 0

int64_t var_88

if (rax.b != 0)
    float rax_2 = *(arg1 + 0x428)
    int64_t zmm1 = *(arg1 + 0x420)
    uint8_t rdx_2 = *(arg1 + 0x41c)
    uint8_t rcx_1 = rdx_2 u>> 3
    void* r8_1 = *(*(arg1 + 0x408) + 0x38)
    var_88 = zmm1
    
    if (not(zmm1.d f>= 9.99999975e-05f))
        zmm1 = 0x3f800000
    
    float zmm0 = var_88:4.d
    
    if (not(zmm0 >= 9.99999975e-05f))
        zmm0 = 1f
    
    float zmm2 = rax_2
    
    if (not(zmm2 >= 9.99999975e-05f))
        zmm2 = 1f
    
    zmm1.d = zmm1.d f* 2f
    
    if (zmm1.d f!= *(r8_1 + 0x48) || zmm0 * 2f f!= *(r8_1 + 0x4c)
            || not(zmm2 * 2f f== *(r8_1 + 0x50)))
        *(arg1 + 0x408) = 0
        rcx_1 = 0
        rdx_2 = *(arg1 + 0x41c)
    
    *(arg1 + 0x41c) = ((rcx_1 << 3 ^ rdx_2) & 8) ^ rdx_2

int32_t result
int128_t zmm6_1
float zmm7
int64_t zmm8
float zmm9
result, zmm6_1, zmm7, zmm8, zmm9 = sub_141f2b510(arg1)

if ((*(arg1 + 0x41c) & 8) == 0)
    int32_t rax_4 = *(arg1 + 0x428)
    float var_38_1 = zmm8.d
    void* rbx_1 = *(*(arg1 + 0x408) + 0x38)
    float var_48_1 = zmm9
    var_88 = *(arg1 + 0x420)
    int128_t zmm10 = rax_4
    
    if (not(zmm10.d f>= zmm7))
        zmm10 = zmm6_1
    
    int128_t var_78 = data_143dbb0c0
    float zmm8_1
    float zmm9_1
    zmm8_1, zmm9_1 = sub_140adf5d0(&var_78, &var_88)
    *(rbx_1 + 0x3c) = var_88
    *(rbx_1 + 0x44) = rax_4
    uint128_t zmm2_1 = data_143dbb0d0
    result = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
    zmm10.d = zmm10.d f* 2f
    *(rbx_1 + 0x30) = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
    *(rbx_1 + 0x48) = zmm8_1 * 2f
    *(rbx_1 + 0x4c) = zmm9_1 * 2f
    *(rbx_1 + 0x50) = zmm10.d
    *(rbx_1 + 0x38) = result

return result
