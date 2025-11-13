// 函数: sub_1420c0f60
// 地址: 0x1420c0f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg1 == 0 || arg3 == 0)
label_1420c1074:
    result.b = 0
else
    int64_t* rcx = *(arg2 + 0x78)
    
    if ((*(*rcx + 0x128))(rcx, *(arg4 + 0x78)).b == 0)
    label_1420c1074_1:
        result.b = 0
    else
        int32_t r13_1 = arg1[1].d
        int32_t rax_2 = *(*(arg2 + 0x78) + 0x3c)
        int32_t rcx_1 = *(*(arg4 + 0x78) + 0x3c)
        
        if (r13_1 != arg3[1].d)
        label_1420c1074_2:
            result.b = 0
        else
            int32_t rsi_1 = 0
            
            if (r13_1 s> 0)
                char r15_1 = not.b((*(arg4 + 0x80)).b) & 1
                char r12_1 = not.b((*(arg2 + 0x80)).b) & 1
                int32_t r14_1 = 0
                int32_t rbp_1 = 0
                
                do
                    void* r8
                    
                    if (arg3[1].d != 0)
                        void* rcx_2 = *arg3
                        
                        if (r15_1 == 0 && (rcx_2.b & 1) != 0)
                            rcx_2 = (rcx_2 s>> 1) + arg3
                        
                        r8 = sx.q(rbp_1) + rcx_2
                    else
                        r8 = nullptr
                    
                    void* rdx_1
                    
                    if (arg1[1].d != 0)
                        void* rcx_4 = *arg1
                        
                        if (r12_1 == 0 && (rcx_4.b & 1) != 0)
                            rcx_4 = (rcx_4 s>> 1) + arg1
                        
                        rdx_1 = sx.q(r14_1) + rcx_4
                    else
                        rdx_1 = nullptr
                    
                    if ((*(*rcx + 0x80))(rcx, rdx_1, r8, 0, rax_2, rcx).b == 0)
                        goto label_1420c1074_2
                    
                    rbp_1 += rcx_1
                    rsi_1 += 1
                    r14_1 += rax_2
                while (rsi_1 s< r13_1)
            
            result.b = 1

return result
