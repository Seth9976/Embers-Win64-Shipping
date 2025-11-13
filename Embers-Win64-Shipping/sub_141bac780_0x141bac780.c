// 函数: sub_141bac780
// 地址: 0x141bac780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
sub_140e65f00(data_143e29f28, &var_18)
int64_t* rdi = var_18
char rax_1

if (rdi != 0)
    int64_t rbx_1 = *rdi
    sub_141bb1400()
    rax_1 = (*(rbx_1 + 0x58))(rdi, &data_143f31920)

int64_t* rbx_2
int64_t result
int64_t* var_10

if (rdi == 0 || rax_1 == 0)
    result = 0
    rbx_2 = var_10
else
    rbx_2 = var_10
    int64_t* rdi_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = var_10
    
    result = var_18[0xb]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_2 = var_10

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t r8_1 = *rbx_2
        int512_t entry_zmm1
        (*r8_1)(rbx_2, entry_zmm1, r8_1)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, 1, r8_2)

return result
