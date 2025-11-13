// 函数: sub_141b93b10
// 地址: 0x141b93b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc8) == 0)
    return 

uint64_t var_28
sub_141bab3c0(arg1, &var_28)
uint64_t rax = var_28

if (rax != 0)
    int64_t* rsi_1 = *(rax + 0x228)
    void* rbp_3 = &rsi_1[sx.q(*(rax + 0x230)) * 2]
    void* var_38
    void*** rbx_2
    void* rbp_4
    
    if (rsi_1 == rbp_3)
    label_141b93b93:
        rbx_2 = nullptr
    label_141b93b9f:
        void*** rax_2 = j_sub_140a82f30(0x108)
        void*** rdi_2 = rax_2
        
        if (rax_2 == 0)
            rdi_2 = nullptr
        else
            rax_2[1].d = 1
            *(rax_2 + 0xc) = 1
            *rdi_2 = &data_143083fa0
            sub_141b7b9a0(&rdi_2[2])
        
        var_38 = &rdi_2[2]
        void*** rdi_3 = rdi_2
        rbp_4 = var_38
        void*** rsi_2 = rdi_3
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
            rdi_3 = rdi_2
        
        void*** r14_1 = rbx_2
        
        if (rsi_2 != rbx_2)
            rbx_2 = rsi_2
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d != 1)
                    rdi_3 = rdi_2
                else
                    (**r14_1)(r14_1)
                    int32_t temp10_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp10_1 != 1)
                        rdi_3 = rdi_2
                    else
                        (*r14_1)[1](r14_1, 1)
                        rdi_3 = rdi_2
        else if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d != 1)
                rdi_3 = rdi_2
            else
                (**rsi_2)(rsi_2)
                int32_t temp9_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp9_1 != 1)
                    rdi_3 = rdi_2
                else
                    (*rsi_2)[1](rsi_2, 1)
                    rdi_3 = rdi_2
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp11_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*rdi_3)[1](rdi_3, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 2
        
        int64_t rdi_4 = sx.q(*(rax + 0x230))
        int32_t rax_10 = (rdi_4 + 1).d
        *(rax + 0x230) = rax_10
        
        if (rax_10 s> *(rax + 0x234))
            sub_1405a4f90(rax + 0x228)
        
        void** rax_13 = (rdi_4 << 4) + *(rax + 0x228)
        *rax_13 = rbp_4
        rax_13[1] = rbx_2
        
        if (rbx_2 != 0)
            int32_t rax_14 = rbx_2[1].d
            rbx_2[1].d = rax_14
            
            if (rax_14 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp13_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)
            
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp14_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)
    else
        while (true)
            int64_t* rbx_1 = *rsi_1
            int64_t rdi_1 = *rbx_1
            sub_140e179c0()
            
            if ((*(rdi_1 + 8))(rbx_1, &data_143e29120) != 0)
                break
            
            rsi_1 = &rsi_1[2]
            
            if (rsi_1 == rbp_3)
                goto label_141b93b93
        
        rbx_2 = rsi_1[1]
        rbp_4 = *rsi_1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*rbx_2)[1](rbx_2, 1)
        
        if (rbp_4 == 0)
            goto label_141b93b9f
    
    var_38 = rbp_4
    void*** var_30_2 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    sub_141bf4970(*(arg1 + 0xc8), &var_38)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rbx_2)[1](rbx_2, 1)

int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t temp1_1 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_20 + 8))(var_20, 1)
