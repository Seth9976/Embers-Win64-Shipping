// 函数: sub_1425e3e80
// 地址: 0x1425e3e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0x1a])
sub_140596eb0(&arg1[0x17])
int64_t rcx_2 = arg1[0x14]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    int32_t rax_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_4 != 0)
        (*(*rcx_4 + 8))(rcx_4, 1)

arg1[0xc].d = 0
int64_t rcx_5 = arg1[0xb]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14090fe30(&arg1[3], 0)
int64_t rcx_7 = arg1[7]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &data_1434499d0
int64_t* rcx_9 = arg1[2]

if (rcx_9 != 0)
    int32_t temp1_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
