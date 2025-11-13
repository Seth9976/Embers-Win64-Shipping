// 函数: sub_141c551f0
// 地址: 0x141c551f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209a98
arg1[0x10] = &data_143209b20
sub_141c5c6b0(arg1)
sub_141c4f800(&arg1[0x31])
int64_t rcx_1 = arg1[0x16]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rdi = arg1[0x14]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

*arg1 = &data_143209500

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
