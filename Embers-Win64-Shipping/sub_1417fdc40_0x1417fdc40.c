// 函数: sub_1417fdc40
// 地址: 0x1417fdc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t rbp = *arg2
int128_t var_18 = *arg3

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1

void*** rax = sub_140a84c80(0, 0x40, 0)

if (rax != 0)
    *rax = &data_142fe2328
    rax[1] = rbp
    rax[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax + 0x18) = var_18
    rax[6] = sub_140a387b0()
    *rax = &data_142fe2380

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int128_t* result = &var_18

if (&var_18 == arg1)
    goto label_1417fdd05

if (rax != 0)
    result = (*rax)[8](rax, arg1)
label_1417fdd05:
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)
else if (arg1[1].d != 0)
    int128_t* rcx_8 = *arg1
    
    if (rcx_8 != 0)
        result = (*(*rcx_8 + 0x38))(rcx_8, 0)
        int128_t* rcx_9 = *arg1
        
        if (rcx_9 != 0)
            result = sub_140a84c80(rcx_9, 0, 0)
            *arg1 = result
        
        arg1[1].d = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
