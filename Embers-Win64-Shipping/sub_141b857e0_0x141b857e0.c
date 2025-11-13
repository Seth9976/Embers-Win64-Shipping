// 函数: sub_141b857e0
// 地址: 0x141b857e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x42]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596eb0(&arg1[0x3e])
sub_140596eb0(&arg1[0x3b])
int64_t rcx_4 = arg1[0x39]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_141b84800(&arg1[0x28])
int64_t rcx_6 = arg1[0x26]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x24]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_140660b20(arg1) __tailcall
