// 函数: sub_140a63eb0
// 地址: 0x140a63eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

if (arg1[4] != 0)
    void* rax_2 = arg1[6]
    void* rcx_1 = &arg1[8]
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rdi = arg1[2]

if (rdi == 0)
    *arg1 = &data_142d565e8
    return &data_142d565e8

rdi[1].d -= 1

if (rdi[1].d == 1)
    (**rdi)(rdi)
    int32_t rsi_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rdi + 8))(rdi, zx.q(rsi_1))

*arg1 = &data_142d565e8
return &data_142d565e8
