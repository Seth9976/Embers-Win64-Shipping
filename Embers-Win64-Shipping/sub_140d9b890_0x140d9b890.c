// 函数: sub_140d9b890
// 地址: 0x140d9b890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int128_t zmm8 = arg3[1].d
int128_t zmm9 = *(arg3 + 0xc)
int64_t zmm5 = arg3[2].d
float zmm6[0x4] = *(arg3 + 0x14)
float zmm2 = *arg2 f- *arg3
int64_t zmm3
zmm3.d = arg2[1].d f- *(arg3 + 4)
int64_t zmm0
zmm0.d = zmm5.d f* zmm9.d
int128_t zmm7
zmm7.d = zmm8.d f* zmm6[0]
zmm7.d = zmm7.d f- zmm0.d
zmm0.d = zmm3.d f* zmm8.d
float zmm4 = (zmm2 f* zmm9.d f- zmm0.d) * -1f f/ zmm7.d

if (not(zmm4 < 0f) && not(zmm4 > 1f))
    zmm3.d = zmm3.d f* zmm5.d
    zmm2 = (zmm2 * zmm6[0] f- zmm3.d) f/ zmm7.d

if (zmm4 < 0f || zmm4 > 1f || zmm2 < 0f || zmm2 > 1f)
    zmm3 = *arg3
    zmm0 = zmm6[0].q
    int64_t var_88 = zmm3
    zmm8.d = zmm8.d f+ zmm3.d
    zmm9.d = zmm9.d f+ var_88:4.d
    zmm6[0] = zmm6[0] f+ var_88:4.d
    float zmm1 = zmm5.d
    zmm5.d = zmm5.d f+ zmm3.d
    int32_t var_80_1 = zmm8.d
    zmm0.d = zmm0.d f+ zmm9.d
    int32_t var_7c_1 = zmm9.d
    float var_6c_1 = zmm6[0]
    int32_t* rdi_1 = &var_88
    zmm6 = 0x7f7fffff
    int32_t i = 0
    int32_t var_70_1 = zmm5.d
    float var_78_1 = zmm1 f+ zmm8.d
    int32_t var_74_1 = zmm0.d
    int64_t var_90
    
    do
        i += 1
        int32_t rax_3 = i & 0x80000003
        
        if (rax_3 s< 0)
            rax_3 = ((rax_3 - 1) | 0xfffffffc) + 1
        
        int32_t var_98
        sub_140acf930(&var_98, arg2, rdi_1, &(&var_88)[sx.q(rax_3)])
        int64_t zmm0_1 = var_98
        int32_t var_94
        float zmm1_1[0x4] = var_94
        zmm1_1[0] = zmm1_1[0] f- arg2[1]
        zmm0_1.d = zmm0_1.d f- *arg2
        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        zmm1_1[0] = zmm1_1[0] f+ zmm0_1.d
        
        if (not(zmm1_1[0] >= zmm6[0]))
            var_90 = var_98.q
        
        rdi_1 = &rdi_1[2]
        zmm6 = _mm_min_ss(zmm1_1[0], zmm6[0])
    while (i s< 4)
    
    *arg1 = var_90.d.d
    *(arg1 + 4) = var_90:4.d[0]
else
    *arg1 = *arg2

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
