// 函数: sub_141afc960
// 地址: 0x141afc960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]
int32_t i_1 = arg1[4].d

if (i_1 != 0)
    char* rax_1 = rcx + 0x29
    int32_t i
    
    do
        if (rax_1[8] != 0)
            rax_1[8] = 0
        
        if (*rax_1 != 0)
            *rax_1 = 0
        
        rax_1 = &rax_1[0x58]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[3]

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = &data_142d4ba40
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_1 + 8))

return &data_142d4ba40
