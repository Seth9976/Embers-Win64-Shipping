// 函数: sub_140ec5370
// 地址: 0x140ec5370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x90)
void*** rbp_1

if (rax == 0)
    rbp_1 = nullptr
else
    rbp_1 = sub_140e96f30(rax, arg2, arg3, arg4)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142d42e98
    rbx_1[2] = rbp_1

*arg1 = rbp_1
void**** rsi_1 = &rbp_1[1]
arg1[1] = rbx_1

if (rbp_1 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    void* rax_3
    
    if (*rsi_1 != 0)
        rax_3 = rsi_1[1]
    
    if (*rsi_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi_1 = rbp_1
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
