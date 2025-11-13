// 函数: sub_141d95060
// 地址: 0x141d95060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x24] != 0)
    void* rax_1 = arg1[0x26]
    void* rcx = &arg1[0x28]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x1c] != 0)
    void* rax_3 = arg1[0x1e]
    void* rcx_1 = &arg1[0x20]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t rcx_2 = arg1[0x1a]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141d95a80(&arg1[8])
arg1[6] = &data_142d5a028
int64_t* rcx_4 = arg1[5]

if (rcx_4 != 0)
    int32_t rax_5 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (rax_5 == 1 && rcx_4 != 0)
        (*(*rcx_4 + 8))(rcx_4, 1)

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
