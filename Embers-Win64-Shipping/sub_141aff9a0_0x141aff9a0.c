// 函数: sub_141aff9a0
// 地址: 0x141aff9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141afd420(&arg1[0x2b])
arg1[0x1c] = &data_1430541a0
int64_t rcx_1 = arg1[0x29]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x1c] = &data_142d6a040
int64_t rcx_2 = arg1[0x27]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae180(&arg1[0x1d])
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
