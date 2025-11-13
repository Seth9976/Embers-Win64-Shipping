// 函数: sub_141b50c00
// 地址: 0x141b50c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_5

if (arg2 u< 4)
    rax_5 = 1
else
    uint32_t rax_1 = arg2 u>> 1
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rax_1 + 8)
    int32_t rcx
    
    if (rax_1 == 0xfffffff8)
        rcx = 0x20
    else
        rcx = 0x1f - temp0_2
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_1 + 7)
    
    if (rax_1 == 0xfffffff9)
        rax_5 = 1
    else
        rax_5 = 1 << ((not.d(rcx << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))

if (arg2 s> 0)
    int32_t rcx_5 = *(arg1 + 0x48)
    
    if (rcx_5 == 0 || rcx_5 s< rax_5)
    label_141b50c8a:
        *(arg1 + 0x48) = rax_5
        sub_1417f3bd0(arg1)
        int64_t rax_6
        rax_6.b = 1
        return rax_6
    
    if (rcx_5 s> rax_5 && arg3 != 0)
        goto label_141b50c8a

rax_5.b = 0
return rax_5
