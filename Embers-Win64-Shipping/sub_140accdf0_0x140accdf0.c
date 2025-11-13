// 函数: sub_140accdf0
// 地址: 0x140accdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
__builtin_memset(arg1, 0, 0x21)
void var_28
int64_t* rbx_1

if (data_143dbafc0 != 0)
    int64_t* rcx = data_143dbafb8
    
    if (rcx == 0)
        goto label_140accf31
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140accf31
    
    if (data_143dbafc0 != 0)
        rdi = data_143dbafb8
    
    int64_t var_38
    (*(*rdi + 0x48))(rdi, &var_38, arg2)
    int64_t* var_30
    rbx_1 = var_30
    int64_t* rdi_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_30
    
    if (arg1 + 0x10 == &var_28)
    label_140accebe:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d != 1)
                rbx_1 = var_30
            else
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rbx_1 = var_30
                else
                    (*(*rdi_1 + 8))(rdi_1, 1)
                    rbx_1 = var_30
    else
        *(arg1 + 0x10) = var_38
        int64_t* rsi_1 = *(arg1 + 0x18)
        
        if (rdi_1 == rsi_1)
            goto label_140accebe
        
        *(arg1 + 0x18) = rdi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d != 1)
                rbx_1 = var_30
            else
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rbx_1 = var_30
                else
                    (*(*rsi_1 + 8))(rsi_1, 1)
                    rbx_1 = var_30
    
    goto label_140acceea

label_140accf31:
void*** rax_11 = j_sub_140a82f30(0x20)
void*** rsi_2 = rax_11

if (rax_11 == 0)
    rsi_2 = nullptr
else
    rax_11[1] = 0
    rax_11[2] = 0
    *rsi_2 = &data_142e6c3e0
    rsi_2[3] = *arg2

int64_t* rax_12 = j_sub_140a82f30(0x18)
rbx_1 = rax_12

if (rax_12 == 0)
    rbx_1 = nullptr
else
    rax_12[1].d = 1
    *(rax_12 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rsi_2

int64_t* r15_1 = &rsi_2[1]

if (rsi_2 == 0)
    r15_1 = nullptr

if (r15_1 != 0)
    void* rax_13
    
    if (*r15_1 != 0)
        rax_13 = r15_1[1]
    
    if (*r15_1 == 0 || rax_13 == 0 || *(rax_13 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r15_1 = rsi_2
        int64_t* rcx_8 = r15_1[1]
        
        if (rbx_1 != rcx_8)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_8 = r15_1[1]
            
            if (rcx_8 != 0)
                int32_t temp10_1 = *(rcx_8 + 0xc)
                *(rcx_8 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rcx_8 + 8))(rcx_8, 1)
            
            r15_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp9_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

if (arg1 + 0x10 == &var_28)
label_140acceea:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 0x10) = rsi_2
    int64_t* rdi_2 = *(arg1 + 0x18)
    
    if (rbx_1 == rdi_2)
        goto label_140acceea
    
    *(arg1 + 0x18) = rbx_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

return arg1
