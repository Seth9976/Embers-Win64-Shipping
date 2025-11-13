// 函数: sub_142c2d760
// 地址: 0x142c2d760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bf4e80(arg1[1])
int32_t r14 = 0
*(arg1[1] + 0x5c) = 0

while (*(arg1[1] + 0x58) != 0)
    void* r10_1 = arg1[1]
    uint64_t rsi_1 = zx.q(*(r10_1 + 0x5c))
    int32_t rbp_1 = *(r10_1 + 0x60)
    uint32_t r11_1
    
    if (rsi_1.d u>= rbp_1)
        r11_1 = 0
    else
        int32_t rdx = *(*(r10_1 + 0x70) + rsi_1 * 0x14)
        void* rcx_2 = *arg1
        
        if (rdx != 0xffff)
            void* r8_2 = zx.q(*(rcx_2 + 3)) + (zx.q(*(rcx_2 + 2)) << 8) + rcx_2
            uint64_t rdx_2 = zx.q(rdx - (zx.d(*r8_2) << 8) - zx.d(*(r8_2 + 1)))
            
            if (rdx_2.d u< (zx.d(*(r8_2 + 2)) << 8) + zx.d(*(r8_2 + 3)))
                r11_1 = zx.d(*(rdx_2 + r8_2 + 4))
            else
                r11_1 = 1
        else
            r11_1 = 2
    
    char* r8_3 = *arg1
    uint32_t r9_3 = (zx.d(*r8_3) << 8) + zx.d(r8_3[1])
    
    if (r11_1 u>= r9_3)
        r11_1 = 1
    
    void* rbx_1 = &r8_3[(zx.q(r8_3[6]) << 8) + zx.q(r8_3[7])
        + (zx.q(r8_3[zx.q(r8_3[5]) + (zx.q(r8_3[4]) << 8) + zx.q(r9_3 * r14 + r11_1)]) << 2)]
    
    if (r14 != 0)
        int32_t rax_16
        
        if (*(r10_1 + 0x59) == 0)
            rax_16 = rsi_1.d
        else
            rax_16 = *(r10_1 + 0x64)
        
        if (rax_16 != 0 && rsi_1.d u< rbp_1 && (
                (0x3fff & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) != 0
                || zx.w(*rbx_1) * 0x100 != neg.w(zx.w(*(rbx_1 + 1)))
                || zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)) != 0x4000))
            int32_t rdx_11
            
            if (*(r10_1 + 0x59) == 0)
                rdx_11 = rsi_1.d
            else
                rdx_11 = *(r10_1 + 0x64)
            
            sub_142bf5b60(r10_1, rdx_11 - 1, (rsi_1 + 1).d)
    
    void* rbp_2 = arg1[1]
    int32_t rsi_2 = *(rbp_2 + 0x5c)
    
    if (rsi_2 + 2 u<= *(rbp_2 + 0x60))
        char* r8_5 = *arg1
        uint32_t r9_8 = (zx.d(*r8_5) << 8) + zx.d(r8_5[1])
        void* rdx_14 = &r8_5[(zx.q(r8_5[6]) << 8) + zx.q(r8_5[7])]
        int32_t rax_27
        rax_27.b = r9_8 == 0
        uint64_t rcx_13 =
            zx.q(r8_5[(zx.q(r8_5[4]) << 8) + zx.q(r8_5[5]) + zx.q(rax_27 + r9_8 * r14)])
        
        if ((0x3fff &
                (zx.w(*(rdx_14 + (rcx_13 << 2) + 3)) + zx.w(*(rdx_14 + (rcx_13 << 2) + 2)) * 0x100)) != 0
                && 2 u>= 2)
            sub_142bf5c70(rbp_2, rsi_2, rsi_2 + 2)
    
    sub_142c36140(arg2, arg1, rbx_1)
    char* rdx_17 = *arg1
    void* r9_12 = arg1[1]
    r14 = divs.dp.d(
        sx.q(((zx.d(*rbx_1) - zx.d(rdx_17[4])) << 8) - zx.d(rdx_17[5]) + zx.d(*(rbx_1 + 1))), 
        (zx.d(*rdx_17) << 8) + zx.d(rdx_17[1]))
    
    if (*(r9_12 + 0x5c) == *(r9_12 + 0x60))
        break
    
    int32_t rcx_21
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) != 0)
        rcx_21 = *(r9_12 + 0x30)
        *(r9_12 + 0x30) = rcx_21 - 1
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) == 0 || rcx_21 s<= 0)
        void* rbx_2 = arg1[1]
        
        if (*(rbx_2 + 0x59) == 0)
            *(rbx_2 + 0x5c) += 1
        else if (*(rbx_2 + 0x78) != *(rbx_2 + 0x70) || *(rbx_2 + 0x64) != *(rbx_2 + 0x5c))
            if (sub_142bf50b0(rbx_2, 1, 1) != 0)
                int64_t rdx_20 = *(rbx_2 + 0x70)
                uint64_t r9_13 = zx.q(*(rbx_2 + 0x5c)) * 5
                uint64_t rcx_23 = zx.q(*(rbx_2 + 0x64)) * 5
                int64_t rax_44 = *(rbx_2 + 0x78)
                *(rax_44 + (rcx_23 << 2)) = *(rdx_20 + (r9_13 << 2))
                *(rax_44 + (rcx_23 << 2) + 0x10) = *(rdx_20 + (r9_13 << 2) + 0x10)
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
            int64_t rdx_21 = *(rbx_3 + 0x70)
            uint64_t r9_14 = zx.q(*(rbx_3 + 0x5c)) * 5
            uint64_t rcx_25 = zx.q(*(rbx_3 + 0x64)) * 5
            int64_t rax_54 = *(rbx_3 + 0x78)
            *(rax_54 + (rcx_25 << 2)) = *(rdx_21 + (r9_14 << 2))
            *(rax_54 + (rcx_25 << 2) + 0x10) = *(rdx_21 + (r9_14 << 2) + 0x10)
            *(rbx_3 + 0x64) += 1
            *(rbx_3 + 0x5c) += 1
    else
        *(rbx_3 + 0x64) += 1
        *(rbx_3 + 0x5c) += 1

return sub_142bf5b20(arg1[1]) __tailcall
