// 函数: sub_1426bee70
// 地址: 0x1426bee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0
int32_t i = 0

if (*(arg1 + 0x60) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x58)
        int64_t rcx = *(r14_1 + rax_1)
        
        if (rcx == 0)
            int64_t* rbx_2 = *(r14_1 + rax_1 + 8)
            
            if (rbx_2 != 0)
                void* rax_4 = sub_142738d10()
                void* rcx_1 = rbx_2[2]
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30
                        && rbx_2[0xe] == *arg4)
                    int64_t rsi_2 = zx.q(*(rbx_2 + 0x52)) + *(arg2 + 0x30)
                    uint64_t rax_11 = zx.q((*(*rbx_2 + 0x298))(rbx_2, rax_5))
                    
                    if (rax_11.d != 0)
                        int64_t rax_13 = (rax_11 + 3) & 0xfffffffffffffffc
                        
                        if (rsi_2 != rax_13)
                            int64_t rax_14 = sx.q(*(rsi_2 - rax_13))
                            char rcx_3
                            
                            if (rax_14.d s< 0 || rax_14.d s>= *(arg3 + 0x138))
                                rcx_3 = 0
                            else
                                rcx_3 = 1
                            
                            if (rcx_3 != 0)
                                void* rbx_3 = *(*(arg3 + 0x130) + (rax_14 << 3))
                                
                                if (rbx_3 != 0)
                                    void* rax_15 = sub_142738d10()
                                    void* rcx_5 = *(rbx_3 + 0x10)
                                    int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                                    
                                    if (rax_16.d s<= *(rcx_5 + 0x38)
                                            && *(*(rcx_5 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
                                        rdi = zx.q(rdi.b)
                                        
                                        if (sub_1426eae00(rbx_3, arg6) != 0)
                                            rdi = 1
        else if (sub_1426bee70(rcx, arg5, arg3, arg4, arg6) != 0 || rdi.b != 0)
            rdi.b = 1
        
        i += 1
        r14_1 = &r14_1[6]
    while (i s< *(arg1 + 0x60))

return zx.q(rdi.b)
