// 函数: sub_140f4e9d0
// 地址: 0x140f4e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char* rdi = arg3
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    bool cond:0_1 = *(arg1 + 0x2f0) == 0
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2f8)))
    uint128_t zmm11
    zmm11.d = (*arg2).d f/ zmm0.d
    uint128_t zmm12
    zmm12.d = (*(arg2 + 4)).d f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2fc))).d
    uint128_t var_170
    
    if (not(cond:0_1))
        int64_t* rcx_1 = *(arg1 + 0x2e8)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2
            
            if (*(arg1 + 0x2f0) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x2e8)
            
            (*(*rcx_2 + 0x48))(rcx_2, &var_170)
            *(arg1 + 0x2d0) = var_170
    
    int32_t var_188_1 = 0
    result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    
    if (result s> 0)
        int64_t* rsi_1 = nullptr
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int64_t* var_178_1 = nullptr
        int32_t rbx_6
        
        do
            void* rsi_2 = *(rsi_1 + *(arg1 + 0x2b8))
            char* rbx_2 = *(rsi_2 + 0x10) + 0x1a8
            
            if (*(rbx_2 + 0x10) != 0)
                int64_t* rcx_4 = *(rbx_2 + 8)
                
                if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                    int64_t* rcx_5
                    
                    if (*(rbx_2 + 0x10) == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = *(rbx_2 + 8)
                    
                    char var_198
                    (*(*rcx_5 + 0x48))(rcx_5, &var_198)
                    *rbx_2 = var_198
            
            char rbx_3 = *rbx_2
            
            if ((*rdi & rbx_3) != 0)
                zmm7 = *(arg1 + 0x2d0)
                zmm6 = *(arg1 + 0x2d8)
                int32_t rdi_1 = *(rsi_2 + 0x20)
                zmm0.d = zmm7.d f+ zmm6.d
                zmm9.d = zmm11.d f- zmm0.d
                
                if (rdi_1 != 0)
                    void var_144
                    float temp0_3[0x4] =
                        _mm_min_ss((*sub_140e13cf0(*(rsi_2 + 0x10), &var_144))[0], zmm9.d)
                    
                    if (rdi_1 == 1)
                        zmm9 = temp0_3
                    else if (rdi_1 == 2)
                        zmm0.d = zmm11.d f- temp0_3[0]
                        zmm0.d = zmm0.d f* 0.5f
                        zmm0.d = zmm0.d f+ zmm7.d
                        zmm7.d = zmm0.d f- zmm6.d
                        zmm9 = temp0_3
                    else if (rdi_1 == 3)
                        zmm7.d = zmm11.d f- temp0_3[0]
                        zmm7.d = zmm7.d f- zmm6.d
                        zmm9 = temp0_3
                
                zmm6 = *(arg1 + 0x2d4)
                zmm8 = zmm12
                zmm10 = *(arg1 + 0x2dc)
                int32_t rdi_4 = *(rsi_2 + 0x24)
                zmm0.d = zmm6.d f+ zmm10.d
                zmm8[0] = zmm8[0] f- zmm0.d
                
                if (rdi_4 != 0)
                    void var_13c
                    float temp0_5[0x4] =
                        _mm_min_ss((*(sub_140e13cf0(*(rsi_2 + 0x10), &var_13c) + 4))[0], zmm8[0])
                    
                    if (rdi_4 == 1)
                        zmm8 = temp0_5
                    else if (rdi_4 == 2)
                        uint128_t zmm0_1
                        zmm0_1.d = zmm12.d f- temp0_5[0]
                        zmm0_1.d = zmm0_1.d f* 0.5f
                        zmm0_1.d = zmm0_1.d f+ zmm6.d
                        zmm6.d = zmm0_1.d f- zmm10.d
                        zmm8 = temp0_5
                    else if (rdi_4 == 3)
                        zmm6.d = zmm12.d f- temp0_5[0]
                        zmm6.d = zmm6.d f- zmm10.d
                        zmm8 = temp0_5
                
                float var_180_1 = zmm8[0]
                int128_t* rcx_9 = *(rsi_2 + 0x10) + 0x1c8
                bool cond:1_1 = data_143e20cf4 != 0
                float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x28)))
                var_170.d = 0x3f800000
                int32_t var_184 = zmm9.d
                temp0_6[0] = temp0_6[0] f* zmm11.d
                temp0_6[0] = temp0_6[0] f+ zmm7.d
                zmm7 = _mm_cvtepi32_ps(zx.o(*(rsi_2 + 0x2c)))
                var_170:4.d = temp0_6[0]
                zmm7.d = zmm7.d f* zmm12.d
                zmm7.d = zmm7.d f+ zmm6.d
                var_170:8.d = zmm7.d
                uint128_t var_130
                int64_t var_120
                uint128_t var_110
                uint64_t var_100
                char rcx_10
                uint128_t zmm0_2
                float zmm1[0x4]
                char var_118_3
                
                if (cond:1_1)
                    int128_t* rax_15 = sub_140e111c0(rcx_9)
                    char rdx_4 = 0
                    
                    if (*(rax_15 + 0x18) == 0)
                        zmm1 = var_110
                    else
                        zmm0_2 = zx.o(rax_15[1].q)
                        rdx_4 = 1
                        zmm1 = *rax_15
                        var_100 = zmm0_2.q
                        var_100.d = (zmm0_2 ^ 0x80000000).d
                    
                    rcx_10 = 0
                    char var_118_2 = 0
                    
                    if (rdx_4 != 0)
                        var_120 = var_100
                        var_130 = zmm1
                        rcx_10 = 1
                        var_118_3 = 1
                else
                    int128_t* rax_14 = sub_140e111c0(rcx_9)
                    rcx_10 = 0
                    char var_118_1 = 0
                    
                    if (*(rax_14 + 0x18) != 0)
                        zmm1 = zx.o(rax_14[1].q)
                        var_130 = *rax_14
                        var_120 = zmm1.q
                        rcx_10 = 1
                        var_118_3 = 1
                
                if (rcx_10 == 0)
                    zmm6 = *(arg2 + 8)
                    var_110.q = var_184.q
                    var_130 = data_142d8c9b0
                    var_120.d = temp0_6[0]
                    var_120:4.d = zmm7.d
                    int32_t var_f4
                    zmm7, zmm8, zmm11, zmm12 = sub_1408b8950(&var_f4, &var_130, arg2 + 0x1c)
                    zmm1 = zmm6
                    char var_dc
                    char rcx_15 = *(arg2 + 0x34) ^ var_dc
                    zmm1[0] = zmm1[0] * zmm8[0]
                    zmm0.d = zmm6.d f* zmm7.d
                    var_dc ^= rcx_15 & 1
                    zmm1[0] = zmm1[0] f+ *(arg2 + 0xc)
                    var_110:8.d = zmm6.d
                    zmm0.d = zmm0.d f+ arg2[1].d
                    var_100:4.d = zmm8[0]
                    int32_t var_f8_1 = zmm7.d
                    var_110:0xc.d = zmm1[0]
                    var_100.d = zmm0.d
                else
                    uint64_t* rdi_8 = *(rsi_2 + 0x10) + 0x1f8
                    
                    if (rdi_8[3].d != 0)
                        int64_t* rcx_11 = rdi_8[2]
                        
                        if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                            int64_t* rcx_12
                            
                            if (rdi_8[3].d == 0)
                                rcx_12 = nullptr
                            else
                                rcx_12 = rdi_8[2]
                            
                            int64_t var_154
                            (*(*rcx_12 + 0x48))(rcx_12, &var_154)
                            *rdi_8 = var_154
                    
                    zmm0_2 = zx.o(*rdi_8)
                    float var_160 = (*(arg2 + 8))[0]
                    zmm1 = arg2[1].d
                    int128_t* var_1b0_1 = &var_160
                    uint64_t var_14c = zmm0_2.q
                    int32_t var_15c_1 = (*(arg2 + 0xc)).d
                    float var_158_1 = zmm1[0]
                    zmm11, zmm12 = sub_140dd8200(&var_110, &var_184, &var_170, &var_130, &var_14c, 
                        var_1b0_1, arg2 + 0x1c)
                
                int64_t* rdi_9 = *(rsi_2 + 0x18)
                int64_t r14_1 = *(rsi_2 + 0x10)
                bool cond:2_1 = rdi_9 == 0
                
                if (rdi_9 != 0)
                    rdi_9[1].d += 1
                    cond:2_1 = rdi_9 == 0
                
                zmm6 = var_110
                
                if (not(cond:2_1))
                    int32_t rax_21 = rdi_9[1].d
                    rdi_9[1].d = rax_21
                    
                    if (rax_21 == 0)
                        (**rdi_9)(rdi_9)
                        int32_t temp5_1 = *(rdi_9 + 0xc)
                        *(rdi_9 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_9 + 8))(rdi_9, 1)
                
                if ((*arg3 & rbx_3) == 0)
                    goto label_140f4ef21
                
                void* rbx_4 = &arg3[8]
                int64_t rsi_3 = sx.q(*(rbx_4 + 0x128))
                int32_t rax_25 = (rsi_3 + 1).d
                *(rbx_4 + 0x128) = rax_25
                
                if (rax_25 s> *(rbx_4 + 0x12c))
                    sub_140dbcd70(rbx_4, rsi_3.d)
                
                void* rax_26 = *(rbx_4 + 0x120)
                int64_t rcx_19 = rsi_3 * 9
                
                if (rax_26 != 0)
                    rbx_4 = rax_26
                
                *(rbx_4 + (rcx_19 << 3)) = zmm6
                *(rbx_4 + (rcx_19 << 3) + 0x10) = var_100.o
                float var_f0[0x4]
                *(rbx_4 + (rcx_19 << 3) + 0x20) = var_f0
                int64_t var_e0
                *(rbx_4 + (rcx_19 << 3) + 0x30) = var_e0
                *(rbx_4 + (rcx_19 << 3) + 0x38) = r14_1
                *(rbx_4 + (rcx_19 << 3) + 0x40) = rdi_9
                
                if (rdi_9 != 0)
                    rdi_9[1].d += 1
                label_140f4ef21:
                    
                    if (rdi_9 != 0)
                        rdi_9[1].d -= 1
                        
                        if (rdi_9[1].d == 1)
                            (**rdi_9)(rdi_9)
                            int32_t temp7_1 = *(rdi_9 + 0xc)
                            *(rdi_9 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rdi_9 + 8))(rdi_9, 1)
                
                rdi = arg3
            
            rbx_6 = var_188_1 + 1
            rsi_1 = &var_178_1[1]
            var_188_1 = rbx_6
            var_178_1 = rsi_1
            result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rbx_6 s< result)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
