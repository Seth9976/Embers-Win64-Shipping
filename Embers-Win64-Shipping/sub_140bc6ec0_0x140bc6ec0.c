// 函数: sub_140bc6ec0
// 地址: 0x140bc6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
void* const rcx_3

if (arg1->__offset(0x30).d == arg1->__offset(0x5c).d)
labelid_a:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* __offset(_RTL_CRITICAL_SECTION, 0x60) r8 = arg1 + 0x60
    void* rcx_1 = (r8 - 0x60)->__offset(0x68).q
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1->__offset(0x70).d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140bc6f50:
        rcx_3 = nullptr
    else
        int64_t r8_1 = arg1->__offset(0x28).q
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_1 + (rdx_3 << 2)
            
            if (*(r8_1 + (rdx_3 << 2)) == arg3)
                break
            
            rax_4 = *(rcx_3 + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_140bc6f50_1
        
        if (rax_4 == 0xffffffff)
        label_140bc6f50_1:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

int32_t rcx_4

if (rax_5 == 0)
    rcx_4 = -1
else
    rcx_4 = *rax_5

*arg2 = rcx_4

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return arg2
