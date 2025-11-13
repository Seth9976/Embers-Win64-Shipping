// 函数: sub_141b8ede0
// 地址: 0x141b8ede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x55].d = 0
int64_t rcx = arg1[0x54]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1407ece30(&arg1[0x4c], 0)
int64_t rcx_2 = arg1[0x50]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x4c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_141b848a0(&arg1[0x47])
int64_t* rdi = arg1[0x41]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_7 = arg1[0x3e]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1405aef50(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
