// 函数: sub_1426de380
// 地址: 0x1426de380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
sub_1426dff30(arg2, arg1)
void* rax_2 = arg1
int32_t i_1 = 0

if (*(rax_2 + 0x58) s> 0)
    int64_t* rcx_1 = nullptr
    int64_t* var_148_1 = nullptr
    int32_t i
    
    do
        int64_t* rcx_2 = *(rcx_1 + *(rax_2 + 0x50))
        
        if (rcx_2 != 0)
            int64_t* r14_1 = arg2[1]
            int64_t rsi_1 = *arg2
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            int32_t rdi_1 = arg2[2].d
            void var_c8
            int64_t* rax_5 = (*(*rcx_2 + 0x268))(rcx_2, &var_c8)
            void var_f0
            char* var_d8
            char** rax_7 =
                sub_140a96390(&var_d8, _vfprintf_p_l(&var_f0, {0}\n  {1}", EnvQueryGenerator"))
            int32_t var_a8_1 = 4
            int64_t var_98_1 = rsi_1
            int64_t* var_90_1 = r14_1
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            int64_t var_68_1 = *rax_5
            void* rax_9 = rax_5[1]
            int32_t var_88_1 = rdi_1
            char var_80_1 = 1
            int32_t var_78_1 = 4
            void* var_60_1 = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1
            
            int32_t var_58_1 = rax_5[2].d
            char var_50_1 = 1
            void* var_140 = nullptr
            int32_t var_138_1 = 2
            sub_1405a4b40(&var_140, 2, 0)
            void var_a0
            void* rdx_3 = &var_a0
            int64_t* rcx_7 = var_140 + 8
            int32_t j_2 = 2
            int32_t j
            
            do
                rcx_7[-1].d = *(rdx_3 - 8)
                *rcx_7 = *rdx_3
                *rcx_7 = *rdx_3
                *rcx_7 = *rdx_3
                *rcx_7 = *rdx_3
                rcx_7[4].b = 0
                
                if (*(rdx_3 + 0x20) != 0)
                    rcx_7[1] = *(rdx_3 + 8)
                    void* rax_17 = *(rdx_3 + 0x10)
                    rcx_7[2] = rax_17
                    
                    if (rax_17 != 0)
                        *(rax_17 + 8) += 1
                    
                    rcx_7[3].d = *(rdx_3 + 0x18)
                    rcx_7[4].b = 1
                
                rcx_7 = &rcx_7[6]
                rdx_3 += 0x30
                j = j_2
                j_2 -= 1
            while (j != 1)
            char* var_118 = *rax_7
            void* rax_20 = rax_7[1]
            void* var_110_1 = rax_20
            
            if (rax_20 != 0)
                *(rax_20 + 8) += 1
            
            void var_108
            int64_t* rax_21 = sub_140aac870(&var_108, &var_118, &var_140)
            int64_t rax_22 = *rax_21
            void* rax_23 = rax_21[1]
            
            if (rax_23 != 0)
                *(rax_23 + 8) += 1
            
            int32_t rax_24 = rax_21[2].d
            int64_t* var_100
            
            if (var_100 != 0)
                var_100[1].d -= 1
                
                if (var_100[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rax_27 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*var_100 + 8))(var_100, 1)
            
            sub_140596f50(&var_140)
            int64_t j_1 = 2
            int64_t __saved_rdi
            int64_t* rdi_2 = &__saved_rdi
            
            do
                j_1 -= 1
                rdi_2 = &rdi_2[-6]
                
                if (*rdi_2 != 0)
                    *rdi_2 = 0
                    int64_t* rbx_2 = rdi_2[-2]
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t rax_31 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (rax_31 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
            while (j_1 != 0)
            
            int64_t* rbx_3 = rax_7[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_35 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*rbx_3 + 8))(rbx_3, zx.q((j_1 + 1).d))
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t rax_39 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (rax_39 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
            
            int64_t* rbx_4 = rax_5[1]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_43 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_43 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t rcx_21 = *arg2
            *arg2 = rax_22
            int64_t* rbx_5 = arg2[1]
            arg2[1] = rax_23
            arg2[2].d = rax_24
            int64_t var_130_2 = rcx_21
            int64_t* var_128_2 = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t rax_50 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (rax_50 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            int64_t* var_e8
            
            if (var_e8 != 0)
                var_e8[1].d -= 1
                
                if (var_e8[1].d == 1)
                    (**var_e8)(var_e8)
                    int32_t rax_54 = *(var_e8 + 0xc)
                    *(var_e8 + 0xc) -= 1
                    
                    if (rax_54 == 1)
                        int64_t r8_2 = *var_e8
                        (*(r8_2 + 8))(var_e8, zx.q(rax_54), r8_2)
        
        i = i_1 + 1
        rcx_1 = &var_148_1[1]
        i_1 = i
        var_148_1 = rcx_1
        rax_2 = arg1
    while (i s< *(arg1 + 0x58))

__security_check_cookie(rax_1 ^ &var_178)
return arg2
