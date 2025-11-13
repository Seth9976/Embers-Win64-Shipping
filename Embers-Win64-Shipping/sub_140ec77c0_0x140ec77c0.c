// 函数: sub_140ec77c0
// 地址: 0x140ec77c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg3 + 0x70)

if (rdi == 0)
    return 

int64_t rbx_1 = *rdi
sub_140ec00f0()

if ((*(rbx_1 + 0x58))(rdi, &data_143e29fe0) == 0)
    return 

void* rbp_1 = *(arg3 + 0x70)
int64_t* rsi_1 = *(arg3 + 0x78)

if (rsi_1 != 0)
    rsi_1[1].d += 1

if (rbp_1 != 0)
    int64_t* rbx_2 = *(arg1 + 0x2d8)
    void* r12_1 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_1 = rbx_2[1].d
        
        if (rax_1 != 0)
            rbx_2[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx_2 = nullptr
    
    int64_t rax_2 = 0
    
    if (rbx_2 != 0)
        rax_2 = *(arg1 + 0x2d0)
    
    int64_t var_28 = rax_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char rdi_1 = sub_140eadaa0(rbp_1, &var_28, 0)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t rdx_1 = *rbx_2
            (*rdx_1)(rbx_2, rdx_1)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rdi_1 != 0)
        int64_t* rdi_2 = *(arg1 + 0x10)
        void* r14_1 = nullptr
        
        if (rdi_2 != 0)
            int32_t rax_6 = rdi_2[1].d
            
            if (rax_6 != 0)
                rdi_2[1].d = rax_6 + 1
                rax_6.b = 1
            
            if (rax_6.b == 0)
                rdi_2 = nullptr
            
            if (rdi_2 != 0)
                int32_t rax_7 = rdi_2[1].d
                r14_1 = *(arg1 + 8)
                rdi_2[1].d = rax_7
                
                if (rax_7 == 0)
                    (**rdi_2)(rdi_2)
                    int32_t temp11_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        *(rbp_1 + 0x88) = r14_1
        int64_t* rcx_8 = *(rbp_1 + 0x90)
        
        if (rdi_2 != rcx_8)
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
                rcx_8 = *(rbp_1 + 0x90)
            
            if (rcx_8 != 0)
                int32_t temp9_1 = *(rcx_8 + 0xc)
                *(rcx_8 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rcx_8 + 8))(rcx_8, 1)
            
            *(rbp_1 + 0x90) = rdi_2
        
        sub_140e19c60(*(rbp_1 + 0x20))
        sub_140f156a0(*(rbp_1 + 0x40), sub_140ebe530(r14_1, &var_28))
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp8_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp10_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t* rbx_5 = *(rbp_1 + 0x48)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        if (arg1 + 0x2e0 == &var_28)
        label_140ec7a23:
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp13_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
        else
            *(arg1 + 0x2e0) = *(rbp_1 + 0x40)
            int64_t* rdi_3 = *(arg1 + 0x2e8)
            
            if (rbx_5 == rdi_3)
                goto label_140ec7a23
            
            *(arg1 + 0x2e8) = rbx_5
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp16_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rbx_6 = *(arg1 + 0x2e8)
        var_28 = *(arg1 + 0x2e0)
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        sub_140ea0390(arg1 + 0x2a8, &var_28)
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp17_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        int32_t zmm1_1 = *(rbp_1 + 0x54)
        *(arg1 + 0x2f4) = *(rbp_1 + 0x50)
        *(arg1 + 0x2f8) = zmm1_1
        int64_t* rdi_4 = *(rbp_1 + 0x48)
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        int64_t* rbx_7 = *(arg1 + 0x2d8)
        
        if (rbx_7 != 0)
            int32_t rax_23 = rbx_7[1].d
            
            if (rax_23 != 0)
                rbx_7[1].d = rax_23 + 1
                rax_23.b = 1
            
            if (rax_23.b == 0)
                rbx_7 = nullptr
            
            if (rbx_7 != 0)
                r12_1 = *(arg1 + 0x2d0)
        
        sub_140eda530(r12_1, sub_140f00a80(*(rbp_1 + 0x40), &var_28), &data_143e244b0, 
            &data_143e244b0, &data_143e244b0)
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp20_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp22_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp23_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)

if (rsi_1 == 0)
    return 

rsi_1[1].d -= 1

if (rsi_1[1].d != 1)
    return 

(**rsi_1)(rsi_1)
int32_t temp1_1 = *(rsi_1 + 0xc)
*(rsi_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rsi_1 + 8))(rsi_1, 1)
