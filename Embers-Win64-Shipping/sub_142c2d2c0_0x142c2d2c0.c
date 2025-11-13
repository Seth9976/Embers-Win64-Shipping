// 函数: sub_142c2d2c0
// 地址: 0x142c2d2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bf4e80(arg1[1])
uint32_t r14 = 0
*(arg1[1] + 0x5c) = 0

while (*(arg1[1] + 0x58) != 0)
    void* rbx_1 = arg1[1]
    uint64_t rbp_1 = zx.q(*(rbx_1 + 0x5c))
    int32_t r15_1 = *(rbx_1 + 0x60)
    uint32_t r11_1
    
    if (rbp_1.d u>= r15_1)
        r11_1 = 0
    else
        void* rdx = *arg1
        int32_t r10_1 = *(*(rbx_1 + 0x70) + rbp_1 * 0x14)
        
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
    void* rsi_1 = &r10_2[((zx.q(r10_2[0xe]) + ((zx.q(r10_2[0xd]) + (zx.q(r10_2[0xc]) << 8)) << 8))
        << 8) + zx.q(r10_2[0xf])
        + ((zx.q(*(r8_3 + (r9_11 << 1))) << 8) + zx.q(*(r8_3 + (r9_11 << 1) + 1))) * 6]
    
    if (r14 != 0)
        int32_t rax_28
        
        if (*(rbx_1 + 0x59) == 0)
            rax_28 = rbp_1.d
        else
            rax_28 = *(rbx_1 + 0x64)
        
        if (rax_28 != 0 && rbp_1.d u< r15_1 && (
                (1 & ((zx.w(*(rsi_1 + 2)) * 0x100 + zx.w(*(rsi_1 + 3))) u>> 0xd).b) != 0
                || zx.w(*rsi_1) * 0x100 != neg.w(zx.w(*(rsi_1 + 1)))
                || zx.w(*(rsi_1 + 3)) + zx.w(*(rsi_1 + 2)) * 0x100 != 0x4000))
            if (*(rbx_1 + 0x59) == 0)
                sub_142bf5b60(rbx_1, rbp_1.d - 1, (rbp_1 + 1).d)
            else
                sub_142bf5b60(rbx_1, *(rbx_1 + 0x64) - 1, (rbp_1 + 1).d)
    
    void* r11_2 = arg1[1]
    int32_t rbp_2 = *(r11_2 + 0x5c)
    
    if (rbp_2 + 2 u<= *(r11_2 + 0x60))
        char* r10_3 = *arg1
        uint32_t r9_16 = (zx.d(r10_3[1]) << 0x10) + (zx.d(r10_3[2]) << 8) + (zx.d(*r10_3) << 0x18)
            + zx.d(r10_3[3])
        void* r8_8 = &r10_3[((zx.q(r10_3[0xa]) + ((zx.q(r10_3[9]) + (zx.q(r10_3[8]) << 8)) << 8))
            << 8) + zx.q(r10_3[0xb])]
        void* rdx_15 = &r10_3[((zx.q(r10_3[0xe])
            + (((zx.q(r10_3[0xc]) << 8) + zx.q(r10_3[0xd])) << 8)) << 8) + zx.q(r10_3[0xf])]
        int32_t rax_47
        rax_47.b = r9_16 == 0
        uint64_t rax_48 = zx.q(rax_47 + r9_16 * r14)
        uint64_t rax_50 =
            ((zx.q(*(r8_8 + (rax_48 << 1))) << 8) + zx.q(*(r8_8 + (rax_48 << 1) + 1))) * 3
        
        if ((1 & ((zx.w(*(rdx_15 + (rax_50 << 1) + 2)) * 0x100
                + zx.w(*(rdx_15 + (rax_50 << 1) + 3))) u>> 0xd).b) != 0 && 2 u>= 2)
            sub_142bf5c70(r11_2, rbp_2, rbp_2 + 2)
    
    sub_142c35e30(arg2, arg1, rsi_1)
    void* r8_11 = arg1[1]
    r14 = (zx.d(*rsi_1) << 8) + zx.d(*(rsi_1 + 1))
    
    if (*(r8_11 + 0x5c) == *(r8_11 + 0x60))
        break
    
    int32_t rcx_32
    
    if ((0x4000 & (zx.w(*(rsi_1 + 2)) * 0x100 + zx.w(*(rsi_1 + 3)))) != 0)
        rcx_32 = *(r8_11 + 0x30)
        *(r8_11 + 0x30) = rcx_32 - 1
    
    if ((0x4000 & (zx.w(*(rsi_1 + 2)) * 0x100 + zx.w(*(rsi_1 + 3)))) == 0 || rcx_32 s<= 0)
        void* rbx_3 = arg1[1]
        
        if (*(rbx_3 + 0x59) == 0)
            *(rbx_3 + 0x5c) += 1
        else if (*(rbx_3 + 0x78) != *(rbx_3 + 0x70) || *(rbx_3 + 0x64) != *(rbx_3 + 0x5c))
            if (sub_142bf50b0(rbx_3, 1, 1) != 0)
                int64_t rdx_21 = *(rbx_3 + 0x70)
                uint64_t r9_20 = zx.q(*(rbx_3 + 0x5c)) * 5
                uint64_t rcx_34 = zx.q(*(rbx_3 + 0x64)) * 5
                int64_t rax_63 = *(rbx_3 + 0x78)
                *(rax_63 + (rcx_34 << 2)) = *(rdx_21 + (r9_20 << 2))
                *(rax_63 + (rcx_34 << 2) + 0x10) = *(rdx_21 + (r9_20 << 2) + 0x10)
                *(rbx_3 + 0x64) += 1
                *(rbx_3 + 0x5c) += 1
        else
            *(rbx_3 + 0x64) += 1
            *(rbx_3 + 0x5c) += 1

while (*(arg1[1] + 0x58) != 0)
    void* rbx_4 = arg1[1]
    
    if (*(rbx_4 + 0x5c) u>= *(rbx_4 + 0x60))
        break
    
    if (*(rbx_4 + 0x59) == 0)
        *(rbx_4 + 0x5c) += 1
    else if (*(rbx_4 + 0x78) != *(rbx_4 + 0x70) || *(rbx_4 + 0x64) != *(rbx_4 + 0x5c))
        if (sub_142bf50b0(rbx_4, 1, 1) != 0)
            int64_t rdx_22 = *(rbx_4 + 0x70)
            uint64_t r9_21 = zx.q(*(rbx_4 + 0x5c)) * 5
            uint64_t rcx_36 = zx.q(*(rbx_4 + 0x64)) * 5
            int64_t rax_73 = *(rbx_4 + 0x78)
            *(rax_73 + (rcx_36 << 2)) = *(rdx_22 + (r9_21 << 2))
            *(rax_73 + (rcx_36 << 2) + 0x10) = *(rdx_22 + (r9_21 << 2) + 0x10)
            *(rbx_4 + 0x64) += 1
            *(rbx_4 + 0x5c) += 1
    else
        *(rbx_4 + 0x64) += 1
        *(rbx_4 + 0x5c) += 1

return sub_142bf5b20(arg1[1]) __tailcall
