// 函数: sub_14108c9b0
// 地址: 0x14108c9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x10] != 0)
    void* rax_1 = arg1[0x12]
    void* rcx = &arg1[0x14]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[8] != 0)
    void* rax_3 = arg1[0xa]
    void* rcx_1 = &arg1[0xc]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

if (*arg1 == 0)
    return 

void* rax_5 = arg1[2]
void* rcx_2 = &arg1[4]

if (rax_5 != 0)
    rcx_2 = rax_5

jump(*(*rcx_2 + 0x10))
