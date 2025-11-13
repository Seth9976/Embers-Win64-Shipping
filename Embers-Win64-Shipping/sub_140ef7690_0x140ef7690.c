// 函数: sub_140ef7690
// 地址: 0x140ef7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3d8)
void*** rsi
void** var_288

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_140ee2330(rax, arg2, sub_140ddd070(&var_288, arg3))
void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rsi

*arg1 = rsi
void**** rdi_1 = &rsi[1]
arg1[1] = rbx_1

if (rsi == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_4
    
    if (*rdi_1 != 0)
        rax_4 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi_1 = rsi
        int64_t* rcx_2 = rdi_1[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = rdi_1[1]
            
            if (rcx_2 != 0)
                int32_t temp2_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rdi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

void*** rcx_5 = *arg1
(*rcx_5)[0xa](rcx_5)
sub_140de06c0(arg3)
return arg1
