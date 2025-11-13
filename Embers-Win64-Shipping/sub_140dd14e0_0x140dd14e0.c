// 函数: sub_140dd14e0
// 地址: 0x140dd14e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
uint64_t result = __security_cookie ^ &var_168
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
    int64_t var_124
    
    if (arg5[3].d != 0)
        int64_t* rcx_2 = arg5[2]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg5[3].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg5[2]
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_124)
            *arg5 = var_124
    
    uint128_t zmm6 = *arg5
    uint128_t zmm9 = *(arg5 + 4)
    uint128_t var_118
    
    if (*(arg4 + 0x58) != 0)
        int64_t* rcx_4 = *(arg4 + 0x50)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (*(arg4 + 0x58) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg4 + 0x50)
            
            (*(*rcx_5 + 0x48))(rcx_5, &var_118)
            *(arg4 + 0x38) = var_118
    
    var_118 = *(arg4 + 0x38)
    int128_t zmm3
    int128_t zmm8
    
    if (arg1 != 1)
        zmm3 = var_118:8.d
        zmm8 = var_118.d
    else
        zmm3 = var_118.d
        zmm8 = var_118:8.d
    
    int128_t zmm1 = *arg2
    void* r8 = &data_143dbb1f0
    int32_t rdx_3 = *(arg4 + 0x30)
    int128_t zmm2
    zmm2.d = zmm3.d f+ zmm8.d
    uint128_t zmm0
    int128_t zmm4
    
    if (arg1 != 1)
    label_140dd16b6:
        
        if (rdx_3 != 0)
            goto label_140dd1673
        
        zmm1.d = zmm1.d f- zmm2.d
        zmm1.d = zmm1.d f* zmm6.d
    else
        if (rdx_3 != 1)
            if (rdx_3 != 3)
                goto label_140dd16b6
            
            rdx_3 -= 2
            goto label_140dd1673
        
        rdx_3 = 3
    label_140dd1673:
        int64_t* rcx_9 = *(arg4 + 0x20) + 0x158
        zmm4.d = zmm1.d f- zmm2.d
        int64_t* rax_9 = &data_143dbb1f0
        
        if (rcx_9[1].b != 0)
            rax_9 = rcx_9
        
        zmm0.d = zmm6.d f* *rax_9
        zmm2 = _mm_min_ss(zmm4.d, zmm0.d)
        
        if (rdx_3 == 1)
            zmm1 = zmm2
        else if (rdx_3 == 2)
            zmm1.d = zmm1.d f- zmm2.d
            zmm1.d = zmm1.d f* 0.5f
            zmm1.d = zmm1.d f+ zmm8.d
            zmm8.d = zmm1.d f- zmm3.d
            zmm1 = zmm2
        else if (rdx_3 == 3)
            zmm8.d = zmm1.d f- zmm2.d
            zmm8.d = zmm8.d f- zmm3.d
            zmm1 = zmm2
        else
            zmm1.d = zmm4.d f* zmm6.d
    
    int128_t zmm7 = var_118:4.d
    int32_t zmm5 = var_118:0xc.d
    zmm3 = *(arg2 + 4)
    zmm4.d = zmm7.d f+ zmm5
    int32_t rcx_10 = *(arg4 + 0x34)
    zmm2.d = zmm3.d f- zmm4.d
    
    if (rcx_10 == 0)
        zmm2.d = zmm2.d f* zmm9.d
    else
        void* rax_11 = *(arg4 + 0x20) + 0x158
        
        if (*(rax_11 + 8) != 0)
            r8 = rax_11
        
        zmm0.d = zmm9.d f* *(r8 + 4)
        zmm4 = _mm_min_ss(zmm2.d, zmm0.d)
        
        if (rcx_10 == 1)
            zmm2 = zmm4
        else if (rcx_10 == 2)
            zmm3.d = zmm3.d f- zmm4.d
            zmm3.d = zmm3.d f* 0.5f
            zmm3.d = zmm3.d f+ zmm7.d
            zmm7.d = zmm3.d f- zmm5
            zmm2 = zmm4
        else if (rcx_10 != 3)
            zmm2.d = zmm2.d f* zmm9.d
        else
            zmm2 = zmm4
            zmm7.d = zmm3.d f- zmm4.d
            zmm7.d = zmm7.d f- zmm5
    
    int128_t* rcx_14 = *(arg4 + 0x20) + 0x1c8
    var_124.d = zmm1.d
    var_124:4.d = zmm2.d
    var_118.d = 0x3f800000
    var_118:4.d = zmm8.d
    var_118:8.d = zmm7.d
    uint128_t var_e0
    uint64_t var_d0
    uint128_t var_a8
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (data_143e20cf4 != 0)
        int128_t* rax_13 = sub_140e111c0(rcx_14)
        char rcx_15 = 0
        
        if (*(rax_13 + 0x18) == 0)
            zmm1_1 = var_e0
        else
            zmm0_1 = zx.o(rax_13[1].q)
            rcx_15 = 1
            zmm1_1 = *rax_13
            var_d0 = zmm0_1.q
            var_d0.d = (zmm0_1 ^ data_142d3f780).d
        
        if (rcx_15 == 0)
            goto label_140dd18dd
        
        uint64_t var_98_2 = var_d0
        var_a8 = zmm1_1
        goto label_140dd181a
    
    uint128_t* rax_12 = sub_140e111c0(rcx_14)
    
    if (*(rax_12 + 0x18) == 0)
    label_140dd18dd:
        zmm6 = *(arg2 + 8)
        var_e0.q = var_124
        var_118 = data_142d8c9b0
        int32_t var_108_1 = zmm8.d
        int32_t var_104_1 = zmm7.d
        int32_t var_c4
        int128_t zmm7_1
        int128_t zmm8_1
        zmm7_1, zmm8_1 = sub_1408b8950(&var_c4, &var_118, arg2 + 0x1c)
        char result_2
        result = zx.q(result_2)
        zmm1_1.d = zmm6.d f* zmm8_1.d
        result.b ^= (*(arg2 + 0x34) ^ result.b) & 1
        char var_ac = result.b
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_e0:8.d = zmm6.d
        var_d0:4.d = zmm8_1.d
        int32_t var_c8_1 = zmm7_1.d
        var_e0:0xc.d = zmm1_1.d
        var_d0.d = zmm6.d f* zmm7_1.d f+ arg2[1].d
    else
        zmm1_1 = zx.o(rax_12[1].q)
        var_a8 = *rax_12
        uint64_t var_98_1 = zmm1_1.q
    label_140dd181a:
        uint64_t* rdi_2 = *(arg4 + 0x20) + 0x1f8
        char var_90_1 = 1
        
        if (rdi_2[3].d != 0)
            int64_t* rcx_16 = rdi_2[2]
            
            if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
                if (rdi_2[3].d != 0)
                    r14 = rdi_2[2]
                
                int64_t var_f4
                (*(*r14 + 0x48))(r14, &var_f4)
                *rdi_2 = var_f4
        
        zmm0_1 = zx.o(*rdi_2)
        int32_t var_100 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_140_1 = &var_100
        uint64_t var_ec = zmm0_1.q
        int32_t var_fc_1 = (*(arg2 + 0xc)).d
        int32_t var_f8_1 = zmm1_1.d
        result =
            sub_140dd8200(&var_e0, &var_124, &var_118, &var_a8, &var_ec, var_140_1, arg2 + 0x1c)
    
    int64_t* rdi_3 = *(arg4 + 0x28)
    int64_t r14_1 = *(arg4 + 0x20)
    bool cond:3_1 = rdi_3 == 0
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
        cond:3_1 = rdi_3 == 0
    
    zmm6 = var_e0
    
    if (not(cond:3_1))
        rdi_3[1].d += 1
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                result = (**rdi_3)(rdi_3)
                int32_t temp8_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rdi_3 + 8))(rdi_3, 1)
    
    if ((*arg3 & rbx_2) == 0)
        goto label_140dd1a04
    
    uint64_t result_4 = &arg3[8]
    int64_t rsi_1 = sx.q(*(result_4 + 0x128))
    int32_t rax_20 = (rsi_1 + 1).d
    *(result_4 + 0x128) = rax_20
    
    if (rax_20 s> *(result_4 + 0x12c))
        sub_140dbcd70(result_4, rsi_1.d)
    
    result = *(result_4 + 0x120)
    int64_t rcx_24 = rsi_1 * 9
    
    if (result != 0)
        result_4 = result
    
    *(result_4 + (rcx_24 << 3)) = zmm6
    *(result_4 + (rcx_24 << 3) + 0x10) = var_d0.o
    int128_t var_c0
    *(result_4 + (rcx_24 << 3) + 0x20) = var_c0
    int64_t var_b0
    *(result_4 + (rcx_24 << 3) + 0x30) = var_b0
    *(result_4 + (rcx_24 << 3) + 0x38) = r14_1
    *(result_4 + (rcx_24 << 3) + 0x40) = rdi_3
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    label_140dd1a04:
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                result = (**rdi_3)(rdi_3)
                int32_t temp9_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    result = (*(*rdi_3 + 8))(rdi_3, 1)

__security_check_cookie(result_3 ^ &var_168)
return result
