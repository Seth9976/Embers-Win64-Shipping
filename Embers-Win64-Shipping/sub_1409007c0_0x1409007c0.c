// 函数: sub_1409007c0
// 地址: 0x1409007c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[7]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    int32_t rsi_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, zx.q(rsi_1))

int64_t rcx_3 = arg1[2]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
