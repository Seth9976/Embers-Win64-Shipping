// 函数: sub_140f4cbd0
// 地址: 0x140f4cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
uint64_t result = __security_cookie ^ &var_178
uint64_t result_3 = result
int64_t* r14 = nullptr
char* rbx_1 = *(arg1 + 0x2c8) + 0x1a8

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* rcx_1
            
            if (*(rbx_1 + 0x10) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx_1 + 8)
            
            char result_1
            (*(*rcx_1 + 0x48))(rcx_1, &result_1)
            result = zx.q(result_1)
            *rbx_1 = result.b

char rbx_2 = *rbx_1

if ((*arg3 & rbx_2) != 0)
    uint128_t zmm6 = *arg2
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm10 = *(arg2 + 4)
    int32_t var_108
    sub_140e13cf0(*(arg1 + 0x2c8), &var_108)
    int32_t var_130 = var_108
    int32_t var_104
    int32_t var_12c_1 = var_104
    
    if (*(arg1 + 0x3b8) != 0)
        int64_t* rcx_3 = *(arg1 + 0x3b0)
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (*(arg1 + 0x3b8) == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *(arg1 + 0x3b0)
            
            *(arg1 + 0x3a8) = (*(*rcx_4 + 0x48))(rcx_4)
    
    int32_t rsi_1 = *(arg1 + 0x3a8)
    
    if (*(arg1 + 0x3a0) != 0)
        int64_t* rcx_5 = *(arg1 + 0x398)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (*(arg1 + 0x3a0) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(arg1 + 0x398)
            
            *(arg1 + 0x390) = (*(*rcx_6 + 0x48))(rcx_6)
    
    if (rsi_1 == 1)
        var_130 = zmm6.d
        int32_t var_12c_2 = zmm10.d
    
    int128_t zmm9
    
    if (*(arg1 + 0x458) == 0)
        int128_t zmm0_2
        zmm0_2, zmm6 = sub_140f2ded0(arg1, arg2, arg4)
        zmm9 = zmm0_2
    else
        zmm9 = *(arg1 + 0x454)
    
    *(arg1 + 0x45c) = 0
    uint128_t zmm8 = zx.o(0)
    zmm7 = zx.o(0)
    int32_t var_128
    uint64_t var_110
    
    if (rsi_1 != 1)
        int128_t* rax_11 = sub_140eff690(arg1 + 0x2e0)
        int32_t rsi_2 = *(arg1 + 0x2d8)
        var_128.o = *rax_11
        int128_t zmm0_3
        
        if (rsi_2 == 0)
            zmm8 = var_128
        else
            zmm0_3.d = zmm9.d f* *sub_140e13cf0(*(arg1 + 0x2c8), &var_110)
            
            if (rsi_2 == 1)
                zmm8 = var_128
            else
                int32_t var_120
                
                if (rsi_2 == 2)
                    zmm8.d = zmm6.d f- zmm0_3.d
                    zmm8.d = zmm8.d f* 0.5f
                    zmm8.d = zmm8.d f+ var_128
                    zmm8.d = zmm8.d f- var_120
                else if (rsi_2 != 3)
                    zmm8 = var_128
                else
                    zmm8.d = zmm6.d f- zmm0_3.d
                    zmm8.d = zmm8.d f- var_120
        
        int32_t rsi_5 = *(arg1 + 0x2dc)
        int32_t var_124
        
        if (rsi_5 == 0)
            zmm7 = var_124
        else
            zmm0_3.d = zmm9.d f* *(sub_140e13cf0(*(arg1 + 0x2c8), &var_110) + 4)
            
            if (rsi_5 == 1)
                zmm7 = var_124
            else
                int32_t var_11c
                
                if (rsi_5 == 2)
                    zmm7.d = zmm10.d f- zmm0_3.d
                    zmm7.d = zmm7.d f* 0.5f
                    zmm7.d = zmm7.d f+ var_124
                    zmm7.d = zmm7.d f- var_11c
                else if (rsi_5 != 3)
                    zmm7 = var_124
                else
                    zmm7.d = zmm10.d f- zmm0_3.d
                    zmm7.d = zmm7.d f- var_11c
        zmm0_3.d = 1f f/ zmm9.d
        zmm8.d = zmm8.d f* zmm0_3.d
        zmm7.d = zmm7.d f* zmm0_3.d
        *(arg1 + 0x45c) = zmm8.d
        *(arg1 + 0x460) = zmm7.d
        
        if (*(arg1 + 0x2d8) == 0)
            zmm6.d = zmm6.d f* zmm0_3.d
            var_130 = zmm6.d
        
        if (*(arg1 + 0x2dc) == 0)
            zmm10.d = zmm10.d f* zmm0_3.d
            int32_t var_12c_3 = zmm10.d
    
    int128_t* rcx_12 = *(arg1 + 0x2c8) + 0x1c8
    bool cond:0_1 = data_143e20cf4 != 0
    zmm8.d = zmm8.d f* zmm9.d
    zmm7.d = zmm7.d f* zmm9.d
    int32_t var_124_1 = zmm8.d
    var_128 = zmm9.d
    int32_t var_120_1 = zmm7.d
    uint128_t var_e8
    uint64_t var_d8
    uint128_t var_b0
    uint128_t zmm0_4
    uint128_t zmm1_1
    
    if (cond:0_1)
        uint128_t* rax_15 = sub_140e111c0(rcx_12)
        char rcx_13 = 0
        
        if (*(rax_15 + 0x18) == 0)
            zmm1_1 = var_e8
        else
            zmm0_4 = zx.o(rax_15[1].q)
            rcx_13 = 1
            zmm1_1 = *rax_15
            var_d8 = zmm0_4.q
            var_d8.d = (zmm0_4 ^ data_142d3f780).d
        
        if (rcx_13 == 0)
            goto label_140f4d023
        
        uint64_t var_a0_2 = var_d8
        var_b0 = zmm1_1
        goto label_140f4cf6f
    
    int128_t* rax_14 = sub_140e111c0(rcx_12)
    
    if (*(rax_14 + 0x18) == 0)
    label_140f4d023:
        zmm6 = *(arg2 + 8)
        var_e8.q = var_130.q
        var_128 = zmm9.d
        int32_t var_11c_1 = zmm9.d
        int32_t var_118_1 = zmm8.d
        int32_t var_114_1 = zmm7.d
        var_124_1.q = 0
        int32_t var_cc
        int128_t zmm7_1
        int128_t zmm8_1
        int64_t zmm9_1
        zmm7_1, zmm8_1, zmm9_1 = sub_1408b8950(&var_cc, &var_128, arg2 + 0x1c)
        char result_2
        result = zx.q(result_2)
        zmm1_1.d = zmm6.d f* zmm8_1.d
        float zmm0_5 = zmm6.d f* zmm7_1.d
        result.b ^= (*(arg2 + 0x34) ^ result.b) & 1
        char var_b4 = result.b
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        zmm6.d = zmm6.d f* zmm9_1.d
        var_d8:4.d = zmm8_1.d
        var_e8:0xc.d = zmm1_1.d
        var_e8:8.d = zmm6.d
        int32_t var_d0_1 = zmm7_1.d
        var_d8.d = zmm0_5 f+ arg2[1].d
    else
        zmm1_1 = zx.o(rax_14[1].q)
        var_b0 = *rax_14
        uint64_t var_a0_1 = zmm1_1.q
    label_140f4cf6f:
        uint64_t* rsi_9 = *(arg1 + 0x2c8) + 0x1f8
        char var_98_1 = 1
        
        if (rsi_9[3].d != 0)
            int64_t* rcx_14 = rsi_9[2]
            
            if (rcx_14 != 0 && (*(*rcx_14 + 0x28))(rcx_14) != 0)
                if (rsi_9[3].d != 0)
                    r14 = rsi_9[2]
                
                int64_t var_f4
                (*(*r14 + 0x48))(r14, &var_f4)
                *rsi_9 = var_f4
        
        zmm0_4 = zx.o(*rsi_9)
        int32_t var_100 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_150_1 = &var_100
        var_110 = zmm0_4.q
        int32_t var_fc_1 = (*(arg2 + 0xc)).d
        int32_t var_f8_1 = zmm1_1.d
        result =
            sub_140dd8200(&var_e8, &var_130, &var_128, &var_b0, &var_110, var_150_1, arg2 + 0x1c)
    
    int64_t r14_1 = *(arg1 + 0x2c8)
    int64_t* rdi_1 = *(arg1 + 0x2d0)
    bool cond:1_1 = rdi_1 == 0
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        cond:1_1 = rdi_1 == 0
    
    zmm6 = var_e8
    
    if (not(cond:1_1))
        rdi_1[1].d += 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if ((*arg3 & rbx_2) == 0)
        goto label_140f4d167
    
    uint64_t result_4 = &arg3[8]
    int64_t rsi_10 = sx.q(*(result_4 + 0x128))
    int32_t rax_22 = (rsi_10 + 1).d
    *(result_4 + 0x128) = rax_22
    
    if (rax_22 s> *(result_4 + 0x12c))
        sub_140dbcd70(result_4, rsi_10.d)
    
    result = *(result_4 + 0x120)
    int64_t rcx_22 = rsi_10 * 9
    
    if (result != 0)
        result_4 = result
    
    *(result_4 + (rcx_22 << 3)) = zmm6
    *(result_4 + (rcx_22 << 3) + 0x10) = var_d8.o
    int128_t var_c8
    *(result_4 + (rcx_22 << 3) + 0x20) = var_c8
    int64_t var_b8
    *(result_4 + (rcx_22 << 3) + 0x30) = var_b8
    *(result_4 + (rcx_22 << 3) + 0x38) = r14_1
    *(result_4 + (rcx_22 << 3) + 0x40) = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    label_140f4d167:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp8_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)

__security_check_cookie(result_3 ^ &var_178)
return result
