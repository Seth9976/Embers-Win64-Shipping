// 函数: sub_1427701a0
// 地址: 0x1427701a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

int64_t* rcx = data_143f879f0
void*** rbp

if (rcx == 0)
    rbp = nullptr
else
    rbp = sub_142771640(rcx, arg3, arg4, arg5)

*arg2 = rbp
void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rbp

arg2[1] = rbx
void**** rsi = &rbp[1]

if (rbp == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_3
    
    if (*rsi != 0)
        rax_3 = rsi[1]
    
    if (*rsi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rsi = rbp
        int64_t* rcx_1 = rsi[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = rsi[1]
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rsi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx)[1](rbx, 1)

return arg2
