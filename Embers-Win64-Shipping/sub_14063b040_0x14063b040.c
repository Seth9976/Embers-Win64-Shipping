// 函数: sub_14063b040
// 地址: 0x14063b040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int32_t arg_8

if (*sub_14062d6e0(arg1 + 0x100, &arg_8, arg3) != 0xffffffff)
    *arg4 = 1
    sub_14062d6e0(arg1 + 0x100, &arg_8, arg3)
    int64_t rax_1 = sx.q(arg_8)
    void* const rdx_3
    
    if (rax_1.d == 0xffffffff)
        rdx_3 = nullptr
    else
        rdx_3 = *(arg1 + 0x100) + rax_1 * 0x28
    
    sub_140596d10(arg2, rdx_3 + 0x10)
else
    *arg2 = 0
    arg2[1] = 0

int64_t rcx_3 = *arg3

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg2
