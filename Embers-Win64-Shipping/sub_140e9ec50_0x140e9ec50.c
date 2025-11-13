// 函数: sub_140e9ec50
// 地址: 0x140e9ec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[9])
int64_t* rdi = arg1[6]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t* rcx_3 = arg1[2]

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

*arg1 = &IDelegateInstance::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
