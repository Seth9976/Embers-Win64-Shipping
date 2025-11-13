// 函数: sub_140ad3de0
// 地址: 0x140ad3de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int64_t var_338
int128_t zmm6
uint128_t zmm7
int64_t zmm8_1
zmm6, zmm7, zmm8_1 = sub_140b1e060(&var_338, arg3, arg1, arg4)
char var_320
char rax_3 = var_320
char var_308

if (var_308 == 0 || rax_3 != 0)
    int64_t* var_330
    int64_t* r14_2 = var_330
    int64_t r15_3 = var_338
    int64_t* rsi_5 = r14_2
    
    if (r14_2 != 0)
        r14_2[1].d += 1
        rax_3 = var_320
        r14_2 = var_330
    
    if (rax_3 != 0)
        char var_320_1 = 0
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d == 1)
                (**r14_2)(r14_2)
                int32_t rax_42 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
    
    *arg2 = r15_3
    arg2[1] = rsi_5
    
    if (rsi_5 != 0)
        rsi_5[1].d += 1
    
    int32_t var_328
    arg2[2].d = var_328
    arg2[3].b = 1
    arg2[5].b = 0
    
    if (rsi_5 != 0)
        rsi_5[1].d -= 1
        
        if (rsi_5[1].d == 1)
            (**rsi_5)(rsi_5)
            int32_t rbx_4 = *(rsi_5 + 0xc)
            *(rsi_5 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*rsi_5 + 8))(rsi_5, zx.q(rbx_4))
