// 函数: sub_142a40310
// 地址: 0x142a40310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6] &= 0xfd

if (*(arg1 + 0x30) u<= 0x100)
    void* rcx = *(arg1 + 0x48)
    uint64_t rdx_1
    
    if (rcx != 0)
        rdx_1 = zx.q(*(rcx + 4))
    
    if (rcx == 0 || *(rcx + 0x20) + rdx_1 - *(rcx + 0x10) u<= zx.q(rdx_1.w u>> 3))
        void* rcx_3 = *(arg1 + 0x40)
        uint64_t rdx_3
        
        if (rcx_3 != 0)
            rdx_3 = zx.q(*(rcx_3 + 4))
        
        if (rcx_3 == 0 || *(rcx_3 + 0x20) + rdx_3 - *(rcx_3 + 0x10) u<= zx.q(rdx_3.w u>> 3))
            return 

uint64_t r8

if ((arg1[6] & 1) == 0)
    r8 = (*(arg1 + 0x30) + 7) u>> 3
    
    if (r8 u<= 1)
        r8.b = 1
    else if (r8 u<= 8)
        r8.b += 1
        r8.b &= 0xfe
    else if (r8 u<= 0x40000)
        uint64_t rflags_1
        char temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse((r8 - 1).d)
        r8.b = ((r8 - 1) u>> (temp0_1 - 2)).b & 3
        r8.b -= 3
        r8.b += temp0_1 << 2
    else
        r8.b = 0x49
else
    r8.b = 0x4a

return sub_142a40080(arg1, *(arg1 + 0x38) + ((zx.q(r8.b) * 3 + 0x83) << 3), 0) __tailcall
