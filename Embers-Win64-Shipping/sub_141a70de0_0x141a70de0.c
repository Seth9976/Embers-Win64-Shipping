// 函数: sub_141a70de0
// 地址: 0x141a70de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae180(&arg1[9])
int32_t i_1 = arg1[8].d
void* rax = arg1[7]

if (i_1 != 0)
    char* rax_1 = rax + 4
    int32_t i
    
    do
        if (*rax_1 != 0)
            *rax_1 = 0
        
        rax_1 = &rax_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rax = arg1[7]

if (rax != 0)
    sub_140a74f90(rax)

int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d4bb80

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
