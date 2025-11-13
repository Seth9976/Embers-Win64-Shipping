// 函数: sub_141d33ba0
// 地址: 0x141d33ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432228e8
void* rdi = &arg1[0xb]

for (int64_t i = 3; i != 0; )
    int64_t rcx = *(rdi - 0x18)
    rdi -= 0x18
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
