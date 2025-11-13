// 函数: sub_140ef7390
// 地址: 0x140ef7390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2f8)
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
else
    sub_140ee2500(rax, arg2, arg3, arg4)
    *r14 = &data_142ee0e48

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = r14

*arg1 = r14
void**** rsi_1 = &r14[1]
arg1[1] = rbx_1

if (r14 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    void* rax_2
    
    if (*rsi_1 != 0)
        rax_2 = rsi_1[1]
    
    if (*rsi_1 == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi_1 = r14
        int64_t* rcx_1 = rsi_1[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rsi_1[1]
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rsi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

return arg1
