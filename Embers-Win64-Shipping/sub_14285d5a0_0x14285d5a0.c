// 函数: sub_14285d5a0
// 地址: 0x14285d5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = 0
int64_t r14 = 0

if (*(arg1 + 0x1678) u<= arg4 && ((*(arg1 + 0x5c8) & 2) != 0 || *(arg1 + 0x1690) == arg3)
        && *(arg1 + 0x1680) == arg2)
    void* rbx_1 = arg1 + 0x868
    
    while (true)
        int64_t rdx = *rbx_1
        
        while (rdx != 0 || rsi u>= *(arg1 + 0x818) - 1)
            SetLastError(NO_ERROR)
            int64_t* rcx = *(arg1 + 0x18)
            int64_t rdx_3
            
            if (rcx == 0)
                sub_142856580(arg1, 0x50, 0x9f, 0x80, "ssl\record\rec_layer_s3.c", 0x482)
                rdx_3 = 0xffffffff
            else
                *(arg1 + 0x28) = 2
                int32_t rax_3 = sub_14289aa40(rcx, *(rbx_1 - 0x20) + *(rbx_1 - 8), *rbx_1)
                rdx_3 = sx.q(rax_3)
                
                if (rax_3 s>= 0)
                    r14 = rdx_3
                
                if (rax_3 s> 0)
                    int64_t rdx_4 = *rbx_1
                    *(rbx_1 - 8) += r14
                    
                    if (r14 != rdx_4)
                        rdx = rdx_4 - r14
                        *rbx_1 = rdx
                        continue
                    else
                        *rbx_1 = 0
                        
                        if (rsi + 1 u< *(arg1 + 0x818))
                            rdx = 0
                            continue
                        
                        int64_t rdx_5 = *(arg1 + 0x1688)
                        *(arg1 + 0x28) = 1
                        *arg5 = rdx_5
                        return 1
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                *(arg1 + rsi * 0x28 + 0x868) = 0
            
            return zx.q(rdx_3.d)
        
        rsi += 1
        rbx_1 += 0x28

sub_142856580(arg1, 0x50, 0x9f, 0x7f, "ssl\record\rec_layer_s3.c", 0x46b)
return 0xffffffff
