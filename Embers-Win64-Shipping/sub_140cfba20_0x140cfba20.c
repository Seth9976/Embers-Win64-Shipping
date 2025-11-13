// 函数: sub_140cfba20
// 地址: 0x140cfba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rdi = arg1[1]
int32_t r8 = rdi[1].d

if (r8 != *(rdi + 0x34))
    sub_140cfb1f0(arg1, 0, r8 - *(rdi + 0x34))
    rdi = arg1[1]
label_140cfba57:
    rdi[1].d = 0
    
    if (arg2 != *(rdi + 0xc))
        sub_140ce4fc0(rdi, arg2, arg1[4].d)
    
    rdi[6].d = 0xffffffff
    *(rdi + 0x34) = 0
    int32_t rax_2 = (arg2 + 0x1f) & 0xffffffe0
    rdi[5].d = 0
    
    if (*(rdi + 0x2c) != rax_2)
        *(rdi + 0x2c) = rax_2
        sub_140d0bc80(&rdi[2], 0)
    
    int32_t r8_4
    
    if (arg2 u< 4)
        r8_4 = 1
    else
        uint32_t rax_4 = arg2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_4 + 8)
        int32_t rcx_2
        
        if (rax_4 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_1
        
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rax_4 + 7)
        char r8_3
        
        if (rax_4 == 0xfffffff9)
            r8_3 = 0x20
        else
            r8_3 = 0x1f - temp0_2
        
        r8_4 = 1 << ((not.d(rcx_2 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    if (arg2 != 0)
        int32_t rax_7 = rdi[9].d
        
        if (rax_7 == 0 || rax_7 != r8_4)
            rdi[9].d = r8_4
            sub_1405a4aa0(&rdi[7], 0, r8_4, 4)
    
    int64_t rcx_8 = sx.q(rdi[9].d)
    void* rdx_2 = &rdi[7]
    void* rax = *(rdx_2 + 8)
    
    if (rcx_8 s> 0)
        if (rax != 0)
            rdx_2 = rax
        
        __builtin_memset(rdx_2, 0xffffffff, rcx_8 << 2)
else if (arg2 != 0)
    goto label_140cfba57
