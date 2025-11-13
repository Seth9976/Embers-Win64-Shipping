// 函数: sub_1422c0870
// 地址: 0x1422c0870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa8)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_1422b4730(rax)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rsi

*arg1 = rsi
void**** rdi = &rsi[2]
arg1[1] = rbx

if (rsi == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_3
    
    if (*rdi != 0)
        rax_3 = rdi[1]
    
    if (*rdi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rsi
        int64_t* rcx_1 = rdi[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = rdi[1]
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx)[1](rbx, 1)

sub_1422c99f0(*arg1, arg2, arg3, arg4)
return arg1
