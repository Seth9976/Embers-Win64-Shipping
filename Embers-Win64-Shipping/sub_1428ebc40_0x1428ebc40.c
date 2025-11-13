// 函数: sub_1428ebc40
// 地址: 0x1428ebc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = arg3.d

if (arg2 != 0)
    int64_t r9
    int64_t var_28_1 = r9
    sub_1428b6f70(arg1, "%*s%s:\n", arg3)
    int32_t rcx = *arg2
    
    if (rcx == 0)
        sub_1428b6f70(arg1, "%*sinherit\n", zx.q(rbx + 2))
    else
        if (rcx != 1)
            return 0
        
        int32_t r14_1 = 0
        
        if (sub_142898c70(*(arg2 + 8)) s> 0)
            while (true)
                int32_t* rax_2 = sub_142898ea0(*(arg2 + 8), r14_1)
                int32_t rax_3 = *rax_2
                int32_t* rbx_2
                
                if (rax_3 == 0)
                    int32_t* rax_6 = sub_1428ea3b0(0, *(rax_2 + 8))
                    rbx_2 = rax_6
                    
                    if (rax_6 == 0)
                        return 0
                    
                    int32_t* var_28_3 = rax_6
                    sub_1428b6f70(arg1, "%*s%s\n", zx.q(rbx + 2))
                else
                    if (rax_3 != 1)
                        return 0
                    
                    int32_t* rax_4 = sub_1428ea3b0(0, **(rax_2 + 8))
                    
                    if (rax_4 == 0)
                        return 0
                    
                    int32_t* var_28_2 = rax_4
                    sub_1428b6f70(arg1, "%*s%s-", zx.q(rbx + 2))
                    sub_1428a6780(rax_4)
                    int32_t* rax_5 = sub_1428ea3b0(0, *(*(rax_2 + 8) + 8))
                    rbx_2 = rax_5
                    
                    if (rax_5 == 0)
                        return 0
                    
                    sub_1428b6f70(arg1, "%s\n", rax_5)
                
                sub_1428a6780(rbx_2)
                r14_1 += 1
                
                if (r14_1 s>= sub_142898c70(*(arg2 + 8)))
                    return 1

return 1
