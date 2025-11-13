// 函数: sub_141ffa530
// 地址: 0x141ffa530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xa]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t rcx_2 = arg1[6]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[5] = &data_143231c88
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
