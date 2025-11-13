// 函数: sub_1421ac690
// 地址: 0x1421ac690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0xd]
*arg1 = &data_1432ebbc0

if (rdi != 0)
    int64_t rcx = *(rdi + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    j_sub_140a74f90(rdi)

*arg1 = &data_1432ebbb0
sub_1421b4b80(&arg1[3])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
