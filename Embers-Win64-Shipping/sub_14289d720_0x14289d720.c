// 函数: sub_14289d720
// 地址: 0x14289d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdi = *arg1

if (rdi != 0)
    sub_1428a5c40(*(rdi + 0x90))
    int32_t* rsi_1 = *(rdi + 8)
    int32_t rax_1 = sub_14289dd60(rsi_1, arg2, arg3, nullptr)
    int32_t rbx_1 = 0
    int32_t* rsi_2
    
    if (rax_1 != 0xffffffff)
        rsi_2 = sub_142898ea0(rsi_1, rax_1)
    else
        rsi_2 = nullptr
    
    sub_1428a5d00(*(rdi + 0x90))
    
    if (rsi_2 != 0 && arg2 != 2)
    label_14289d7fb:
        int32_t rdx_4 = *rsi_2
        *arg4 = rdx_4
        void* rcx_9 = *(rsi_2 + 8)
        *(arg4 + 8) = rcx_9
        
        if (rdx_4 == 1)
            sub_1428a3ba0(rcx_9)
        else if (rdx_4 == 2)
            sub_1428e46f0(rcx_9)
        
        return 1
    
    if (sub_142898c70(*(rdi + 0x10)) s> 0)
        int32_t rax_6
        
        do
            void* rax_4 = sub_142898ea0(*(rdi + 0x10), rbx_1)
            void* rcx_6 = *(rax_4 + 8)
            
            if (rcx_6 != 0)
                int64_t r10_1 = *(rcx_6 + 0x30)
                void var_28
                
                if (r10_1 != 0 && *(rax_4 + 4) == 0 && r10_1(rax_4, zx.q(arg2), arg3, &var_28) != 0)
                    rsi_2 = &var_28
                    goto label_14289d7fb
            
            rbx_1 += 1
            rax_6 = sub_142898c70(*(rdi + 0x10))
        while (rbx_1 s< rax_6)
    
    if (rsi_2 != 0)
        goto label_14289d7fb

return 0
