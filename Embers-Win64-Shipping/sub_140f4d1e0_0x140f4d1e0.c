// 函数: sub_140f4d1e0
// 地址: 0x140f4d1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
float zmm1 = *(arg1 + 0x2d4)
int128_t zmm12 = *arg2
int128_t zmm11 = *(arg2 + 4)
uint64_t result
float var_1a8
float var_1a0
int32_t var_198
int32_t var_18c
uint64_t var_180
int32_t var_170
int32_t var_164
uint128_t var_160
int64_t var_150
char var_14c
uint128_t var_148
uint128_t var_128
uint128_t var_108
int64_t var_d0

if (zmm1 < 0.999899983f || *(arg1 + 0x2dc) != 0)
    int32_t zmm0 = (zx.o(0)).d
    
    if (not(zmm1 <= 0f))
        zmm0 = *(arg1 + 0x2d8)
    
    int32_t rcx_14 = *(arg1 + 0x2e0)
    int128_t zmm7
    
    zmm7 = rcx_14 != 0 ? zmm11 : zmm12
    
    zmm7.d = zmm7.d f- zmm0
    int128_t zmm10 = zmm7
    zmm7.d = zmm7.d f* zmm1
    zmm10.d = zmm10.d f* *(arg1 + 0x2d0)
    zmm7.d = zmm7.d f+ zmm0
    
    if (rcx_14 != 0)
        var_1a0 = zmm12.d
        int32_t var_19c_2 = zmm10.d
    else
        var_1a8 = zmm10.d
        int32_t var_1a4_1 = zmm11.d
    
    int32_t* rax_11 = &var_1a0
    var_148.q = 0x3f800000
    var_148:8.d = 0
    
    if (rcx_14 == 0)
        rax_11 = &var_1a8
    
    int64_t* r15_1 = nullptr
    uint128_t zmm6 = zx.o(*rax_11)
    var_1a0.q = zmm6.q
    void* r14_1 = **(arg1 + 0x2b8)
    int128_t* rcx_16 = *(r14_1 + 0x10) + 0x1c8
    uint128_t zmm0_5
    uint128_t zmm1_3
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_14 = sub_140e111c0(rcx_16)
        char rcx_17 = 0
        
        if (*(rax_14 + 0x18) == 0)
            zmm1_3 = var_180.o
        else
            zmm0_5 = zx.o(rax_14[1].q)
            rcx_17 = 1
            zmm1_3 = *rax_14
            var_170.q = zmm0_5.q
            var_170 = (zmm0_5 ^ data_142d3f780).d
        
        if (rcx_17 == 0)
            goto label_140f4d6ce
        
        uint64_t var_118_2 = var_170.q
        var_128 = zmm1_3
        goto label_140f4d625
    
    int128_t* rax_13 = sub_140e111c0(rcx_16)
    int64_t var_194
    int64_t var_16c
    int64_t var_138
    int128_t* r12_1
    float zmm7_1
    float zmm10_1
    int32_t zmm11_1
    float zmm12_1
    
    if (*(rax_13 + 0x18) == 0)
    label_140f4d6ce:
        zmm0_5 = data_142d8c9b0
        r12_1 = arg2 + 0x1c
        var_180 = zmm6.q
        var_138 = 0
        var_148 = zmm0_5
        zmm7_1, zmm10_1, zmm11_1, zmm12_1 = sub_1408b8950(&var_164, &var_148, r12_1)
        int32_t var_174_2 = (*(arg2 + 0xc)).d
        var_14c ^= (*(arg2 + 0x34) ^ var_14c) & 1
        var_170 = arg2[1].d.d
        int32_t var_178_2 = (*(arg2 + 8)).d
        var_16c = 0
    else
        zmm1_3 = zx.o(rax_13[1].q)
        var_128 = *rax_13
        uint64_t var_118_1 = zmm1_3.q
    label_140f4d625:
        uint64_t* rbx_4 = *(r14_1 + 0x10) + 0x1f8
        char var_110_1 = 1
        
        if (rbx_4[3].d != 0)
            int64_t* rcx_18 = rbx_4[2]
            
            if (rcx_18 != 0 && (*(*rcx_18 + 0x28))(rcx_18) != 0)
                int64_t* rcx_19
                
                if (rbx_4[3].d == 0)
                    rcx_19 = nullptr
                else
                    rcx_19 = rbx_4[2]
                
                (*(*rcx_19 + 0x48))(rcx_19, &var_1a8)
                *rbx_4 = var_1a8.q
        
        zmm0_5 = zx.o(*rbx_4)
        r12_1 = arg2 + 0x1c
        int128_t* var_1c0_2 = &var_198
        var_198 = (*(arg2 + 8)).d
        var_18c.q = zmm0_5.q
        var_194.d = (*(arg2 + 0xc)).d
        var_194:4.d = arg2[1].d.d
        zmm7_1, zmm10_1, zmm11_1, zmm12_1 =
            sub_140dd8200(&var_180, &var_1a0, &var_148, &var_128, &var_18c, var_1c0_2, r12_1)
    
    int64_t* rbx_5 = *(r14_1 + 0x18)
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    var_d0 = *(r14_1 + 0x10)
    var_108 = var_180.o
    uint128_t var_f8_2 = var_170.o
    uint64_t var_d8_2 = var_150
    uint128_t var_e8_2 = var_160
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp5_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    sub_140d99900(arg3, &var_108)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp4_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int32_t rcx_28 = *(arg1 + 0x2e0)
    float zmm1_4 = zmm10_1 + zmm7_1
    
    if (rcx_28 != 0)
        float var_1a4_2 = zmm1_4
        var_1a8 = 0f
    else
        var_1a0 = zmm1_4
        int32_t var_19c_3 = 0
    
    float* rax_24 = &var_1a8
    
    if (rcx_28 == 0)
        rax_24 = &var_1a0
    
    float zmm8_1 = *rax_24
    int32_t zmm9_1 = rax_24[1]
    int64_t zmm0_7
    
    if (rcx_28 != 0)
        zmm0_7.d = (*(arg2 + 4)).d f- zmm1_4
        var_1a8 = zmm12_1
        int32_t var_1a4_4 = zmm0_7.d
    else
        zmm0_7.d = (*arg2).d f- zmm1_4
        int32_t var_1a4_3 = zmm11_1
        var_1a8 = zmm0_7.d
    var_194.d = zmm8_1
    var_194:4.d = zmm9_1
    void* r14_2 = *(*(arg1 + 0x2b8) + 8)
    var_1a0.q = var_1a8.q
    var_198 = 0x3f800000
    int128_t* rcx_30 = *(r14_2 + 0x10) + 0x1c8
    uint128_t zmm1_5
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_27 = sub_140e111c0(rcx_30)
        char rcx_31 = 0
        
        if (*(rax_27 + 0x18) == 0)
            zmm1_5 = var_180.o
        else
            uint128_t zmm0_8 = zx.o(rax_27[1].q)
            rcx_31 = 1
            zmm1_5 = *rax_27
            var_170.q = zmm0_8.q
            var_170 = (zmm0_8 ^ data_142d3f780).d
        
        if (rcx_31 == 0)
            goto label_140f4d9a3
        
        uint64_t var_118_4 = var_170.q
        var_128 = zmm1_5
        goto label_140f4d8f6
    
    int128_t* rax_26 = sub_140e111c0(rcx_30)
    uint64_t zmm7_2
    float zmm8_2
    int32_t zmm9_2
    float zmm10_2
    int32_t zmm11_2
    float zmm12_2
    
    if (*(rax_26 + 0x18) == 0)
    label_140f4d9a3:
        zmm1_5 = data_142d8c9b0
        zmm6 = *(arg2 + 8)
        var_180 = var_1a8.q
        var_148 = zmm1_5
        var_138.d = zmm8_1
        var_138:4.d = zmm9_1
        zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2 = sub_1408b8950(&var_164, &var_148, r12_1)
        zmm1_5.d = zmm6.d f* zmm8_2
        uint128_t zmm0_9
        zmm0_9.d = zmm6.d f* zmm9_2
        var_14c ^= (*(arg2 + 0x34) ^ var_14c) & 1
        zmm1_5.d = zmm1_5.d f+ *(arg2 + 0xc)
        int32_t var_178_3 = zmm6.d
        zmm0_9.d = zmm0_9.d f+ arg2[1].d
        var_16c.d = zmm8_2
        var_16c:4.d = zmm9_2
        int32_t var_174_3 = zmm1_5.d
        var_170 = zmm0_9.d
    else
        zmm1_5 = zx.o(rax_26[1].q)
        var_128 = *rax_26
        uint64_t var_118_3 = zmm1_5.q
    label_140f4d8f6:
        uint64_t* rbx_8 = *(r14_2 + 0x10) + 0x1f8
        char var_110_2 = 1
        
        if (rbx_8[3].d != 0)
            int64_t* rcx_32 = rbx_8[2]
            
            if (rcx_32 != 0 && (*(*rcx_32 + 0x28))(rcx_32) != 0)
                int64_t* rcx_33
                
                if (rbx_8[3].d == 0)
                    rcx_33 = nullptr
                else
                    rcx_33 = rbx_8[2]
                
                (*(*rcx_33 + 0x48))(rcx_33, &var_18c)
                *rbx_8 = var_18c.q
        
        var_148.d = (*(arg2 + 8)).d
        var_1a8.q = *rbx_8
        var_148:4.d = (*(arg2 + 0xc)).d
        var_148:8.d = arg2[1].d.d
        zmm7_2, zmm10_2, zmm11_2, zmm12_2 =
            sub_140dd8200(&var_180, &var_1a0, &var_198, &var_128, &var_1a8, &var_148, r12_1)
    
    int64_t* rbx_9 = *(r14_2 + 0x18)
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    var_d0 = *(r14_2 + 0x10)
    var_108 = var_180.o
    uint128_t var_f8_3 = var_170.o
    uint64_t var_d8_3 = var_150
    uint128_t var_e8_3 = var_160
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t temp10_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
    
    sub_140d99900(arg3, &var_108)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp9_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    int32_t rcx_42 = *(arg1 + 0x2e0)
    
    if (rcx_42 != 0)
        float var_1a4_5 = zmm10_2
        var_1a8 = 0f
    else
        var_1a0 = zmm10_2
        int32_t var_19c_4 = 0
    
    float* rax_37 = &var_1a8
    
    if (rcx_42 == 0)
        rax_37 = &var_1a0
    
    zmm8_2 = *rax_37
    zmm9_2 = rax_37[1]
    
    if (rcx_42 != 0)
        var_1a8 = zmm12_2
        int32_t var_1a4_6 = zmm7_2.d
    else
        var_1a0 = zmm7_2.d
        int32_t var_19c_5 = zmm11_2
    
    var_194.d = zmm8_2
    float* rax_38 = &var_1a8
    var_194:4.d = zmm9_2
    var_198 = 0x3f800000
    
    if (rcx_42 == 0)
        rax_38 = &var_1a0
    
    zmm7_2 = *rax_38
    var_1a0.q = zmm7_2
    void* rsi_2 = *(*(arg1 + 0x2b8) + 0x10)
    int128_t* rcx_44 = *(rsi_2 + 0x10) + 0x1c8
    uint128_t zmm1_6
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_41 = sub_140e111c0(rcx_44)
        char rcx_45 = 0
        
        if (*(rax_41 + 0x18) == 0)
            zmm1_6 = var_180.o
        else
            uint128_t zmm0_10 = zx.o(rax_41[1].q)
            rcx_45 = 1
            zmm1_6 = *rax_41
            var_170.q = zmm0_10.q
            var_170 = (zmm0_10 ^ data_142d3f780).d
        
        if (rcx_45 == 0)
            goto label_140f4dc93
        
        uint64_t var_118_6 = var_170.q
        var_128 = zmm1_6
        goto label_140f4dbe8
    
    int128_t* rax_40 = sub_140e111c0(rcx_44)
    
    if (*(rax_40 + 0x18) == 0)
    label_140f4dc93:
        zmm6 = *(arg2 + 8)
        var_138.d = zmm8_2
        var_148 = data_142d8c9b0
        var_138:4.d = zmm9_2
        var_180 = zmm7_2
        int32_t zmm8_3
        int32_t zmm9_3
        zmm8_3, zmm9_3 = sub_1408b8950(&var_164, &var_148, r12_1)
        zmm1_6.d = zmm6.d f* zmm8_3
        uint128_t zmm0_11
        zmm0_11.d = zmm6.d f* zmm9_3
        char var_14c_2 = var_14c ^ ((*(arg2 + 0x34) ^ var_14c) & 1)
        zmm1_6.d = zmm1_6.d f+ *(arg2 + 0xc)
        int32_t var_178_4 = zmm6.d
        zmm0_11.d = zmm0_11.d f+ arg2[1].d
        var_16c.d = zmm8_3
        var_16c:4.d = zmm9_3
        int32_t var_174_4 = zmm1_6.d
        var_170 = zmm0_11.d
    else
        zmm1_6 = zx.o(rax_40[1].q)
        var_128 = *rax_40
        uint64_t var_118_5 = zmm1_6.q
    label_140f4dbe8:
        uint64_t* rbx_12 = *(rsi_2 + 0x10) + 0x1f8
        char var_110_3 = 1
        
        if (rbx_12[3].d != 0)
            int64_t* rcx_46 = rbx_12[2]
            
            if (rcx_46 != 0 && (*(*rcx_46 + 0x28))(rcx_46) != 0)
                if (rbx_12[3].d != 0)
                    r15_1 = rbx_12[2]
                
                (*(*r15_1 + 0x48))(r15_1, &var_18c)
                *rbx_12 = var_18c.q
        
        var_148.d = (*(arg2 + 8)).d
        var_1a8.q = *rbx_12
        var_148:4.d = (*(arg2 + 0xc)).d
        var_148:8.d = arg2[1].d.d
        sub_140dd8200(&var_180, &var_1a0, &var_198, &var_128, &var_1a8, &var_148, r12_1)
    
    int64_t* rbx_13 = *(rsi_2 + 0x18)
    
    if (rbx_13 != 0)
        rbx_13[1].d += 1
    
    var_d0 = *(rsi_2 + 0x10)
    var_108 = var_180.o
    uint128_t var_f8_4 = var_170.o
    uint64_t var_d8_4 = var_150
    uint128_t var_e8_4 = var_160
    
    if (rbx_13 != 0)
        rbx_13[1].d += 1
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t temp15_1 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rbx_13 + 8))(rbx_13, 1)
    
    result = sub_140d99900(arg3, &var_108)
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            result = (**rbx_13)(rbx_13)
            int32_t temp14_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp14_1 == 1)
                result = (*(*rbx_13 + 8))(rbx_13, 1)
