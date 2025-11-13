// 函数: sub_14180ae60
// 地址: 0x14180ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d s<= 1)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void*** rax_1 = j_sub_140a82f30(0x158)
void*** rbp

if (rax_1 == 0)
    rbp = nullptr
else
    rbp = sub_14180b610(rax_1, arg3)

*arg2 = rbp
int64_t* rax_3 = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d5c050
    rbx_1[2] = rbp

arg2[1] = rbx_1
void**** rsi = &rbp[4]

if (rbp == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_4
    
    if (*rsi != 0)
        rax_4 = rsi[1]
    
    if (*rsi == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
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
                    (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
