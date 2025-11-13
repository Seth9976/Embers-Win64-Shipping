// 函数: sub_140a68640
// 地址: 0x140a68640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[1]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rdi)

*arg1 = &data_142e62558

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
