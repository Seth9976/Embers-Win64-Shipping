// 函数: sub_140bc1e50
// 地址: 0x140bc1e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xe]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0xb]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

if (arg1[2] != 0)
    void* rax_8 = arg1[4]
    void* rcx_4 = &arg1[6]
    
    if (rax_8 != 0)
        rcx_4 = rax_8
    
    (*(*rcx_4 + 0x10))(rcx_4)

*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
