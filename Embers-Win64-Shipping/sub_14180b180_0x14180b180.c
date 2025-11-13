// 函数: sub_14180b180
// 地址: 0x14180b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* rdi = arg2[1]
int64_t rbp = *arg2

if (rdi != 0)
    rdi[1].d += 1

int128_t zmm0 = *arg3
int64_t* rbx = arg4[1]
int64_t r12 = *arg4

if (rbx != 0)
    rbx[1].d += 1

void*** rax = sub_1405978f0(0x40, arg1)

if (rax == 0)
label_14180b291:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    if (rbx != 0)
        rbx[1].d += 1
        
        if (rbx != 0)
            rbx[1].d += 1
    
    *rax = &data_142fe2f58
    rax[1] = rbp
    rax[2] = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    *(rax + 0x18) = zmm0
    rax[5] = r12
    rax[6] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rax[7] = sub_140a387b0()
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp8_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    *rax = &data_142fe2fb0
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp9_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        goto label_14180b291

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
