// 函数: sub_142646c20
// 地址: 0x142646c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xa8)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141db7f30(arg1 + 0x98)
sub_141db7ed0(arg1 + 0x88)
sub_140745b20(arg1 + 0x78)
sub_140745b20(arg1 + 0x60)
sub_140745b20(arg1 + 0x50)
int64_t rcx_6 = *(arg1 + 0x20)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x10)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = *(arg1 + 8)

if (rcx_8 != 0)
    int32_t rax_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_8 != 0)
        (*(*rcx_8 + 8))(rcx_8, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
