// 函数: sub_140db50d0
// 地址: 0x140db50d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1] = 0
    rax[2] = 0
    rax[3].b = 1
    rax[4] = 0
    rax[5] = 0
    *(rax + 0x34) = 0
    *(rax + 0x3c) = 0
    *rdi = &data_142ec2630
    __builtin_memset(&rdi[8], 0, 0x20)

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

*arg1 = rdi
void**** r14 = &rdi[1]
arg1[1] = rbx

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_2
    
    if (*r14 != 0)
        rax_2 = r14[1]
    
    if (*r14 == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *r14 = rdi
        int64_t* rcx = r14[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = r14[1]
            
            if (rcx != 0)
                int32_t temp2_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            r14[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx)[1](rbx, 1)

(*arg1)[0xc].b = 1
void* rbx_2 = &(*arg1)[8]

if (rbx_2 != arg2)
    int64_t rcx_3 = *rbx_2
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *rbx_2 = *arg2
    *arg2 = 0
    *(rbx_2 + 8) = arg2[1].d
    *(rbx_2 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

void*** rcx_4 = *arg1
(*rcx_4)[0xa](rcx_4)
int64_t rcx_5 = *arg2

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1
