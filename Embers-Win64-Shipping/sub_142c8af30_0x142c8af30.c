// 函数: sub_142c8af30
// 地址: 0x142c8af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t var_130 = 0
int64_t var_128 = 0

if (arg6[7].d == 0)
    arg6[7].d = 1

int64_t rsi = -1

if (arg6[1] != 0)
    goto label_142c8b006

char var_d0[0x28]
int32_t result
int512_t zmm2
result, zmm2 = sub_142c91160(arg1, &var_d0, 0x21)

if (result == 0)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (var_d0[r8_1] != 0)
    
    result, arg3 = sub_142c75c90(arg1, &var_d0, r8_1, &var_130, zmm2, &var_128)
    
    if (result == 0)
        arg6[1] = var_130
    label_142c8b006:
        arg6[2]
        char* rax_6
        int512_t zmm2_1
        rax_6, zmm2_1 = sub_142c563e0("%s:%s:%s", arg2, arg3)
        
        if (rax_6 != 0)
            char var_108[0x10]
            sub_142c8ff70(&var_108, rax_6)
            data_143ccb8a0(rax_6)
            int64_t i_4 = 0x10
            char (* rbx_2)[0x10] = &var_108
            int64_t i_5 = 0x10
            void var_f8
            void* r14_1 = &var_f8
            int64_t i
            
            do
                zmm2_1 = sub_142c564b0(r14_1, 3, "%02x", zx.q(*rbx_2), zmm2_1)
                r14_1 += 2
                rbx_2 = &(*rbx_2)[1]
                i = i_5
                i_5 -= 1
            while (i != 1)
            
            if (arg6[3].d != 1)
            label_142c8b105:
                char* rax_8
                int512_t zmm2_2
                rax_8, zmm2_2 = sub_142c563e0("%s:%s", arg4, zmm2_1)
                char* rcx_7 = arg6[5]
                char* r14_3 = rax_8
                
                if (rcx_7 != 0 && sub_142c70460(rcx_7, "auth-int") != 0)
                    char* rax_10
                    rax_10, zmm2_2 = sub_142c563e0("%s:%s", r14_3, zmm2_2)
                    data_143ccb8a0(r14_3)
                    r14_3 = rax_10
                
                if (r14_3 == 0)
                    result = 0x1b
                else
                    sub_142c8ff70(&var_108, r14_3)
                    data_143ccb8a0(r14_3)
                    char (* rbx_6)[0x10] = &var_108
                    int64_t i_7 = 0x10
                    void var_a8
                    void* r14_4 = &var_a8
                    int64_t i_1
                    
                    do
                        zmm2_2 = sub_142c564b0(r14_4, 3, "%02x", zx.q(*rbx_6), zmm2_2)
                        r14_4 += 2
                        rbx_6 = &(*rbx_6)[1]
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    int64_t rax_11 = arg6[5]
                    void* rdx_9 = &var_f8
                    *arg6
                    void* var_158
                    char* rax_13
                    int512_t zmm2_3
                    
                    if (rax_11 == 0)
                        rax_13, zmm2_3 = sub_142c563e0("%s:%s:%s", rdx_9, zmm2_2)
                    else
                        arg6[7].d
                        var_158 = &var_a8
                        int64_t var_160_1 = rax_11
                        int64_t var_168_2 = arg6[1]
                        rax_13, zmm2_3 = sub_142c563e0("%s:%s:%08x:%s:%s:%s", rdx_9, zmm2_2)
                    
                    if (rax_13 == 0)
                        result = 0x1b
                    else
                        sub_142c8ff70(&var_108, rax_13)
                        data_143ccb8a0(rax_13)
                        char (* rbx_8)[0x10] = &var_108
                        void var_80
                        void* r14_5 = &var_80
                        int64_t i_2
                        
                        do
                            zmm2_3 = sub_142c564b0(r14_5, 3, "%02x", zx.q(*rbx_8), zmm2_3)
                            r14_5 += 2
                            rbx_8 = &(*rbx_8)[1]
                            i_2 = i_4
                            i_4 -= 1
                        while (i_2 != 1)
                        char* rax_14 = sub_142c8c090(arg2)
                        
                        if (rax_14 == 0)
                            result = 0x1b
                        else
                            int64_t rax_15 = arg6[5]
                            *arg6
                            arg6[2]
                            char* rbx_9
                            int512_t zmm2_4
                            
                            if (rax_15 == 0)
                                void* var_160_3 = &var_80
                                int64_t var_168_4 = arg5
                                char* rax_22
                                rax_22, zmm2_4 = sub_142c563e0(
                                    "username="%s", realm="%s", nonce="%s", uri="%s", response="%s"", 
                                    rax_14, zmm2_3)
                                rbx_9 = rax_22
                            else
                                void* var_148_1 = &var_80
                                int64_t var_150_1 = rax_15
                                var_158.d = arg6[7].d
                                int64_t var_160_2 = arg6[1]
                                int64_t var_168_3 = arg5
                                char* rax_19
                                rax_19, zmm2_4 = sub_142c563e0(
                                    "username="%s", realm="%s", nonce="%s", uri="%s", cnonce="%s", nc="
                                ", qop=%s, response="%s"", 
                                    rax_14, zmm2_3)
                                rbx_9 = rax_19
                                
                                if (sub_142c70460(arg6[5], "auth") != 0)
                                    arg6[7].d += 1
                            
                            data_143ccb8a0(rax_14)
                            
                            if (rbx_9 == 0)
                                result = 0x1b
                            else
                                if (arg6[4] == 0)
                                    goto label_142c8b31f
                                
                                char* rax_23
                                rax_23, zmm2_4 = sub_142c563e0("%s, opaque="%s"", rbx_9, zmm2_4)
                                data_143ccb8a0(rbx_9)
                                
                                if (rax_23 == 0)
                                    result = 0x1b
                                else
                                    rbx_9 = rax_23
                                label_142c8b31f:
                                    
                                    if (arg6[6] == 0)
                                        goto label_142c8b353
                                    
                                    char* rax_24 =
                                        sub_142c563e0("%s, algorithm="%s"", rbx_9, zmm2_4)
                                    data_143ccb8a0(rbx_9)
                                    
                                    if (rax_24 != 0)
                                        rbx_9 = rax_24
                                    label_142c8b353:
                                        *arg7 = rbx_9
                                        
                                        do
                                            rsi += 1
                                        while (rbx_9[rsi] != 0)
                                        
                                        *arg8 = rsi
                                        result = 0
                                    else
                                        result = 0x1b
            else
                arg6[1]
                *arg6
                char* rax_7
                rax_7, zmm2_1 = sub_142c563e0("%s:%s:%s", &var_f8, zmm2_1)
                
                if (rax_7 != 0)
                    sub_142c8ff70(&var_108, rax_7)
                    data_143ccb8a0(rax_7)
                    char (* rbx_4)[0x10] = &var_108
                    int64_t i_6 = 0x10
                    void* r14_2 = &var_f8
                    int64_t i_3
                    
                    do
                        zmm2_1 = sub_142c564b0(r14_2, 3, "%02x", zx.q(*rbx_4), zmm2_1)
                        r14_2 += 2
                        rbx_4 = &(*rbx_4)[1]
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                    goto label_142c8b105
                
                result = 0x1b
        else
            result = (&rax_6[0x1b]).d

__security_check_cookie(rax_1 ^ &var_188)
return result
