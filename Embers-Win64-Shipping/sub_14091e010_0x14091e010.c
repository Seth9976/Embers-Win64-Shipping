// 函数: sub_14091e010
// 地址: 0x14091e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e20800

if (arg1[0x15].b != 0)
    arg1[0x15].b = 0

if (arg1[0x13].b != 0)
    arg1[0x13].b = 0
    sub_140745b20(&arg1[0x11])

arg1[0x10].d = 0
int64_t rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140925b10(&arg1[7], 0)
int64_t rcx_3 = arg1[0xb]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = arg1[5]

if (rcx_5 != 0)
    int32_t rax_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_5 != 0)
        (*(*rcx_5 + 8))(rcx_5, 1)

*arg1 = &data_142e207a0
sub_140596eb0(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
