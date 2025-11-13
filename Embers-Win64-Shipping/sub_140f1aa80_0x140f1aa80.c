// 函数: sub_140f1aa80
// 地址: 0x140f1aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_3 = result
int64_t* r14 = nullptr
char* rbx_1 = *(arg4 + 0x20) + 0x1a8

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
    int64_t var_154
    
    if (arg5[3].d != 0)
        int64_t* rcx_2 = arg5[2]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg5[3].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg5[2]
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_154)
            *arg5 = var_154
    
    uint128_t zmm11 = *arg5
    uint128_t zmm12 = *(arg5 + 4)
    uint128_t var_148
    
    if (*(arg4 + 0x58) != 0)
        int64_t* rcx_4 = *(arg4 + 0x50)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (*(arg4 + 0x58) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg4 + 0x50)
            
            (*(*rcx_5 + 0x48))(rcx_5, &var_148)
            *(arg4 + 0x38) = var_148
    
    var_148 = *(arg4 + 0x38)
    uint128_t zmm7
    uint128_t zmm8
    
    if (arg1 != 1)
        zmm7 = var_148:8.d
        zmm8 = var_148.d
    else
        zmm7 = var_148.d
        zmm8 = var_148:8.d
    
    uint128_t zmm6 = *arg2
    int32_t rdi_1 = *(arg4 + 0x30)
    uint128_t zmm9
    zmm9.d = zmm7.d f+ zmm8.d
    uint64_t var_130
    uint128_t zmm0
    uint128_t zmm1
    uint128_t zmm10
    
    if (arg1 != 1)
    label_140f1ac66:
        
        if (rdi_1 != 0)
            goto label_140f1ac38
        
        zmm6.d = zmm6.d f- zmm9.d
        zmm6.d = zmm6.d f* zmm11.d
        zmm10 = zmm6
    else
        if (rdi_1 != 1)
            if (rdi_1 != 3)
                goto label_140f1ac66
            
            rdi_1 -= 2
            goto label_140f1ac38
        
        rdi_1 = 3
    label_140f1ac38:
        zmm10.d = zmm6.d f- zmm9.d
        zmm0.d = zmm11.d f* *sub_140e13cf0(*(arg4 + 0x20), &var_130)
        zmm1 = _mm_min_ss(zmm10.d, zmm0.d)
        
        if (rdi_1 == 1)
            zmm10 = zmm1
        else if (rdi_1 == 2)
            zmm6.d = zmm6.d f- zmm1.d
            zmm6.d = zmm6.d f* 0.5f
            zmm6.d = zmm6.d f+ zmm8.d
            zmm8.d = zmm6.d f- zmm7.d
            zmm10 = zmm1
        else if (rdi_1 == 3)
            zmm8.d = zmm6.d f- zmm1.d
            zmm8.d = zmm8.d f- zmm7.d
            zmm10 = zmm1
        else
            zmm10.d = zmm10.d f* zmm11.d
    
    zmm7 = var_148:4.d
    zmm11 = var_148:0xc.d
    zmm9 = *(arg2 + 4)
    zmm0.d = zmm7.d f+ zmm11.d
    int32_t rdi_4 = *(arg4 + 0x34)
    zmm6.d = zmm9.d f- zmm0.d
    
    if (rdi_4 == 0)
        zmm6.d = zmm6.d f* zmm12.d
    else
        zmm0.d = zmm12.d f* *(sub_140e13cf0(*(arg4 + 0x20), &var_130) + 4)
        zmm1 = _mm_min_ss(zmm6.d, zmm0.d)
        
        if (rdi_4 == 1)
            zmm6 = zmm1
        else if (rdi_4 == 2)
            zmm9.d = zmm9.d f- zmm1.d
            zmm9.d = zmm9.d f* 0.5f
            zmm9.d = zmm9.d f+ zmm7.d
            zmm7.d = zmm9.d f- zmm11.d
            zmm6 = zmm1
        else if (rdi_4 != 3)
            zmm6.d = zmm6.d f* zmm12.d
        else
            zmm6 = zmm1
            zmm7.d = zmm9.d f- zmm1.d
            zmm7.d = zmm7.d f- zmm11.d
    
    int128_t* rcx_11 = *(arg4 + 0x20) + 0x1c8
    var_154.d = zmm10.d
    var_154:4.d = zmm6.d
    var_148.d = 0x3f800000
    var_148:4.d = zmm8.d
    var_148:8.d = zmm7.d
    uint128_t var_110
    uint64_t var_100
    uint128_t var_d8
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (data_143e20cf4 != 0)
        int128_t* rax_12 = sub_140e111c0(rcx_11)
        char rcx_12 = 0
        
        if (*(rax_12 + 0x18) == 0)
            zmm1_1 = var_110
        else
            zmm0_1 = zx.o(rax_12[1].q)
            rcx_12 = 1
            zmm1_1 = *rax_12
            var_100 = zmm0_1.q
            var_100.d = (zmm0_1 ^ data_142d3f780).d
        
        if (rcx_12 == 0)
            goto label_140f1aeb5
        
        uint64_t var_c8_2 = var_100
        var_d8 = zmm1_1
        goto label_140f1adf2
    
    int128_t* rax_11 = sub_140e111c0(rcx_11)
    
    if (*(rax_11 + 0x18) == 0)
    label_140f1aeb5:
        zmm6 = *(arg2 + 8)
        var_110.q = var_154
        var_148 = data_142d8c9b0
        int32_t var_138_1 = zmm8.d
        int32_t var_134_1 = zmm7.d
        int32_t var_f4
        int128_t zmm7_1
        int128_t zmm8_1
        zmm7_1, zmm8_1 = sub_1408b8950(&var_f4, &var_148, arg2 + 0x1c)
        char result_2
        result = zx.q(result_2)
        zmm1_1.d = zmm6.d f* zmm8_1.d
        result.b ^= (*(arg2 + 0x34) ^ result.b) & 1
        char var_dc = result.b
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_110:8.d = zmm6.d
        var_100:4.d = zmm8_1.d
        int32_t var_f8_1 = zmm7_1.d
        var_110:0xc.d = zmm1_1.d
        var_100.d = zmm6.d f* zmm7_1.d f+ arg2[1].d
    else
        zmm1_1 = zx.o(rax_11[1].q)
        var_d8 = *rax_11
        uint64_t var_c8_1 = zmm1_1.q
    label_140f1adf2:
        uint64_t* rdi_8 = *(arg4 + 0x20) + 0x1f8
        char var_c0_1 = 1
        
        if (rdi_8[3].d != 0)
            int64_t* rcx_13 = rdi_8[2]
            
            if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                if (rdi_8[3].d != 0)
                    r14 = rdi_8[2]
                
                int64_t var_11c
                (*(*r14 + 0x48))(r14, &var_11c)
                *rdi_8 = var_11c
        
        zmm0_1 = zx.o(*rdi_8)
        int32_t var_128 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_170_1 = &var_128
        var_130 = zmm0_1.q
        int32_t var_124_1 = (*(arg2 + 0xc)).d
        int32_t var_120_1 = zmm1_1.d
        result =
            sub_140dd8200(&var_110, &var_154, &var_148, &var_d8, &var_130, var_170_1, arg2 + 0x1c)
    
    int64_t* rdi_9 = *(arg4 + 0x28)
    int64_t r14_1 = *(arg4 + 0x20)
    bool cond:2_1 = rdi_9 == 0
    
    if (rdi_9 != 0)
        rdi_9[1].d += 1
        cond:2_1 = rdi_9 == 0
    
    zmm6 = var_110
    
    if (not(cond:2_1))
        rdi_9[1].d += 1
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                result = (**rdi_9)(rdi_9)
                int32_t temp8_1 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rdi_9 + 8))(rdi_9, 1)
    
    if ((*arg3 & rbx_2) == 0)
        goto label_140f1afdc
    
    uint64_t result_4 = &arg3[8]
    int64_t rsi_1 = sx.q(*(result_4 + 0x128))
    int32_t rax_19 = (rsi_1 + 1).d
    *(result_4 + 0x128) = rax_19
    
    if (rax_19 s> *(result_4 + 0x12c))
        sub_140dbcd70(result_4, rsi_1.d)
    
    result = *(result_4 + 0x120)
    int64_t rcx_21 = rsi_1 * 9
    
    if (result != 0)
        result_4 = result
    
    *(result_4 + (rcx_21 << 3)) = zmm6
    *(result_4 + (rcx_21 << 3) + 0x10) = var_100.o
    int128_t var_f0
    *(result_4 + (rcx_21 << 3) + 0x20) = var_f0
    int64_t var_e0
    *(result_4 + (rcx_21 << 3) + 0x30) = var_e0
    *(result_4 + (rcx_21 << 3) + 0x38) = r14_1
    *(result_4 + (rcx_21 << 3) + 0x40) = rdi_9
    
    if (rdi_9 != 0)
        rdi_9[1].d += 1
    label_140f1afdc:
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                result = (**rdi_9)(rdi_9)
                int32_t temp9_1 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    result = (*(*rdi_9 + 8))(rdi_9, 1)

__security_check_cookie(result_3 ^ &var_198)
return result
