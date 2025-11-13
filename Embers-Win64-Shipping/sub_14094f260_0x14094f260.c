// 函数: sub_14094f260
// 地址: 0x14094f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e27420
int64_t* rdi = arg1[5]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

*arg1 = &data_142e26af8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
