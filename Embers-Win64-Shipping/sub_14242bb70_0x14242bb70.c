// 函数: sub_14242bb70
// 地址: 0x14242bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0xe4) & 1) == 0
*arg1 = &data_14334a0d0
arg1[5] = &data_14334a4d8

if (not(cond:0))
    sub_1424404b0(&data_143a307b0, &arg1[0x19])
    *(arg1 + 0xe4) &= 0xfe

int64_t* rdi = arg1[0x1b]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
