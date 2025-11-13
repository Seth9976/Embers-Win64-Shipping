// 函数: sub_14279e660
// 地址: 0x14279e660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1c] != 0)
    void* rax_1 = arg1[0x1e]
    void* rcx = &arg1[0x20]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

arg1[0x1b].d = 0
int64_t rcx_1 = arg1[0x1a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_14189def0(&arg1[0x12])
int64_t rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (arg1[8] != 0)
    void* rax_3 = arg1[0xa]
    void* rcx_4 = &arg1[0xc]
    
    if (rax_3 != 0)
        rcx_4 = rax_3
    
    (*(*rcx_4 + 0x10))(rcx_4)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
