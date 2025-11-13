// 函数: sub_14085b550
// 地址: 0x14085b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1c8))
void* rbx = arg1

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    *(arg1 + 0x1c8) = arg2
    
    if (arg2 s> *(arg1 + 0x1cc))
        sub_14085a340(arg1, rdi.d)
    
    void* rax = *(rbx + 0x1c0)
    
    if (rax != 0)
        rbx = rax
    
    void* rbx_1 = rbx + rdi * 0x70
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rbx_1 = 0
            *(rbx_1 + 8) = 0
            *(rbx_1 + 0x10) = -1
            __builtin_memset(rbx_1 + 0x18, 0, 0x28)
            *(rbx_1 + 0x40) = 0xffffffff
            InitializeCriticalSection(rbx_1 + 0x48)
            SetCriticalSectionSpinCount(rbx_1 + 0x48, 0xfa0)
            rbx_1 += 0x70
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_140858840(arg1, arg2, rdi.d - arg2, arg3) __tailcall
