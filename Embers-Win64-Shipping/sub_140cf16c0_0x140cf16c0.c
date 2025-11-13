// 函数: sub_140cf16c0
// 地址: 0x140cf16c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4

if (arg4 == 0)
    rbx = sx.q(*(arg1 + 0x4c)) + arg3

if (sub_140758d90(rbx, arg2) == 0xffffffff)
    int64_t rdi_1 = sx.q(rbx[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    rbx[1].d = rax_1
    
    if (rax_1 s> *(rbx + 0xc))
        sub_1405a4f90(rbx)
    
    *(*rbx + rdi_1 * 0x10) = *arg2

return sub_1408f4c10(rbx) __tailcall
