// 函数: sub_140e6ad40
// 地址: 0x140e6ad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t* result = arg1 + 0x348
void var_18

if (result == &var_18)
label_140e6adad:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx + 8))(rbx, 1)
else
    *result = *arg2
    int64_t* rdi_1 = result[1]
    
    if (rbx == rdi_1)
        goto label_140e6adad
    
    result[1] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                jump(*(*rdi_1 + 8))

return result
