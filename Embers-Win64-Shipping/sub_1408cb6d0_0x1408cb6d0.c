// 函数: sub_1408cb6d0
// 地址: 0x1408cb6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[0xd]

for (int64_t i = 2; i != 0; )
    int64_t rcx = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

sub_1408cb640(&arg1[7])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
