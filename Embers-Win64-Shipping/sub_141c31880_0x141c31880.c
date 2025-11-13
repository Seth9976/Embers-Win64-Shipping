// 函数: sub_141c31880
// 地址: 0x141c31880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432050f8
int64_t* rcx = arg1[2]

if (rcx == 0)
    return &data_1432050f8

if (rcx[-1] == 0)
    return j_sub_140a74f90(&rcx[-1]) __tailcall

jump(**rcx)
