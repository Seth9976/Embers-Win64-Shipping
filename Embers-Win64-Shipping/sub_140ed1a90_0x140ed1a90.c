// 函数: sub_140ed1a90
// 地址: 0x140ed1a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
sub_140ec54a0(r15, *(arg1 + 0xe8))
int32_t i_2 = 0
int32_t i = 0
int32_t i_3 = 0

if (*(arg1 + 0x80) s> 0)
    int64_t r14_1 = 0
    int64_t arg_18 = 0
    
    do
        int64_t* rcx_1 = *(arg1 + 0x78)
        int128_t var_68 = zx.o(0)
        int64_t* rsi_1 = *(rcx_1 + r14_1 + 8)
        
        if (rsi_1 != 0)
            int32_t rax_1 = rsi_1[1].d
            
            if (rax_1 != 0)
                rsi_1[1].d = rax_1 + 1
                
                if (rsi_1 != 0)
                    int64_t* rcx_2 = *(rcx_1 + r14_1)
                    int64_t* rbx_1
                    
                    if (rcx_2 == 0)
                        rbx_1 = var_68:8.q
                    else
                        int64_t* var_58
                        (*(*rcx_2 + 0x278))(rcx_2, &var_58)
                        int64_t* rcx_3 = var_58
                        void* r14_2
                        
                        if (rcx_3 == 0)
                            rbx_1 = var_68:8.q
                            r14_2 = var_68.q
                        else
                            void var_48
                            int64_t* rax_5 = (*(*rcx_3 + 0x18))(rcx_3, &var_48)
                            
                            if (&var_68 == rax_5)
                                r14_2 = var_68.q
                                rbx_1 = var_68:8.q
                            else
                                r14_2 = *rax_5
                                *rax_5 = 0
                                rbx_1 = rax_5[1]
                                
                                if (rbx_1 == 0)
                                    rbx_1 = var_68:8.q
                                else
                                    rax_5[1] = 0
                            
                            int64_t* var_40
                            
                            if (var_40 != 0)
                                var_40[1].d -= 1
                                
                                if (var_40[1].d == 1)
                                    (**var_40)(var_40)
                                    int32_t temp13_1 = *(var_40 + 0xc)
                                    *(var_40 + 0xc) -= 1
                                    
                                    if (temp13_1 == 1)
                                        (*(*var_40 + 8))(var_40, 1)
                        
                        int64_t* var_50
                        
                        if (var_50 != 0)
                            var_50[1].d -= 1
                            
                            if (var_50[1].d == 1)
                                (**var_50)(var_50)
                                int32_t temp10_1 = *(var_50 + 0xc)
                                *(var_50 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*var_50 + 8))(var_50, 1)
                        
                        if (r14_2 != 0)
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            void* r15_1 = *r15
                            int64_t rbp_1 = sx.q(*(r15_1 + 0x28))
                            int32_t rax_10 = (rbp_1 + 1).d
                            *(r15_1 + 0x28) = rax_10
                            
                            if (rax_10 s> *(r15_1 + 0x2c))
                                sub_1405a4f90(r15_1 + 0x20)
                            
                            int64_t* rax_13 = (rbp_1 << 4) + *(r15_1 + 0x20)
                            *rax_13 = r14_2
                            rax_13[1] = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rdi_2 = *(r15_1 + 8)
                            
                            if (rdi_2 != 0)
                                int32_t rax_14 = rdi_2[1].d
                                
                                if (rax_14 != 0)
                                    rdi_2[1].d = rax_14 + 1
                                    
                                    if (rdi_2 != 0)
                                        rdi_2[1].d = rax_14 + 1
                                        
                                        if (rax_14 == 0xffffffff)
                                            (**rdi_2)(rdi_2)
                                            int32_t temp17_1 = *(rdi_2 + 0xc)
                                            *(rdi_2 + 0xc) -= 1
                                            
                                            if (temp17_1 == 1)
                                                (*(*rdi_2 + 8))(rdi_2, 1)
                                        
                                        rdi_2[1].d -= 1
                                        
                                        if (rdi_2[1].d == 1)
                                            (**rdi_2)(rdi_2)
                                            int32_t temp18_1 = *(rdi_2 + 0xc)
                                            *(rdi_2 + 0xc) -= 1
                                            
                                            if (temp18_1 == 1)
                                                (*(*rdi_2 + 8))(rdi_2, 1)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp15_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp15_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            r15 = arg2
                            
                            if (*(r14_2 + 0x38) == 0)
                                void* rdi_3 = *r15
                                *(rdi_3 + 0x10) = r14_2
                                int64_t* rcx_15 = *(rdi_3 + 0x18)
                                
                                if (rbx_1 != rcx_15)
                                    if (rbx_1 != 0)
                                        *(rbx_1 + 0xc) += 1
                                        rcx_15 = *(rdi_3 + 0x18)
                                    
                                    if (rcx_15 != 0)
                                        int32_t temp19_1 = *(rcx_15 + 0xc)
                                        *(rcx_15 + 0xc) -= 1
                                        
                                        if (temp19_1 == 1)
                                            (*(*rcx_15 + 8))(rcx_15, 1)
                                    
                                    *(rdi_3 + 0x18) = rbx_1
                        
                        r14_1 = arg_18
                        i = i_3
                    
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp1_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp9_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
        
        i += 1
        r14_1 += 0x10
        i_3 = i
        arg_18 = r14_1
    while (i s< *(arg1 + 0x80))

