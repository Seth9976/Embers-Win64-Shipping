// 函数: sub_140a3da00
// 地址: 0x140a3da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d118
void* rcx = arg1[0xd]

if (rcx != 0)
    sub_140a433d0(rcx, 1)
    int64_t* rcx_1 = arg1[0xd]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1, 1)

sub_140a3c4a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
