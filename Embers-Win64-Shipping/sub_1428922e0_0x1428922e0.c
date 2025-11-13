// 函数: sub_1428922e0
// 地址: 0x1428922e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0)
        int64_t rdx_1 = *(rax_1 + 0x28)
        
        if (rdx_1 != 0)
            int32_t result = rdx_1()
            
            if (result == 0)
                return result
        
        int64_t rcx = arg1[0xe]
        
        if (rcx != 0)
            int64_t rdx_2 = sx.q(*(*arg1 + 0x30))
            
            if (rdx_2.d != 0)
                sub_1428b8960(rcx, rdx_2)
    
    sub_1428a6780(arg1[0xe])
    sub_1428af710(arg1[1])
    memset(arg1, 0, 0xa0)

return 1
