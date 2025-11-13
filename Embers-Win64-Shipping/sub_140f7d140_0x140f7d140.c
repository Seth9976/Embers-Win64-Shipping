// 函数: sub_140f7d140
// 地址: 0x140f7d140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm14
int128_t var_c8 = zmm14
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t* rbx = arg1 + 0x2a8
int32_t result = (**rbx)(rbx)

if (result s> 0)
    int32_t r15_1 = *(arg1 + 0x340)
    int128_t zmm6
    
    if (r15_1 != 1)
        zmm6 = *(arg2 + 4)
    else
        zmm6 = *arg2
    
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int32_t var_254_1 = zmm6.d
    int32_t var_238_1 = 0
    int32_t var_250
    sub_140f756b0(arg1, &var_250, arg4)
    float var_24c
    float var_248
    char var_258
    int32_t var_230
    int32_t var_228
    float var_220
    float var_218
    int32_t var_210
    int32_t var_1f8
    uint64_t var_1f0
    uint64_t var_1e8
    uint64_t var_1e0
    int32_t var_1c8
    uint128_t var_198
    uint64_t var_188
    uint128_t var_178
    uint64_t var_168
    int32_t var_15c
    uint128_t var_158
    int64_t var_148
    char var_144
    uint128_t var_138
    
    if (var_248 <= 0f || var_24c <= 0f)
        int64_t* rax_40 = sub_140e13cf0(*(**(arg1 + 0x2b8) + 0x10), &var_1c8)
        
        if (*(arg1 + 0x340) == 1)
            rax_40 += 4
        
        float zmm1_1 = *(arg1 + 0x318) f* *rax_40
        int32_t r14_2 = 0
        int64_t rax_44 = *rbx
        zmm11.d =
            _mm_cvtepi32_ps(zx.o(neg.d(int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1))).d f- *(arg1 + 0x31c)
        result = (*rax_44)(rbx)
        
        if (result s> 0)
            zmm12 = 0x80000000
            void** rsi_1 = nullptr
            
            do
                int64_t* rax_46 = sub_140e13cf0(*(*(rsi_1 + *(arg1 + 0x2b8)) + 0x10), &var_1f8)
                
                if (*(arg1 + 0x340) == 1)
                    rax_46 += 4
                
                zmm10 = *rax_46
                char* rbx_11 = *(*(rsi_1 + *(arg1 + 0x2b8)) + 0x10) + 0x1a8
                
                if (*(rbx_11 + 0x10) != 0)
                    int64_t* rcx_33 = *(rbx_11 + 8)
                    
                    if (rcx_33 != 0 && (*(*rcx_33 + 0x28))(rcx_33) != 0)
                        int64_t* rcx_34
                        
                        if (*(rbx_11 + 0x10) == 0)
                            rcx_34 = nullptr
                        else
                            rcx_34 = *(rbx_11 + 8)
                        
                        (*(*rcx_34 + 0x48))(rcx_34, &var_258)
                        *rbx_11 = var_258
                
                int32_t rcx_35 = *(arg1 + 0x340)
                
                if ((*rbx_11 & 0x19) == 0)
                    zmm10 = zx.o(0)
                
                if (rcx_35 != 1)
                    var_218 = zmm10.d
                    int32_t var_214_2 = zmm6.d
                else
                    var_220 = zmm6.d
                    int32_t var_21c_2 = zmm10.d
                
                float* rax_52 = &var_218
                
                if (rcx_35 == 1)
                    rax_52 = &var_220
                
                zmm9 = zx.o(*rax_52)
                var_1f0 = zmm9.q
                uint128_t* rax_53
                
                if (r15_1 != 1)
                    var_230 = zmm11.d
                    rax_53 = &var_230
                    int32_t var_22c_2 = 0
                else
                    int32_t var_224_2 = zmm11.d
                    rax_53 = &var_228
                    var_228 = 0
                
                uint128_t zmm7 = *rax_53
                zmm8 = *(rax_53 + 4)
                int64_t rax_54 = *(arg1 + 0x2b8)
                int32_t var_20c_2 = zmm7.d
                int32_t var_208_2 = zmm8.d
                var_210 = 0x3f800000
                void* rdi_5 = *(rsi_1 + rax_54)
                int128_t* rcx_37 = *(rdi_5 + 0x10) + 0x1c8
                char rcx_38
                uint128_t zmm0_5
                uint128_t zmm1_4
                char var_180_6
                
                if (data_143e20cf4 != 0)
                    int128_t* rax_56 = sub_140e111c0(rcx_37)
                    char rdx_13 = 0
                    
                    if (*(rax_56 + 0x18) == 0)
                        zmm1_4 = var_178
                    else
                        zmm0_5 = zx.o(rax_56[1].q)
                        rdx_13 = 1
                        zmm1_4 = *rax_56
                        var_168 = zmm0_5.q
                        var_168.d = (zmm0_5 ^ zmm12).d
                    
                    rcx_38 = 0
                    char var_180_5 = 0
                    
                    if (rdx_13 != 0)
                        var_188 = var_168
                        var_198 = zmm1_4
                        rcx_38 = 1
                        var_180_6 = 1
                else
                    uint128_t* rax_55 = sub_140e111c0(rcx_37)
                    rcx_38 = 0
                    char var_180_4 = 0
                    
                    if (*(rax_55 + 0x18) != 0)
                        zmm1_4 = zx.o(rax_55[1].q)
                        var_198 = *rax_55
                        var_188 = zmm1_4.q
                        rcx_38 = 1
                        var_180_6 = 1
                int64_t* var_f8_2
                
                if (rcx_38 == 0)
                    var_188.d = zmm7.d
                    var_188:4.d = zmm8.d
                    var_178.q = zmm9.q
                    zmm6 = *(arg2 + 8)
                    var_198 = data_142d8c9b0
                    zmm7, zmm8, zmm10, zmm11, zmm12 = sub_1408b8950(&var_15c, &var_198, arg2 + 0x1c)
                    zmm1_4.d = zmm7.d f* zmm6.d
                    uint128_t zmm0_7
                    zmm0_7.d = zmm8.d f* zmm6.d
                    var_144 ^= (*(arg2 + 0x34) ^ var_144) & 1
                    zmm1_4.d = zmm1_4.d f+ *(arg2 + 0xc)
                    zmm0_7.d = zmm0_7.d f+ arg2[1].d
                    int64_t* rbx_16 = *(rdi_5 + 0x18)
                    var_178:8.d = zmm6.d
                    var_178:0xc.d = zmm1_4.d
                    var_168:4.d = zmm7.d
                    var_168.d = zmm0_7.d
                    int32_t var_160_2 = zmm8.d
                    
                    if (rbx_16 != 0)
                        rbx_16[1].d += 1
                    
                    int64_t var_100_3 = *(rdi_5 + 0x10)
                    var_f8_2 = rbx_16
                    var_138 = var_178
                    uint128_t var_128_3 = var_168.o
                    uint64_t var_108_3 = var_148
                    uint128_t var_118_3 = var_158
                    
                    if (rbx_16 != 0)
                        int32_t rax_67 = rbx_16[1].d
                        rbx_16[1].d = rax_67
                        
                        if (rax_67 == 0)
                            (**rbx_16)(rbx_16)
                            int32_t temp3_1 = *(rbx_16 + 0xc)
                            *(rbx_16 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_16 + 8))(rbx_16, 1)
                    
                    zmm6 = var_254_1
                else
                    uint64_t* rbx_13 = *(rdi_5 + 0x10) + 0x1f8
                    
                    if (rbx_13[3].d != 0)
                        int64_t* rcx_39 = rbx_13[2]
                        
                        if (rcx_39 != 0 && (*(*rcx_39 + 0x28))(rcx_39) != 0)
                            int64_t* rcx_40
                            
                            if (rbx_13[3].d == 0)
                                rcx_40 = nullptr
                            else
                                rcx_40 = rbx_13[2]
                            
                            (*(*rcx_40 + 0x48))(rcx_40, &var_1e0)
                            *rbx_13 = var_1e0
                    
                    var_1e8 = *rbx_13
                    zmm0_5 = *(arg2 + 0xc)
                    var_250 = (*(arg2 + 8)).d
                    int32_t var_24c_2 = zmm0_5.d
                    int32_t var_248_2 = arg2[1].d.d
                    zmm6, zmm10, zmm11, zmm12 = sub_140dd8200(&var_178, &var_1f0, &var_210, 
                        &var_198, &var_1e8, &var_250, arg2 + 0x1c)
                    int64_t* rbx_14 = *(rdi_5 + 0x18)
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d += 1
                    
                    int64_t var_100_2 = *(rdi_5 + 0x10)
                    var_f8_2 = rbx_14
                    var_138 = var_178
                    uint128_t var_128_2 = var_168.o
                    uint64_t var_108_2 = var_148
                    uint128_t var_118_2 = var_158
                    
                    if (rbx_14 != 0)
                        int32_t rax_62 = rbx_14[1].d
                        rbx_14[1].d = rax_62
                        
                        if (rax_62 == 0)
                            (**rbx_14)(rbx_14)
                            int32_t temp5_1 = *(rbx_14 + 0xc)
                            *(rbx_14 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_14 + 8))(rbx_14, 1)
                
                sub_140d99900(arg3, &var_138)
                
                if (var_f8_2 != 0)
                    var_f8_2[1].d -= 1
                    
                    if (var_f8_2[1].d == 1)
                        (**var_f8_2)(var_f8_2)
                        int32_t temp6_1 = *(var_f8_2 + 0xc)
                        *(var_f8_2 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*var_f8_2 + 8))(var_f8_2, 1)
                
                r14_2 += 1
                zmm11.d = zmm11.d f+ zmm10.d
                rsi_1 = &rsi_1[1]
                result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
            while (r14_2 s< result)
    else
        char rdi_1 = *sub_140eff7d0(arg1 + 0x328)
        uint128_t zmm0_1
        uint128_t zmm7_1
        zmm0_1, zmm7_1 = sub_140f75da0(arg1, arg2, rdi_1, var_24c)
        zmm8.d = zmm0_1.d f* 0.5f
        var_1c8 = zmm0_1.d
        int128_t* var_200
        var_200.d = zmm8.d
        int32_t var_1b8
        uint128_t zmm0_2
        int32_t zmm6_2
        zmm0_2, zmm6_2 = sub_140f75e60(arg1, &var_1b8, arg2, rdi_1, zmm0_1.d)
        int32_t var_1b4
        zmm12 = var_1b4
        int32_t rdi_2 = 0
        var_1f8 = 0
        float zmm1_2 = zmm12.d f* *(arg1 + 0x318)
        uint64_t rsi
        rsi.b = 1
        int64_t rax_7 = *rbx
        zmm10.d =
            _mm_cvtepi32_ps(zx.o(neg.d(int.d(zmm1_2 + zmm1_2 - 0.5f) s>> 1))).d f- *(arg1 + 0x31c)
        int32_t var_23c_1 = zmm10.d
        result = (*rax_7)(rbx)
        
        if (result s> 0)
            int32_t var_1b0
            zmm11 = var_1b0
            int64_t* r15_2 = nullptr
            uint128_t zmm15
            zmm15.d = zmm11.d f+ zmm6_2
            
            do
                if (rsi.b != 0)
                    rsi = zx.q(rdi_1)
                    
                    if ((rsi - 4).b u<= 1)
                        int32_t rbx_2 = (**rbx)(rbx) - rdi_2
                        
                        if (rbx_2 s> 0)
                            if (*(arg1 + 0x340) != 1)
                                *(arg2 + 4)
                            else
                                *arg2
                            
                            if (*(arg1 + 0x338) != 0)
                                int64_t* rcx_7 = *(arg1 + 0x330)
                                
                                if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                                    int64_t* rcx_8
                                    
                                    if (*(arg1 + 0x338) == 0)
                                        rcx_8 = nullptr
                                    else
                                        rcx_8 = *(arg1 + 0x330)
                                    
                                    *(arg1 + 0x328) = (*(*rcx_8 + 0x48))(rcx_8)
                            
                            void var_1a8
                            zmm6_2 = sub_140f75e60(arg1, &var_1a8, arg2, *(arg1 + 0x328), zmm0_2.d)
                            float var_1a0
                            int32_t rax_16
                            
                            if (var_1a0 <= 0f)
                                rax_16 = 0
                            else
                                zmm1_2 = zmm6_2 / var_1a0
                                rax_16 = int.d(zmm1_2 + zmm1_2 - 0.5f) s>> 1
                            
                            if (rbx_2 s<= rax_16)
                                rax_16 = rbx_2
                            
                            zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_16)).d f* var_1a0
                            zmm6_2 = zmm6_2 f- 0.00100000005f f- zmm0_2.d
                        else
                            zmm6_2 = (zx.o(0)).d
                        
                        char* rbx_4 = *(*(r15_2 + *(arg1 + 0x2b8)) + 0x10) + 0x1a8
                        
                        if (*(rbx_4 + 0x10) != 0)
                            int64_t* rcx_11 = *(rbx_4 + 8)
                            
                            if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                                int64_t* rcx_12
                                
                                if (*(rbx_4 + 0x10) == 0)
                                    rcx_12 = nullptr
                                else
                                    rcx_12 = *(rbx_4 + 8)
                                
                                (*(*rcx_12 + 0x48))(rcx_12, &var_258)
                                *rbx_4 = var_258
                        
                        char rax_22 = *rbx_4 & 0x19
                        
                        if (rsi.b != 4)
                            if (rax_22 == 0)
                                zmm6_2 = (zx.o(0)).d
                            else
                                zmm6_2 = zmm6_2 f* 0.5f
                        else if (rax_22 == 0)
                            zmm6_2 = (zx.o(0)).d
                        
                        zmm7_1.d = zmm7_1.d f+ zmm6_2
                    
                    rsi.b = 0
                
                zmm1_2 = zmm7_1.d f+ zmm8.d
                uint64_t var_1d8_1 = r15_1.q
                int32_t* rbx_5
                
                if (var_1b8 != 1)
                    var_228 = zmm12.d
                    rbx_5 = &var_228
                    int32_t var_224_1 = zmm11.d
                else
                    var_230 = zmm11.d
                    rbx_5 = &var_230
                    int32_t var_22c_1 = zmm12.d
                
                var_1e0 = *rbx_5
                zmm0_2 = var_1d8_1:4.d
                float* rax_23
                
                if (var_1d8_1.d != 1)
                    var_218 = zmm0_2.d
                    rax_23 = &var_218
                    float var_214_1 = zmm1_2
                else
                    var_220 = zmm1_2
                    rax_23 = &var_220
                    int32_t var_21c_1 = zmm0_2.d
                
                zmm8 = *rax_23
                zmm9 = rax_23[1]
                int64_t rax_24 = *(arg1 + 0x2b8)
                int32_t var_24c_1 = zmm8.d
                int32_t var_248_1 = zmm9.d
                var_250 = 0x3f800000
                void* rdi_3 = *(r15_2 + rax_24)
                int128_t* rcx_14 = *(rdi_3 + 0x10) + 0x1c8
                char rcx_15
                uint128_t zmm0_3
                uint128_t zmm1_3
                char var_180_3
                
                if (data_143e20cf4 != 0)
                    int128_t* rax_26 = sub_140e111c0(rcx_14)
                    char rdx_5 = 0
                    
                    if (*(rax_26 + 0x18) == 0)
                        zmm1_3 = var_178
                    else
                        zmm0_3 = zx.o(rax_26[1].q)
                        rdx_5 = 1
                        zmm1_3 = *rax_26
                        var_168 = zmm0_3.q
                        var_168.d = (zmm0_3 ^ data_142d3f780).d
                    
                    rcx_15 = 0
                    char var_180_2 = 0
                    
                    if (rdx_5 != 0)
                        var_188 = var_168
                        var_198 = zmm1_3
                        rcx_15 = 1
                        var_180_3 = 1
                else
                    int128_t* rax_25 = sub_140e111c0(rcx_14)
                    rcx_15 = 0
                    char var_180_1 = 0
                    
                    if (*(rax_25 + 0x18) != 0)
                        zmm1_3 = zx.o(rax_25[1].q)
                        var_198 = *rax_25
                        var_188 = zmm1_3.q
                        rcx_15 = 1
                        var_180_3 = 1
                
                if (rcx_15 == 0)
                    zmm6_2 = *(arg2 + 8)
                    var_178.q = *rbx_5
                    var_198 = data_142d8c9b0
                    var_188.d = zmm8.d
                    var_188:4.d = zmm9.d
                    zmm7_1, zmm8, zmm9, zmm10, zmm11, zmm12 =
                        sub_1408b8950(&var_15c, &var_198, arg2 + 0x1c)
                    zmm1_3.d = zmm8.d f* zmm6_2
                    uint128_t zmm0_4
                    zmm0_4.d = zmm9.d f* zmm6_2
                    var_144 ^= (*(arg2 + 0x34) ^ var_144) & 1
                    zmm1_3.d = zmm1_3.d f+ *(arg2 + 0xc)
                    var_178:8.d = zmm6_2
                    zmm0_4.d = zmm0_4.d f+ arg2[1].d
                    var_168:4.d = zmm8.d
                    int32_t var_160_1 = zmm9.d
                    var_178:0xc.d = zmm1_3.d
                    var_168.d = zmm0_4.d
                else
                    uint64_t* rbx_7 = *(rdi_3 + 0x10) + 0x1f8
                    
                    if (rbx_7[3].d != 0)
                        int64_t* rcx_16 = rbx_7[2]
                        
                        if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
                            int64_t* rcx_17
                            
                            if (rbx_7[3].d == 0)
                                rcx_17 = nullptr
                            else
                                rcx_17 = rbx_7[2]
                            
                            (*(*rcx_17 + 0x48))(rcx_17, &var_1f0)
                            *rbx_7 = var_1f0
                    
                    zmm0_3 = zx.o(*rbx_7)
                    var_210 = (*(arg2 + 8)).d
                    zmm1_3 = arg2[1].d
                    int128_t* var_270_1 = &var_210
                    var_1e8 = zmm0_3.q
                    int32_t var_20c_1 = (*(arg2 + 0xc)).d
                    int32_t var_208_1 = zmm1_3.d
                    zmm7_1, zmm10, zmm11, zmm12 = sub_140dd8200(&var_178, &var_1e0, &var_250, 
                        &var_198, &var_1e8, var_270_1, arg2 + 0x1c)
                
                int64_t* rbx_8 = *(rdi_3 + 0x18)
                
                if (rbx_8 != 0)
                    rbx_8[1].d += 1
                
                int64_t var_100_1 = *(rdi_3 + 0x10)
                var_138 = var_178
                uint128_t var_128_1 = var_168.o
                uint64_t var_108_1 = var_148
                uint128_t var_118_1 = var_158
                
                if (rbx_8 != 0)
                    int32_t rax_33 = rbx_8[1].d
                    rbx_8[1].d = rax_33
                    
                    if (rax_33 == 0)
                        (**rbx_8)(rbx_8)
                        int32_t temp1_1 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_8 + 8))(rbx_8, 1)
                
                sub_140d99900(arg3, &var_138)
                
                if (rbx_8 != 0)
                    rbx_8[1].d -= 1
                    
                    if (rbx_8[1].d == 1)
                        (**rbx_8)(rbx_8)
                        int32_t temp2_1 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_8 + 8))(rbx_8, 1)
                
                zmm7_1.d = zmm7_1.d f+ zmm15.d
                zmm0_2.d = zmm7_1.d f+ zmm11.d
                zmm0_2.d = zmm0_2.d f+ var_1c8
                
                if (not(zmm0_2.d f<= var_254_1))
                    zmm10.d = zmm10.d f+ zmm12.d
                    zmm7_1 = zx.o(0)
                    rsi.b = 1
                    int32_t var_23c_2 = zmm10.d
                
                rbx = arg1 + 0x2a8
                int64_t rax_38 = *rbx
                rdi_2 = var_1f8 + 1
                var_1f8 = rdi_2
                r15_2 = &r15_2[1]
                result = (*rax_38)(rbx)
                zmm8 = var_200.d
            while (rdi_2 s< result)

__security_check_cookie(rax_1 ^ &var_298)
return result
