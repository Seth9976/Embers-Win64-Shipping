// 函数: sub_140e251d0
// 地址: 0x140e251d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e20d08
void var_28
int64_t* rax_1 = (*(*rcx + 0x118))(rcx, &var_28, arg2)
int64_t* rbx = rax_1[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t* result = arg1 + 0x258
void var_18

if (result == &var_18)
label_140e25246:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)
else
    *result = *rax_1
    int64_t* rdi_1 = result[1]
    
    if (rbx == rdi_1)
        goto label_140e25246
    
    result[1] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
