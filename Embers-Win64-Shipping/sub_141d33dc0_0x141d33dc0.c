// 函数: sub_141d33dc0
// 地址: 0x141d33dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432229a8
void* rdi = &arg1[7]

for (int64_t i = 3; i != 0; )
    int64_t rcx = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
