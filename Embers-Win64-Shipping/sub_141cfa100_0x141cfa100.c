// 函数: sub_141cfa100
// 地址: 0x141cfa100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[1].b != 0
*arg1 = &data_14321dcd8

if (not(cond:0))
    void* rax_1 = arg1[0x12]
    void* rcx = &arg1[0x14]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    int64_t* rax_4 = arg1[0x10]((*(*rcx + 8))(rcx))
    
    if (rax_4 != 0)
        int64_t r8_1 = *rax_4
        (*r8_1)(rax_4, 1, r8_1)

sub_141cf8450(&arg1[4])
*arg1 = &data_142e60450

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
