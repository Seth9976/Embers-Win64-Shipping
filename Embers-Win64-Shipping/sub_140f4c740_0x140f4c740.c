// 函数: sub_140f4c740
// 地址: 0x140f4c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* r14 = nullptr

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
    float var_170
    sub_140f47f00(arg1, &var_170, *(arg2 + 8))
    float zmm8_1[0x4] = var_170
    int32_t var_168
    float zmm7_1[0x4] = var_168
    float zmm6_1[0x4] = *arg2
    zmm8_1[0] = zmm8_1[0] + zmm7_1[0]
    int32_t rdi_1 = *(arg1 + 0x2d8)
    float zmm9_1[0x4] = zmm6_1
    zmm9_1[0] = zmm9_1[0] - zmm8_1[0]
    uint64_t var_150
    
    if (rdi_1 != 0)
        int64_t* rax_6 = sub_140e13cf0(*(arg1 + 0x2c8), &var_150)
        float temp0_1[0x4] = __minss_xmmss_memss(zmm9_1[0], *rax_6)
        
        if (rdi_1 == 1)
            zmm9_1 = temp0_1
        else if (rdi_1 == 2)
            zmm6_1[0] = zmm6_1[0] - temp0_1[0]
            zmm6_1[0] = zmm6_1[0] * 0.5f
            zmm6_1[0] = zmm6_1[0] + zmm8_1[0]
            zmm8_1 = zmm6_1
            zmm8_1[0] = zmm8_1[0] - zmm7_1[0]
            zmm9_1 = temp0_1
        else if (rdi_1 == 3)
            zmm8_1 = zmm6_1
            zmm8_1[0] = zmm8_1[0] - temp0_1[0]
            zmm8_1[0] = zmm8_1[0] - zmm7_1[0]
            zmm9_1 = temp0_1
    
    int32_t var_16c
    zmm7_1 = var_16c
    float zmm10_1[0x4] = *(arg2 + 4)
    int32_t var_164
    zmm7_1[0] = zmm7_1[0] f+ var_164
    int32_t rdi_4 = *(arg1 + 0x2dc)
    zmm6_1 = zmm10_1
    zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
    
    if (rdi_4 != 0)
        float temp0_3[0x4] =
            _mm_min_ss((*(sub_140e13cf0(*(arg1 + 0x2c8), &var_150) + 4))[0], zmm6_1[0])
        
        if (rdi_4 == 1)
            zmm6_1 = temp0_3
        else if (rdi_4 == 2)
            zmm10_1[0] = zmm10_1[0] - temp0_3[0]
            zmm10_1[0] = zmm10_1[0] * 0.5f
            zmm10_1[0] = zmm10_1[0] + zmm7_1[0]
            zmm7_1 = zmm10_1
            zmm7_1[0] = zmm7_1[0] f- var_164
            zmm6_1 = temp0_3
        else if (rdi_4 == 3)
            zmm7_1 = zmm10_1
            zmm7_1[0] = zmm7_1[0] - temp0_3[0]
            zmm7_1[0] = zmm7_1[0] f- var_164
            zmm6_1 = temp0_3
    
    int128_t* rcx_6 = *(arg1 + 0x2c8) + 0x1c8
    bool cond:0_1 = data_143e20cf4 != 0
    float var_158 = zmm9_1[0]
    float var_154_1 = zmm6_1[0]
    var_170 = 1f
    float var_16c_1 = zmm8_1[0]
    float var_168_1 = zmm7_1[0]
    uint128_t var_130
    uint64_t var_120
    uint128_t var_f8
    uint128_t zmm0_2
    uint128_t zmm1_1
    
    if (cond:0_1)
        uint128_t* rax_9 = sub_140e111c0(rcx_6)
        char rcx_7 = 0
        
        if (*(rax_9 + 0x18) == 0)
            zmm1_1 = var_130
        else
            zmm0_2 = zx.o(rax_9[1].q)
            rcx_7 = 1
            zmm1_1 = *rax_9
            var_120 = zmm0_2.q
            var_120.d = (zmm0_2 ^ data_142d3f780).d
        
        if (rcx_7 == 0)
            goto label_140f4ca84
        
        uint64_t var_e8_2 = var_120
        var_f8 = zmm1_1
        goto label_140f4c9c4
    
    int128_t* rax_8 = sub_140e111c0(rcx_6)
    
    if (*(rax_8 + 0x18) == 0)
    label_140f4ca84:
        zmm6_1 = *(arg2 + 8)
        var_130.q = var_158.q
        var_170.o = data_142d8c9b0
        float var_160_1 = zmm8_1[0]
        float var_15c_1 = zmm7_1[0]
        int32_t var_114
        uint128_t zmm7_2
        uint128_t zmm8_2
        zmm7_2, zmm8_2 = sub_1408b8950(&var_114, &var_170, arg2 + 0x1c)
        zmm1_1.d = zmm8_2.d f* zmm6_1[0]
        uint128_t zmm0_3
        zmm0_3.d = zmm7_2.d f* zmm6_1[0]
        char var_fc
        char var_fc_1 = var_fc ^ ((*(arg2 + 0x34) ^ var_fc) & 1)
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_130:8.d = zmm6_1[0]
        zmm0_3.d = zmm0_3.d f+ arg2[1].d
        var_120:4.d = zmm8_2.d
        int32_t var_118_1 = zmm7_2.d
        var_130:0xc.d = zmm1_1.d
        var_120.d = zmm0_3.d
    else
        zmm1_1 = zx.o(rax_8[1].q)
        var_f8 = *rax_8
        uint64_t var_e8_1 = zmm1_1.q
    label_140f4c9c4:
        uint64_t* rdi_8 = *(arg1 + 0x2c8) + 0x1f8
        char var_e0_1 = 1
        
        if (rdi_8[3].d != 0)
            int64_t* rcx_8 = rdi_8[2]
            
            if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
                if (rdi_8[3].d != 0)
                    r14 = rdi_8[2]
                
                int64_t var_13c
                (*(*r14 + 0x48))(r14, &var_13c)
                *rdi_8 = var_13c
        
        zmm0_2 = zx.o(*rdi_8)
        int32_t var_148 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_190_1 = &var_148
        var_150 = zmm0_2.q
        int32_t var_144_1 = (*(arg2 + 0xc)).d
        int32_t var_140_1 = zmm1_1.d
        sub_140dd8200(&var_130, &var_158, &var_170, &var_f8, &var_150, var_190_1, arg2 + 0x1c)
    
    int64_t* rbx_1 = *(arg1 + 0x2d0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_a0_1 = *(arg1 + 0x2c8)
    uint128_t var_d8 = var_130
    uint128_t var_c8_1 = var_120.o
    int64_t var_100
    uint64_t var_a8_1 = var_100
    uint128_t var_110
    uint128_t var_b8_1 = var_110
    
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
