// 函数: sub_1428505e0
// 地址: 0x1428505e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rax_1

if (arg2 == *(arg1 + 0x10))
    void* rcx = *(arg1 + 0x20)
    
    if (rcx == 0)
        rax_1 = *(arg1 + 0x18)
    else
        rax_1 = sub_14289a660(rcx)

if (arg2 != *(arg1 + 0x10) || arg3 != rax_1)
    if (arg2 != 0 && arg2 == arg3)
        sub_14289aa00(arg2)
    
    void* rcx_2 = *(arg1 + 0x20)
    
    if (arg2 != *(arg1 + 0x10))
        int64_t rax_4
        
        if (rcx_2 == 0)
            rax_4 = *(arg1 + 0x18)
        else
            rax_4 = sub_14289a660(rcx_2)
        
        if (arg3 == rax_4)
            void* rcx_6 = *(arg1 + 0x20)
            int64_t rbp_1 = *(arg1 + 0x10)
            int64_t rax_5
            
            if (rcx_6 == 0)
                rax_5 = *(arg1 + 0x18)
            else
                rax_5 = sub_14289a660(rcx_6)
            
            if (rbp_1 != rax_5)
                int64_t rax_6 = sub_142899f50(*(arg1 + 0x10))
                *(arg1 + 0x10) = arg2
                return rax_6
        
        sub_142899f50(*(arg1 + 0x10))
        *(arg1 + 0x10) = arg2
        return sub_142850540(arg1, arg3)
    
    if (rcx_2 != 0)
        *(arg1 + 0x18) = sub_14289a670(*(arg1 + 0x18))
    
    rax_1 = sub_142899f50(*(arg1 + 0x18))
    int64_t* rcx_5 = *(arg1 + 0x20)
    *(arg1 + 0x18) = arg3
    
    if (rcx_5 != 0)
        int64_t* rax_3 = sub_14289a6f0(rcx_5, arg3)
        *(arg1 + 0x18) = rax_3
        return rax_3

return rax_1
