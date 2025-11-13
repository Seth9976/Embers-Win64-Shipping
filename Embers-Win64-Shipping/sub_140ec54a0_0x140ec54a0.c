// 函数: sub_140ec54a0
// 地址: 0x140ec54a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x38)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x30)
    rax[6] = arg2

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx_1 = &data_142edf0b0
    rbx_1[2] = rdi

*arg1 = rdi
arg1[1] = rbx_1

if (rdi != 0)
    void* rax_2
    
    if (*rdi != 0)
        rax_2 = rdi[1]
    
    if (*rdi == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi = rdi
        int64_t* rcx = rdi[1]
        
        if (rbx_1 != rcx)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx = rdi[1]
            
            if (rcx != 0)
                int32_t temp2_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

return arg1
