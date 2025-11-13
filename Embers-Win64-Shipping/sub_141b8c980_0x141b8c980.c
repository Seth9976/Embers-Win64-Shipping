// 函数: sub_141b8c980
// 地址: 0x141b8c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14307a9f8
int64_t* rdi = arg1[4]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_140596d80(&arg1[1])
*arg1 = &data_142d5a090

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
