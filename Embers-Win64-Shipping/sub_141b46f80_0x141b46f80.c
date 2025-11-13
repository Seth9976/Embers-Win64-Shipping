// 函数: sub_141b46f80
// 地址: 0x141b46f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_14306cc40
    void*** rax_1 = j_sub_140a82f30(0x30)
    
    if (rax_1 != 0)
        *rax_1 = &data_14306cc30
        rax_1[2].d = 0xffffffff
        *(rax_1 + 0x14) = 4
        rax_1[3] = 0
        rax_1[1] = &data_14306c370
        rax_1[4] = 0
        rax_1[5].d = 0
    
    rdi[1] = rax_1
    int32_t rax_2 = 0x64
    
    if (arg3 s>= 0x64)
        rax_2 = arg3
    
    *(rax_1 + 0x24) = rax_2 << 4
    
    if (sub_140a80f40() == 0)
        sub_141997e80(&rax_1[1])
    else
        rax_1[1][5](&rax_1[1])

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 != 0)
    rax_6[1].d = 1
    *rax_6 = &data_14306a810
    *(rax_6 + 0xc) = 1
    rax_6[2] = rdi

*arg2 = rdi
arg2[1] = rax_6
return arg2
