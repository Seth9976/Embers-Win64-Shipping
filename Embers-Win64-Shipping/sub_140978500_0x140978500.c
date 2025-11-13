// 函数: sub_140978500
// 地址: 0x140978500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_28 = *arg2
int64_t* var_20 = rbx

if (rbx != 0)
    rbx[1].d += 1

if (&var_28 != &arg1[0xf5])
    var_28.o = *(arg1 + 0x7a8)
    rbx = var_20
    *(arg1 + 0x7a8) = var_28.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = arg1[0xf5]
arg1[0xea] = result

if (result == 0)
    return result

if (arg1[0xd6] == 0)
    int64_t* rax_4 = (*(*arg1 + 0x378))(arg1)
    int64_t r8_1 = *rax_4
    int64_t* rax_5 = (*(r8_1 + 0x90))(rax_4, &var_28, r8_1)
    int64_t* rbx_1 = rax_5[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    
    if (&arg1[0xd6] == &var_18)
    label_14097860c:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        arg1[0xd6] = *rax_5
        int64_t* rdi_1 = arg1[0xd7]
        
        if (rbx_1 == rdi_1)
            goto label_14097860c
        
        arg1[0xd7] = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp6_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

int64_t* rcx_10 = arg1[0xf5]
return (*(*rcx_10 + 0x88))(rcx_10, arg1[0xd6])
