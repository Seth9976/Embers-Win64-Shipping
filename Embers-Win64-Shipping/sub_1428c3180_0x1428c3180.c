// 函数: sub_1428c3180
// 地址: 0x1428c3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0
*arg2 = 0
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    
    if (rax_1 != 0)
        if (sub_142890290(*(arg1 + 8)) == 0)
            *arg2 |= 1
        
        if (sub_142890280(*(arg1 + 0x10)) != 0)
            *arg2 |= 8
        else if (sub_142890300(*(arg1 + 0x10)) != 0)
            *arg2 |= 8
        else if (sub_1428902b0(*(arg1 + 0x10)) != 0)
            *arg2 |= 8
        
        if (sub_142890040(rax_1, *(arg1 + 8)) != 0 && sub_1428f53f0(rax_1, 1) != 0)
            if (sub_14288fc80(*(arg1 + 0x10), rax_1) s>= 0)
                *arg2 |= 8
            
            rdi = 1
    
    sub_1428d8a60(rax)
    sub_1428d8ae0(rax)

return zx.q(rdi)
