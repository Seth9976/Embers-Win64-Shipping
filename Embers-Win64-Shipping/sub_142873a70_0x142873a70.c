// 函数: sub_142873a70
// 地址: 0x142873a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 != 0)
    if (arg1[5] == 0)
        return 0
    
    int64_t rdx = arg1[3]
    
    if (arg1[4] - rdx u< arg3)
        return 0
    
    if (arg1[1] == 0)
        int64_t* r8 = *arg1
        uint64_t rcx = *r8
        
        if (rcx - rdx u< arg3)
            if (arg3 u> rcx)
                rcx = arg3
            
            uint64_t rdx_1
            
            if (rcx u<= 0x7fffffffffffffff)
                rdx_1 = rcx * 2
                
                if (rdx_1 u< 0x100)
                    rdx_1 = 0x100
            else
                rdx_1 = -1
            
            if (sub_1428a7260(r8, rdx_1) == 0)
                return 0
    
    int64_t rcx_2 = arg1[1]
    
    if (rcx_2 == 0)
        rcx_2 = *(*arg1 + 8)
    
    int64_t rax_7 = arg1[2]
    arg1[3] += arg3
    arg1[2] = rax_7 + arg3
    memset(rcx_2 + rax_7, arg2, arg3)

return 1
