// 函数: sub_14091e350
// 地址: 0x14091e350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].d = 0
int64_t rcx = arg1[0xf]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405e1cf0(&arg1[7], 0)
int64_t rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[7]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = arg1[5]

if (rcx_4 != 0)
    int32_t rax_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_4 != 0)
        (*(*rcx_4 + 8))(rcx_4, 1)

*arg1 = &data_142e205c0
sub_140596eb0(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