else
    int64_t* rax_2 = *(arg1 + 0x2b8)
    var_1a0 = zmm12.d
    int32_t var_19c_1 = zmm11.d
    void* rbx_1 = *rax_2
    var_198 = 0x3f800000
    int64_t var_194_1 = 0
    int128_t* rcx_1 = *(rbx_1 + 0x10) + 0x1c8
    char rcx_2
    uint128_t zmm1_1
    char var_130_3
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_4 = sub_140e111c0(rcx_1)
        char rdx = 0
        uint64_t var_118
        
        if (*(rax_4 + 0x18) == 0)
            zmm1_1 = var_128
        else
            uint128_t zmm0_1 = zx.o(rax_4[1].q)
            rdx = 1
            zmm1_1 = *rax_4
            var_118 = zmm0_1.q
            var_118.d = (zmm0_1 ^ data_142d3f780).d
        
        rcx_2 = 0
        char var_130_2 = 0
        
        if (rdx != 0)
            uint64_t var_138_2 = var_118
            var_148 = zmm1_1
            rcx_2 = 1
            var_130_3 = 1
    else
        int128_t* rax_3 = sub_140e111c0(rcx_1)
        rcx_2 = 0
        char var_130_1 = 0
        
        if (*(rax_3 + 0x18) != 0)
            zmm1_1 = zx.o(rax_3[1].q)
            var_148 = *rax_3
            uint64_t var_138_1 = zmm1_1.q
            rcx_2 = 1
            var_130_3 = 1
    
    if (rcx_2 == 0)
        zmm1_1 = data_142d8c9b0
        var_180 = var_1a0.q
        var_148 = zmm1_1
        int64_t var_138_3 = 0
        sub_1408b8950(&var_164, &var_148, arg2 + 0x1c)
        int32_t var_174_1 = (*(arg2 + 0xc)).d
        int64_t rcx_10 = *(rbx_1 + 0x10)
        char var_14c_1 = var_14c ^ ((*(arg2 + 0x34) ^ var_14c) & 1)
        void* rax_10 = *(rbx_1 + 0x18)
        int32_t var_170_1 = arg2[1].d.d
        int32_t var_178_1 = (*(arg2 + 8)).d
        int64_t var_16c_1 = 0
        var_148.q = rcx_10
        var_148:8.q = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        var_d0 = rcx_10
        void* var_c8_1 = rax_10
        var_108 = var_180.o
        uint128_t var_f8_1 = var_170_1.o
        uint64_t var_d8_1 = var_150
        uint128_t var_e8_1 = var_160
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        sub_140669d70(&var_148)
    else
        int64_t* rax_5 = sub_140eff780(*(rbx_1 + 0x10) + 0x1f8)
        var_18c = (*(arg2 + 8)).d
        var_1a8.q = *rax_5
        int32_t var_188_1 = (*(arg2 + 0xc)).d
        int32_t var_184_1 = arg2[1].d.d
        sub_140dd8200(&var_180, &var_1a0, &var_198, &var_148, &var_1a8, &var_18c, arg2 + 0x1c)
        int64_t* rbx_2 = *(rbx_1 + 0x18)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        var_d0 = *(rbx_1 + 0x10)
        int64_t* var_c8 = rbx_2
        var_108 = var_180.o
        uint128_t var_f8 = var_170.o
        uint64_t var_d8 = var_150
        uint128_t var_e8 = var_160
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140d99900(arg3, &var_108)
    result = sub_140669d70(&var_d0)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
