// 函数: sub_141b46d70
// 地址: 0x141b46d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b507a0(arg1)
void*** rax = j_sub_140a82f30(0x168)
void*** rsi_1

if (rax == 0)
    rsi_1 = nullptr
else
    void* rcx = *(arg1 + 0x10)
    int64_t var_28 = *(arg1 + 8)
    void* var_20_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    int64_t var_18 = *(arg1 + 0x18)
    void* rax_2 = *(arg1 + 0x20)
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    rsi_1 = sub_141b49240(rax, &var_18, &var_28, arg3)

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_14306b580
    rbx_1[2] = rsi_1

*arg2 = rsi_1
void**** r14 = &rsi_1[1]
arg2[1] = rbx_1

if (rsi_1 == 0)
    r14 = nullptr

if (r14 != 0)
    if (*r14 == 0)
        goto label_141b46e6d
    
    void* rcx_2 = r14[1]
    int32_t rax_5
    
    if (rcx_2 != 0)
        rax_5 = 0
        
        if (0 == *(rcx_2 + 8))
            *(rcx_2 + 8) = 0
        else
            rax_5 = *(rcx_2 + 8)
    
    if (rcx_2 == 0 || rax_5 s<= 0)
        rbx_1 = arg2[1]
    label_141b46e6d:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14 = rsi_1
        int64_t* rcx_3 = r14[1]
        
        if (rbx_1 != rcx_3)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_3 = r14[1]
            
            if (rcx_3 != 0)
                int32_t rax_6 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            r14[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rsi_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*rbx_1)[1](rbx_1, zx.q(rsi_2))

return arg2
