// 函数: sub_14279e760
// 地址: 0x14279e760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x24].d = 0
int64_t rcx = arg1[0x23]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14189def0(&arg1[0x1b])
int64_t rcx_2 = arg1[0x19]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (arg1[0x10] != 0)
    void* rax_1 = arg1[0x12]
    void* rcx_3 = &arg1[0x14]
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    (*(*rcx_3 + 0x10))(rcx_3)

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
