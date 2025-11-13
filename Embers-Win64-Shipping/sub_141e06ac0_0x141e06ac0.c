// 函数: sub_141e06ac0
// 地址: 0x141e06ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_2

if (arg3 == 0)
    int64_t rax_4 = sx.q(*(arg1 + 0x80))
    
    if (rax_4.d s> 0)
        int64_t** rdx_3 = *(arg1 + 0x78)
        int64_t rax_5 = 0
        
        while (true)
            rcx_2 = *rdx_3
            
            if (rcx_2 != 0 && *rcx_2 != 0 && 0f f!= rcx_2[0x2a].d)
                break
            
            rax_5 += 1
            rdx_3 = &rdx_3[1]
            
            if (rax_5 s>= rax_4)
                goto label_141e06b74
        
        sub_141e22be0(rcx_2, arg2)
        return arg2
else
    int32_t arg_18
    sub_140865c40(arg1 + 0x88, &arg_18, arg3)
    int64_t rax = sx.q(arg_18)
    void* const rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax * 0x18
    
    int64_t* rax_2 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0)
        rcx_2 = *rax_2
        
        if (rcx_2 != 0)
            sub_141e22be0(rcx_2, arg2)
            return arg2
label_141e06b74:
*arg2 = 0
return arg2
