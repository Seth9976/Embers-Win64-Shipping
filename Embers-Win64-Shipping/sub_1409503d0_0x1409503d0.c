// 函数: sub_1409503d0
// 地址: 0x1409503d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xf6]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596d80(&arg1[0xf3])
int64_t* rcx_3 = arg1[0xf2]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

int64_t* rcx_4 = arg1[0xf1]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x20))(rcx_4, 1)

int64_t* rcx_5 = arg1[0xf0]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x28))(rcx_5, 1)

sub_14094ca40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
