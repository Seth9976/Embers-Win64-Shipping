// 函数: sub_1425e8330
// 地址: 0x1425e8330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t* r14 = arg1
int32_t arg_20 = 0
int32_t r12 = 0
uint64_t result = zx.q(arg1[0x10].d) ^ zx.q(*(arg2 + 0x58))

if (((*(arg2 + 0x64) ^ *(arg1 + 0x8c)) | (*(arg2 + 0x60) ^ arg1[0x11].d)
        | (*(arg2 + 0x5c) ^ *(arg1 + 0x84)) | result.d) == 0)
    arg1[0x16].b = arg2[0x88]
    sub_140597df0(&arg1[0x14], &arg2[0x78])
    sub_140597df0(&r14[0x12], &arg2[0x68])
    int64_t* rcx_2 = *arg3
    char* rax_7 = (*(*rcx_2 + 0x48))(rcx_2)
    void** rax_9 = sub_1425e2f30(&r14[3], sub_140b212b0(rax_7, 0x10, 0), rax_7)
    void* rcx_5 = *rax_9
    
    if (rcx_5 == 0)
        int64_t* rdi_1 = r14[0xf]
        
        if (rdi_1 != 0)
            int32_t rax_10 = 0
            bool z_1
            
            if (0 == rdi_1[1].d)
                rdi_1[1].d = 0
                z_1 = true
            else
                rax_10 = rdi_1[1].d
                z_1 = false
            
            if (not(z_1))
                bool z_3
                
                do
                    bool z_2
                    
                    if (rax_10 == rdi_1[1].d)
                        rdi_1[1].d = rax_10 + 1
                        z_2 = true
                    else
                        rdi_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        if (rdi_1 != 0)
                            int64_t rbx_2 = r14[0xe]
                            
                            if (rbx_2 != 0)
                                void*** rax_12 = j_sub_140a82f30(0x110)
                                int64_t* var_b0
                                int64_t* var_90
                                int64_t* rsi_1
                                void*** r13_1
                                
                                if (rax_12 == 0)
                                    rsi_1 = arg1
                                    r13_1 = nullptr
                                else
                                    rsi_1 = r14[2]
                                    int64_t rcx_7 = 0
                                    
                                    if (rsi_1 != 0)
                                        int32_t rax_13 = rsi_1[1].d
                                        
                                        if (rax_13 != 0)
                                            rsi_1[1].d = rax_13 + 1
                                            rax_13.b = 1
                                        
                                        if (rax_13.b == 0)
                                            rsi_1 = nullptr
                                        
                                        if (rsi_1 != 0)
                                            rcx_7 = r14[1]
                                    
                                    int64_t var_98 = rcx_7
                                    var_90 = rsi_1
                                    
                                    if (rsi_1 != 0)
                                        rsi_1[1].d += 1
                                    
                                    int64_t var_b8 = rbx_2
                                    var_b0 = rdi_1
                                    rdi_1[1].d += 1
                                    r13_1 = sub_1425e2fb0(rax_12, &arg2[0x28], &var_98, &var_b8)
                                    r12 = 7
                                
                                int64_t* rax_15 = j_sub_140a82f30(0x18)
                                int64_t* rbx_3 = rax_15
                                
                                if (rax_15 == 0)
                                    rbx_3 = nullptr
                                else
                                    rax_15[1].d = 1
                                    *(rax_15 + 0xc) = 1
                                    *rbx_3 = &data_143449d18
                                    rbx_3[2] = r13_1
                                
                                void** r14_1 = &r13_1[1]
                                
                                if (r13_1 == 0)
                                    r14_1 = nullptr
                                
                                if (r14_1 != 0)
                                    void* rax_16
                                    
                                    if (*r14_1 != 0)
                                        rax_16 = r14_1[1]
                                    
                                    if (*r14_1 == 0 || rax_16 == 0 || *(rax_16 + 8) s<= 0)
                                        if (rbx_3 != 0)
                                            rbx_3[1].d += 1
                                        
                                        *r14_1 = r13_1
                                        int64_t* rcx_9 = r14_1[1]
                                        
                                        if (rbx_3 != rcx_9)
                                            if (rbx_3 != 0)
                                                *(rbx_3 + 0xc) += 1
                                                rcx_9 = r14_1[1]
                                            
                                            if (rcx_9 != 0)
                                                int32_t temp7_1 = *(rcx_9 + 0xc)
                                                *(rcx_9 + 0xc) -= 1
                                                
                                                if (temp7_1 == 1)
                                                    (*(*rcx_9 + 8))(rcx_9, 1)
                                            
                                            r14_1[1] = rbx_3
                                        
                                        if (rbx_3 != 0)
                                            rbx_3[1].d -= 1
                                            
                                            if (rbx_3[1].d == 1)
                                                (**rbx_3)(rbx_3)
                                                int32_t temp6_1 = *(rbx_3 + 0xc)
                                                *(rbx_3 + 0xc) -= 1
                                                
                                                if (temp6_1 == 1)
                                                    (*(*rbx_3 + 8))(rbx_3, 1)
                                
                                void var_58
                                void** r13_2
                                
                                if (rax_9 == &var_58)
                                    r13_2 = rax_9
                                label_1425e85e2:
                                    
                                    if (rbx_3 != 0)
                                        rbx_3[1].d -= 1
                                        
                                        if (rbx_3[1].d == 1)
                                            (**rbx_3)(rbx_3)
                                            int32_t temp3_1 = *(rbx_3 + 0xc)
                                            *(rbx_3 + 0xc) -= 1
                                            
                                            if (temp3_1 == 1)
                                                (*(*rbx_3 + 8))(rbx_3, 1)
                                else
                                    *rax_9 = r13_1
                                    r13_2 = rax_9
                                    int64_t* r14_2 = rax_9[1]
                                    
                                    if (rbx_3 == r14_2)
                                        goto label_1425e85e2
                                    
                                    rax_9[1] = rbx_3
                                    
                                    if (r14_2 != 0)
                                        r14_2[1].d -= 1
                                        
                                        if (r14_2[1].d == 1)
                                            (**r14_2)(r14_2)
                                            int32_t temp4_1 = *(r14_2 + 0xc)
                                            *(r14_2 + 0xc) -= 1
                                            
                                            if (temp4_1 == 1)
                                                (*(*r14_2 + 8))(r14_2, 1)
                                
                                if ((r12.b & 4) != 0)
                                    r12 &= 0xfffffffb
                                    
                                    if (var_b0 != 0)
                                        var_b0[1].d -= 1
                                        
                                        if (var_b0[1].d == 1)
                                            (**var_b0)(var_b0)
                                            int32_t rax_26 = *(var_b0 + 0xc)
                                            *(var_b0 + 0xc) -= 1
                                            
                                            if (rax_26 == 1)
                                                (*(*var_b0 + 8))(var_b0, 1)
                                
                                if ((r12.b & 2) != 0)
                                    r12 &= 0xfffffffd
                                    
                                    if (var_90 != 0)
                                        var_90[1].d -= 1
                                        
                                        if (var_90[1].d == 1)
                                            (**var_90)(var_90)
                                            int32_t temp10_1 = *(var_90 + 0xc)
                                            *(var_90 + 0xc) -= 1
                                            
                                            if (temp10_1 == 1)
                                                (*(*var_90 + 8))(var_90, 1)
                                
                                if ((r12.b & 1) != 0 && rsi_1 != 0)
                                    rsi_1[1].d -= 1
                                    
                                    if (rsi_1[1].d == 1)
                                        (**rsi_1)(rsi_1)
                                        int32_t temp11_1 = *(rsi_1 + 0xc)
                                        *(rsi_1 + 0xc) -= 1
                                        
                                        if (temp11_1 == 1)
                                            (*(*rsi_1 + 8))(rsi_1, 1)
                                
                                int64_t* rcx_22 = *r13_2
                                int32_t var_d0_1 = 0
                                uint64_t* rax_33 = (*(*rcx_22 + 0x80))(rcx_22)
                                int128_t var_68 = sub_1425e51f0.o
                                int64_t* var_c8
                                int64_t* rax_34 = sub_140edf9f0(&var_c8, arg1, &var_68)
                                
                                if (rax_34[1].d != 0 && *rax_34 != 0)
                                    sub_140599630(rax_33, 1)
                                    
                                    if (rax_34[1].d != 0)
                                        int64_t* rcx_25 = *rax_34
                                        void var_78
                                        
                                        if (rcx_25 != 0)
                                            (*(*rcx_25 + 0x30))(rcx_25, &var_78)
                                    
                                    int64_t r14_3 = sx.q(rax_33[1].d)
                                    int32_t rax_36 = (r14_3 + 1).d
                                    rax_33[1].d = rax_36
                                    
                                    if (rax_36 s> *(rax_33 + 0xc))
                                        sub_1405a4f90(rax_33)
                                    
                                    int64_t rcx_29 = (r14_3 << 4) + *rax_33
                                    *rcx_29 = 0
                                    *rcx_29 = *rax_34
                                    *rax_34 = 0
                                    *(rcx_29 + 8) = rax_34[1].d
                                    rax_34[1].d = 0
                                
                                int32_t var_c0
                                int64_t* rax_40
                                
                                if (var_c0 == 0)
                                    rax_40 = var_c8
                                label_1425e879a:
                                    
                                    if (rax_40 != 0)
                                        sub_140a74f90(rax_40)
                                else
                                    int64_t* rcx_30 = var_c8
                                    
                                    if (rcx_30 != 0)
                                        (*(*rcx_30 + 0x38))(rcx_30, 0)
                                        rax_40 = var_c8
                                        
                                        if (rax_40 != 0)
                                            rax_40 = sub_140a84c80(rax_40, 0, 0)
                                            var_c8 = rax_40
                                        
                                        int32_t var_c0_1 = 0
                                        goto label_1425e879a
                                sub_1425e89a0(*r13_2, arg2, arg3)
                                int64_t* rsi_3 = r13_2[1]
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d += 1
                                
                                void* var_88 = *r13_2
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d += 1
                                
                                int64_t* rbx_7 = arg1[2]
                                
                                if (rbx_7 != 0)
                                    int32_t rax_42 = rbx_7[1].d
                                    
                                    if (rax_42 != 0)
                                        rbx_7[1].d = rax_42 + 1
                                        rax_42.b = 1
                                    
                                    if (rax_42.b == 0)
                                        rbx_7 = nullptr
                                    
                                    if (rbx_7 != 0)
                                        r15 = arg1[1]
                                
                                int64_t var_a8 = r15
                                int64_t* r14_4 = rbx_7
                                
                                if (rbx_7 != 0)
                                    rbx_7[1].d += 1
                                    r14_4 = rbx_7
                                
                                r13_2.b = 0
                                *(arg1 + 0xcc) += 1
                                int32_t rax_43 = arg1[0x18].d
                                int32_t rcx_34 = *(arg1 + 0xcc)
                                int64_t r15_1 = sx.q(rax_43 - 1)
                                
                                if (rax_43 - 1 s>= 0)
                                    int64_t r14_6 = r15_1 << 4
                                    int64_t temp16_1
                                    
                                    do
                                        int64_t rax_45 = arg1[0x17]
                                        
                                        if (*(r14_6 + rax_45 + 8) == 0)
                                            r13_2.b = 1
                                        else
                                            int64_t* rcx_35 = *(r14_6 + rax_45)
                                            
                                            if (rcx_35 == 0)
                                                r13_2.b = 1
                                            else if ((*(*rcx_35 + 0x50))(rcx_35, &var_a8, &var_88)
                                                    == 0)
                                                r13_2.b = 1
                                        
                                        r14_6 -= 0x10
                                        temp16_1 = r15_1
                                        r15_1 -= 1
                                    while (temp16_1 - 1 s>= 0)
                                    rcx_34 = *(arg1 + 0xcc)
                                    r14_4 = rbx_7
                                
                                *(arg1 + 0xcc) = rcx_34 - 1
                                
                                if (r13_2.b != 0)
                                    sub_140599630(&arg1[0x17], 0)
                                    r14_4 = rbx_7
                                
                                if (r14_4 != 0)
                                    r14_4[1].d -= 1
                                    
                                    if (r14_4[1].d == 1)
                                        (**r14_4)(r14_4)
                                        int32_t temp15_1 = *(r14_4 + 0xc)
                                        *(r14_4 + 0xc) -= 1
                                        
                                        if (temp15_1 == 1)
                                            (*(*r14_4 + 8))(r14_4, 1)
                                
                                if (rbx_7 != 0)
                                    rbx_7[1].d -= 1
                                    
                                    if (rbx_7[1].d == 1)
                                        (**rbx_7)(rbx_7)
                                        int32_t temp18_1 = *(rbx_7 + 0xc)
                                        *(rbx_7 + 0xc) -= 1
                                        
                                        if (temp18_1 == 1)
                                            (*(*rbx_7 + 8))(rbx_7, 1)
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d -= 1
                                    
                                    if (rsi_3[1].d == 1)
                                        (**rsi_3)(rsi_3)
                                        int32_t temp20_1 = *(rsi_3 + 0xc)
                                        *(rsi_3 + 0xc) -= 1
                                        
                                        if (temp20_1 == 1)
                                            (*(*rsi_3 + 8))(rsi_3, 1)
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d -= 1
                                    
                                    if (rsi_3[1].d == 1)
                                        (**rsi_3)(rsi_3)
                                        int32_t temp21_1 = *(rsi_3 + 0xc)
                                        *(rsi_3 + 0xc) -= 1
                                        
                                        if (temp21_1 == 1)
                                            (*(*rsi_3 + 8))(rsi_3, 1)
                                
                                r14 = arg1
                            
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t rbx_9 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (rbx_9 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_9))
                        
                        break
                    
                    rax_10 = 0
                    
                    if (0 == rdi_1[1].d)
                        rdi_1[1].d = 0
                        z_3 = true
                    else
                        rax_10 = rdi_1[1].d
                        z_3 = false
                while (not(z_3))
    else
        sub_1425e89a0(rcx_5, arg2, arg3)
    
    void var_70
    result = sub_140b29d90(&var_70)
    r14[0xd] = *result

return result
