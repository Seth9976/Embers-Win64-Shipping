// 函数: sub_140a80d20
// 地址: 0x140a80d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(GetCurrentThreadId())
EnterCriticalSection(arg1 + 0x18)
int32_t* rcx_5

if (*(arg1 + 0x48) == *(arg1 + 0x74))
label_140a80da1:
    rcx_5 = nullptr
else
    void* r8_1 = arg1 + 0x78
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_1 = *(r8_1 + (((sx.q(*(arg1 + 0x88)) - 1) & rsi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140a80da1_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_1) * 0x30 + *(arg1 + 0x40)
            
            if (*rcx_5 == rsi.d)
                break
            
            rax_1 = rcx_5[0xa]
            
            if (rax_1 == 0xffffffff)
                goto label_140a80da1_2
        
        if (rax_1 == 0xffffffff)
        label_140a80da1_2:
            rcx_5 = nullptr

void* rax_2 = &rcx_5[2]

if (rcx_5 == 0)
    rax_2 = nullptr

void* rdi

if (rax_2 == 0 || *(rax_2 + 0x10) != 0)
    rdi.b = 0
else
    rdi.b = 1

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rdi.b)
