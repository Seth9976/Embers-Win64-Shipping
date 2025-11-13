// 函数: sub_140eb5a80
// 地址: 0x140eb5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x90)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x1c)
    *rdi = &data_142edb548
    rdi[5] = 0
    rdi[6] = 0
    rdi[7].d = 0xffffffff
    __builtin_memset(rdi + 0x3c, 0, 0x24)
    rdi[0xc] = data_143e243c8
    sub_140b58170(&rdi[0xd], "ToolBar", 1)
    rdi[0xe].b = arg2
    rdi[0xf] = 0
    rdi[0x10].d = 0
    rdi[0x11].b = arg4

int64_t* rax_2 = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

*arg1 = rdi
void**** r14_1 = &rdi[1]
arg1[1] = rbx_1

if (rdi == 0)
    r14_1 = nullptr

if (r14_1 != 0)
    void* rax_3
    
    if (*r14_1 != 0)
        rax_3 = r14_1[1]
    
    if (*r14_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14_1 = rdi
        int64_t* rcx_1 = r14_1[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = r14_1[1]
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            r14_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
