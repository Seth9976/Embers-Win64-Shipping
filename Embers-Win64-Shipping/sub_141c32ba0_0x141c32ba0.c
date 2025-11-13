// 函数: sub_141c32ba0
// 地址: 0x141c32ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 2) == 0)
    *arg1 = &data_1432050f0
    
    if ((arg2 & 1) != 0)
        j_sub_140a74f90(arg1)
    
    return arg1

int64_t i_1 = arg1[-1]
void* rax_2 = &arg1[i_1 * 6]

if (i_1 != 0)
    int64_t i
    
    do
        *(rax_2 - 0x30) = &data_1432050f0
        rax_2 -= 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(&arg1[-1])

return &arg1[-1]
