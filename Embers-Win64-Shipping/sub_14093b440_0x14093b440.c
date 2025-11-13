// 函数: sub_14093b440
// 地址: 0x14093b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t rbp = *arg4
int128_t zmm6 = *arg3

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1

void*** rax = sub_140a84c80(0, 0x40, 0)
int128_t var_38

if (rax != 0)
    var_38 = zmm6
    int64_t var_48 = rbp
    int64_t* var_40_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_14093c3b0(rax, arg2, &var_38, &var_48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int128_t* result = &var_38

if (&var_38 == arg1)
    goto label_14093b531

if (rax != 0)
    result = (*rax)[8](rax, arg1)
label_14093b531:
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)
else if (arg1[1].d != 0)
    int128_t* rcx_11 = *arg1
    
    if (rcx_11 != 0)
        result = (*(*rcx_11 + 0x38))(rcx_11, 0)
        int128_t* rcx_12 = *arg1
        
        if (rcx_12 != 0)
            result = sub_140a84c80(rcx_12, 0, 0)
            *arg1 = result
        
        arg1[1].d = 0

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
