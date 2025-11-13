// 函数: sub_140da9d40
// 地址: 0x140da9d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg4
int64_t rdi = 0
int64_t r12 = 0
int64_t r13 = sx.q(*(arg1 + 0x198))

if (rax s> 0)
    r12 = 2

int64_t rcx_1 = (r12 + r13) * 2
int64_t* rbx = arg3[rcx_1 + 6]

if (rbx == 0)
label_140da9e2c:
    void var_60
    sub_140d92570(&var_60, *arg3, arg3[2].d, arg4)
    int32_t arg_18
    sub_140da0660(arg1 + 0x90, &arg_18, &var_60)
    int64_t rax_7 = sx.q(arg_18)
    void* const rcx_10
    
    if (rax_7.d == 0xffffffff)
        rcx_10 = nullptr
    else
        rcx_10 = (rax_7 << 6) + *(arg1 + 0x90)
    
    int64_t* rsi_1 = rcx_10 + 0x28
    
    if (rcx_10 == 0)
        rsi_1 = nullptr
    
    if (rsi_1 == 0)
        int16_t* rax_11 = j_sub_140a82f30(0x10)
        int16_t* rbx_2 = rax_11
        
        if (rax_11 == 0)
            rbx_2 = nullptr
        else
            *(rax_11 + 8) = 0
            *rax_11 = 0
        
        void*** rax_12 = j_sub_140a82f30(0x18)
        
        if (rax_12 == 0)
            rax_12 = nullptr
        else
            rax_12[1].d = 1
            *rax_12 = &data_142ec7b18
            *(rax_12 + 0xc) = 1
            rax_12[2] = rbx_2
        
        int16_t* var_70 = rbx_2
        sub_140d98870(arg1, arg3, arg4, var_70)
        int16_t* rax_13 = var_70
        
        if (rax_13[7].b != 0)
            if (rax s> 0)
                rdi = 2
            
            int64_t rdi_5 = (rdi + r13) * 2
            arg3[rdi_5 + 5] = rax_13
            int64_t* rcx_13 = arg3[rdi_5 + 6]
            
            if (rax_12 != rcx_13)
                if (rax_12 != 0)
                    *(rax_12 + 0xc) += 1
                    rcx_13 = arg3[rdi_5 + 6]
                
                if (rcx_13 != 0)
                    int32_t temp8_1 = *(rcx_13 + 0xc)
                    *(rcx_13 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_13 + 8))(rcx_13, 1)
                
                arg3[rdi_5 + 6] = rax_12
            
            sub_140d8c1a0(arg1 + 0x90, &var_60, &var_70)
            rax_13 = var_70
        
        int64_t* rbx_4 = rax_12
        *arg2 = *rax_13
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp7_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    else
        void* rdi_3 = &arg3[(r12 + r13) * 2]
        *(rdi_3 + 0x28) = *rsi_1
        void* rbx_1 = rsi_1[1]
        int64_t* rcx_11 = *(rdi_3 + 0x30)
        
        if (rbx_1 != rcx_11)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_11 = *(rdi_3 + 0x30)
            
            if (rcx_11 != 0)
                int32_t temp5_1 = *(rcx_11 + 0xc)
                *(rcx_11 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_11 + 8))(rcx_11, 1)
            
            *(rdi_3 + 0x30) = rbx_1
        
        *arg2 = **rsi_1
    
    int64_t* var_58
    
    if (var_58 != 0)
        int32_t temp4_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_58 + 8))(var_58, 1)
else
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx == 0)
        goto label_140da9e2c
    
    int128_t* rax_2 = arg3[rcx_1 + 5]
    
    if (rax_2 == 0)
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        goto label_140da9e2c
    
    *arg2 = *rax_2
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

return arg2
