// 函数: sub_140a3d2b0
// 地址: 0x140a3d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[0xb]

for (int64_t i = 2; i != 0; )
    int64_t rcx = *(rdi - 0x10)
    rdi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

sub_140745b20(&arg1[4])
int64_t rcx_2 = arg1[1]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142e5bfe0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
