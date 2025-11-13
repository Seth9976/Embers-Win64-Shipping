// 函数: sub_1425f4ac0
// 地址: 0x1425f4ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344b298
sub_1425f7480(arg1)

if (arg1[0x12] != 0)
    void* rax_1 = arg1[0x14]
    void* rcx = &arg1[0x16]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

void* rdi = arg1[0x10]

if (rdi != 0)
    sub_1405970a0(rdi)
    j_sub_140a74f90(rdi)

DeleteCriticalSection(&arg1[6])
sub_1425f46f0(&arg1[4])
int64_t* rdi_1 = arg1[2]

if (rdi_1 != 0)
    int64_t* rcx_5 = *rdi_1
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
    
    j_sub_140a74f90(rdi_1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
