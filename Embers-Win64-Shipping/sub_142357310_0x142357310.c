// 函数: sub_142357310
// 地址: 0x142357310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x24]

if (rcx != 0)
    sub_142394bb0(rcx)

int64_t rcx_1 = arg1[0x22]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rdi = arg1[0x1a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_4 = arg1[0x17]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = arg1[0x13]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

int64_t rcx_6 = arg1[0xd]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_142355710(&arg1[0xb], arg1[0xb])
sub_1423557c0(&arg1[0xa], arg1[0xa])
arg1[9] = &data_142d44da8
arg1[8] = &data_142e4a8a0
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
