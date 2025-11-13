// 函数: sub_140ed8090
// 地址: 0x140ed8090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* r15 = *arg2
int64_t (* result)(int64_t* arg1) = &r15[sx.q(arg2[1].d) * 2]
int64_t (* result_1)(int64_t* arg1) = result

if (r15 != result)
    do
        int64_t* rsi_1 = r15[1]
        int64_t rdi_1 = *r15
        int64_t* rbx_1 = rsi_1
        void* r12_1 = *arg3
        int64_t var_a8 = rdi_1
        int64_t* var_a0_1 = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
            rdi_1 = *r15
            rbx_1 = r15[1]
        
        int32_t var_f0_1 = 0
        int32_t var_e0_1 = 0
        int128_t var_78 = sub_140e9eb0c.o
        int128_t var_88 = sub_140ebfdf0.o
        int32_t var_d0_1 = 0
        int64_t var_b8 = rdi_1
        int64_t* var_b0_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = r15[1]
            rdi_1 = *r15
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
        
        void*** rax_2 = sub_140a84c80(0, 0x40, 0)
        
        if (rax_2 != 0)
            *rax_2 = &data_142edec78
            rax_2[1] = rdi_1
            rax_2[2] = rbx_1
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
            
            *(rax_2 + 0x18) = sub_140edadc0.o
            rax_2[6] = sub_140a387b0()
            *rax_2 = &data_142edecd0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t var_c8 = *r15
        void* rax_7 = r15[1]
        void* var_c0_1 = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
        
        void* rbx_2 = *(r12_1 + 0x3a8)
        void var_68
        int32_t* rax_8 = sub_140e8e940(&var_68, &var_c8, &var_88)
        void*** rax_9 = sub_140f2a990(rbx_2, 0xffffffff)
        rax_9[7].d = *rax_8
        *(rax_9 + 0x3c) = rax_8[1].b
        sub_140692f90(&rax_9[8], &rax_8[2])
        
        if (&var_88 != &rax_9[0xa])
            if (rax_2 != 0)
                (*rax_2)[8](rax_2, &rax_9[0xa])
            else if (rax_9[0xb].d != 0)
                int64_t* rcx_8 = rax_9[0xa]
                
                if (rcx_8 != 0)
                    (*(*rcx_8 + 0x38))(rcx_8, 0)
                    int64_t rcx_9 = rax_9[0xa]
                    
                    if (rcx_9 != 0)
                        rax_9[0xa] = sub_140a84c80(rcx_9, 0, 0)
                    
                    rax_9[0xb].d = 0
        
        void var_50
        sub_140e99b50(sub_140edb400(rax_9, sub_140e8ea40(&var_50, &var_b8, &var_78)), &var_a8)
        void var_60
        sub_140745b20(&var_60)
        
        if (rax_2 != 0)
            (*rax_2)[7](rax_2, 0)
            int64_t rax_16 = sub_140a84c80(rax_2, 0, 0)
            
            if (rax_16 != 0)
                sub_140a74f90(rax_16)
        
        void var_48
        sub_140745b20(&var_48)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp3_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        int64_t rdi_3 = sx.q(*(r12_1 + 0x3c0))
        int32_t rax_19 = (rdi_3 + 1).d
        *(r12_1 + 0x3c0) = rax_19
        
        if (rax_19 s> *(r12_1 + 0x3c4))
            sub_1405a4f90(r12_1 + 0x3b8)
        
        int64_t* rcx_23 = (rdi_3 << 4) + *(r12_1 + 0x3b8)
        *rcx_23 = *r15
        void* rax_21 = r15[1]
        rcx_23[1] = rax_21
        
        if (rax_21 != 0)
            *(rax_21 + 8) += 1
        
        int64_t* rbx_4 = *(r12_1 + 0x10)
        int64_t* rdi_4 = *r15
        int64_t rcx_24 = 0
        
        if (rbx_4 != 0)
            int32_t rax_22 = rbx_4[1].d
            
            if (rax_22 == 0)
                rbx_4 = nullptr
            else
                rbx_4[1].d = rax_22 + 1
                
                if (rbx_4 != 0)
                    rcx_24 = *(r12_1 + 8)
        
        int64_t var_98 = rcx_24
        int64_t* var_90_1 = rbx_4
        
        if (rbx_4 != 0)
            int32_t rax_24 = rbx_4[1].d
            rbx_4[1].d = rax_24
            
            if (rax_24 == 0)
                (**rbx_4)(rbx_4)
                int32_t temp4_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        (*(*rdi_4 + 0x248))(rdi_4, &var_98)
        arg3 = arg_18
        result = sub_140e9eb0c
        r15 = &r15[2]
    while (r15 != result_1)

return result
