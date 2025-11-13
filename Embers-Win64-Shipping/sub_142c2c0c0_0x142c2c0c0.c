// 函数: sub_142c2c0c0
// 地址: 0x142c2c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bf4e80(arg1[1])
uint32_t r14 = 0
*(arg1[1] + 0x5c) = 0

while (*(arg1[1] + 0x58) != 0)
    void* rsi_1 = arg1[1]
    uint64_t rbp_1 = zx.q(*(rsi_1 + 0x5c))
    int32_t r15_1 = *(rsi_1 + 0x60)
    uint32_t r11_1
    
    if (rbp_1.d u>= r15_1)
        r11_1 = 0
    else
        void* rdx = *arg1
        int32_t r10_1 = *(*(rsi_1 + 0x70) + rbp_1 * 0x14)
        
        if (r10_1 != 0xffff)
            void* rax_8 = sub_142c31d20(
                zx.q(*(rdx + 7)) + ((zx.q(*(rdx + 6))
                    + (((zx.q(*(rdx + 4)) << 8) + zx.q(*(rdx + 5))) << 8)) << 8) + rdx, 
                r10_1, arg1[2].d)
            
            if (rax_8 == 0)
                r11_1 = 1
            else
                r11_1 = zx.d((zx.d(*rax_8) << 8).w + zx.w(*(rax_8 + 1)))
        else
            r11_1 = 2
    
    char* r10_2 = *arg1
    uint32_t r9_9 =
        (zx.d(r10_2[1]) << 0x10) + (zx.d(r10_2[2]) << 8) + (zx.d(*r10_2) << 0x18) + zx.d(r10_2[3])
    
    if (r11_1 u>= r9_9)
        r11_1 = 1
    
    uint64_t r9_11 = zx.q(r9_9 * r14 + r11_1)
    void* r8_3 = &r10_2[((zx.q(r10_2[0xa]) + (((zx.q(r10_2[8]) << 8) + zx.q(r10_2[9])) << 8)) << 8)
        + zx.q(r10_2[0xb])]
    void* rbx_1 = &r10_2[((zx.q(r10_2[0xe]) + ((zx.q(r10_2[0xd]) + (zx.q(r10_2[0xc]) << 8)) << 8))
        << 8) + zx.q(r10_2[0xf])
        + (((zx.q(*(r8_3 + (r9_11 << 1))) << 8) + zx.q(*(r8_3 + (r9_11 << 1) + 1))) << 3)]
    
    if (r14 != 0)
        int32_t rax_27
        
        if (*(rsi_1 + 0x59) == 0)
            rax_27 = rbp_1.d
        else
            rax_27 = *(rsi_1 + 0x64)
        
        if (rax_27 != 0 && rbp_1.d u< r15_1 && ((
                (0x3ff & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) != 0 && (
                zx.w(*(rbx_1 + 4)) * 0x100 + zx.w(*(rbx_1 + 5)) != 0xffff
                || zx.w(*(rbx_1 + 6)) * 0x100 + zx.w(*(rbx_1 + 7)) != 0xffff))
                || zx.w(*rbx_1) * 0x100 != neg.w(zx.w(*(rbx_1 + 1)))
                || zx.w(*(rbx_1 + 3)) + zx.w(*(rbx_1 + 2)) * 0x100 != 0x4000))
            if (*(rsi_1 + 0x59) == 0)
                sub_142bf5b60(rsi_1, rbp_1.d - 1, (rbp_1 + 1).d)
            else
                sub_142bf5b60(rsi_1, *(rsi_1 + 0x64) - 1, (rbp_1 + 1).d)
    
    void* rbp_2 = arg1[1]
    int32_t rsi_2 = *(rbp_2 + 0x5c)
    
    if (rsi_2 + 2 u<= *(rbp_2 + 0x60))
        char* r10_3 = *arg1
        uint32_t rdx_22 = (zx.d(r10_3[1]) << 0x10) + (zx.d(r10_3[2]) << 8) + (zx.d(*r10_3) << 0x18)
            + zx.d(r10_3[3])
        void* r9_13 = &r10_3[((zx.q(r10_3[0xa]) + (((zx.q(r10_3[8]) << 8) + zx.q(r10_3[9])) << 8))
            << 8) + zx.q(r10_3[0xb])]
        void* r8_8 = &r10_3[((zx.q(r10_3[0xe])
            + (((zx.q(r10_3[0xc]) << 8) + zx.q(r10_3[0xd])) << 8)) << 8) + zx.q(r10_3[0xf])]
        int32_t rax_47
        rax_47.b = rdx_22 == 0
        uint64_t rcx_30 = zx.q(rdx_22 * r14 + rax_47)
        uint64_t rdx_24 = zx.q(*(r9_13 + (rcx_30 << 1) + 1)) + (zx.q(*(r9_13 + (rcx_30 << 1))) << 8)
        void* r9_14 = r8_8 + (rdx_24 << 3)
        
        if ((0x3ff
                & (zx.w(*(r8_8 + (rdx_24 << 3) + 2)) * 0x100 + zx.w(*(r8_8 + (rdx_24 << 3) + 3)))) != 0
                && (zx.w(*(r9_14 + 5)) + zx.w(*(r9_14 + 4)) * 0x100 != 0xffff
                || zx.w(*(r9_14 + 7)) + zx.w(*(r9_14 + 6)) * 0x100 != 0xffff) && 2 u>= 2)
            sub_142bf5c70(rbp_2, rsi_2, rsi_2 + 2)
    
    sub_142c353e0(arg2, arg1, rbx_1)
    void* r8_12 = arg1[1]
    r14 = (zx.d(*rbx_1) << 8) + zx.d(*(rbx_1 + 1))
    
    if (*(r8_12 + 0x5c) == *(r8_12 + 0x60))
        break
    
    int32_t rcx_35
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) != 0)
        rcx_35 = *(r8_12 + 0x30)
        *(r8_12 + 0x30) = rcx_35 - 1
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) == 0 || rcx_35 s<= 0)
        void* rbx_2 = arg1[1]
        
        if (*(rbx_2 + 0x59) == 0)
            *(rbx_2 + 0x5c) += 1
        else if (*(rbx_2 + 0x78) != *(rbx_2 + 0x70) || *(rbx_2 + 0x64) != *(rbx_2 + 0x5c))
            if (sub_142bf50b0(rbx_2, 1, 1) != 0)
                int64_t rdx_33 = *(rbx_2 + 0x70)
                uint64_t r9_17 = zx.q(*(rbx_2 + 0x5c)) * 5
                uint64_t rcx_37 = zx.q(*(rbx_2 + 0x64)) * 5
                int64_t rax_60 = *(rbx_2 + 0x78)
                *(rax_60 + (rcx_37 << 2)) = *(rdx_33 + (r9_17 << 2))
                *(rax_60 + (rcx_37 << 2) + 0x10) = *(rdx_33 + (r9_17 << 2) + 0x10)
                *(rbx_2 + 0x64) += 1
                *(rbx_2 + 0x5c) += 1
        else
            *(rbx_2 + 0x64) += 1
            *(rbx_2 + 0x5c) += 1

