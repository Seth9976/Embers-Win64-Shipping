// 函数: sub_1405ff5e0
// 地址: 0x1405ff5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t rbp = sx.q(arg3)
EnterCriticalSection(arg1 + 0x98)
int32_t rdi
void* const rax_1

if (arg2 == 0)
    rax_1 = 0x48
label_1405ff64c:
    void* rdx = rax_1 + arg1
    
    if (rbp.d s< 0 || rbp.d s>= *(rdx + 8))
        rdi.b = 0
    else
        void* rcx_2 = rbp * 0x68 + *rdx
        
        if (*(rcx_2 + 0x5c) == arg4)
            rdi.b = 1
        else if (arg4 s< 0 || arg4 s>= *(rcx_2 + 0x28))
            rdi.b = 0
        else
            *(rcx_2 + 0x5c) = arg4
            *(arg1 + 0x150) = 1
            rdi.b = 1
else
    if (arg2 == 1)
        rax_1 = 0x88
        goto label_1405ff64c
    
    if (arg2 == 2)
        rax_1 = 0x128
        goto label_1405ff64c
    
    if (arg2 == 6)
        rax_1 = 0x1a8
        goto label_1405ff64c
    
    rdi.b = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
