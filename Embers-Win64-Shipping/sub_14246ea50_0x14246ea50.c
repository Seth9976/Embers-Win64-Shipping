// 函数: sub_14246ea50
// 地址: 0x14246ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1f].d = 0
int64_t rcx = arg1[0x1e]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x17].d = 0

if (*(arg1 + 0xbc) != 0)
    sub_1405a5410(&arg1[0x16], 0)

arg1[0x1c].d = 0xffffffff
*(arg1 + 0xe4) = 0
sub_14059a8e0(&arg1[0x18], 0)
int64_t rcx_3 = arg1[0x1a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x16]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140846380(&arg1[0x14])
sub_140846380(&arg1[0x12])
sub_140846380(&arg1[0x10])
sub_14246e940(&arg1[0xd])
int64_t rcx_9 = arg1[0xb]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int32_t i_1 = arg1[0xa].d
int64_t* rbx_1 = arg1[9]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_1
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[9]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_141e50530(&arg1[7])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
