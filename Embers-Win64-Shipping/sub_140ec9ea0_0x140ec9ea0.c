// 函数: sub_140ec9ea0
// 地址: 0x140ec9ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140ec00f0()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e29fe0)

int64_t* rbx_2

if (r14 == 0 || rax_1 == 0)
    rbx_2 = nullptr
label_140eca1ed:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    rbx_2 = *(arg4 + 0x78)
    void* r12_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (r12_1 == 0)
        goto label_140eca1ed
    
    int64_t* rdi_1 = *(arg1 + 0x2d8)
    
    if (rdi_1 != 0)
        int32_t rax_2 = rdi_1[1].d
        
        if (rax_2 != 0)
            rdi_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rdi_1 = nullptr
    
    int64_t rax_3 = 0
    
    if (rdi_1 != 0)
        rax_3 = *(arg1 + 0x2d0)
    
    int64_t var_38 = rax_3
    int64_t* var_30_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    char rax_4 = sub_140eadaa0(r12_1, &var_38, 0)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            int64_t rdx_1 = *rdi_1
            (*rdx_1)(rdi_1, rdx_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rax_4 == 0)
        goto label_140eca1ed
    
    if (*(arg1 + 0x2e0) == 0)
        int64_t* rdi_2 = *(r12_1 + 0x48)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (arg1 + 0x2e0 == &var_38)
        label_140eca011:
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp8_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        else
            *(arg1 + 0x2e0) = *(r12_1 + 0x40)
            int64_t* r14_1 = *(arg1 + 0x2e8)
            
            if (rdi_2 == r14_1)
                goto label_140eca011
            
            *(arg1 + 0x2e8) = rdi_2
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp12_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
    
    int64_t rax_12 = *(arg1 + 0x2e0)
    
    if (rax_12 == 0)
        goto label_140eca1ed
    
    int64_t var_48 = rax_12
    int64_t* rax_13 = *(arg1 + 0x2e8)
    
    if (rax_13 != 0)
        rax_13[1].d += 1
    
    int32_t rax_14 = sub_140eaf190(arg1, arg3, &var_48)
    int64_t* rdi_3 = *(r12_1 + 0x48)
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp11_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
    
    var_38 = *(arg1 + 0x2e0)
    int64_t* rax_18 = *(arg1 + 0x2e8)
    
    if (rax_18 != 0)
        rax_18[1].d += 1
    
    sub_140ed4fe0(arg1 + 0x2a8, &var_38)
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t temp13_1 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rax_18 + 8))(rax_18, 1)
    
    int64_t* rdi_5 = *(arg1 + 0x2d8)
    int64_t* rcx_16 = nullptr
    
    if (rdi_5 != 0)
        int32_t rax_21 = rdi_5[1].d
        
        if (rax_21 != 0)
            rdi_5[1].d = rax_21 + 1
            rax_21.b = 1
        
        if (rax_21.b == 0)
            rdi_5 = nullptr
        
        if (rdi_5 != 0)
            rcx_16 = *(arg1 + 0x2d0)
    
    sub_140ed1540(rcx_16, &var_48, rax_14)
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp15_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    if (arg1 + 0x2e0 != &var_38)
        *(arg1 + 0x2e0) = 0
        int64_t* rdi_6 = *(arg1 + 0x2e8)
        
        if (rdi_6 != 0)
            *(arg1 + 0x2e8) = 0
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t temp19_1 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1)
    
    sub_140e194c0(arg2)
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            (**rax_13)(rax_13)
            int32_t temp18_1 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rax_13 + 8))(rax_13, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
