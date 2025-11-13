// 函数: sub_141c7f8e0
// 地址: 0x141c7f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[9])
sub_140596eb0(&arg1[6])
sub_1408ffb10(&arg1[4])
int64_t* rdi = arg1[3]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

arg1[1] = &IModuleInterface::`vftable'
sub_140b0be90(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
