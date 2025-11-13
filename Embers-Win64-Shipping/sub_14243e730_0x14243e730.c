// 函数: sub_14243e730
// 地址: 0x14243e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_5 = arg1[6].d

if (rdx_5 s>= 0)
    char rax_1 = 0xa
    char rcx
    
    if (rdx_5 + 0xa s>= 0xa)
        rcx = 0x12
        
        if (rdx_5 + 0xa s< 0x12)
            rcx = (rdx_5 + 0xa).b
    else
        rcx = 0xa
    
    int32_t r10_1 = 1
    int32_t rcx_2 = arg1[7].d + 6
    
    if (rcx_2 s< 6)
        rax_1 = 6
    else if (rcx_2 s< 0xa)
        rax_1 = rcx_2.b
    
    arg1[6].d = 0xffffffff
    int32_t temp0_1 = divs.dp.d(sx.q(1 << rcx), 1 << rax_1)
    int32_t rcx_4 = 0
    
    if (temp0_1 s>= 1)
        r10_1 = temp0_1
    
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(r10_1)
    
    if (temp0_1 != 1)
        rcx_4 = temp0_2
    
    *(arg1 + 0x34) = rcx_4

if (arg1[5].b == 1)
    arg1[5].b = 2

return sub_140ce3290(arg1) __tailcall
