// 函数: sub_140e24aa0
// 地址: 0x140e24aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t* result = arg1 + 0x910
void var_18

if (result == &var_18)
label_140e24b04:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)
else
    *result = *arg2
    int64_t* rdi_1 = result[1]
    
    if (rbx == rdi_1)
        goto label_140e24b04
    
    result[1] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*rbx_1 + 8))

return result
