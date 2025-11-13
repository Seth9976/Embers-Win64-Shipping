// 函数: sub_142718090
// 地址: 0x142718090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x1d]
int64_t var_48
float rax_2
float zmm0[0x4]

if (rax == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_2 = data_143dbb200
else
    void* rax_1 = *(rax + 0xb0)
    
    if (rax_1 == 0)
        float rax_3 = data_143b58090
        var_48 = data_143b58088
        zmm0 = zx.o(var_48)
        rax_2 = rax_3
    else
        float zmm1[0x4] = *(rax_1 + 0x1d0)
        var_48.d = zmm1[0]
        var_48:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rax_1 + 0x114)
        zmm0 = zx.o(var_48)
        rax_2 = temp0_2[0]

var_48 = zmm0.q
float var_40_3 = rax_2
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
int128_t zmm11
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_142716380(arg1, &var_48)

if (arg1[0x4c].d == 0xffffffff || (arg1[0x4d].b & 2) == 0)
    if (arg1[0x4f].d != 0)
        if ((*(*arg1 + 0x4f8))(arg1, arg1[0x4e] + sx.q(arg1[0x4f].d - 1) * 0xc) != 0)
            (*(*arg1 + 0x448))(arg1)
            (*(*arg1 + 0x4c8))(arg1, zx.q(*(arg1 + 0x284)))
        
        arg1[0x4d].d &= 0xfffffffd
        arg1[0x4f].d = 0
        
        if (*(arg1 + 0x27c) != 0)
            sub_140638cc0(&arg1[0x4e], 0)
    
    return sub_142718460(arg1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11)

char rax_5
uint128_t zmm6_1
uint128_t zmm7_1
float zmm8_1
rax_5, zmm6_1, zmm7_1, zmm8_1 = sub_142703550(arg1, &var_48)
int64_t r8_1 = *arg1

if (rax_5 == 0)
    char result = (*(r8_1 + 0x4f8))(arg1, &var_48, r8_1)
    
    if (result == 0)
        return result
    
    int32_t rax_6 = arg1[0x50].d
    arg1[0x50].d = rax_6 + 1
    
    if (rax_6 + 1 s>= 0 && rax_6 + 1 s< arg1[0x4f].d)
        uint128_t var_18 = zmm6_1
        uint128_t var_28 = zmm7_1
        float var_38 = zmm8_1
        sub_141ead1f0(&arg1[0x29], nullptr, arg1[0x4e] + sx.q(rax_6 + 1) * 0xc)
        int64_t r8_3 = arg1[0x4e]
        int64_t rax_10 = sx.q(arg1[0x50].d)
        int64_t rcx_4 = rax_10 * 3
        int64_t rdx_3 = rax_10 * 3
        uint128_t zmm6_2
        zmm6_2.d = (*(r8_3 + (rcx_4 << 2))).d f- *(r8_3 + (rdx_3 << 2) - 0xc)
        uint128_t zmm7_2
        zmm7_2.d = (*(r8_3 + (rcx_4 << 2) + 4)).d f- *(r8_3 + (rdx_3 << 2) - 8)
        float zmm8_2 = *(r8_3 + (rcx_4 << 2) + 8) f- *(r8_3 + (rdx_3 << 2) - 4)
        uint128_t zmm0_1
        zmm0_1.d = zmm6_2.d f* zmm6_2.d
        uint128_t zmm2
        zmm2.d = zmm7_2.d f* zmm7_2.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm8_2 * zmm8_2
        
        if (zmm2.d f== 1f)
            goto label_1427182e2
        
        int64_t var_58
        float var_50_1
        
        if (zmm2.d f>= 9.99999994e-09f)
            float zmm3_1 = zmm2.d
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3_1)
            zmm3_1 = zmm3_1 * 0.5f
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm2.d = 0.5f - zmm3_1 f* zmm0_1.d
            zmm0_1.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm0_1.d = zmm5_1.d f* (0.5f - zmm3_1 * zmm5_1.d f* zmm5_1.d)
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm6_2.d = zmm6_2.d f* zmm5_1.d
            zmm7_2.d = zmm7_2.d f* zmm5_1.d
            zmm8_2 = zmm8_2 f* zmm5_1.d
        label_1427182e2:
            var_50_1 = zmm8_2
            var_58:4.d = zmm7_2.d
            var_58.d = zmm6_2.d
        else
            var_58.d = data_143dbb1f8.d
            var_50_1 = data_143dbb200.d
            var_58:4.d = data_143dbb1fc
        
        arg1[0x3f] = var_58
        arg1[0x40].d = var_50_1
        return sub_142717810(arg1)
    
    if ((arg1[0x4d].b & 1) == 0)
        arg1[0x4f].d = 0
        
        if (*(arg1 + 0x27c) != 0)
            sub_140638cc0(&arg1[0x4e], 0)
        
        arg1[0x4d].d &= 0xfffffffd
        (*(*arg1 + 0x448))(arg1)
        return (*(*arg1 + 0x4c8))(arg1, zx.q(*(arg1 + 0x284)))
    
    (*(*arg1 + 0x448))(arg1)
else
    (*(r8_1 + 0x448))(arg1)

int16_t arg_8 = data_143b58110
char arg_a = 0
return (*(*arg1 + 0x440))(arg1, &arg_8)
