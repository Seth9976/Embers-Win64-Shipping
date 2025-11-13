// 函数: sub_140bc2460
// 地址: 0x140bc2460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x19]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t* rdi = arg1[0x18]

if (rdi != 0)
    int32_t temp0_1 = *rdi
    *rdi -= 1
    
    if (temp0_1 == 1)
        sub_140d3a300(rdi)
        j_sub_140a74f90(rdi)

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
