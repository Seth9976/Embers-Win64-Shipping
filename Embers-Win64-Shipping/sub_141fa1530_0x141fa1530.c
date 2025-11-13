// 函数: sub_141fa1530
// 地址: 0x141fa1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28

if (&arg1[2] != &var_28)
    arg1[2] = 0
    int64_t* rbx_1 = arg1[3]
    
    if (rbx_1 != 0)
        arg1[3] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

var_28 = *arg3
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_1430846d8
    sub_140d3a3a0(&rax_3[1], arg2)
    *(rax_3 + 0x10) = var_28
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_143084730

void*** rax_5 = j_sub_140a82f30(0x20)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_2 = &data_14306d990
    rbx_2[2] = 0
    rbx_2[3].d = 0
    
    if (&var_28 != &rbx_2[2] && rax_3 != 0)
        (*rax_3)[8](rax_3)

void*** rbx_3 = rbx_2
void* result = &rbx_2[2]
void*** rdi_1 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = rbx_2

if (arg1 == &var_28)
label_141fa16a3:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            rbx_3 = rbx_2
        else
            result = (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 != 1)
                rbx_3 = rbx_2
            else
                result = (*rdi_1)[1](rdi_1, 1)
                rbx_3 = rbx_2
else
    *arg1 = result
    void*** rsi_1 = arg1[1]
    
    if (rdi_1 == rsi_1)
        goto label_141fa16a3
    
    arg1[1] = rdi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d != 1)
            rbx_3 = rbx_2
        else
            result = (**rsi_1)(rsi_1)
            int32_t temp7_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp7_1 != 1)
                rbx_3 = rbx_2
            else
                result = (*rsi_1)[1](rsi_1, 1)
                rbx_3 = rbx_2

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*rbx_3)[1](rbx_3, 1)

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    result = sub_140a84c80(rax_3, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
