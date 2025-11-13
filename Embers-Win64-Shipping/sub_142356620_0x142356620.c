// 函数: sub_142356620
// 地址: 0x142356620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14332dd20
arg1[2] = &data_14332dd40
arg1[3] = &data_14332dd88
arg1[4] = &data_14332dd98
int64_t* rdi = arg1[9]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_1419948a0(&arg1[4])
arg1[3] = &data_142d5a090
arg1[2] = &data_14332dcd8
*arg1 = &data_14306c4e0
sub_1405d1550(&arg1[1])
*arg1 = &data_142d5ee90

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
