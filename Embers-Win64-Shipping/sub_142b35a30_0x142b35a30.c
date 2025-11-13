// 函数: sub_142b35a30
// 地址: 0x142b35a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == *(arg2 + 0x48) && *(arg1 + 0x98) == *(arg2 + 0x98)
        && sub_142a48110(arg1, arg2).b != 0)
    void* rbx = arg1 + 0x50
    int64_t rsi = 0
    uint64_t rax_1
    
    while (true)
        int64_t* rcx = *rbx
        rax_1 = *(arg2 - arg1 + rbx)
        
        if (rcx != 0)
            if (rax_1 == 0)
                goto label_142b35aad
            
            if (sub_142b32550(rcx, rax_1).b == 0)
                goto label_142b35aad
        else if (rax_1 != 0)
        label_142b35aad:
            rax_1.b = 0
            break
        
        rsi += 1
        rbx += 8
        
        if (rsi s>= 6)
            uint64_t rbx_1 = 0
            
            if (*(arg1 + 0x48) u> 0)
                do
                    int64_t rcx_1 = *(arg2 + 0x40)
                    int64_t* rdx_1
                    
                    if (rcx_1 == 0)
                        rdx_1 = nullptr
                    else
                        rdx_1 = *(rcx_1 + (rbx_1 << 3))
                    
                    int64_t* rcx_2 = *(arg1 + 0x40)
                    
                    if (rcx_2 != 0)
                        rcx_2 = rcx_2[rbx_1]
                    
                    if (sub_142b32550(rcx_2, rdx_1).b == 0)
                        goto label_142b35aad
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                while (rbx_1.d u< *(arg1 + 0x48))
            
            rax_1.b = 1
            break
    
    return rax_1

uint32_t rax
rax.b = 0
return rax
