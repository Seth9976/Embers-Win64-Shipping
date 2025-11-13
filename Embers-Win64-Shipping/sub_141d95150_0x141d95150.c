// 函数: sub_141d95150
// 地址: 0x141d95150
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

int64_t rcx_2 = arg1[0x1d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141d95a80(&arg1[0xb])
arg1[8] = &data_143238880
sub_141d8e7a0(&arg1[9])
arg1[8] = &data_142e1f570
arg1[6] = &data_142d5a028
int64_t* rcx_5 = arg1[5]

if (rcx_5 != 0)
    int32_t rax_5 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (rax_5 == 1 && rcx_5 != 0)
        (*(*rcx_5 + 8))(rcx_5, 1)

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
