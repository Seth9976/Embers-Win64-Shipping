// 函数: sub_140a594a0
// 地址: 0x140a594a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0)
    return 

if (*(arg1 + 0xac) s< 0x1312d0)
    sub_140a5a910(arg1 + 0xa0, 0x1312d0)

int32_t rax_2 = *(arg1 + 0x58) - *(arg1 + 0x84)

if (rax_2 s< 0x1312d0)
    sub_1409d9850(arg1 + 0x50, 0x1312d0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(0x98970)
    int32_t rcx_2
    
    if (rax_2 == 0x1312d0)
        rcx_2 = 0x20
    else
        rcx_2 = 0x1f - temp0_1
    
    int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(0x9896f)
    char rdx_1
    
    if (rcx_4 == 0)
        rdx_1 = 0x20
    else
        rdx_1 = 0x1f - temp0_2
    
    int32_t rax_6 = *(arg1 + 0x98)
    int32_t rdx_2 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_1))
    
    if (rax_6 == 0 || rax_6 s< rdx_2)
        *(arg1 + 0x98) = rdx_2
        sub_1408076e0(arg1 + 0x50)

int32_t rax_8 = *(arg1 + 0x108) - *(arg1 + 0x134)

if (rax_8 s< 0x5b8d80)
    sub_1409d9850(arg1 + 0x100, 0x5b8d80)
    uint64_t rflags_3
    int32_t temp0_3
    temp0_3, rflags_3 = _bit_scan_reverse(0x2dc6c8)
    int32_t rcx_9
    
    if (rax_8 == 0x5b8d80)
        rcx_9 = 0x20
    else
        rcx_9 = 0x1f - temp0_3
    
    int32_t rcx_11 = rcx_9 << 0x1a s>> 0x1f
    uint64_t rflags_4
    char temp0_4
    temp0_4, rflags_4 = _bit_scan_reverse(0x2dc6c7)
    char rdx_3
    
    if (rcx_11 == 0)
        rdx_3 = 0x20
    else
        rdx_3 = 0x1f - temp0_4
    
    int32_t rax_12 = *(arg1 + 0x148)
    int32_t rdx_4 = 1 << ((not.d(rcx_11)).b & (0x20 - rdx_3))
    
    if (rax_12 == 0 || rax_12 s< rdx_4)
        *(arg1 + 0x148) = rdx_4
        sub_1405c0690(arg1 + 0x100)

int32_t rax = *(arg1 + 0xb8) - *(arg1 + 0xe4)

if (rax s< 0x7a1200)
    sub_1409d9850(arg1 + 0xb0, 0x7a1200)
    uint64_t rflags_5
    int32_t temp0_5
    temp0_5, rflags_5 = _bit_scan_reverse(0x3d0908)
    int32_t rax_14
    
    if (rax == 0x7a1200)
        rax_14 = 0x20
    else
        rax_14 = 0x1f - temp0_5
    
    int32_t rax_16 = rax_14 << 0x1a s>> 0x1f
    uint64_t rflags_6
    char temp0_6
    temp0_6, rflags_6 = _bit_scan_reverse(0x3d0907)
    char rdi_1
    
    if (rax_16 == 0)
        rdi_1 = 0x20
    else
        rdi_1 = 0x1f - temp0_6
    
    rax = *(arg1 + 0xf8)
    int32_t r14_1 = 1 << ((0x20 - rdi_1) & (not.d(rax_16)).b)
    
    if (rax == 0 || rax s< r14_1)
        *(arg1 + 0xf8) = r14_1
        sub_1405c0690(arg1 + 0xb0)

*(arg1 + 0x10) = 1
