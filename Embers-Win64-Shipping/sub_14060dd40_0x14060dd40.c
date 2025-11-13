// 函数: sub_14060dd40
// 地址: 0x14060dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d63918
int64_t rcx = arg1[4]

if (rcx != 0)
    j_sub_140a74f90(rcx)

void* rdi = arg1[3]
arg1[4] = 0
*arg1 = &data_142d637d8

if (rdi != 0)
    int64_t rcx_1 = *(rdi + 8)
    
    if (rcx_1 != 0)
        j_sub_140a74f90(rcx_1)
    
    *(rdi + 8) = 0
    j_sub_140a74f90(rdi)

arg1[3] = 0
sub_14060d450(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
