// 函数: sub_14106b860
// 地址: 0x14106b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[5]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t* rcx_2 = arg1[3]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
