// 函数: sub_140929dd0
// 地址: 0x140929dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x2e8)
int64_t rax = sx.q(*(arg1 + 0x318))
void* rdi

if (rax.d s<= 0)
label_140929e1b:
    rdi.b = 0
else
    int64_t rdx_1 = 0
    char* rax_2 = *(arg1 + 0x310) + 0x3e
    
    while (*rax_2 == 0)
        rdx_1 += 1
        rax_2 = &rax_2[0xe8]
        
        if (rdx_1 s>= rax)
            goto label_140929e1b
    
    rdi.b = 1

if (arg1 != -0x2e8)
    LeaveCriticalSection(arg1 + 0x2e8)

return zx.q(rdi.b)
