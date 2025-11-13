// 函数: sub_140e1d040
// 地址: 0x140e1d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t r14 = 0
int32_t var_234 = 0
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result != 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t* var_230
    int32_t var_228_1
    int64_t* rbx_1
    uint128_t zmm13
    
    if (*(arg1 + 0x2d0) == 0)
    label_140e1d1a0:
        zmm13 = 0x3f800000
        var_230 = 0x3f800000
        rbx_1 = var_230
        var_228_1 = 0
    else
        rbx_1 = *(arg1 + 0x2d8)
        
        if (rbx_1 == 0)
            goto label_140e1d1a0
        
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 s<= 0)
            goto label_140e1d1a0
        
        if (rbx_1 != 0)
            if (rax_3 == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax_3 + 1
        
        void* rdi_1 = nullptr
        
        if (rbx_1 != 0)
            rdi_1 = *(arg1 + 0x2d0)
        
        int64_t* rcx_1 = *(rdi_1 + 0x910)
        int64_t* rsi_1 = data_143e20d08
        zmm13 = 0x3f800000
        
        if (rcx_1 == 0)
            zmm6 = 0x3f800000
        else
            (*(*rcx_1 + 0xf8))(rcx_1)
            zmm6 = arg4
        
        (*(*rsi_1 + 0x48))(rsi_1)
        arg4.d = arg4.d f* zmm6.d
        r14 = 1
        arg6.d = 1f f/ arg4.d
        var_230.d = arg6.d
        arg5.d = arg6.d f* *(rdi_1 + 0x790)
        arg4.d = arg6.d f* *(rdi_1 + 0x794)
        arg5 ^= 0x80000000
        var_230:4.d = arg5.d
        var_228_1 = (arg4 ^ 0x80000000).d
    
    arg4 = zx.o(var_230)
    uint64_t var_218_1 = arg4.q
    
    if ((r14.b & 1) != 0)
        r14 &= 0xfffffffe
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int32_t var_234_1 = 0
    result = (**(arg1 + 0x2a8))(arg1 + 0x2a8, arg5, arg6)
    
    if (result s> 0)
        int64_t* rsi_2 = var_230
        int64_t rdi_2 = 0
        int128_t zmm9 = var_218_1.d
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        int64_t var_200_1 = 0
        int32_t rbx_6
        
        do
            void* rbx_2 = *(*(arg1 + 0x2b8) + (rdi_2 << 3))
            char* rdi_4 = *(rbx_2 + 0x10) + 0x1a8
            
            if (*(rdi_4 + 0x10) != 0)
                int64_t* rcx_6 = *(rdi_4 + 8)
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                    int64_t* rcx_7
                    
                    if (*(rdi_4 + 0x10) == 0)
                        rcx_7 = nullptr
                    else
                        rcx_7 = *(rdi_4 + 8)
                    
                    char var_238
                    (*(*rcx_7 + 0x48))(rcx_7, &var_238)
                    *rdi_4 = var_238
            
            if ((*rdi_4 & *arg3) != 0)
                if (*(rbx_2 + 0x80) != 0)
                    int64_t* rcx_8 = *(rbx_2 + 0x78)
                    
                    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
                        int64_t* rcx_9
                        
                        if (*(rbx_2 + 0x80) == 0)
                            rcx_9 = nullptr
                        else
                            rcx_9 = *(rbx_2 + 0x78)
                        
                        (*(*rcx_9 + 0x48))(rcx_9)
                        *(rbx_2 + 0x70) = arg4.d
                
                zmm12 = *(rbx_2 + 0x70)
                
                if (*(rbx_2 + 0x38) != 0)
                    int64_t* rcx_10 = *(rbx_2 + 0x30)
                    
                    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                        int64_t* rcx_11
                        
                        if (*(rbx_2 + 0x38) == 0)
                            rcx_11 = nullptr
                        else
                            rcx_11 = *(rbx_2 + 0x30)
                        
                        int64_t var_1d8
                        (*(*rcx_11 + 0x48))(rcx_11, &var_1d8)
                        arg4 = zx.o(var_1d8)
                        *(rbx_2 + 0x20) = arg4.q
                
                int64_t* rcx_12 = &data_143dbb1f0
                zmm7 = *(rbx_2 + 0x20)
                int64_t* rax_25 = *(rbx_2 + 0x10) + 0x158
                zmm6 = *(rbx_2 + 0x24)
                
                if (rax_25[1].b != 0)
                    rcx_12 = rax_25
                
                zmm11.d = (*rcx_12).d f* zmm12.d
                zmm10.d = (*(rcx_12 + 4)).d f* zmm12.d
                
                if (*(rbx_2 + 0x5c) != 0)
                    if (*(rbx_2 + 0x68) != 0)
                        int64_t* rcx_13 = *(rbx_2 + 0x60)
                        
                        if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                            int64_t* rcx_14
                            
                            if (*(rbx_2 + 0x68) == 0)
                                rcx_14 = nullptr
                            else
                                rcx_14 = *(rbx_2 + 0x60)
                            
                            (*(*rcx_14 + 0x48))(rcx_14)
                            *(rbx_2 + 0x58) = arg4.d
                    
                    zmm10 = *(rbx_2 + 0x58)
                
                if (*(rbx_2 + 0x44) != 0)
                    if (*(rbx_2 + 0x50) != 0)
                        int64_t* rcx_15 = *(rbx_2 + 0x48)
                        
                        if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                            int64_t* rcx_16
                            
                            if (*(rbx_2 + 0x50) == 0)
                                rcx_16 = nullptr
                            else
                                rcx_16 = *(rbx_2 + 0x48)
                            
                            (*(*rcx_16 + 0x48))(rcx_16)
                            *(rbx_2 + 0x40) = arg4.d
                    
                    zmm11 = *(rbx_2 + 0x40)
                
                if (*(rbx_2 + 0x98) != 0)
                    int64_t* rcx_17 = *(rbx_2 + 0x90)
                    
                    if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                        int64_t* rcx_18
                        
                        if (*(rbx_2 + 0x98) == 0)
                            rcx_18 = nullptr
                        else
                            rcx_18 = *(rbx_2 + 0x90)
                        
                        *(rbx_2 + 0x88) = (*(*rcx_18 + 0x48))(rcx_18)
                
                int32_t var_224
                
                if (*(rbx_2 + 0x88) != 0)
                    int64_t* rax_38
                    uint128_t var_1b8
                    
                    if (*(arg1 + 0x2d0) == 0)
                        rax_38 = &var_1b8
                        var_1b8 = data_142d3f7e0
                    else
                        int64_t* rcx_19 = *(arg1 + 0x2d8)
                        
                        if (rcx_19 == 0)
                            rax_38 = &var_1b8
                            var_1b8 = data_142d3f7e0
                        else
                            int32_t rax_36 = rcx_19[1].d
                            
                            if (rax_36 s<= 0)
                                rax_38 = &var_1b8
                                var_1b8 = data_142d3f7e0
                            else
                                r14 |= 2
                                void* const r8 = nullptr
                                rsi_2 = rcx_19
                                void var_1a8
                                
                                if (rcx_19 == 0)
                                    rax_38, zmm6, zmm7, zmm9, zmm10 =
                                        sub_140e12810(r8, &var_1a8, arg4)
                                else if (rax_36 == 0)
                                    rsi_2 = nullptr
                                    rax_38, zmm6, zmm7, zmm9, zmm10 =
                                        sub_140e12810(nullptr, &var_1a8, arg4)
                                else
                                    rcx_19[1].d = rax_36 + 1
                                    
                                    if (rcx_19 != 0)
                                        r8 = *(arg1 + 0x2d0)
                                    
                                    rax_38, zmm6, zmm7, zmm9, zmm10 =
                                        sub_140e12810(r8, &var_1a8, arg4)
                    var_230.o = *rax_38
                    
                    if ((r14.b & 2) != 0)
                        r14 &= 0xfffffffd
                        
                        if (rsi_2 != 0)
                            rsi_2[1].d -= 1
                            
                            if (rsi_2[1].d == 1)
                                (**rsi_2)(rsi_2)
                                int32_t temp3_1 = *(rsi_2 + 0xc)
                                *(rsi_2 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    if (*(rbx_2 + 0xb8) != 0)
                        int64_t* rcx_23 = *(rbx_2 + 0xb0)
                        
                        if (rcx_23 != 0 && (*(*rcx_23 + 0x28))(rcx_23) != 0)
                            int64_t* rcx_24
                            
                            if (*(rbx_2 + 0xb8) == 0)
                                rcx_24 = nullptr
                            else
                                rcx_24 = *(rbx_2 + 0xb0)
                            
                            int64_t var_1d0
                            (*(*rcx_24 + 0x48))(rcx_24, &var_1d0)
                            *(rbx_2 + 0xa0) = var_1d0
                    
                    arg4.d = var_228_1.d f- *(rbx_2 + 0xa0)
                    arg5.d = zmm7.d f+ zmm11.d
                    arg6.d = var_224.d f- *(rbx_2 + 0xa4)
                    arg5.d = arg5.d f- arg4.d
                    zmm7.d = zmm7.d f- _mm_max_ss(arg5.d, 0).d
                    arg4 = zmm7
                    zmm7 = var_230.d
                    
                    if (not(zmm7.d f>= arg4.d))
                        zmm7 = arg4
                    
                    arg4.d = zmm6.d f+ zmm10.d
                    arg4.d = arg4.d f- arg6.d
                    zmm6.d = zmm6.d f- _mm_max_ss(arg4.d, 0).d
                    arg5 = zmm6
                    zmm6 = var_230:4.d
                    
                    if (not(zmm6.d f>= arg5.d))
                        zmm6 = arg5
                
                int128_t* rcx_26 = *(rbx_2 + 0x10) + 0x1c8
                bool cond:2_1 = data_143e20cf4 != 0
                arg5.d = zmm13.d f/ zmm12.d
                zmm8.d = zmm9.d f* zmm7.d
                arg4.d = arg5.d f* zmm11.d
                zmm8.d = zmm8.d f+ var_218_1:4.d
                arg5.d = arg5.d f* zmm10.d
                zmm9.d = zmm9.d f* zmm6.d
                arg4 = _mm_unpacklo_ps(arg4, arg5.q)
                zmm7.d = var_218_1.d.d f* zmm12.d
                zmm9.d = zmm9.d f+ var_228_1
                var_230 = arg4.q
                int32_t var_1e8 = zmm7.d
                int32_t var_1e4_1 = zmm8.d
                int32_t var_1e0_1 = zmm9.d
                uint128_t var_198
                uint64_t var_188
                uint128_t var_160
                char rcx_27
                uint128_t zmm0
                uint128_t zmm1
                char var_148_3
                
                if (cond:2_1)
                    int128_t* rax_45 = sub_140e111c0(rcx_26)
                    char rdx_5 = 0
                    
                    if (*(rax_45 + 0x18) == 0)
                        zmm1 = var_198
                    else
                        zmm0 = zx.o(rax_45[1].q)
                        rdx_5 = 1
                        zmm1 = *rax_45
                        var_188 = zmm0.q
                        var_188.d = (zmm0 ^ 0x80000000).d
                    
                    rcx_27 = 0
                    char var_148_2 = 0
                    
                    if (rdx_5 != 0)
                        uint64_t var_150_2 = var_188
                        var_160 = zmm1
                        rcx_27 = 1
                        var_148_3 = 1
                else
                    uint128_t* rax_44 = sub_140e111c0(rcx_26)
                    rcx_27 = 0
                    char var_148_1 = 0
                    
                    if (*(rax_44 + 0x18) != 0)
                        zmm1 = zx.o(rax_44[1].q)
                        var_160 = *rax_44
                        uint64_t var_150_1 = zmm1.q
                        rcx_27 = 1
                        var_148_3 = 1
                
                if (rcx_27 == 0)
                    zmm6 = *(arg2 + 8)
                    var_230.d = zmm7.d
                    var_224 = zmm7.d
                    int32_t var_220_1 = zmm8.d
                    int32_t var_21c_1 = zmm9.d
                    var_198.q = arg4.q
                    var_230 = 0
                    int32_t var_17c
                    zmm7, zmm8, zmm9 = sub_1408b8950(&var_17c, &var_230, arg2 + 0x1c)
                    zmm1.d = zmm6.d f* zmm8.d
                    uint128_t zmm0_1
                    zmm0_1.d = zmm6.d f* zmm9.d
                    char var_164 = var_164 ^ ((*(arg2 + 0x34) ^ var_164) & 1)
                    zmm1.d = zmm1.d f+ *(arg2 + 0xc)
                    zmm7.d = zmm7.d f* zmm6.d
                    zmm0_1.d = zmm0_1.d f+ *(arg2 + 0x10)
                    var_188:4.d = zmm8.d
                    var_198:0xc.d = zmm1.d
                    var_198:8.d = zmm7.d
                    int32_t var_180_1 = zmm9.d
                    var_188.d = zmm0_1.d
                else
                    uint64_t* rdi_6 = *(rbx_2 + 0x10) + 0x1f8
                    
                    if (rdi_6[3].d != 0)
                        int64_t* rcx_28 = rdi_6[2]
                        
                        if (rcx_28 != 0 && (*(*rcx_28 + 0x28))(rcx_28) != 0)
                            int64_t* rcx_29
                            
                            if (rdi_6[3].d == 0)
                                rcx_29 = nullptr
                            else
                                rcx_29 = rdi_6[2]
                            
                            int64_t var_1c8
                            (*(*rcx_29 + 0x48))(rcx_29, &var_1c8)
                            *rdi_6 = var_1c8
                    
                    zmm0 = zx.o(*rdi_6)
                    int32_t var_1f8 = (*(arg2 + 8)).d
                    zmm1 = *(arg2 + 0x10)
                    int128_t* var_250_1 = &var_1f8
                    uint64_t var_1c0 = zmm0.q
                    int32_t var_1f4_1 = (*(arg2 + 0xc)).d
                    int32_t var_1f0_1 = zmm1.d
                    sub_140dd8200(&var_198, &var_230, &var_1e8, &var_160, &var_1c0, var_250_1, 
                        arg2 + 0x1c)
                
                int64_t* rbx_3 = *(rbx_2 + 0x18)
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                int64_t var_100_1 = *(rbx_2 + 0x10)
                uint128_t var_138 = var_198
                uint128_t var_128_1 = var_188.o
                int64_t var_168
                uint64_t var_108_1 = var_168
                uint128_t var_178
                uint128_t var_118_1 = var_178
                
                if (rbx_3 != 0)
                    int32_t rax_52 = rbx_3[1].d
                    rbx_3[1].d = rax_52
                    
                    if (rax_52 == 0)
                        (**rbx_3)(rbx_3)
                        int32_t temp5_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                arg4 = sub_140d99900(arg3, &var_138)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp6_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                zmm9 = var_218_1.d
            
            rbx_6 = var_234_1 + 1
            rdi_2 = var_200_1 + 1
            var_234_1 = rbx_6
            var_200_1 = rdi_2
            result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rbx_6 s< result)

__security_check_cookie(rax_1 ^ &var_278)
return result
