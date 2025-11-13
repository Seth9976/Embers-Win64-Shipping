// 函数: sub_140efea80
// 地址: 0x140efea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x10)
void* rbp_2 = &r14[sx.q(*(arg1 + 0x18)) * 4]
int64_t* result

if (r14 == rbp_2)
label_140efeb5a:
    void var_28
    result = sub_140e65190(data_143e29f28, &var_28)
    int64_t rbp_3 = *result
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)
    
    int64_t* i = *(arg1 + 0x10)
    
    for (void* r15_3 = &i[sx.q(*(arg1 + 0x18)) * 4]; i != r15_3; i = &i[4])
        int64_t* j = *i
        
        for (void* rsi_6 = &j[sx.q(i[1].d) * 2]; j != rsi_6; j = &j[2])
            void* rcx_6 = *j
            int64_t* rbx_3 = *(rcx_6 + 0x3a8)
            
            if (rbx_3 != 0)
                result = zx.q(rbx_3[1].d)
                
                if (result.d != 0)
                    result = zx.q(result.d + 1)
                    rbx_3[1].d = result.d
                    
                    if (rbx_3 != 0)
                        void* rcx_7 = *(rcx_6 + 0x3a0)
                        
                        if (rcx_7 != 0 && rbp_3 == 0)
                            result = sub_140de87e0(rcx_7, 0)
                        
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            result = (**rbx_3)(rbx_3)
                            int32_t temp9_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                result = (*(*rbx_3 + 8))(rbx_3, 1)
else
    while (true)
        int64_t* rdi_1 = *r14
        void* rsi_3 = &rdi_1[sx.q(r14[1].d) * 2]
        
        if (rdi_1 != rsi_3)
            while (true)
                void* rcx = *rdi_1
                int64_t* rbx_1 = *(rcx + 0x3a8)
                
                if (rbx_1 != 0)
                    int32_t rax_1 = rbx_1[1].d
                    
                    if (rax_1 != 0)
                        rbx_1[1].d = rax_1 + 1
                        
                        if (rbx_1 != 0)
                            result = *(rcx + 0x3a0)
                            
                            if (result != 0 && result == *arg2)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    result = (**rbx_1)(rbx_1)
                                    int32_t temp8_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp8_1 == 1)
                                        result = (*(*rbx_1 + 8))(rbx_1, 1)
                                
                                break
                            
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp5_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_1 = &rdi_1[2]
                
                if (rdi_1 == rsi_3)
                    goto label_140efeb41
            
            break
        
    label_140efeb41:
        r14 = &r14[4]
        
        if (r14 == rbp_2)
            goto label_140efeb5a

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
