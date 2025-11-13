// 函数: sub_140bc10b0
// 地址: 0x140bc10b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *arg2
(*(*arg1 + 0x150))(arg1, &arg_10, 8)
int64_t rsi = arg_10

if (rsi != 0)
    void* rbx_1 = arg1[0x12]
    EnterCriticalSection(rbx_1 + 0x58)
    
    if (rsi != *(rbx_1 + 0x80))
        *(rbx_1 + 0x80) = rsi
        int32_t arg_8
        sub_140865c40(rbx_1 + 8, &arg_8, rsi)
        int64_t rax_2 = sx.q(arg_8)
        void* const rcx_2
        
        if (rax_2.d == 0xffffffff)
            rcx_2 = nullptr
        else
            rcx_2 = *(rbx_1 + 8) + rax_2 * 0x18
        
        int64_t* rax_4 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rax_4 = nullptr
        
        if (rax_4 == 0)
            *(rbx_1 + 0x88) = 0
        else
            *(rbx_1 + 0x88) = *rax_4
    
    int64_t rbx_2 = *(rbx_1 + 0x88)
    
    if (rbx_1 != -0x58)
        LeaveCriticalSection(rbx_1 + 0x58)
    
    if (rbx_2 != 0)
        *arg2 = rbx_2
        return arg1
    
    rsi = arg_10

*arg2 = rsi
return arg1
