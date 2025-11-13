// 函数: sub_14289b730
// 地址: 0x14289b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void** rax = sub_1428a6a70(0x10)

if (rax != 0)
    void* rax_1 = sub_1428a7560(arg2)
    *rax = rax_1
    
    if (rax_1 != 0)
        int128_t* rax_3 = sub_1428a6a70(0x20)
        int128_t* rcx_2 = *rax
        rax[1] = rax_3
        
        if (rax_3 == 0)
            sub_1428a71f0(rcx_2)
            sub_1428a6780(rax)
            return 0
        
        *rax_3 = *rcx_2
        rax_3[1] = rcx_2[1]
        *(arg1 + 0x38) = rax
        *(arg1 + 0x24) = 1
        *(arg1 + 0x20) = 1
        *(arg1 + 0x30) = 0xffffffff
        return 1
    
    sub_1428a6780(rax)

return 0
