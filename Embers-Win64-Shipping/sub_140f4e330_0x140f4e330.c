// 函数: sub_140f4e330
// 地址: 0x140f4e330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    void* var_198
    sub_140f48c10(arg1 + 0x2a8, &var_198)
    int64_t* rcx_2 = data_143e29f28
    uint64_t var_1d8
    int128_t* rax_4 = (*(*rcx_2 + 0x58))(rcx_2, &var_1d8)
    int128_t zmm8 = *rax_4
    int128_t zmm10 = *(rax_4 + 4)
    void* rax_5 = sub_140e12190(arg1)
    void* rcx_4 = var_198
    int128_t zmm6 = *(rax_5 + 0x1c)
    int128_t zmm7 = *(rax_5 + 0x20)
    float zmm2 = *(rax_5 + 0x28)
    float zmm4_1 = *(rax_5 + 0x24)
    int128_t zmm9
    zmm9.d = zmm8.d f- *(rax_5 + 0x2c)
    zmm8.d = zmm8.d f- *(rax_5 + 0x2c)
    float zmm0_1 = zmm10.d
    zmm10.d = zmm10.d f- *(rax_5 + 0x30)
    float zmm5_1 = 1f / (zmm6.d * zmm2 - zmm7.d * zmm4_1)
    zmm6.d = zmm6.d f* zmm5_1
    zmm7.d = zmm7.d f* zmm5_1
    zmm10.d = zmm10.d f* zmm6.d
    zmm8.d = zmm8.d f* zmm7.d
    zmm10.d = zmm10.d f- zmm8.d
    zmm9.d = zmm9.d f* zmm2 * zmm5_1
    int32_t var_1a4_1 = zmm10.d
    zmm6.d = zmm10.d f+ data_1439b3a54
    zmm9.d = zmm9.d f- (zmm0_1 f- *(rax_5 + 0x30)) * zmm4_1 * zmm5_1
    int32_t var_19c_1 = zmm6.d
    int32_t var_1a8 = zmm9.d
    zmm7.d = zmm9.d f+ data_1439b3a50
    int32_t var_1a0_1 = zmm7.d
    int64_t* rax_6 = sub_140e13cf0(rcx_4, &var_1d8)
    float zmm1 = data_143dbb1f0:4.d
    zmm9.d = zmm9.d f+ data_1439b3a50
    zmm7.d = zmm7.d f+ *rax_6
    zmm6.d = zmm6.d f+ *(rax_6 + 4)
    zmm10.d = zmm10.d f+ data_1439b3a54
    int32_t var_1f8 = data_143dbb1f0.d
    int32_t zmm0_2 = *arg2
    float var_1f4_1 = zmm1
    zmm1 = arg2[1]
    int32_t var_1b0_1 = zmm7.d
    int32_t var_1ac_1 = zmm6.d
    int32_t var_1b8 = zmm9.d
    int32_t var_1b4_1 = zmm10.d
    int32_t var_1f0_1 = zmm0_2
    float var_1ec_1 = zmm1
    int32_t var_1e0 = 1
    int32_t var_1d0
    float zmm11_1 = sub_140d9bb20(&var_1d0, &var_1a8, &var_1b8, &var_1e0, &var_1f8)
    float zmm7_1 = arg2[9]
    float zmm8_1 = arg2[7]
    float zmm9_1 = arg2[8]
    uint128_t zmm6_1 = arg2[0xa]
    uint128_t zmm3_1 = var_1d0
    int128_t zmm10_1 = arg2[0xc] ^ data_142d3f780
    uint128_t zmm1_1
    zmm1_1.d = zmm3_1.d f* zmm8_1
    var_1f8 = 0x3f800000
    float var_1cc
    zmm1_1.d = zmm1_1.d f+ var_1cc * zmm7_1
    zmm3_1.d = zmm3_1.d f* zmm9_1
    zmm1_1.d = zmm1_1.d f+ arg2[0xb]
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    float zmm4_2 = var_1cc f* zmm6_1.d f+ zmm3_1.d f+ arg2[0xc]
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_8 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm6_1.d f* zmm8_1
    zmm1_1.d = zmm1_1.d f- zmm9_1 * zmm7_1
    float zmm0_3 = zmm10_1.d
    uint128_t zmm5_2 = _mm_cvtepi32_ps(zx.o(rax_8))
    zmm11_1 = zmm11_1 f/ zmm1_1.d
    zmm1_1 = arg2[0xb] ^ data_142d3f780
    uint128_t zmm12
    zmm12.d = zmm5_2.d f+ zmm1_1.d
    zmm6_1.d = zmm6_1.d f* zmm11_1
    zmm5_2.d = zmm5_2.d f+ zmm1_1.d
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm4_2 + zmm4_2 + 0.5f) s>> 1))
    zmm5_2.d = zmm5_2.d f* zmm9_1 * zmm11_1
    zmm10_1.d = zmm10_1.d f+ zmm2_1.d
    zmm12.d = zmm12.d f* zmm6_1.d
    zmm10_1.d = zmm10_1.d f* zmm8_1 * zmm11_1
    zmm10_1.d = zmm10_1.d f- zmm5_2.d
    zmm12.d = zmm12.d f- (zmm0_3 f+ zmm2_1.d) * zmm7_1 * zmm11_1
    int32_t var_1f0_2 = zmm10_1.d
    int32_t var_1f4_2 = zmm12.d
    void var_188
    void var_170
    int64_t* rax_12 = sub_140e13cf0(*sub_140f48c10(arg1 + 0x2a8, &var_170), &var_188)
    void var_180
    int64_t* rax_13 = sub_140f48c10(arg1 + 0x2a8, &var_180)
    int128_t* rcx_10 = *rax_13 + 0x1c8
    uint128_t var_160
    uint64_t var_150
    uint128_t var_128
    uint128_t zmm0_4
    uint128_t zmm1_2
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_15 = sub_140e111c0(rcx_10)
        char rcx_11 = 0
        
        if (*(rax_15 + 0x18) == 0)
            zmm1_2 = var_160
        else
            zmm0_4 = zx.o(rax_15[1].q)
            rcx_11 = 1
            zmm1_2 = *rax_15
            var_150 = zmm0_4.q
            var_150.d = (zmm0_4 ^ data_142d3f780).d
        
        if (rcx_11 == 0)
            goto label_140f4e7e6
        
        uint64_t var_118_2 = var_150
        var_128 = zmm1_2
        goto label_140f4e72d
    
    int128_t* rax_14 = sub_140e111c0(rcx_10)
    
    if (*(rax_14 + 0x18) == 0)
    label_140f4e7e6:
        zmm6_1 = arg2[2]
        var_160.d = (*rax_12).d
        var_1f8.o = data_142d8c9b0
        var_160:4.d = (*(rax_12 + 4)).d
        int32_t var_1e8_1 = zmm12.d
        int32_t var_1e4_1 = zmm10_1.d
        int32_t var_144
        int32_t zmm10_2
        int32_t zmm12_1
        zmm10_2, zmm12_1 = sub_1408b8950(&var_144, &var_1f8, &arg2[7])
        zmm1_2.d = zmm6_1.d f* zmm12_1
        uint128_t zmm0_5
        zmm0_5.d = zmm6_1.d f* zmm10_2
        char var_12c
        char var_12c_1 = var_12c ^ ((arg2[0xd].b ^ var_12c) & 1)
        zmm1_2.d = zmm1_2.d f+ arg2[3]
        var_160:8.d = zmm6_1.d
        zmm0_5.d = zmm0_5.d f+ arg2[4]
        var_150:4.d = zmm12_1
        int32_t var_148_1 = zmm10_2
        var_160:0xc.d = zmm1_2.d
        var_150.d = zmm0_5.d
    else
        zmm1_2 = zx.o(rax_14[1].q)
        var_128 = *rax_14
        uint64_t var_118_1 = zmm1_2.q
    label_140f4e72d:
        uint64_t* rbx_2 = *rax_13 + 0x1f8
        char var_110_1 = 1
        
        if (rbx_2[3].d != 0)
            int64_t* rcx_12 = rbx_2[2]
            
            if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
                int64_t* rcx_13
                
                if (rbx_2[3].d == 0)
                    rcx_13 = nullptr
                else
                    rcx_13 = rbx_2[2]
                
                (*(*rcx_13 + 0x48))(rcx_13, &var_1e0)
                *rbx_2 = var_1e0.q
        
        zmm0_4 = zx.o(*rbx_2)
        int32_t var_1c8
        int128_t* var_210_1 = &var_1c8
        var_1c8 = arg2[2].d
        zmm1_2 = arg2[4]
        var_1d8 = zmm0_4.q
        int32_t var_1c4_1 = arg2[3].d
        int32_t var_1c0_1 = zmm1_2.d
        sub_140dd8200(&var_160, rax_12, &var_1f8, &var_128, &var_1d8, var_210_1, &arg2[7])
    
    int64_t* rbx_3 = rax_13[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int64_t var_d0_1 = *rax_13
    uint128_t var_108 = var_160
    uint128_t var_f8_1 = var_150.o
    int64_t var_130
    uint64_t var_d8_1 = var_130
    uint128_t var_140
    uint128_t var_e8_1 = var_140
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    result = sub_140d99900(arg3, &var_108)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_178
    
    if (var_178 != 0)
        var_178[1].d -= 1
        
        if (var_178[1].d == 1)
            result = (**var_178)(var_178)
            int32_t temp6_1 = *(var_178 + 0xc)
            *(var_178 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*var_178 + 8))(var_178, 1)
    
    int64_t* var_168
    
    if (var_168 != 0)
        var_168[1].d -= 1
        
        if (var_168[1].d == 1)
            result = (**var_168)(var_168)
            int32_t temp8_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*var_168 + 8))(var_168, 1)
    
    int64_t* var_190
    
    if (var_190 != 0)
        var_190[1].d -= 1
        
        if (var_190[1].d == 1)
            result = (**var_190)(var_190)
            int32_t temp9_1 = *(var_190 + 0xc)
            *(var_190 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*var_190 + 8))(var_190, 1)

__security_check_cookie(rax_1 ^ &var_238)
return result
