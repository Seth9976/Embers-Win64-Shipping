// 函数: sub_140f4af50
// 地址: 0x140f4af50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* r15 = nullptr
char* rdi_1 = *(arg1 + 0x2c8) + 0x1a8

if (*(rdi_1 + 0x10) != 0)
    int64_t* rcx = *(rdi_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rdi_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rdi_1 + 8)
        
        char var_1b8
        (*(*rcx_1 + 0x48))(rcx_1, &var_1b8)
        *rdi_1 = var_1b8

char result = *rdi_1

if ((*arg3 & result) != 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float var_58_1 = arg4[0]
    float var_1b4
    
    if (*(arg1 + 0x3a8) != 0)
        int64_t* rcx_2 = *(arg1 + 0x3a0)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x3a8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x3a0)
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_1b4)
            *(arg1 + 0x398) = var_1b4[0]
    
    int128_t zmm11 = *(arg1 + 0x398)
    
    if (*(arg1 + 0x3c0) != 0)
        int64_t* rcx_4 = *(arg1 + 0x3b8)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (*(arg1 + 0x3c0) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg1 + 0x3b8)
            
            (*(*rcx_5 + 0x48))(rcx_5, &var_1b4)
            *(arg1 + 0x3b0) = var_1b4[0]
    
    float zmm10[0x4] = *(arg1 + 0x3b0)
    uint128_t var_1a0
    
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_6 = *(arg1 + 0x2f8)
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            int64_t* rcx_7
            
            if (*(arg1 + 0x300) == 0)
                rcx_7 = nullptr
            else
                rcx_7 = *(arg1 + 0x2f8)
            
            (*(*rcx_7 + 0x48))(rcx_7, &var_1a0)
            *(arg1 + 0x2e0) = var_1a0
    
    bool cond:0_1 = zmm10[0] != -1f
    var_1a0 = *(arg1 + 0x2e0)
    uint64_t var_1ac
    float zmm8[0x4]
    float zmm9[0x4]
    
    if (cond:0_1 || not(zmm11.d f== -1f))
        int64_t* rax_15 = sub_140e13cf0(*(arg1 + 0x2c8), &var_1ac)
        void* rcx_9 = *(arg1 + 0x2c8)
        float temp0_1[0x4] = __minss_xmmss_memss((*arg2)[0], *rax_15)
        int64_t* rax_16 = sub_140e13cf0(rcx_9, &var_1ac)
        float zmm3 = *(arg2 + 4)
        float temp0_2 = __minss_xmmss_memss(zmm3, *(rax_16 + 4))
        
        if (not(zmm11.d f!= -1f))
            zmm11 = zx.o(0)
        
        if (not(zmm10[0] != -1f))
            zmm10 = zx.o(0)
        
        if (temp0_2 <= 0f || temp0_1[0] <= 0f)
            goto label_140f4b34b
        
        arg4 = *arg2
        float zmm1 = arg4[0] / zmm3
        int64_t r14
        
        if (zmm1 <= zmm10[0] || zmm10[0] == 0f)
            r14.b = 0
        else
            r14.b = 1
        
        if (zmm1 f>= zmm11.d || zmm11.d f== 0f)
            rax_16.b = 0
        else
            rax_16.b = 1
        
        if (r14.b == 0 && rax_16.b == 0)
            goto label_140f4b34b
        
        zmm8 = var_1a0.d
        zmm6 = arg4
        zmm9 = var_1a0:8.d
        int32_t rdi_2 = *(arg1 + 0x2d8)
        float zmm13[0x4] = zmm8
        zmm13[0] = zmm13[0] + zmm9[0]
        zmm6[0] = zmm6[0] - zmm13[0]
        
        if (rdi_2 != 0)
            int64_t* rax_17 = sub_140e13cf0(*(arg1 + 0x2c8), &var_1ac)
            float temp0_3[0x4] = __minss_xmmss_memss(zmm6[0], *rax_17)
            
            if (rdi_2 == 1)
                zmm6 = temp0_3
            else if (rdi_2 == 2)
                arg4[0] = arg4[0] - temp0_3[0]
                arg4[0] = arg4[0] * 0.5f
                arg4[0] = arg4[0] + zmm8[0]
                zmm8 = arg4
                zmm8[0] = zmm8[0] - zmm9[0]
                zmm6 = temp0_3
            else if (rdi_2 == 3)
                zmm8 = arg4
                zmm8[0] = zmm8[0] - temp0_3[0]
                zmm8[0] = zmm8[0] - zmm9[0]
                zmm6 = temp0_3
        
        int32_t rdi_5 = *(arg1 + 0x2dc)
        arg4 = *(arg2 + 4)
        int128_t zmm12 = var_1a0:0xc.d
        float zmm2[0x4]
        
        if (rdi_5 == 0)
            zmm2 = var_1a0:4.d
            arg4 = zmm2
        else
            int64_t* rax_18 = sub_140e13cf0(*(arg1 + 0x2c8), &var_1ac)
            zmm2 = var_1a0:4.d
            zmm1 = arg4[0]
            zmm2[0] = zmm2[0] f+ zmm12.d
            float temp0_4 = __minss_xmmss_memss(zmm1 - zmm2[0], *(rax_18 + 4))
            
            if (rdi_5 == 1)
                arg4 = zmm2
            else if (rdi_5 == 2)
                arg4[0] = arg4[0] - temp0_4
                arg4[0] = arg4[0] * 0.5f
                arg4[0] = arg4[0] + zmm2[0]
                arg4[0] = arg4[0] f- zmm12.d
            else if (rdi_5 != 3)
                arg4 = zmm2
            else
                arg4[0] = arg4[0] - temp0_4
                arg4[0] = arg4[0] f- zmm12.d
        
        if (r14.b == 0)
            zmm6[0] = zmm6[0] f* zmm11.d
            zmm9 = zmm6
            zmm9[0] = zmm9[0] f/ zmm11.d
        else
            zmm6[0] = zmm6[0] * zmm10[0]
            zmm9 = zmm6
            zmm9[0] = zmm9[0] / zmm10[0]
        
        zmm1 = *arg2
        zmm2[0] = zmm2[0] f+ zmm12.d
        float zmm0[0x4] = *(arg2 + 4)
        zmm1 = zmm1 - zmm13[0]
        zmm0[0] = zmm0[0] - zmm2[0]
        
        if (not(zmm6[0] <= zmm1))
            zmm1 = zmm1 / zmm6[0]
            zmm6[0] = zmm6[0] * zmm1
            zmm9[0] = zmm9[0] * zmm1
        
        if (not(zmm9[0] <= zmm0[0]))
            zmm0[0] = zmm0[0] / zmm9[0]
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm9[0] = zmm9[0] * zmm0[0]
    else
    label_140f4b34b:
        zmm8 = var_1a0.d
        zmm9 = var_1a0:8.d
        arg4 = *arg2
        zmm8[0] = zmm8[0] + zmm9[0]
        int32_t rdi_8 = *(arg1 + 0x2d8)
        zmm6 = arg4
        zmm6[0] = zmm6[0] - zmm8[0]
        
        if (rdi_8 != 0)
            float temp0_5[0x4] = _mm_min_ss((*sub_140e13cf0(*(arg1 + 0x2c8), &var_1ac))[0], zmm6[0])
            
            if (rdi_8 == 1)
                zmm6 = temp0_5
            else if (rdi_8 == 2)
                arg4[0] = arg4[0] - temp0_5[0]
                arg4[0] = arg4[0] * 0.5f
                arg4[0] = arg4[0] + zmm8[0]
                zmm8 = arg4
                zmm8[0] = zmm8[0] - zmm9[0]
                zmm6 = temp0_5
            else if (rdi_8 == 3)
                zmm8 = arg4
                zmm8[0] = zmm8[0] - temp0_5[0]
                zmm8[0] = zmm8[0] - zmm9[0]
                zmm6 = temp0_5
        
        arg4 = var_1a0:4.d
        zmm11 = var_1a0:0xc.d
        zmm10 = *(arg2 + 4)
        arg4[0] = arg4[0] f+ zmm11.d
        int32_t rdi_11 = *(arg1 + 0x2dc)
        zmm9 = zmm10
        zmm9[0] = zmm9[0] - arg4[0]
        
        if (rdi_11 != 0)
            float temp0_7[0x4] =
                _mm_min_ss((*(sub_140e13cf0(*(arg1 + 0x2c8), &var_1ac) + 4))[0], zmm9[0])
            
            if (rdi_11 == 1)
                zmm9 = temp0_7
            else if (rdi_11 == 2)
                zmm10[0] = zmm10[0] - temp0_7[0]
                zmm10[0] = zmm10[0] * 0.5f
                zmm10[0] = zmm10[0] + arg4[0]
                arg4 = zmm10
                arg4[0] = arg4[0] f- zmm11.d
                zmm9 = temp0_7
            else if (rdi_11 == 3)
                arg4 = zmm10
                arg4[0] = arg4[0] - temp0_7[0]
                arg4[0] = arg4[0] f- zmm11.d
                zmm9 = temp0_7
    
    int128_t* rcx_15 = *(arg1 + 0x2c8) + 0x1c8
    bool cond:2_1 = data_143e20cf4 != 0
    float var_1b0_1 = zmm9[0]
    var_1b4 = zmm6[0]
    var_1a0.d = 0x3f800000
    var_1a0:4.d = zmm8[0]
    var_1a0:8.d = arg4[0]
    float var_170[0x4]
    uint64_t var_160
    uint128_t var_138
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (cond:2_1)
        uint128_t* rax_22 = sub_140e111c0(rcx_15)
        char rcx_16 = 0
        
        if (*(rax_22 + 0x18) == 0)
            zmm1_1 = var_170
        else
            zmm0_1 = zx.o(rax_22[1].q)
            rcx_16 = 1
            zmm1_1 = *rax_22
            var_160 = zmm0_1.q
            var_160.d = (zmm0_1 ^ data_142d3f780).d
        
        if (rcx_16 == 0)
            goto label_140f4b5e2
        
        uint64_t var_128_2 = var_160
        var_138 = zmm1_1
        goto label_140f4b522
    
    int128_t* rax_21 = sub_140e111c0(rcx_15)
    
    if (*(rax_21 + 0x18) == 0)
    label_140f4b5e2:
        zmm6 = *(arg2 + 8)
        var_170[0].q = var_1b4.q
        var_1a0 = data_142d8c9b0
        float var_190_1 = zmm8[0]
        float var_18c_1 = arg4[0]
        int32_t var_154
        float zmm7
        int32_t zmm8_1
        zmm7, zmm8_1 = sub_1408b8950(&var_154, &var_1a0, arg2 + 0x1c)
        zmm1_1.d = zmm6.d f* zmm8_1
        char var_13c
        char rcx_21 = (*(arg2 + 0x34) ^ var_13c) & 1
        zmm6[0] = zmm6[0] * zmm7
        char var_13c_1 = var_13c ^ rcx_21
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_170[2] = zmm6[0]
        zmm6[0] = zmm6[0] f+ arg2[1].d
        var_160:4.d = zmm8_1
        float var_158_1 = zmm7
        var_170[3] = zmm1_1.d
        var_160.d = zmm6[0]
    else
        zmm1_1 = zx.o(rax_21[1].q)
        var_138 = *rax_21
        uint64_t var_128_1 = zmm1_1.q
    label_140f4b522:
        uint64_t* rdi_15 = *(arg1 + 0x2c8) + 0x1f8
        char var_120_1 = 1
        
        if (rdi_15[3].d != 0)
            int64_t* rcx_17 = rdi_15[2]
            
            if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                if (rdi_15[3].d != 0)
                    r15 = rdi_15[2]
                
                int64_t var_17c
                (*(*r15 + 0x48))(r15, &var_17c)
                *rdi_15 = var_17c
        
        zmm0_1 = zx.o(*rdi_15)
        int128_t* var_1c8_1 = arg2 + 0x1c
        int32_t var_188 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_1d0_1 = &var_188
        var_1ac = zmm0_1.q
        int32_t var_184_1 = (*(arg2 + 0xc)).d
        int32_t var_180_1 = zmm1_1.d
        sub_140dd8200(&var_170, &var_1b4, &var_1a0, &var_138, &var_1ac, var_1d0_1, var_1c8_1)
    
    int64_t* rbx_1 = *(arg1 + 0x2d0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_e0_1 = *(arg1 + 0x2c8)
    float var_118[0x4] = var_170
    uint128_t var_108_1 = var_160.o
    int64_t var_140
    uint64_t var_e8_1 = var_140
    float var_150[0x4]
    float var_f8_1[0x4] = var_150
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140d99900(arg3, &var_118)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
