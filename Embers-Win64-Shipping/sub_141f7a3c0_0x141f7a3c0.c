// 函数: sub_141f7a3c0
// 地址: 0x141f7a3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rax = 0
    rax[1] = 0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_143287ed0
    rbx[2] = rdi

*arg1 = rdi
arg1[1] = rbx

if (rdi != 0)
    void* rax_2
    
    if (*rdi != 0)
        rax_2 = rdi[1]
    
    if (*rdi == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rdi
        int64_t* rcx = rdi[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = rdi[1]
            
            if (rcx != 0)
                int32_t temp2_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx)[1](rbx, 1)

int64_t* var_18
void arg_8
sub_140a3dfa0(sub_140aae970() + 0x128, &arg_8, sub_141f77730(&var_18, *arg1, sub_141f8ca40))
int32_t var_10
int64_t* rax_9

if (var_10 == 0)
    rax_9 = var_18
label_141f7a523:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    int64_t* rcx_5 = var_18
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x38))(rcx_5, 0)
        rax_9 = var_18
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_18 = rax_9
        
        int32_t var_10_1 = 0
        goto label_141f7a523
return arg1
