// 函数: sub_141e7c8f0
// 地址: 0x141e7c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
EnterCriticalSection(arg1 + 0xf0)
int32_t* rdx_5

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_141e7c97e:
    rdx_5 = nullptr
else
    void* r9_1 = arg1 + 0xd8
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & rsi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141e7c97e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_1) << 6) + *(arg1 + 0xa0)
            
            if (*rdx_5 == rsi.d)
                break
            
            rax_1 = rdx_5[0xe]
            
            if (rax_1 == 0xffffffff)
                goto label_141e7c97e_2
        
        if (rax_1 == 0xffffffff)
        label_141e7c97e_2:
            rdx_5 = nullptr

void* r14 = &rdx_5[2]

if (rdx_5 == 0)
    r14 = nullptr

if (r14 == 0)
    arg2[1] = 0
    arg2[2].d = 0xffffffff
else
    void* rcx_1 = data_143f5b298
    void* const rax_2
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    else
        rax_2 = sub_1423dcff0(rcx_1)
    
    sub_141e7f240(rax_2, rsi.d)
    arg2[1] = *r14
    arg2[2].d = rsi.d

*arg2 = 0

if (arg1 != -0xf0)
    LeaveCriticalSection(arg1 + 0xf0)

return arg2
