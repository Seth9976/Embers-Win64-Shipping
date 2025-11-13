// 函数: sub_142873e80
// 地址: 0x142873e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1[5] != 0)
    int64_t* rax_1 = sub_1428a6a70(0x28)
    
    if (rax_1 != 0)
        *rax_1 = arg1[5]
        int64_t rcx_2 = arg1[3] + arg2
        arg1[5] = rax_1
        rax_1[3] = rcx_2
        rax_1[2] = arg2
        
        if (arg2 == 0)
            rax_1[1] = arg2
            return zx.q((arg2 + 1).d)
        
        if (arg1[5] != 0)
            int64_t rdx_1 = arg1[3]
            
            if (arg1[4] - rdx_1 u>= arg2)
                if (arg1[1] != 0)
                label_142873f99:
                    int64_t rdx_3 = arg1[1]
                    int64_t rcx_5
                    
                    if (rdx_3 == 0)
                        rcx_5 = *(*arg1 + 8)
                    else
                        rcx_5 = rdx_3
                    
                    int64_t rax_11 = arg1[2]
                    arg1[3] += arg2
                    arg1[2] = rax_11 + arg2
                    
                    if (rdx_3 == 0)
                        rdx_3 = *(*arg1 + 8)
                    
                    rax_1[1] = rcx_5 + rax_11 - rdx_3
                    return 1
                
                int64_t* r8_3 = *arg1
                int64_t rcx_3 = *r8_3
                
                if (rcx_3 - rdx_1 u>= arg2)
                    goto label_142873f99
                
                if (arg2 u> rcx_3)
                    rcx_3 = arg2
                
                int64_t rdx_2
                
                if (rcx_3 u<= 0x7fffffffffffffff)
                    rdx_2 = rcx_3 * 2
                    
                    if (rdx_2 u< 0x100)
                        rdx_2 = 0x100
                else
                    rdx_2 = -1
                
                if (sub_1428a7260(r8_3, rdx_2) != 0)
                    goto label_142873f99
    else
        sub_1428a5670((rax_1 + 0x14).d, 0x27a, (rax_1 + 0x41).d, "ssl\packet.c", 0x11a)

return 0
