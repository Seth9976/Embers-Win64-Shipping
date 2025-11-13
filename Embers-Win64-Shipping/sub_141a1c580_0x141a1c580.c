// 函数: sub_141a1c580
// 地址: 0x141a1c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143021f28
arg1[0x2a] = &data_14301efb0
int64_t* rcx = arg1[0xb4]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[0xb4] = 0

int64_t* rdi = arg1[0xd5]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_1419fd1b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