int32_t i_1 = 0

if (*(arg1 + 0x90) s> 0)
    int64_t r14_3 = 0
    
    do
        void* rbp_2 = *r15
        int64_t* r15_2 = *(arg1 + 0x88)
        int64_t rdi_4 = sx.q(*(rbp_2 + 0x28))
        int32_t rax_27 = (rdi_4 + 1).d
        *(rbp_2 + 0x28) = rax_27
        
        if (rax_27 s> *(rbp_2 + 0x2c))
            sub_1405a4f90(rbp_2 + 0x20)
        
        int64_t* rcx_23 = (rdi_4 << 4) + *(rbp_2 + 0x20)
        *rcx_23 = *(r15_2 + r14_3)
        void* rax_29 = *(r15_2 + r14_3 + 8)
        rcx_23[1] = rax_29
        
        if (rax_29 != 0)
            *(rax_29 + 8) += 1
        
        int64_t* rbx_2 = *(rbp_2 + 8)
        
        if (rbx_2 != 0)
            int32_t rax_30 = rbx_2[1].d
            
            if (rax_30 != 0)
                rbx_2[1].d = rax_30 + 1
                
                if (rbx_2 != 0)
                    rbx_2[1].d = rax_30 + 1
                    
                    if (rax_30 == 0xffffffff)
                        (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp8_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
        
        r15 = arg2
        i_1 += 1
        r14_3 += 0x10
    while (i_1 s< *(arg1 + 0x90))

if (*(arg1 + 0xa0) s<= 0)
    return arg2

int64_t rsi_2 = 0

do
    void* rbp_3 = *arg2
    int64_t* r14_4 = *(arg1 + 0x98)
    int64_t rdi_5 = sx.q(*(rbp_3 + 0x28))
    int32_t rax_36 = (rdi_5 + 1).d
    *(rbp_3 + 0x28) = rax_36
    
    if (rax_36 s> *(rbp_3 + 0x2c))
        sub_1405a4f90(rbp_3 + 0x20)
    
    int64_t* rcx_31 = (rdi_5 << 4) + *(rbp_3 + 0x20)
    *rcx_31 = *(r14_4 + rsi_2)
    void* rax_38 = *(r14_4 + rsi_2 + 8)
    rcx_31[1] = rax_38
    
    if (rax_38 != 0)
        *(rax_38 + 8) += 1
    
    int64_t* rbx_3 = *(rbp_3 + 8)
    
    if (rbx_3 != 0)
        int32_t rax_39 = rbx_3[1].d
        
        if (rax_39 != 0)
            rbx_3[1].d = rax_39 + 1
            
            if (rbx_3 != 0)
                rbx_3[1].d = rax_39 + 1
                
                if (rax_39 == 0xffffffff)
                    (**rbx_3)(rbx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
                
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp11_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    
    i_2 += 1
    rsi_2 += 0x10
while (i_2 s< *(arg1 + 0xa0))

return arg2
