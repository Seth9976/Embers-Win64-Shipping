// 函数: sub_142c2bd00
// 地址: 0x142c2bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
*(arg1[1] + 0x5c) = 0
uint64_t result = arg1[1]

while (*(result + 0x58) != 0)
    void* r10_1 = arg1[1]
    uint64_t rsi_1 = zx.q(*(r10_1 + 0x5c))
    int32_t rbp_1 = *(r10_1 + 0x60)
    uint32_t r11_1
    
    if (rsi_1.d u>= rbp_1)
        r11_1 = 0
    else
        int32_t rdx = *(*(r10_1 + 0x70) + rsi_1 * 0x14)
        void* rcx_1 = *arg1
        
        if (rdx != 0xffff)
            void* r8_2 = zx.q(*(rcx_1 + 3)) + (zx.q(*(rcx_1 + 2)) << 8) + rcx_1
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
        + (zx.q(r8_3[zx.q(r8_3[5]) + (zx.q(r8_3[4]) << 8) + zx.q(r9_3 * r15 + r11_1)]) << 3)]
    
    if (r15 != 0)
        int32_t rax_15
        
        if (*(r10_1 + 0x59) == 0)
            rax_15 = rsi_1.d
        else
            rax_15 = *(r10_1 + 0x64)
        
        if (rax_15 != 0 && rsi_1.d u< rbp_1 && (((*(r10_1 + 0x5c) != rbp_1 || arg2[0x10] != 0) && (
                zx.w(*(rbx_1 + 4)) * 0x100 + zx.w(*(rbx_1 + 5)) != 0xffff
                || zx.w(*(rbx_1 + 6)) * 0x100 + zx.w(*(rbx_1 + 7)) != 0xffff))
                || zx.w(*rbx_1) * 0x100 != neg.w(zx.w(*(rbx_1 + 1)))
                || zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)) != 0x4000))
            int32_t rdx_13
            
            if (*(r10_1 + 0x59) == 0)
                rdx_13 = rsi_1.d
            else
                rdx_13 = *(r10_1 + 0x64)
            
            sub_142bf5b60(r10_1, rdx_13 - 1, (rsi_1 + 1).d)
    
    void* r10_2 = arg1[1]
    int32_t rsi_2 = *(r10_2 + 0x5c)
    
    if (rsi_2 + 2 u<= *(r10_2 + 0x60))
        char* r8_5 = *arg1
        uint32_t r9_7 = zx.d(r8_5[1]) + (zx.d(*r8_5) << 8)
        int32_t rax_27
        rax_27.b = r9_7 == 0
        void* r8_6 = &r8_5[zx.q(r8_5[7]) + (zx.q(r8_5[6]) << 8)
            + (zx.q(r8_5[(zx.q(r8_5[4]) << 8) + zx.q(r8_5[5]) + zx.q(rax_27 + r9_7 * r15)]) << 3)]
        
        if ((rsi_2 != *(r10_2 + 0x60) || arg2[0x10] != 0) && (
                zx.w(*(r8_6 + 4)) * 0x100 + zx.w(*(r8_6 + 5)) != 0xffff
                || zx.w(*(r8_6 + 6)) * 0x100 + zx.w(*(r8_6 + 7)) != 0xffff) && 2 u>= 2)
            sub_142bf5c70(r10_2, rsi_2, rsi_2 + 2)
    
    sub_142c35220(arg2, arg1, rbx_1)
    char* rdx_22 = *arg1
    void* r10_3 = arg1[1]
    result = zx.q(divs.dp.d(
        sx.q(((zx.d(*rbx_1) - zx.d(rdx_22[4])) << 8) - zx.d(rdx_22[5]) + zx.d(*(rbx_1 + 1))), 
        (zx.d(*rdx_22) << 8) + zx.d(rdx_22[1])))
    r15 = result.d
    
    if (*(r10_3 + 0x5c) == *(r10_3 + 0x60))
        break
    
    int32_t rcx_19
    
    if ((0x4000 & (zx.w(*(rbx_1 + 3)) + zx.w(*(rbx_1 + 2)) * 0x100)) != 0)
        rcx_19 = *(r10_3 + 0x30)
        *(r10_3 + 0x30) = rcx_19 - 1
    
    if ((0x4000 & (zx.w(*(rbx_1 + 3)) + zx.w(*(rbx_1 + 2)) * 0x100)) == 0 || rcx_19 s<= 0)
        void* rbx_2 = arg1[1]
        
        if (*(rbx_2 + 0x59) == 0)
            *(rbx_2 + 0x5c) += 1
        else if (*(rbx_2 + 0x78) != *(rbx_2 + 0x70) || *(rbx_2 + 0x64) != *(rbx_2 + 0x5c))
            if (sub_142bf50b0(rbx_2, 1, 1) != 0)
                int64_t rdx_25 = *(rbx_2 + 0x70)
                uint64_t r9_12 = zx.q(*(rbx_2 + 0x5c)) * 5
                uint64_t rcx_21 = zx.q(*(rbx_2 + 0x64)) * 5
                int64_t rax_45 = *(rbx_2 + 0x78)
                *(rax_45 + (rcx_21 << 2)) = *(rdx_25 + (r9_12 << 2))
                *(rax_45 + (rcx_21 << 2) + 0x10) = *(rdx_25 + (r9_12 << 2) + 0x10)
                *(rbx_2 + 0x64) += 1
                *(rbx_2 + 0x5c) += 1
        else
            *(rbx_2 + 0x64) += 1
            *(rbx_2 + 0x5c) += 1
    
    result = arg1[1]

return result
