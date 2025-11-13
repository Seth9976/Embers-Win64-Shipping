// 函数: sub_140b15670
// 地址: 0x140b15670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t var_258
sub_140b1e060(&var_258, arg3, arg1, arg4)
char var_240
char var_228
int64_t* var_250
int64_t var_238
int32_t rax_37

if (var_228 == 0 || var_240 != 0)
    int64_t* rbx_10 = var_250
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
        rbx_10 = var_250
    
    if (var_240 != 0)
        var_240 = 0
        
        if (rbx_10 != 0)
            int32_t rax_52 = rbx_10[1].d
            rbx_10[1].d -= 1
            int32_t rax_54
            
            if (rax_52 == 1)
                (**var_250)(var_250)
                rax_54 = *(var_250 + 0xc)
                *(var_250 + 0xc) -= 1
            
            if (rax_52 != 1 || rax_54 != 1)
                rbx_10 = var_250
            else
                rbx_10 = var_250
                (*(*rbx_10 + 8))(rbx_10, 1)
    
    *arg2 = var_258
    arg2[1] = rbx_10
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
        rbx_10 = var_250
    
    int32_t var_248
    arg2[2].d = var_248
    arg2[3].b = 1
    arg2[5].b = 0
    
    if (rbx_10 != 0)
        int32_t rax_58 = rbx_10[1].d
        rbx_10[1].d -= 1
        int32_t rax_60
        
        if (rax_58 == 1)
            (**var_250)(var_250)
            rax_60 = *(var_250 + 0xc)
            *(var_250 + 0xc) -= 1
        
        if (rax_58 != 1 || rax_60 != 1)
            rbx_10 = var_250
        else
            rbx_10 = var_250
            (*(*rbx_10 + 8))(rbx_10, 1)
    
    if (var_228 != 0)
        char var_228_4 = 0
        sub_140b0b5e0(&var_238)
        rbx_10 = var_250
    
    if (var_240 != 0 && rbx_10 != 0)
        rax_37 = rbx_10[1].d
        rbx_10[1].d -= 1
    label_140b15d52:
        
        if (rax_37 == 1)
            (**var_250)(var_250)
            int32_t rdi_4 = *(var_250 + 0xc)
            *(var_250 + 0xc) -= 1
            
            if (rdi_4 == 1)
                (*(*var_250 + 8))(var_250, zx.q(rdi_4))
