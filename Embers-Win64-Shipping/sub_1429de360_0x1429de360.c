// 函数: sub_1429de360
// 地址: 0x1429de360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1429ddff0()
*arg1 = rax

if (rax != 0)
    int64_t* rbx_1 = arg1
    void var_28
    
    if (__intrinsic_setjmp(rax + 0x1320, &var_28) == 0)
        *(*rbx_1 + 0x1318) = 1
        *(*rbx_1 + 0x3764) = *(arg2 + 0x10)
        sub_1429dfe00(*rbx_1)
        *(*rbx_1 + 0x1318) = 0
        return 0
    
    void* rdi_1 = *rbx_1
    
    if (rdi_1 != 0)
        sub_1429e00e0(rdi_1)
        j_sub_1429ddc70(rdi_1 + 0x12c0)
        sub_1429dde60(rdi_1)
    
    __builtin_memset(rbx_1, 0, 0x20)

return 1
