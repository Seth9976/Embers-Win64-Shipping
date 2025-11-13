// 函数: sub_1428a85d0
// 地址: 0x1428a85d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_1428a6a70(0x28)

if (rax != 0)
    *rax = 0x1000
    int64_t rax_1 = sub_1428a6730(0x1000)
    *(rax + 8) = rax_1
    
    if (rax_1 != 0)
        rax[1] = 0x1000
        int64_t rax_3 = sub_1428a6730(0x1000)
        *(rax + 0x18) = rax_3
        
        if (rax_3 == 0)
            sub_1428a6780(*(rax + 8))
            sub_1428a6780(rax)
            return 0
        
        *(arg1 + 0x38) = rax
        *(arg1 + 0x20) = 1
        *(arg1 + 0x28) = 0
        return 1
    
    sub_1428a6780(rax)

return 0
