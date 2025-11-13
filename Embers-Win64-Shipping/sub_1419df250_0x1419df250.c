// 函数: sub_1419df250
// 地址: 0x1419df250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419df320(arg1, arg2, arg3)

if ((arg1[5].b & 1) != 0)
    int64_t rcx = arg2[8]
    
    if (rcx != 0)
        arg2[8] = sub_140a84c80(rcx, 0, 0)
    
    arg2[9].d = 0
    int32_t rdx_1 = arg2[1].d - *(arg2 + 0x34)
    int32_t rax_6
    
    if (rdx_1 u< 4)
        rax_6 = 1
    else
        uint32_t rax_3 = rdx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
        int32_t rcx_1
        
        if (rax_3 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_3 + 7)
        
        if (rax_3 == 0xfffffff9)
            rax_6 = 1
        else
            rax_6 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
    
    if (rdx_1 s> 0)
        arg2[9].d = rax_6
        sub_1405c0420(arg2)

return arg1
