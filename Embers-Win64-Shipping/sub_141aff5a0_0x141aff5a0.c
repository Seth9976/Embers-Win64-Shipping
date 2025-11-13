// 函数: sub_141aff5a0
// 地址: 0x141aff5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x64]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x62]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_141afd200(&arg1[0x48])
sub_1405aec80(&arg1[0x34])
sub_1405aec80(&arg1[0x20])
int64_t* rdi = arg1[0x1b]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_1408ec310(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
