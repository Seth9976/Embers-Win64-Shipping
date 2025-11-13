// 函数: sub_140b1d490
// 地址: 0x140b1d490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x330)
int64_t* r8 = *(arg1 + 0x2b0)
void* rdx = &r8[sx.q(*(arg1 + 0x2b8))]
int64_t rdi

if (r8 == rdx)
label_140b1d4de:
    int64_t* rax_1 = *(arg1 + 0x2c0)
    void* rdx_1 = &rax_1[sx.q(*(arg1 + 0x2c8))]
    
    if (rax_1 == rdx_1)
    label_140b1d503:
        rdi.b = 0
    else
        while (*rax_1 != arg2)
            rax_1 = &rax_1[1]
            
            if (rax_1 == rdx_1)
                goto label_140b1d503
        
        rdi.b = 1
else
    while (*r8 != arg2)
        r8 = &r8[1]
        
        if (r8 == rdx)
            goto label_140b1d4de
    
    rdi.b = 1

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

return zx.q(rdi.b)
