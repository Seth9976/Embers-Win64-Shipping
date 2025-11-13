// 函数: sub_141b84c20
// 地址: 0x141b84c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x6c]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140745b20(&arg1[0x68])
sub_140745b20(&arg1[0x64])
int64_t* rdi = arg1[0x62]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x58])

if (*(arg1 + 0x2b4) != 0)
    *(arg1 + 0x2b4) = 0

return sub_140de0ac0(arg1) __tailcall
