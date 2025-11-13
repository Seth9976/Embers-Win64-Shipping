// 函数: sub_140fbc360
// 地址: 0x140fbc360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** rdi = rax
int64_t* rsi

if (rax == 0)
    rsi = nullptr
    rdi = nullptr
else
    sub_140d91fa0(rax)
    rsi = nullptr
    *rdi = &data_142eef7e8
    rdi[0xb] = 0
    rdi[0xc] = 0
    rdi[0xe] = 0
    rdi[0xf].d = 0
    rdi[0x10] = 0
    rdi[0x11].d = 0

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
void**** r15 = &rdi[1]
arg1[1] = rbx

if (rdi == 0)
    r15 = nullptr

if (r15 != 0)
    void* rax_2
    
    if (*r15 != 0)
        rax_2 = r15[1]
    
    if (*r15 == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *r15 = rdi
        int64_t* rcx_1 = r15[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = r15[1]
            
            if (rcx_1 != 0)
                int32_t temp5_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            r15[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp4_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx)[1](rbx, 1)

*(*arg1 + 0x40) = *arg2
(*arg1)[0xa].b = arg3
*(*arg1 + 0x51) = arg4
void*** rdi_1 = *arg1
rdi_1[0xb] = *arg7
void* rbx_1 = arg7[1]
int64_t* rcx_4 = rdi_1[0xc]

if (rbx_1 != rcx_4)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx_4 = rdi_1[0xc]
    
    if (rcx_4 != 0)
        int32_t temp1_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, 1)
    
    rdi_1[0xc] = rbx_1

(*arg1)[0xd].d = arg8
sub_1407473e0(&(*arg1)[0xe], arg5)
sub_1407473e0(*arg1 + 0x80, arg6)
(*arg1)[0x12].b = 0
void*** rax_13 = *arg1
*(rax_13 + 0x94) = 0x42000000
rax_13[0x13].d = 0x42000000
void*** rbx_2 = *arg1

if (rbx_2[0xf].d != 0)
    int64_t* rcx_10 = rbx_2[0xe]
    
    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
        if (rbx_2[0xf].d != 0)
            rsi = rbx_2[0xe]
        
        (*(*rsi + 0x50))(rsi)

void*** rcx_12 = *arg1
(*rcx_12)[0xa](rcx_12)
sub_140745b20(arg5)
sub_140745b20(arg6)
int64_t* rbx_3 = arg7[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg1
