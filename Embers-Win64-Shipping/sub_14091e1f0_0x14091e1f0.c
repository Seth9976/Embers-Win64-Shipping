// 函数: sub_14091e1f0
// 地址: 0x14091e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e21148
int64_t* rdi = arg1[0x65]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_14091a9d0(&arg1[0x62])
DeleteCriticalSection(&arg1[0x5d])
sub_14091b280(&arg1[0x3e])
sub_14091bac0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
