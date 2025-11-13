// 函数: sub_142953c50
// 地址: 0x142953c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if ((*(*arg1 + 0x108))(arg1, *(arg2 + 0x18), *(arg2 + 0x20), *(arg3 + 0x10), arg5) != 0
        && (*(*arg1 + 0x108))(arg1, *(arg3 + 0x10), *(arg2 + 0x10), *(arg3 + 0x20), arg5) != 0
        && (*(*arg1 + 0x110))(arg1, *(arg3 + 0x18), *(arg2 + 0x20), arg5) != 0
        && (*(*arg1 + 0x110))(arg1, *(arg2 + 0x20), *(arg2 + 0x10), arg5) != 0
        && sub_142972660(*(arg3 + 0x20), *(arg2 + 0x18), *(arg3 + 0x10)) != 0)
    int64_t rdx_5 = *(arg3 + 0x20)
    
    if ((*(*arg1 + 0x110))(arg1, rdx_5, rdx_5, arg5) != 0)
        int64_t rdx_6 = *(arg3 + 0x10)
        
        if ((*(*arg1 + 0x108))(arg1, rdx_6, *(arg2 + 0x18), rdx_6, arg5) != 0
                && (*(*arg1 + 0x108))(arg1, *(arg2 + 0x18), *(arg3 + 0x20), *(arg4 + 0x10), arg5)
                != 0)
            int64_t* rcx_7 = *(arg3 + 0x10)
            
            if (sub_142972660(rcx_7, rcx_7, *(arg2 + 0x18)) != 0
                    && (*(*arg1 + 0x110))(arg1, *(arg2 + 0x18), *(arg2 + 0x20), arg5) != 0)
                int64_t rdx_10 = *(arg2 + 0x20)
                
                if ((*(*arg1 + 0x108))(arg1, rdx_10, rdx_10, *(arg3 + 0x18), arg5) != 0)
                    int64_t rdx_11 = *(arg3 + 0x18)
                    
                    if ((*(*arg1 + 0x110))(arg1, rdx_11, rdx_11, arg5) != 0)
                        int64_t rdx_12 = *(arg3 + 0x18)
                        
                        if ((*(*arg1 + 0x108))(arg1, rdx_12, rdx_12, arg1[0xd], arg5) != 0
                                && sub_142972660(*(arg2 + 0x10), *(arg2 + 0x18), *(arg3 + 0x18))
                                != 0)
                            return 1

return 0
