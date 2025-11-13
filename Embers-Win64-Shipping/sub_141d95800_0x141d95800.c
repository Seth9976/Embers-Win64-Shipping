// 函数: sub_141d95800
// 地址: 0x141d95800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xe] != 0)
    void* rax_1 = arg1[0x10]
    void* rcx = &arg1[0x12]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[6] != 0)
    void* rax_3 = arg1[8]
    void* rcx_1 = &arg1[0xa]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    int32_t rax_5 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_5 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, 1)

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
