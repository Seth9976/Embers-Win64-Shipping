// 函数: sub_141d012b0
// 地址: 0x141d012b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8

if (*(arg1 + 0x10) s< arg2)
    *(arg1 + 0x10) = arg2
    int64_t rax_1 = j_sub_140a82f30(arg2)
    int64_t rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = 0
    else
        memset(rax_1, 0, arg2)
    
    if (arg1 + 0x18 != &arg_8)
        int64_t rcx_2 = *(arg1 + 0x18)
        *(arg1 + 0x18) = rbx_1
        rbx_1 = 0
        j_sub_140a74f90(rcx_2)
    
    j_sub_140a74f90(rbx_1)

if (*(arg1 + 0x20) s>= arg3)
    return 

*(arg1 + 0x20) = arg3
int64_t rax_3 = j_sub_140a82f30(arg3)
int64_t rbx_2 = rax_3

if (rax_3 == 0)
    rbx_2 = 0
else
    memset(rax_3, 0, arg3)

if (arg1 + 0x28 != &arg_8)
    int64_t rcx_6 = *(arg1 + 0x28)
    *(arg1 + 0x28) = rbx_2
    rbx_2 = 0
    j_sub_140a74f90(rcx_6)

j_sub_140a74f90(rbx_2)