while (*(arg1[1] + 0x58) != 0)
    void* rbx_3 = arg1[1]
    
    if (*(rbx_3 + 0x5c) u>= *(rbx_3 + 0x60))
        break
    
    if (*(rbx_3 + 0x59) == 0)
        *(rbx_3 + 0x5c) += 1
    else if (*(rbx_3 + 0x78) != *(rbx_3 + 0x70) || *(rbx_3 + 0x64) != *(rbx_3 + 0x5c))
        if (sub_142bf50b0(rbx_3, 1, 1) != 0)
            int64_t rdx_34 = *(rbx_3 + 0x70)
            uint64_t r9_18 = zx.q(*(rbx_3 + 0x5c)) * 5
            uint64_t rcx_39 = zx.q(*(rbx_3 + 0x64)) * 5
            int64_t rax_70 = *(rbx_3 + 0x78)
            *(rax_70 + (rcx_39 << 2)) = *(rdx_34 + (r9_18 << 2))
            *(rax_70 + (rcx_39 << 2) + 0x10) = *(rdx_34 + (r9_18 << 2) + 0x10)
            *(rbx_3 + 0x64) += 1
            *(rbx_3 + 0x5c) += 1
    else
        *(rbx_3 + 0x64) += 1
        *(rbx_3 + 0x5c) += 1

return sub_142bf5b20(arg1[1]) __tailcall
