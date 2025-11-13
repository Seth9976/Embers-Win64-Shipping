// 函数: sub_140ea28e0
// 地址: 0x140ea28e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x18))()
void*** rax_1 = j_sub_140a82f30(0x168)
void*** var_18
void*** rsi_1

if (rax_1 == 0)
    rsi_1 = nullptr
else
    void* rdx_2 = (sx.q(arg1[4].d) << 4) + arg1[3]
    int64_t var_28 = *(rdx_2 - 0x10)
    void* rcx_1 = *(rdx_2 - 8)
    void* var_20_1 = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    void* rdx_5 = (sx.q(arg1[6].d) << 4) + arg1[5]
    var_18 = *(rdx_5 - 0x10)
    void* rax_3 = *(rdx_5 - 8)
    void* var_10_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    void arg_40
    rsi_1 = sub_140e963a0(rax_1, &arg_40, arg2, arg3, arg4, &var_18, 1, arg5, &var_28, arg1[0xa].b, 
        arg6, arg7)

void*** rax_9 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_9

if (rax_9 == 0)
    rbx_1 = nullptr
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rsi_1

void**** rdi_1 = &rsi_1[1]

if (rsi_1 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_10
    
    if (*rdi_1 != 0)
        rax_10 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi_1 = rsi_1
        int64_t* rcx_3 = rdi_1[1]
        
        if (rbx_1 != rcx_3)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_3 = rdi_1[1]
            
            if (rcx_3 != 0)
                int32_t temp4_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            rdi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

var_18 = rsi_1
void*** var_10_2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* result = sub_140ea20e0(arg1[1], &var_18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*rbx_1)[1](rbx_1, 1)

return result
