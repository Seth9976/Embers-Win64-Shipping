// 函数: sub_14189f720
// 地址: 0x14189f720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x1e]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x1b]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

sub_140745b20(&arg1[0x18])
sub_140745b20(&arg1[0x16])
int64_t rcx_6 = arg1[0x12]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (arg1[0xa] != 0)
    void* rax_8 = arg1[0xc]
    void* rcx_7 = &arg1[0xe]
    
    if (rax_8 != 0)
        rcx_7 = rax_8
    
    (*(*rcx_7 + 0x10))(rcx_7)

sub_141868870(&arg1[1])
*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
