// 函数: sub_141b8dba0
// 地址: 0x141b8dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405aec80(&arg1[0x58])
sub_1405aec80(&arg1[0x44])
sub_1405aec80(&arg1[0x30])
sub_1405aec80(&arg1[0x1c])
int64_t* rdi = arg1[0x1b]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596eb0(&arg1[7])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
