// 函数: sub_141d46040
// 地址: 0x141d46040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void*** rax_1 = j_sub_140a82f30(0xa8)
    void*** r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        int64_t arg_20 = 0
        memset(rax_1, 0, 0x90)
        sub_140b4c2a0(r14_1)
        r14_1[0x12] = 0
        *r14_1 = &data_142d6ad48
        r14_1[0x13] = &rdi[5]
        r14_1[0x14] = 0
        sub_140b552b0(r14_1, 1)
        (*r14_1)[0x1b](r14_1, 0)
    
    rdi[1] = r14_1
    __builtin_memset(&rdi[2], 0, 0x14)
    *(rdi + 0x24) = arg3
    *rdi = &data_142d84f30
    rdi[5] = 0
    rdi[6] = 0
    rdi[7] = arg2

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d83c20
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi

void*** var_38 = rdi
int64_t* r14_2 = var_38

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

void*** rax_6 = sub_140666b20(arg1)
var_38 = &rax_6[2]
char rax_7 = sub_140667df0(&var_38, r14_2, 1)

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        void** rdx_3 = *rax_6
        (*rdx_3)(rax_6, rdx_3)
        int32_t temp3_1 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rax_6)[1](rax_6, 1)

(*(*r14_2 + 8))(r14_2)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp5_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rax_3)[1](rax_3, 1)

return zx.q(rax_7)
