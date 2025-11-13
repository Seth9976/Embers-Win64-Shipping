// 函数: sub_140aac030
// 地址: 0x140aac030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0xa])
int64_t rax_5
int64_t* rbx_1

if (arg1[1].d == *(arg1 + 0x34))
label_140aac0ba:
    rax_5 = 0
    rbx_1 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[7]
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
        goto label_140aac0ba
    
    int64_t r8_1 = *arg1
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_4)
        int64_t rcx_4 = rdx_3 << 5
        
        if (*(rcx_4 + r8_1) == arg3)
            break
        
        rax_4 = *(rcx_4 + r8_1 + 0x18)
        
        if (rax_4 == 0xffffffff)
            goto label_140aac0ba
    
    if (rax_4 == 0xffffffff)
        goto label_140aac0ba
    
    int64_t rdx_5 = rdx_3 << 5
    void* rdx_6 = rdx_5 + r8_1
    
    if (rdx_5 == neg.q(r8_1))
        goto label_140aac0ba
    
    rbx_1 = *(rdx_6 + 0x10)
    rax_5 = *(rdx_6 + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1

*arg2 = rax_5
arg2[1] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

if (arg1 != -0x50)
    LeaveCriticalSection(&arg1[0xa])

return arg2
