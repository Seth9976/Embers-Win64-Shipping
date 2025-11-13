// 函数: sub_14093d6b0
// 地址: 0x14093d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void*** rax_1 = j_sub_140a82f30(0xa8)
    void*** r15_1 = rax_1
    
    if (rax_1 == 0)
        r15_1 = nullptr
    else
        int64_t arg_8 = 0
        memset(rax_1, 0, 0x90)
        sub_140b4c2a0(r15_1)
        r15_1[0x12] = 0
        *r15_1 = &data_142d6ad48
        r15_1[0x13] = &rdi[5]
        r15_1[0x14] = 0
        sub_140b552b0(r15_1, 1)
        (*r15_1)[0x1b](r15_1, 0)
    
    rdi[1] = r15_1
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

*arg1 = rdi
arg1[1] = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t temp1_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_3)[1](rax_3, 1)

return arg1
