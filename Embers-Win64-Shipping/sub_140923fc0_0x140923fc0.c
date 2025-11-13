// 函数: sub_140923fc0
// 地址: 0x140923fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x30)
void*** rbp

if (rax == 0)
    rbp = nullptr
else
    rbp = sub_14091a190(rax, arg3)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142d42e98
    rbx_1[2] = rbp

*arg2 = rbp
void**** rsi = &rbp[1]
arg2[1] = rbx_1

if (rbp == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_3
    
    if (*rsi != 0)
        rax_3 = rsi[1]
    
    if (*rsi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi = rbp
        int64_t* rcx_1 = rsi[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rsi[1]
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rsi[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

return arg2
