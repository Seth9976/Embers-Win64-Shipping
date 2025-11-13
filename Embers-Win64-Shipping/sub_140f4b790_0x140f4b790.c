// 函数: sub_140f4b790
// 地址: 0x140f4b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rsi = nullptr

if (*(arg1 + 0x1b8) != 0)
    int64_t* rcx = *(arg1 + 0x1b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x1b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x1b0)
        
        char var_158
        (*(*rcx_1 + 0x48))(rcx_1, &var_158)
        *(arg1 + 0x1a8) = var_158

char result = *(arg1 + 0x1a8)

if ((*arg3 & result) != 0)
    if (*(arg1 + 0x2b8) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2b0)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x2b8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x2b0)
            
            (*(*rcx_3 + 0x48))(rcx_3)
            *(arg1 + 0x2a8) = arg4
    
    int128_t zmm7 = *(arg1 + 0x2a8)
    float zmm1 = 1f f/ zmm7.d
    int128_t* rcx_5 = *(arg1 + 0x2e0) + 0x1c8
    bool cond:0_1 = data_143e20cf4 != 0
    int128_t zmm8
    zmm8.d = data_143dbb1f0.d.d f* zmm7.d
    int128_t zmm9
    zmm9.d = data_143dbb1f0:4.d.d f* zmm7.d
    arg4 = zmm1 * *arg2
    zmm1 = zmm1 * arg2[1]
    float var_154 = arg4
    int32_t var_148 = zmm7.d
    float var_150_1 = zmm1
    int32_t var_144_1 = zmm8.d
    int32_t var_140_1 = zmm9.d
    uint128_t var_110
    uint64_t var_100
    uint128_t var_d8
    uint128_t zmm0
    uint128_t zmm1_1
    
    if (cond:0_1)
        uint128_t* rax_10 = sub_140e111c0(rcx_5)
        char rcx_6 = 0
        
        if (*(rax_10 + 0x18) == 0)
            zmm1_1 = var_110
        else
            zmm0 = zx.o(rax_10[1].q)
            rcx_6 = 1
            zmm1_1 = *rax_10
            var_100 = zmm0.q
            var_100.d = (zmm0 ^ data_142d3f780).d
        
        if (rcx_6 == 0)
            goto label_140f4ba1a
        
        uint64_t var_c8_2 = var_100
        var_d8 = zmm1_1
        goto label_140f4b958
    
    int128_t* rax_9 = sub_140e111c0(rcx_5)
    
    if (*(rax_9 + 0x18) == 0)
    label_140f4ba1a:
        var_110.q = var_154.q
        var_148 = zmm7.d
        int32_t var_13c_1 = zmm7.d
        int32_t var_138_1 = zmm8.d
        int32_t var_134_1 = zmm9.d
        var_144_1.q = 0
        int32_t var_f4
        float zmm7_1
        uint128_t zmm8_1
        uint128_t zmm9_1
        zmm7_1, zmm8_1, zmm9_1 = sub_1408b8950(&var_f4, &var_148, &arg2[7])
        zmm1_1.d = zmm8_1.d f* arg2[2]
        uint128_t zmm0_1
        zmm0_1.d = zmm9_1.d f* arg2[2]
        char var_dc
        char var_dc_1 = var_dc ^ ((arg2[0xd].b ^ var_dc) & 1)
        zmm1_1.d = zmm1_1.d f+ arg2[3]
        zmm0_1.d = zmm0_1.d f+ arg2[4]
        var_110:8.d = zmm7_1 * arg2[2]
        var_100:4.d = zmm8_1.d
        int32_t var_f8_1 = zmm9_1.d
        var_110:0xc.d = zmm1_1.d
        var_100.d = zmm0_1.d
    else
        zmm1_1 = zx.o(rax_9[1].q)
        var_d8 = *rax_9
        uint64_t var_c8_1 = zmm1_1.q
    label_140f4b958:
        uint64_t* rdi_2 = *(arg1 + 0x2e0) + 0x1f8
        char var_c0_1 = 1
        
        if (rdi_2[3].d != 0)
            int64_t* rcx_7 = rdi_2[2]
            
            if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                if (rdi_2[3].d != 0)
                    rsi = rdi_2[2]
                
                int64_t var_124
                (*(*rsi + 0x48))(rsi, &var_124)
                *rdi_2 = var_124
        
        zmm0 = zx.o(*rdi_2)
        int32_t var_130 = arg2[2].d
        zmm1_1 = arg2[4]
        int128_t* var_170_1 = &var_130
        uint64_t var_11c = zmm0.q
        int32_t var_12c_1 = arg2[3].d
        int32_t var_128_1 = zmm1_1.d
        sub_140dd8200(&var_110, &var_154, &var_148, &var_d8, &var_11c, var_170_1, &arg2[7])
    
    int64_t* rbx_1 = *(arg1 + 0x2e8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_80_1 = *(arg1 + 0x2e0)
    uint128_t var_b8 = var_110
    uint128_t var_a8_1 = var_100.o
    int64_t var_e0
    uint64_t var_88_1 = var_e0
    uint128_t var_f0
    uint128_t var_98_1 = var_f0
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140d99900(arg3, &var_b8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_198)
return result
