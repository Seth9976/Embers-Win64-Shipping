// 函数: sub_1405c8f60
// 地址: 0x1405c8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405c8dc0(&arg1[0x11])
int64_t rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[8]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
