// 函数: sub_141f43350
// 地址: 0x141f43350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

if (*(rax + 0x118) == 1)
    int32_t* rax_1 = sub_141f3c970(arg1)
    
    if (arg1[0x48] == 0 && rax_1 != 0)
        void*** rax_2 = j_sub_140a82f30(0x68)
        void*** rcx_1 = rax_2
        
        if (rax_2 == 0)
            rcx_1 = rax_2
        else
            rax_2[1].d = 0xffffffff
            *(rax_2 + 0xc) = 4
            __builtin_memset(&rcx_1[2], 0, 0x18)
            rcx_1[5] = -0x3810000020000000
            __builtin_memset(&rcx_1[6], 0, 0x17)
            *rcx_1 = &data_143276f60
            rcx_1[9] = 0
            rcx_1[0xa].d = 0
            rcx_1[0xb] = 0
            rcx_1[0xc] = 0
        
        void* rsi_1 = &rax_1[8]
        arg1[0x48] = rcx_1
        int32_t temp0_1 = *(rsi_1 + 8)
        
        if (temp0_1 == 0)
            rsi_1 = &arg1[0x49]
            sub_141f3b470(&rax_1[4], *rax_1, *(arg1 + 0x20c), rsi_1)
            rcx_1 = arg1[0x48]
        
        int32_t r10_1 = *rax_1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r10_1)
        int32_t r8_1
        
        if (temp0_1 == 0)
            r8_1 = 0x20
        else
            r8_1 = 0x1f - temp0_2
        
        int32_t r8_3 = r8_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(r10_1 - 1)
        int32_t r9_2
        
        if (r8_3 == 0)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rcx_1[9].d = r10_1
        rcx_1[0xa].d = 2
        rcx_1[0xc] = rsi_1
        *(rcx_1 + 0x4c) = ((0x20 - r9_2) & not.d(r8_3)) + 1
        sub_141997e80(arg1[0x48])

return sub_141f435c0(arg1) __tailcall
