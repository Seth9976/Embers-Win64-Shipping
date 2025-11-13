// 函数: sub_141d2cd80
// 地址: 0x141d2cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222700
arg1[2] = *arg3
arg1[4] = 0

if (arg1[2] != 0)
    void* rax_1 = arg3[2]
    void* rcx = &arg3[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx)

uint32_t rcx_1 = zx.d(*arg2)
void*** rdx_1

if (rcx_1 == 1)
    void*** rax_8 = j_sub_140a82f30(0x18)
    rdx_1 = rax_8
    
    if (rax_8 == 0)
        rdx_1 = nullptr
    else
        *rdx_1 = &data_143222948
        rdx_1[1] = 0
        rdx_1[2] = 0
else if (rcx_1 == 2)
    void*** rax_6 = j_sub_140a82f30(0x38)
    rdx_1 = rax_6
    
    if (rax_6 == 0)
        rdx_1 = nullptr
    else
        *rdx_1 = &data_143222978
        rdx_1[1] = 0
        rdx_1[2] = 0
        rdx_1[3] = 0
        rdx_1[4] = 0
        rdx_1[5] = &rdx_1[1]
        rdx_1[6] = &rdx_1[3]
else if (rcx_1 == 3)
    void*** rax_5 = j_sub_140a82f30(0x40)
    rdx_1 = rax_5
    
    if (rax_5 == 0)
        rdx_1 = nullptr
    else
        *rdx_1 = &data_1432229a8
        __builtin_memset(&rdx_1[1], 0, 0x30)
        rdx_1[7].d = 1
        *(rdx_1 + 0x3c) = 0
else if (rcx_1 != 4)
    rdx_1 = nullptr
else
    void*** rax_3 = j_sub_140a82f30(0x50)
    
    if (rax_3 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = sub_141d2c9d0(rax_3)

arg1[0xa] = rdx_1
arg1[0xb] = 0
arg1[0xc] = 0

if (*arg3 != 0)
    void* rdx_2 = arg3[2]
    void* rcx_7 = &arg3[4]
    
    if (rdx_2 != 0)
        rcx_7 = rdx_2
    
    int64_t rdx_3 = *rcx_7
    (*(rdx_3 + 0x10))(rcx_7, rdx_3)

return arg1
