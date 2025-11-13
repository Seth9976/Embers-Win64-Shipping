// 函数: sub_141b8e190
// 地址: 0x141b8e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x10f]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_2 = arg1[0x10b]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140691990(&arg1[0x69])
arg1[0x24] = &data_142ec93f0
sub_140691a20(&arg1[0x58])
sub_140691a20(&arg1[0x47])
sub_140691a20(&arg1[0x36])
sub_140691a20(&arg1[0x25])
arg1[0x24] = &data_142d8ad00
int64_t rcx_8 = arg1[0x21]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140660b20(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
