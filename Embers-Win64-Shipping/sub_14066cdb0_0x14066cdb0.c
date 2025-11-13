// 函数: sub_14066cdb0
// 地址: 0x14066cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void*** rax = j_sub_140a82f30(0x40)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void*** rax_1 = j_sub_140a82f30(0xa8)
    int64_t* rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        __builtin_memset(rax_1, 0, 0x90)
        sub_140b4c2a0(rax_1)
        rsi_1[0x12] = 0
        *rsi_1 = &data_142d6ad48
        rsi_1[0x13] = &rdi[5]
        rsi_1[0x14] = 0
        sub_140b552b0(rsi_1, 1)
        (*(*rsi_1 + 0xd8))(rsi_1, 0)
    
    rdi[1] = rsi_1
    *rdi = &data_142d84f30
    __builtin_memset(&rdi[2], 0, 0x28)
    rdi[7] = arg2

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d83c20
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi

void*** var_28 = rdi
void*** rsi_2 = var_28

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp4_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_3)[1](rax_3, 1)

void*** rax_6 = sub_140666b20(arg1 + 0x28)
var_28 = &rax_6[2]
sub_140666e10(&var_28, rsi_2, 1)
int64_t* rdi_2 = rax_6

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp5_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rax_3)[1](rax_3, 1)

return arg2
