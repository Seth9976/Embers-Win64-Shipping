// 函数: sub_141ed4290
// 地址: 0x141ed4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432642e8
sub_14095cd40(&arg1[3], 0)
sub_14095cd40(&arg1[5], 0)
void var_18

if (&arg1[7] != &var_18)
    arg1[7] = 0
    int64_t* rbx_1 = arg1[8]
    
    if (rbx_1 != 0)
        arg1[8] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[9] != &var_18)
    arg1[9] = 0
    int64_t* rbx_2 = arg1[0xa]
    
    if (rbx_2 != 0)
        arg1[0xa] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_6 = arg1[0x2a]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_3 = arg1[0xa]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg1[8]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

sub_140596d80(&arg1[5])
sub_140596d80(&arg1[3])
*arg1 = &data_142d40478
return &data_142d40478
