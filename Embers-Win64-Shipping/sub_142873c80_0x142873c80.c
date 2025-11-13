// 函数: sub_142873c80
// 地址: 0x142873c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1[5] != 0 && arg2 != 0)
    int64_t r9_1 = arg1[3]
    
    if (arg1[4] - r9_1 u>= arg2)
        if (arg1[1] != 0)
        label_142873d18:
            
            if (arg3 != 0)
                int64_t rcx_2 = arg1[1]
                
                if (rcx_2 == 0)
                    rcx_2 = *(*arg1 + 8)
                
                *arg3 = rcx_2 + arg1[2]
            
            return 1
        
        int64_t* r8 = *arg1
        int64_t rcx = *r8
        
        if (rcx - r9_1 u>= arg2)
            goto label_142873d18
        
        if (arg2 u> rcx)
            rcx = arg2
        
        int64_t rdx
        
        if (rcx u<= 0x7fffffffffffffff)
            rdx = rcx * 2
            
            if (rdx u< 0x100)
                rdx = 0x100
        else
            rdx = -1
        
        if (sub_1428a7260(r8, rdx) != 0)
            goto label_142873d18

return 0
