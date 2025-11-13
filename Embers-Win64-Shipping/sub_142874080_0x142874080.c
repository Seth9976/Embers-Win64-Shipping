// 函数: sub_142874080
// 地址: 0x142874080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_142873e80(arg1, arg4) != 0)
    if (arg3 == 0)
    label_14287415a:
        int64_t* rdx_4 = arg1[5]
        
        if (rdx_4 != 0 && *rdx_4 != 0 && sub_142874200(arg1, rdx_4, 1) != 0)
            return 1
    else if (arg1[5] != 0)
        int64_t rdx_1 = arg1[3]
        
        if (arg1[4] - rdx_1 u>= arg3)
            if (arg1[1] != 0)
            label_14287412d:
                int64_t rcx_2 = arg1[1]
                
                if (rcx_2 == 0)
                    rcx_2 = *(*arg1 + 8)
                
                int64_t rax_7 = arg1[2]
                arg1[3] += arg3
                arg1[2] = rax_7 + arg3
                memcpy(rcx_2 + rax_7, arg2, arg3.d)
                goto label_14287415a
            
            int64_t* r8 = *arg1
            int64_t rcx = *r8
            
            if (rcx - rdx_1 u>= arg3)
                goto label_14287412d
            
            if (arg3 u> rcx)
                rcx = arg3
            
            int64_t rdx_2
            
            if (rcx u<= 0x7fffffffffffffff)
                rdx_2 = rcx * 2
                
                if (rdx_2 u< 0x100)
                    rdx_2 = 0x100
            else
                rdx_2 = -1
            
            if (sub_1428a7260(r8, rdx_2) != 0)
                goto label_14287412d

return 0
