// 函数: sub_1428c3280
// 地址: 0x1428c3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
*arg3 = 0
int64_t* rax = sub_1428d8d60()

if (rax != 0)
    sub_1428d8e50(rax)
    int64_t* rax_1 = sub_1428d8ba0(rax)
    
    if (rax_1 != 0 && sub_142890900(rax_1, 1) != 0)
        if (sub_14288fc80(arg2, rax_1) s<= 0)
            *arg3 |= 1
        
        if (sub_142890040(rax_1, *(arg1 + 8)) != 0 && sub_1428f53f0(rax_1, 1) != 0)
            if (sub_14288fc80(arg2, rax_1) s>= 0)
                *arg3 |= 2
            
            int64_t* r8 = *(arg1 + 0x40)
            
            if (r8 == 0)
                rbp = 1
            else if (sub_142905ff0(rax_1, arg2, r8, *(arg1 + 8), rax) != 0)
                if (sub_1428902b0(rax_1) == 0)
                    *arg3 |= 4
                
                rbp = 1
    
    sub_1428d8a60(rax)
    sub_1428d8ae0(rax)

return zx.q(rbp)
