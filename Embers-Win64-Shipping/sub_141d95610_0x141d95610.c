// 函数: sub_141d95610
// 地址: 0x141d95610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x28] != 0)
    void* rax_1 = arg1[0x2a]
    void* rcx = &arg1[0x2c]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x20] != 0)
    void* rax_3 = arg1[0x22]
    void* rcx_1 = &arg1[0x24]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t rcx_2 = arg1[0x1e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141d95a80(&arg1[0xc])
sub_141d8e720(&arg1[0xa])
sub_141d8e7a0(&arg1[8])
arg1[6] = &data_142d5a028
int64_t* rcx_6 = arg1[5]

if (rcx_6 != 0)
    int32_t rax_5 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (rax_5 == 1 && rcx_6 != 0)
        (*(*rcx_6 + 8))(rcx_6, 1)

void** const result = &data_143239228
*arg1 = &data_143239228
int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rbx_1 + 8))

return result
