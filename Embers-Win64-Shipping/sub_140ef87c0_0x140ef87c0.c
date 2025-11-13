// 函数: sub_140ef87c0
// 地址: 0x140ef87c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0
void*** rax = j_sub_140a82f30(0x70)
void*** r14 = rax
int64_t* rbx

if (rax == 0)
    rbx = 0.q
    r14 = nullptr
else
    rbx = *(arg1 + 0x10)
    int64_t rsi_1 = 0
    
    if (rbx != 0)
        int32_t rax_1 = rbx[1].d
        
        if (rax_1 != 0)
            rbx[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            int32_t rax_2 = rbx[1].d
            rsi_1 = *(arg1 + 8)
            rbx[1].d = rax_2
            
            if (rax_2 == 0)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
            
            *(rbx + 0xc) += 1
    
    int64_t var_38 = rsi_1
    int64_t* var_30_1 = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    sub_140ee22b0(r14, &var_38)
    r14[5].b = 4
    *r14 = &data_142ee0088
    r14[0xd] = &data_142ee0140
    
    if (rbx != 0)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    rbp = 1

int64_t* rax_6 = j_sub_140a82f30(0x18)
int64_t* rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi_1 = &data_142d42ea8
    rdi_1[2] = r14

*arg2 = r14
void**** rsi_2 = &r14[1]
arg2[1] = rdi_1

if (r14 == 0)
    rsi_2 = nullptr

if (rsi_2 != 0)
    void* rax_7
    
    if (*rsi_2 != 0)
        rax_7 = rsi_2[1]
    
    if (*rsi_2 == 0 || rax_7 == 0 || *(rax_7 + 8) s<= 0)
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        *rsi_2 = r14
        int64_t* rcx_4 = rsi_2[1]
        
        if (rdi_1 != rcx_4)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_4 = rsi_2[1]
            
            if (rcx_4 != 0)
                int32_t temp6_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            rsi_2[1] = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

if ((rbp & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
