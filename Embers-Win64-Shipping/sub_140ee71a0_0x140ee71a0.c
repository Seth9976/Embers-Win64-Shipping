// 函数: sub_140ee71a0
// 地址: 0x140ee71a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x6b])
sub_140745b20(&arg1[0x68])
sub_140745b20(&arg1[0x65])
sub_140745b20(&arg1[0x5f])
sub_140dde9c0(&arg1[0x59])
arg1[0x57] = &data_142d82a88
int64_t* rdi = arg1[0x56]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140de0ac0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