else
    int32_t var_310
    int32_t rsi = var_310
    int64_t* var_318
    int64_t* rbx_1 = var_318
    int32_t var_30c
    int32_t r14 = var_30c
    int64_t* var_4c8 = rbx_1
    int64_t var_318_1
    __builtin_memset(&var_318_1, 0, 0x11)
    int32_t var_4c0_1 = rsi
    int32_t var_4bc_1 = r14
    
    if (rsi != 0)
        int128_t var_48_1 = zmm6
        zmm6 = *(rbx_1 + 0x40)
        uint128_t var_58_1 = zmm7
        zmm7 = zx.o(rbx_1[0xa])
        sub_140ad8d60()
        void* rax_10 = &rbx_1[3]
        
        if (((*(rbx_1 + 0xc) ^ data_143dbb284) | (rbx_1[1].d ^ data_143dbb280)
                | (*(rbx_1 + 4) ^ data_143dbb27c) | (data_143dbb278 ^ *rbx_1)) != 0)
            rax_10 = nullptr
        
        int32_t var_4c0_2
        void* rcx_6
        uint64_t zmm1
        
        if (rax_10 != 0)
            sub_140ad8ce0()
            void** const var_428_1 = &data_142e6d678
            int128_t var_438 = data_143dbb260.o
            void var_258
            sub_140b0a670(&var_258, &var_438)
            uint64_t var_208_1 = zmm7.q
            sub_140b0bbf0(&var_438)
            var_4c0_2 = rsi + 1
            
            if (rsi + 1 s> r14)
                sub_1407755b0(&var_4c8)
                r14 = var_4bc_1
                rbx_1 = var_4c8
            
            memmove(&rbx_1[0xb], rbx_1, rsi * 0x58)
            sub_140b0a670(rbx_1, &var_258)
            rcx_6 = &var_258
            *(rbx_1 + 0x40) = zmm6
            zmm1 = var_208_1
            goto label_140ad4192
        
        if (sub_140aca650(rbx_1) != 0)
            sub_140ad8b60()
            void** const var_3e8_1 = &data_142e6d6b8
            int128_t var_3f8 = data_143dbb290.o
            void var_1f8
            sub_140b0a670(&var_1f8, &var_3f8)
            uint64_t var_1a8_1 = zmm7.q
            sub_140b0bbf0(&var_3f8)
            var_4c0_2 = rsi + 1
            
            if (rsi + 1 s> r14)
                sub_1407755b0(&var_4c8)
                r14 = var_4bc_1
                rbx_1 = var_4c8
            
            memmove(&rbx_1[0xb], rbx_1, rsi * 0x58)
            sub_140b0a670(rbx_1, &var_1f8)
            rcx_6 = &var_1f8
            *(rbx_1 + 0x40) = zmm6
            zmm1 = var_1a8_1
            goto label_140ad4192
        
        if (sub_140aca6a0(rbx_1) != 0)
            sub_140ad8ee0()
            void** const var_3a8_1 = &data_142e6d6f8
            int128_t var_3b8 = data_143dbb2c0.o
            void var_198
            sub_140b0a670(&var_198, &var_3b8)
            uint64_t var_148_1 = zmm7.q
            sub_140b0bbf0(&var_3b8)
            var_4c0_2 = rsi + 1
            
            if (rsi + 1 s> r14)
                sub_1407755b0(&var_4c8)
                r14 = var_4bc_1
                rbx_1 = var_4c8
            
            memmove(&rbx_1[0xb], rbx_1, rsi * 0x58)
            sub_140b0a670(rbx_1, &var_198)
            rcx_6 = &var_198
            *(rbx_1 + 0x40) = zmm6
            zmm1 = var_148_1
            goto label_140ad4192
        
        if (sub_140aca600(rbx_1) != 0)
            sub_140ad8a60()
            void** const var_368_1 = &data_142e6d738
            int128_t var_378 = data_143dbb2f0.o
            void var_138
            sub_140b0a670(&var_138, &var_378)
            uint64_t var_e8_1 = zmm7.q
            sub_140b0bbf0(&var_378)
            var_4c0_2 = rsi + 1
            
            if (rsi + 1 s> r14)
                sub_1407755b0(&var_4c8)
                r14 = var_4bc_1
                rbx_1 = var_4c8
            
            memmove(&rbx_1[0xb], rbx_1, rsi * 0x58)
            sub_140b0a670(rbx_1, &var_138)
            rcx_6 = &var_138
            *(rbx_1 + 0x40) = zmm6
            zmm1 = var_e8_1
        label_140ad4192:
            rbx_1[0xa] = zmm1
            sub_140b0bbf0(rcx_6, zmm1)
            sub_140ad89e0()
            int64_t var_460_1 = zmm8_1
            int128_t var_478 = data_143dbb218.o
            void** const var_468_1 = &data_142e6d638
            void var_d8
            sub_140b0a670(&var_d8, &var_478)
            uint64_t var_88_1 = zmm7.q
            sub_140b0bbf0(&var_478)
            int32_t rsi_1 = var_4c0_2 + 1
            
            if (rsi_1 s> r14)
                sub_1407755b0(&var_4c8)
                r14 = var_4bc_1
                rbx_1 = var_4c8
            
            memmove(&rbx_1[0xb], rbx_1, var_4c0_2 * 0x58)
            sub_140b0a670(rbx_1, &var_d8)
            *(rbx_1 + 0x40) = zmm6
            rbx_1[0xa] = var_88_1
            sub_140b0bbf0(&var_d8, var_88_1)
            sub_140b0bbf0(&rbx_1[0x16])
            
            if (rsi_1 != 3)
                memmove(&rbx_1[0x16], &rbx_1[0x21], (rsi_1 - 3) * 0x58)
            
            rsi = rsi_1 - 1
            int32_t var_4c0_4 = rsi
    
    int64_t* var_4b8 = rbx_1
    int32_t var_4b0_1 = rsi
    int32_t var_4ac_1 = r14
    int64_t var_300
    sub_140b0f760(&var_300, &var_4b8)
    char var_2e8
    char rax_20 = var_2e8
    char var_2d0
    int64_t* rsi_4
    
    if (var_2d0 == 0 || rax_20 != 0)
        int64_t* var_2f8
        int64_t* r14_1 = var_2f8
        int64_t r15_2 = var_300
        rsi_4 = r14_1
        
        if (r14_1 != 0)
            r14_1[1].d += 1
            rax_20 = var_2e8
            r14_1 = var_2f8
        
        if (rax_20 != 0)
            char var_2e8_1 = 0
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t rax_35 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
        
        *arg2 = r15_2
        arg2[1] = rsi_4
        
        if (rsi_4 != 0)
            rsi_4[1].d += 1
        
        int32_t var_2f0
        arg2[2].d = var_2f0
        arg2[3].b = 1
        arg2[5].b = 0
        
        if (rsi_4 == 0)
            sub_140acd7a0(&var_300)
        else
        label_140ad4546:
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d != 1)
                sub_140acd7a0(&var_300)
            else
                (**rsi_4)(rsi_4)
                int32_t rbx_3 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (rbx_3 != 1)
                    sub_140acd7a0(&var_300)
                else
                    (*(*rsi_4 + 8))(rsi_4, zx.q(rbx_3))
                    sub_140acd7a0(&var_300)
    else
        int64_t var_498_1 = 0
        void** const var_4a8 = &data_142e6c838
        void* var_4a0_1 = &arg1[0x158]
        void var_2e0
        int64_t var_2c8
        sub_140b148b0(&var_2c8, &var_2e0, &var_4a8)
        char var_268
        char rcx_35 = var_268
        char var_2b0
        void var_2a8
        
        if (rcx_35 == 0 || var_2b0 != 0)
            int64_t* var_2c0
            rsi_4 = var_2c0
            *arg2 = var_2c8
            arg2[1] = rsi_4
            
            if (rsi_4 != 0)
                rsi_4[1].d += 1
                rcx_35 = var_268
                rsi_4 = var_2c0
            
            int32_t var_2b8
            arg2[2].d = var_2b8
            arg2[3].b = 1
            arg2[5].b = 0
            
            if (rcx_35 != 0)
                char var_268_1 = 0
                sub_140b0bbf0(&var_2a8)
                rsi_4 = var_2c0
            
            if (var_2b0 == 0)
                sub_140acd7a0(&var_300)
            else
                char var_2b0_1 = 0
                
                if (rsi_4 != 0)
                    goto label_140ad4546
                
                sub_140acd7a0(&var_300)
        else
            int64_t* rax_22 = sub_140aca5b0(&var_2a8)
            
            if (rax_22 == 0)
                void var_490
                int64_t* rax_23 =
                    _vfprintf_p_l(&var_490, Unrecognized result returned from expression", 
                    BasicMathExpressionEvaluator")
                int64_t* rsi_2 = rax_23[1]
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                
                int32_t rcx_41 = rax_23[2].d
                *arg2 = *rax_23
                arg2[1] = rsi_2
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                
                arg2[2].d = rcx_41
                arg2[3].b = 1
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t rax_26 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (rax_26 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                arg2[5].b = 0
                int64_t* var_488
                
                if (var_488 != 0)
                    var_488[1].d -= 1
                    
                    if (var_488[1].d == 1)
                        (**var_488)(var_488)
                        int32_t rbx_2 = *(var_488 + 0xc)
                        *(var_488 + 0xc) -= 1
                        
                        if (rbx_2 == 1)
                            (*(*var_488 + 8))(var_488, zx.q(rbx_2))
            else
                arg2[3].b = 0
                arg2[4] = *rax_22
                arg2[5].b = 1
            
            sub_140acd850(&var_2c8)
            sub_140acd7a0(&var_300)

sub_140a98ff0(&var_338)
__security_check_cookie(rax_1 ^ &var_4e8)
return arg2
