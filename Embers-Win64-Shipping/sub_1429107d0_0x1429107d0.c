// 函数: sub_1429107d0
// 地址: 0x1429107d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(arg1 + 0x28) == 0 && arg3 == 0x10)
    int32_t* rax_1 = sub_1428c35d0()
    
    if (rax_1 != 0)
        if (sub_1428e61a0(rax_1, arg2, 0x10) != 0)
            *(arg1 + 0x28) = rax_1
            return 1
        
        sub_1428c3460(rax_1)

return 0
