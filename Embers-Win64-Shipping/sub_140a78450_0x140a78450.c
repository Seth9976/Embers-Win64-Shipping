// 函数: sub_140a78450
// 地址: 0x140a78450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t var_190
sub_140a8a6b0(&var_190, arg2)
int32_t var_188
uint64_t rbx
rbx.b = var_188 s<= 1
char var_1b8 = rbx.b
int64_t* result

if (var_188 s> 1)
    EnterCriticalSection(arg1 + 0x2a0)
    int32_t var_1a0
    sub_140926e00(arg1 + 0x250, &var_1a0, &var_190)
    int64_t rax_2 = sx.q(var_1a0)
    
    if (rax_2.d == 0xffffffff)
    label_140a78572:
        
        if (arg1 != -0x2a0)
            LeaveCriticalSection(arg1 + 0x2a0)
        
        rbx = zx.q(var_1b8)
    label_140a785a6:
        int32_t var_19c = 0
        int64_t* rax_8 = sub_142a58660(arg1 + 8, &var_19c)
        void*** rax_9 = j_sub_140a82f30(0x18)
        void*** r14_1 = rax_9
        
        if (rax_9 == 0)
            r14_1 = nullptr
        else
            rax_9[1].d = 1
            *(rax_9 + 0xc) = 1
            *r14_1 = &data_142d42ea8
            r14_1[2] = rax_8
        
        if (rbx.b == 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            char var_130_1 = 2
            
            if (var_188 != 0 && var_188 - 1 s> 0)
                int64_t rdi_3 = var_190
                void* rax_11 = sub_142a4a0b0(&var_138, var_188)
                int16_t* rbx_2 = sx.q(var_188 - 1) * 2
                memcpy(rax_11, rdi_3, rbx_2.d)
                *(rbx_2 + rax_11) = 0
                sub_142a4a600(&var_138, var_188 - 1)
                rbx = zx.q(var_1b8)
            
            void* rdx_7
            
            if ((var_130_1 & 0x11) == 0)
                void var_12e
                rdx_7 = &var_12e
                void* var_120
                
                if ((var_130_1 & 2) == 0)
                    rdx_7 = var_120
            else
                rdx_7 = nullptr
            
            (*(*rax_8 + 0x248))(rax_8, rdx_7)
            sub_142a47ff0(&var_138)
        
        void var_f8
        sub_140a72c30(&var_f8, rax_8)
        
        if (rbx.b == 0)
            EnterCriticalSection(arg1 + 0x2a0)
            int32_t var_198
            sub_140926e00(arg1 + 0x250, &var_198, &var_190)
            int64_t rax_21 = sx.q(var_198)
            void* rdi_5
            
            if (rax_21.d != 0xffffffff)
                rdi_5 = *(arg1 + 0x250) + rax_21 * 0x28
            
            int64_t* rdi_6
            int64_t* result_1
            int64_t* var_1a8_1
            
            if (rax_21.d == 0xffffffff || rdi_5 == 0)
                var_1a8_1 = nullptr
            label_140a7882a:
                int64_t* rax_23 = j_sub_140a82f30(0xa8)
                int64_t* result_2
                
                if (rax_23 == 0)
                    result_2 = nullptr
                else
                    result_2 = sub_140a601a0(rax_23, &var_f8)
                
                int64_t* rax_25 = j_sub_140a82f30(0x18)
                int64_t* rdi_7 = rax_25
                
                if (rax_25 == 0)
                    rdi_7 = nullptr
                else
                    rax_25[1].d = 1
                    *(rax_25 + 0xc) = 1
                    *rdi_7 = &data_142e63350
                    rdi_7[2] = result_2
                
                int64_t* var_168_1 = rdi_7
                result_1 = result_2
                int64_t* rsi_4 = var_1a8_1
                int64_t var_170_1 = 0
                
                if (rdi_7 == rsi_4)
                label_140a788da:
                    
                    if (rdi_7 != 0)
                        rdi_7[1].d -= 1
                        
                        if (rdi_7[1].d == 1)
                            (**rdi_7)(rdi_7)
                            int32_t temp12_1 = *(rdi_7 + 0xc)
                            *(rdi_7 + 0xc) -= 1
                            
                            if (temp12_1 == 1)
                                (*(*rdi_7 + 8))(rdi_7, 1)
                else
                    int64_t* var_168_2 = nullptr
                    var_1a8_1 = rdi_7
                    
                    if (rsi_4 != 0)
                        rsi_4[1].d -= 1
                        
                        if (rsi_4[1].d == 1)
                            (**rsi_4)(rsi_4)
                            int32_t temp13_1 = *(rsi_4 + 0xc)
                            *(rsi_4 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*rsi_4 + 8))(rsi_4, 1)
                        
                        rdi_7 = var_168_2
                        goto label_140a788da
                
                int64_t* var_158 = &var_190
                int64_t** var_150_1 = &result_1
                void var_160
                sub_140a5c780(arg1 + 0x250, &var_160, &var_158, nullptr)
                result = result_1
                rdi_6 = var_1a8_1
            else
                result = *(rdi_5 + 0x10)
                result_1 = result
                rdi_6 = *(rdi_5 + 0x18)
                var_1a8_1 = rdi_6
                
                if (rdi_6 != 0)
                    rdi_6[1].d += 1
                    rdi_6 = var_1a8_1
                    result = result_1
                
                if (result == 0)
                    goto label_140a7882a
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp9_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            if (arg1 != -0x2a0)
                LeaveCriticalSection(arg1 + 0x2a0)
        else
            EnterCriticalSection(arg1 + 0x228)
            
            if (*(arg1 + 0x218) == 0)
                int64_t* rax_15 = j_sub_140a82f30(0xa8)
                int64_t* rsi_2
                
                if (rax_15 == 0)
                    rsi_2 = nullptr
                else
                    rsi_2 = sub_140a601a0(rax_15, &var_f8)
                
                int64_t* rax_17 = j_sub_140a82f30(0x18)
                int64_t* rdi_4 = rax_17
                
                if (rax_17 == 0)
                    rdi_4 = nullptr
                else
                    rax_17[1].d = 1
                    *(rax_17 + 0xc) = 1
                    *rdi_4 = &data_142e63350
                    rdi_4[2] = rsi_2
                
                int64_t* var_180 = rsi_2
                int64_t* var_178 = rdi_4
                
                if (arg1 + 0x218 != &var_180)
                    *(arg1 + 0x218) = rsi_2
                    var_180 = nullptr
                    sub_1405aeff0(arg1 + 0x220, &var_178)
                    rdi_4 = var_178
                
                if (rdi_4 != 0)
                    rdi_4[1].d -= 1
                    
                    if (rdi_4[1].d == 1)
                        (**rdi_4)(rdi_4)
                        int32_t rsi_3 = *(rdi_4 + 0xc)
                        *(rdi_4 + 0xc) -= 1
                        
                        if (rsi_3 == 1)
                            (*(*rdi_4 + 8))(rdi_4, zx.q(rsi_3))
            
            if (arg1 != -0x228)
                LeaveCriticalSection(arg1 + 0x228)
            
            result = *(arg1 + 0x218)
        
        sub_140a62e30(&var_f8)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t temp7_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*r14_1)[1](r14_1, 1)
    else
        void* rdi_1 = *(arg1 + 0x250) + rax_2 * 0x28
        
        if (rdi_1 == 0)
            goto label_140a78572
        
        result = *(rdi_1 + 0x10)
        int64_t* rdi_2 = *(rdi_1 + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (result == 0)
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp4_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            goto label_140a78572
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (arg1 != -0x2a0)
            LeaveCriticalSection(arg1 + 0x2a0)
else
    result = *(arg1 + 0x218)
    
    if (result == 0)
        goto label_140a785a6

int64_t rbx_5 = var_190

if (rbx_5 != 0)
    int64_t* rcx_36 = data_143ddb3f0
    
    if (rcx_36 != 0)
        (*(*rcx_36 + 0x30))(rcx_36, rbx_5)
    else
        sub_140a750a0()
        int64_t* rcx_37 = data_143ddb3f0
        int64_t r8_5 = *rcx_37
        (*(r8_5 + 0x30))(rcx_37, rbx_5, r8_5)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
