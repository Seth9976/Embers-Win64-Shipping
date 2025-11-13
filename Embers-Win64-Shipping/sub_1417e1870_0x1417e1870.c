// 函数: sub_1417e1870
// 地址: 0x1417e1870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x18]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[0x16]

if (rcx_2 != 0)
    int32_t rax_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