else
    int64_t var_298 = var_238
    int32_t var_230
    int32_t var_290_1 = var_230
    int32_t var_22c
    int32_t var_28c_1 = var_22c
    __builtin_memset(&var_238, 0, 0x11)
    sub_140b0b5e0(&var_238)
    int64_t var_220
    sub_140b0f760(&var_220, &var_298)
    char var_208
    char var_1f0
    char var_228_1
    int64_t* var_218
    void var_200
    
    if (var_1f0 == 0 || var_208 != 0)
        int64_t* rbx_6 = var_218
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
            rbx_6 = var_218
        
        if (var_208 != 0)
            var_208 = 0
            
            if (rbx_6 != 0)
                int32_t rax_38 = rbx_6[1].d
                rbx_6[1].d -= 1
                int32_t rax_40
                
                if (rax_38 == 1)
                    (**var_218)(var_218)
                    rax_40 = *(var_218 + 0xc)
                    *(var_218 + 0xc) -= 1
                
                if (rax_38 != 1 || rax_40 != 1)
                    rbx_6 = var_218
                else
                    rbx_6 = var_218
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        *arg2 = var_220
        arg2[1] = rbx_6
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
            rbx_6 = var_218
        
        int32_t var_210
        arg2[2].d = var_210
        arg2[3].b = 1
        arg2[5].b = 0
        
        if (rbx_6 != 0)
            int32_t rax_44 = rbx_6[1].d
            rbx_6[1].d -= 1
            int32_t rax_46
            
            if (rax_44 == 1)
                (**var_218)(var_218)
                rax_46 = *(var_218 + 0xc)
                *(var_218 + 0xc) -= 1
            
            if (rax_44 != 1 || rax_46 != 1)
                rbx_6 = var_218
            else
                rbx_6 = var_218
                (*(*rbx_6 + 8))(rbx_6, 1)
        
        if (var_1f0 != 0)
            char var_1f0_2 = 0
            sub_140b0b4e0(&var_200)
            rbx_6 = var_218
        
        if (var_208 != 0 && rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**var_218)(var_218)
                int32_t rax_50 = *(var_218 + 0xc)
                *(var_218 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*var_218 + 8))(var_218, 1)
        
        if (var_228_1 != 0)
            char var_228_3 = 0
            sub_140b0b5e0(&var_238)
        
        if (var_240 != 0 && var_250 != 0)
            rax_37 = var_250[1].d
            var_250[1].d -= 1
            goto label_140b15d52
    else
        int64_t var_278_1 = 0
        void** const var_288 = &data_142e6c838
        void* var_280_1 = &arg1[0x158]
        int64_t var_180
        sub_140b148b0(&var_180, &var_200, &var_288)
        char var_168
        char var_120
        
        if (var_120 == 0 || var_168 != 0)
            *arg2 = var_180
            void* var_178
            arg2[1] = var_178
            
            if (var_178 != 0)
                *(var_178 + 8) += 1
            
            int32_t var_170
            arg2[2].d = var_170
            arg2[3].b = 1
            arg2[5].b = 0
            sub_140acd850(&var_180)
            
            if (var_1f0 != 0)
                char var_1f0_1 = 0
                sub_140b0b4e0(&var_200)
            
            if (var_208 != 0 && var_218 != 0)
                var_218[1].d -= 1
                
                if (var_218[1].d == 1)
                    (**var_218)(var_218)
                    int32_t rax_35 = *(var_218 + 0xc)
                    *(var_218 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*var_218 + 8))(var_218, 1)
            
            if (var_228_1 != 0)
                char var_228_2 = 0
                sub_140b0b5e0(&var_238)
            
            if (var_240 != 0 && var_250 != 0)
                rax_37 = var_250[1].d
                var_250[1].d -= 1
                goto label_140b15d52
        else
            void var_160
            int64_t* rax_7 = sub_140aca5b0(&var_160)
            
            if (rax_7 == 0)
                int64_t* rax_28 = sub_140b07da0(&var_160)
                
                if (rax_28 == 0)
                    goto label_140b15899
                
                arg2[3].b = 0
                arg2[4] = *rax_28
                arg2[5].b = 1
            else
                uint128_t zmm1 = zx.o(*rax_7)
                void var_118
                void var_b0
                int64_t* rax_8
                int32_t rbx_1
                int32_t rdi_1
                
                if (zmm1.q f<= 1.0)
                    rax_8 = sub_140b204a0(&var_118, zmm1)
                    rbx_1 = 0
                    rdi_1 = 2
                else
                    rax_8 = sub_140b1ff30(&var_b0, zmm1)
                    rbx_1 = 1
                    rdi_1 = 0
                
                char var_1d0_1 = 0
                int64_t var_1e8
                int64_t* var_1e0
                int32_t var_1d8
                
                if (rax_8[3].b != 0)
                    var_1e8 = *rax_8
                    int64_t* rax_10 = rax_8[1]
                    var_1e0 = rax_10
                    
                    if (rax_10 != 0)
                        rax_10[1].d += 1
                    
                    var_1d8 = rax_8[2].d
                    var_1d0_1 = 1
                
                char var_188_1 = 0
                int64_t var_1c8
                
                if (rax_8[0xc].b != 0)
                    var_1c8 = 0
                    int64_t var_1c0_1 = 0
                    sub_140b0c1e0(&var_1c8, &rax_8[4])
                    var_188_1 = 1
                
                if (rdi_1 != 0)
                    sub_140acd850(&var_118)
                
                if (rbx_1 != 0)
                    sub_140acd850(&var_b0)
                
                if (var_188_1 == 0 || var_1d0_1 != 0)
                    int64_t r15_1 = var_1e8
                    
                    if (var_1e0 != 0)
                        var_1e0[1].d += 1
                    
                    if (var_1d0_1 != 0)
                        char var_1d0_2 = 0
                        
                        if (var_1e0 != 0)
                            var_1e0[1].d -= 1
                            
                            if (var_1e0[1].d == 1)
                                (**var_1e0)(var_1e0)
                                int32_t rax_23 = *(var_1e0 + 0xc)
                                *(var_1e0 + 0xc) -= 1
                                
                                if (rax_23 == 1)
                                    (*(*var_1e0 + 8))(var_1e0, 1)
                    
                    *arg2 = r15_1
                    arg2[1] = var_1e0
                    
                    if (var_1e0 != 0)
                        var_1e0[1].d += 1
                    
                    arg2[2].d = var_1d8
                    arg2[3].b = 1
                    arg2[5].b = 0
                    
                    if (var_1e0 != 0)
                        var_1e0[1].d -= 1
                        
                        if (var_1e0[1].d == 1)
                            (**var_1e0)(var_1e0)
                            int32_t rdi_3 = *(var_1e0 + 0xc)
                            *(var_1e0 + 0xc) -= 1
                            
                            if (rdi_3 == 1)
                                (*(*var_1e0 + 8))(var_1e0, zx.q(rdi_3))
                    
                    sub_140acd850(&var_1e8)
                else
                    int64_t* rax_12 = sub_140b07da0(&var_1c8)
                    
                    if (rax_12 == 0)
                        sub_140acd850(&var_1e8)
                    label_140b15899:
                        void var_270
                        int64_t* rax_13 =
                            _vfprintf_p_l(&var_270, Unrecognized result returned from expression", 
                            FFrameRate")
                        int64_t* rbx_2 = rax_13[1]
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                        
                        int32_t rdx_4 = rax_13[2].d
                        *arg2 = *rax_13
                        arg2[1] = rbx_2
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                        
                        arg2[2].d = rdx_4
                        arg2[3].b = 1
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t rax_16 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (rax_16 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        arg2[5].b = 0
                        int64_t* var_268
                        
                        if (var_268 != 0)
                            var_268[1].d -= 1
                            
                            if (var_268[1].d == 1)
                                (**var_268)(var_268)
                                int32_t rdi_2 = *(var_268 + 0xc)
                                *(var_268 + 0xc) -= 1
                                
                                if (rdi_2 == 1)
                                    (*(*var_268 + 8))(var_268, zx.q(rdi_2))
                    else
                        arg2[3].b = 0
                        arg2[4] = *rax_12
                        arg2[5].b = 1
                        sub_140acd850(&var_1e8)
            
            sub_140acd850(&var_180)
            sub_140acd7a0(&var_220)
            sub_140a98ff0(&var_258)
__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
