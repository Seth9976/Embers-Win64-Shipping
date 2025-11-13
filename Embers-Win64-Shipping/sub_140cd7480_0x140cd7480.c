// 函数: sub_140cd7480
// 地址: 0x140cd7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x12]

if (rdi != 0)
    int64_t rcx = *(rdi + 0x78)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *(rdi + 0x68)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *(rdi + 0x38)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    j_sub_140a74f90(rdi)

int64_t rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[8]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
