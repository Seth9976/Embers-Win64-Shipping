// 函数: sub_140f4f190
// 地址: 0x140f4f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* rsi = nullptr

if (*(arg1 + 0x1b8) != 0)
    int64_t* rcx = *(arg1 + 0x1b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x1b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x1b0)
        
        char var_178
        (*(*rcx_1 + 0x48))(rcx_1, &var_178)
        *(arg1 + 0x1a8) = var_178

char result = *(arg1 + 0x1a8)

if ((*arg3 & result) != 0)
    float var_170[0x4]
    
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2f8)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x300) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x2f8)
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_170)
            *(arg1 + 0x2e0) = var_170
    
    float zmm8[0x4] = *(arg1 + 0x2e0)
    int32_t rdi_1 = *(arg1 + 0x2d8)
    float zmm6[0x4] = *arg2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
    float zmm9[0x4] = zmm6
    zmm8[0] = zmm8[0] + temp0_1[0]
    var_170 = zmm8
    zmm9[0] = zmm9[0] - zmm8[0]
    uint64_t var_150
    
    if (rdi_1 != 0)
        float temp0_2[0x4] = _mm_min_ss((*sub_140e13cf0(*(arg1 + 0x2c8), &var_150))[0], zmm9[0])
        
        if (rdi_1 == 1)
            zmm9 = temp0_2
        else if (rdi_1 == 2)
            zmm6[0] = zmm6[0] - temp0_2[0]
            zmm6[0] = zmm6[0] * 0.5f
            zmm6[0] = zmm6[0] + zmm8[0]
        label_140f4f30b:
            zmm6[0] = zmm6[0] - temp0_1[0]
            zmm8 = zmm6
            zmm9 = temp0_2
        else if (rdi_1 == 3)
            zmm6[0] = zmm6[0] - temp0_2[0]
            goto label_140f4f30b
    
    float zmm7[0x4] = var_170[1]
    float zmm10[0x4] = *(arg2 + 4)
    zmm7[0] = zmm7[0] + var_170[3]
    int32_t rdi_4 = *(arg1 + 0x2dc)
    zmm6 = zmm10
    zmm6[0] = zmm6[0] - zmm7[0]
    
    if (rdi_4 != 0)
        float temp0_4[0x4] =
            _mm_min_ss((*(sub_140e13cf0(*(arg1 + 0x2c8), &var_150) + 4))[0], zmm6[0])
        
        if (rdi_4 == 1)
            zmm6 = temp0_4
        else if (rdi_4 == 2)
            zmm10[0] = zmm10[0] - temp0_4[0]
            zmm10[0] = zmm10[0] * 0.5f
            zmm10[0] = zmm10[0] + zmm7[0]
            zmm7 = zmm10
            zmm7[0] = zmm7[0] - var_170[3]
            zmm6 = temp0_4
        else if (rdi_4 == 3)
            zmm7 = zmm10
            zmm7[0] = zmm7[0] - temp0_4[0]
            zmm7[0] = zmm7[0] - var_170[3]
            zmm6 = temp0_4
    
    int128_t* rcx_7 = *(arg1 + 0x2c8) + 0x1c8
    bool cond:0_1 = data_143e20cf4 != 0
    float var_158 = zmm9[0]
    float var_154_1 = zmm6[0]
    var_170[0] = 0x3f800000
    var_170[1] = zmm8[0]
    var_170[2] = zmm7[0]
    uint128_t var_130
    uint64_t var_120
    uint128_t var_f8
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (cond:0_1)
        uint128_t* rax_12 = sub_140e111c0(rcx_7)
        char rcx_8 = 0
        
        if (*(rax_12 + 0x18) == 0)
            zmm1_1 = var_130
        else
            zmm0_1 = zx.o(rax_12[1].q)
            rcx_8 = 1
            zmm1_1 = *rax_12
            var_120 = zmm0_1.q
            var_120.d = (zmm0_1 ^ data_142d3f780).d
        
        if (rcx_8 == 0)
            goto label_140f4f50f
        
        uint64_t var_e8_2 = var_120
        var_f8 = zmm1_1
        goto label_140f4f44e
    
    int128_t* rax_11 = sub_140e111c0(rcx_7)
    
    if (*(rax_11 + 0x18) == 0)
    label_140f4f50f:
        zmm6 = *(arg2 + 8)
        var_130.q = var_158.q
        var_170 = data_142d8c9b0
        float var_160_1 = zmm8[0]
        float var_15c_1 = zmm7[0]
        int32_t var_114
        int32_t zmm7_1
        uint128_t zmm8_1
        zmm7_1, zmm8_1 = sub_1408b8950(&var_114, &var_170, arg2 + 0x1c)
        zmm1_1.d = zmm8_1.d f* zmm6[0]
        char var_fc
        char rcx_13 = (*(arg2 + 0x34) ^ var_fc) & 1
        zmm6[0] = zmm6[0] f* zmm7_1
        char var_fc_1 = var_fc ^ rcx_13
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_130:8.d = zmm6[0]
        zmm6[0] = zmm6[0] f+ arg2[1].d
        var_120:4.d = zmm8_1.d
        int32_t var_118_1 = zmm7_1
        var_130:0xc.d = zmm1_1.d
        var_120.d = zmm6[0]
    else
        zmm1_1 = zx.o(rax_11[1].q)
        var_f8 = *rax_11
        uint64_t var_e8_1 = zmm1_1.q
    label_140f4f44e:
        uint64_t* rdi_8 = *(arg1 + 0x2c8) + 0x1f8
        char var_e0_1 = 1
        
        if (rdi_8[3].d != 0)
            int64_t* rcx_9 = rdi_8[2]
            
            if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
                if (rdi_8[3].d != 0)
                    rsi = rdi_8[2]
                
                int64_t var_13c
                (*(*rsi + 0x48))(rsi, &var_13c)
                *rdi_8 = var_13c
        
        zmm0_1 = zx.o(*rdi_8)
        int128_t* var_188_1 = arg2 + 0x1c
        int32_t var_148 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_190_1 = &var_148
        var_150 = zmm0_1.q
        int32_t var_144_1 = (*(arg2 + 0xc)).d
        int32_t var_140_1 = zmm1_1.d
        sub_140dd8200(&var_130, &var_158, &var_170, &var_f8, &var_150, var_190_1, var_188_1)
    
    int64_t* rbx_1 = *(arg1 + 0x2d0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_a0_1 = *(arg1 + 0x2c8)
    float var_d8[0x4] = var_130
    uint128_t var_c8_1 = var_120.o
    int64_t var_100
    uint64_t var_a8_1 = var_100
    float var_110[0x4]
    float var_b8_1[0x4] = var_110
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp7_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140d99900(arg3, &var_d8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
