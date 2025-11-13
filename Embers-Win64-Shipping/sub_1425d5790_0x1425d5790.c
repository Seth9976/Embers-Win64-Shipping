// 函数: sub_1425d5790
// 地址: 0x1425d5790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140780bc0(arg1, arg2)
sub_140780bc0(&arg1[2], &arg2[2])
sub_14086c240(&arg1[4], &arg2[4])

if (&arg1[6] != &arg2[6])
    int64_t rdi_1 = sx.q(arg2[0xf].d)
    void* rbx_1 = &arg1[0xd]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[0xe]
    void* rdx_2 = &arg2[0xd]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx_2 = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_2, (rdi_1 << 2).d)
    arg1[0xf].d = rdi_1.d
    sub_1425d54b0(&arg1[6], &arg2[6])

sub_140627690(&arg1[0x10], &arg2[0x10])

if (&arg1[0x12] != &arg2[0x12])
    int32_t rdi_2 = arg2[0x13].d
    int64_t r14_1 = arg2[0x12]
    int32_t r8_4 = *(arg1 + 0x9c)
    arg1[0x13].d = rdi_2
    
    if (rdi_2 != 0 || r8_4 != 0)
        sub_140a05dc0(&arg1[0x12], rdi_2, r8_4)
        memcpy(arg1[0x12], r14_1, rdi_2 * 0x4c)
    else
        *(arg1 + 0x9c) = rdi_2

arg1[0x14].d = arg2[0x14].d
*(arg1 + 0xa4) = *(arg2 + 0xa4)
sub_14086c240(&arg1[0x15], &arg2[0x15])
sub_140627690(&arg1[0x17], &arg2[0x17])
sub_140627690(&arg1[0x19], &arg2[0x19])
sub_140627690(&arg1[0x1b], &arg2[0x1b])
sub_140627690(&arg1[0x1d], &arg2[0x1d])
return arg1
