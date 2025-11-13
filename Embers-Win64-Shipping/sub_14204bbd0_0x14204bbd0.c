// 函数: sub_14204bbd0
// 地址: 0x14204bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x9c] = 0
*arg1 = &data_1432aaf80
arg1[5] = &data_1432ab900
arg1[0x3e] = &data_1432ab930
sub_1408466d0(&arg1[0xc0])
int64_t rcx_1 = arg1[0xb4]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xaa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rdi = arg1[0xa9]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_142079c00(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
