// 函数: sub_141e52e30
// 地址: 0x141e52e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0xe0)
int64_t* rbx = *(arg1 + 0xd8)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0xd8)

if (rbx != 0)
    sub_140a74f90(rbx)

*(arg1 + 0xd0) = 0
int64_t rcx_2 = *(arg1 + 0xc8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141e50a40(arg1 + 0x88)
sub_141e50e60(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
