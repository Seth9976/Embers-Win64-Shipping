// 函数: sub_140b9e3c0
// 地址: 0x140b9e3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
EnterCriticalSection(arg1 + 0x290)
int32_t rax_1

if (*(arg1 + 0x248) != *(arg1 + 0x274))
    void* r10_1 = arg1 + 0x278
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x288)) - 1) & rsi) << 2))

if (*(arg1 + 0x248) == *(arg1 + 0x274) || rax_1 == 0xffffffff)
label_140b9e439:
    rax_1 = -1
else
    int64_t r8_2 = *(arg1 + 0x240)
    
    while (true)
        int64_t rdx = sx.q(rax_1) * 3
        
        if (*(r8_2 + (rdx << 2)) == rsi.d)
            break
        
        rax_1 = *(r8_2 + (rdx << 2) + 4)
        
        if (rax_1 == 0xffffffff)
            goto label_140b9e439

void* rdi
rdi.b = rax_1 != 0xffffffff

if (arg1 != -0x290)
    LeaveCriticalSection(arg1 + 0x290)

return zx.q(rdi.b)
