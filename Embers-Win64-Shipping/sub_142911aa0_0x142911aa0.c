// 函数: sub_142911aa0
// 地址: 0x142911aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = arg1[5]

if (arg1[2] != 0 || *(rax + 0x24) != 0)
    int32_t rcx = *(rax + 0x24)
    void* rax_2
    
    if (rcx == 0)
        rax_2 = sub_1428c1750()
    else
        rax_2 = sub_14294ab50(rcx)
    
    if (rax_2 != 0)
        sub_142896310(arg2, **arg1, rax_2)
        int32_t* rdx_1 = arg1[2]
        int32_t rax_4
        
        if (rdx_1 != 0)
            rax_4 = sub_142896470(arg2, rdx_1)
        
        if (rdx_1 == 0 || rax_4 != 0)
            return sub_14291a840(*(arg2 + 0x28)) __tailcall
else
    sub_1428a5670(5, 0x71, 0x6b, "crypto\dh\dh_pmeth.c", 0x194)

return 0
