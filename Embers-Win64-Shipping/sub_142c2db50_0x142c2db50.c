// 函数: sub_142c2db50
// 地址: 0x142c2db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r14 = 0
*(arg1[1] + 0x5c) = 0
uint64_t result = arg1[1]

while (*(result + 0x58) != 0)
    void* rbx_1 = arg1[1]
    uint64_t rbp_1 = zx.q(*(rbx_1 + 0x5c))
    int32_t r12_1 = *(rbx_1 + 0x60)
    uint32_t r11_1
    
    if (rbp_1.d u>= r12_1)
        r11_1 = 0
    else
        void* rdx = *arg1
        int32_t r10_1 = *(*(rbx_1 + 0x70) + rbp_1 * 0x14)
        
        if (r10_1 != 0xffff)
            void* rax_7 = sub_142c31d20(
                zx.q(*(rdx + 7)) + ((zx.q(*(rdx + 6))
                    + (((zx.q(*(rdx + 4)) << 8) + zx.q(*(rdx + 5))) << 8)) << 8) + rdx, 
                r10_1, arg1[2].d)
            
            if (rax_7 == 0)
                r11_1 = 1
            else
                r11_1 = zx.d((zx.d(*rax_7) << 8).w + zx.w(*(rax_7 + 1)))
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
    void* rdi_1 = &r10_2[((zx.q(r10_2[0xe]) + ((zx.q(r10_2[0xd]) + (zx.q(r10_2[0xc]) << 8)) << 8))
        << 8) + zx.q(r10_2[0xf])
        + (((zx.q(*(r8_3 + (r9_11 << 1))) << 8) + zx.q(*(r8_3 + (r9_11 << 1) + 1))) << 2)]
    
    if (r14 != 0)
        int32_t rax_26
        
        if (*(rbx_1 + 0x59) == 0)
            rax_26 = rbp_1.d
        else
            rax_26 = *(rbx_1 + 0x64)
        
        if (rax_26 != 0 && rbp_1.d u< r12_1 && (((*(rdi_1 + 3) & 0xf) != 0
                && *(arg2 + 4) u< *(arg2 + 8)) || zx.w(*rdi_1) * 0x100 != neg.w(zx.w(*(rdi_1 + 1)))
                || zx.w(*(rdi_1 + 3)) + zx.w(*(rdi_1 + 2)) * 0x100 != 0x4000))
            int32_t rdx_8
            
            if (*(rbx_1 + 0x59) == 0)
                rdx_8 = rbp_1.d
            else
                rdx_8 = *(rbx_1 + 0x64)
            
            sub_142bf5b60(rbx_1, rdx_8 - 1, (rbp_1 + 1).d)
    
    void* r11_2 = arg1[1]
    int32_t rbp_2 = *(r11_2 + 0x5c)
    
    if (rbp_2 + 2 u<= *(r11_2 + 0x60))
        char* r10_3 = *arg1
        uint32_t r9_16 = (zx.d(r10_3[1]) << 0x10) + (zx.d(r10_3[2]) << 8) + (zx.d(*r10_3) << 0x18)
            + zx.d(r10_3[3])
        void* r8_7 = &r10_3[((zx.q(r10_3[0xa]) + ((zx.q(r10_3[9]) + (zx.q(r10_3[8]) << 8)) << 8))
            << 8) + zx.q(r10_3[0xb])]
        int32_t rax_45
        rax_45.b = r9_16 == 0
        uint64_t rax_46 = zx.q(rax_45 + r9_16 * r14)
        
        if ((r10_3[((zx.q(r10_3[0xe]) + (((zx.q(r10_3[0xc]) << 8) + zx.q(r10_3[0xd])) << 8)) << 8)
                + zx.q(r10_3[0xf])
                + (((zx.q(*(r8_7 + (rax_46 << 1))) << 8) + zx.q(*(r8_7 + (rax_46 << 1) + 1))) << 2)
                + 3] & 0xf) != 0 && *(arg2 + 4) u< *(arg2 + 8) && 2 u>= 2)
            sub_142bf5c70(r11_2, rbp_2, rbp_2 + 2)
    
    sub_142c36480(arg2, arg1, rdi_1)
    void* r8_10 = arg1[1]
    r14 = (zx.d(*rdi_1) << 8) + zx.d(*(rdi_1 + 1))
    result = zx.q(*(r8_10 + 0x60))
    
    if (*(r8_10 + 0x5c) == result.d)
        break
    
    int32_t rcx_30
    
    if ((0x4000 & (zx.w(*(rdi_1 + 2)) * 0x100 + zx.w(*(rdi_1 + 3)))) != 0)
        rcx_30 = *(r8_10 + 0x30)
        *(r8_10 + 0x30) = rcx_30 - 1
    
    if ((0x4000 & (zx.w(*(rdi_1 + 2)) * 0x100 + zx.w(*(rdi_1 + 3)))) == 0 || rcx_30 s<= 0)
        void* rbx_3 = arg1[1]
        
        if (*(rbx_3 + 0x59) == 0)
            *(rbx_3 + 0x5c) += 1
        else if (*(rbx_3 + 0x78) != *(rbx_3 + 0x70) || *(rbx_3 + 0x64) != *(rbx_3 + 0x5c))
            if (sub_142bf50b0(rbx_3, 1, 1) != 0)
                int64_t rdx_16 = *(rbx_3 + 0x70)
                uint64_t r9_18 = zx.q(*(rbx_3 + 0x5c)) * 5
                uint64_t rcx_32 = zx.q(*(rbx_3 + 0x64)) * 5
                int64_t rax_59 = *(rbx_3 + 0x78)
                *(rax_59 + (rcx_32 << 2)) = *(rdx_16 + (r9_18 << 2))
                *(rax_59 + (rcx_32 << 2) + 0x10) = *(rdx_16 + (r9_18 << 2) + 0x10)
                *(rbx_3 + 0x64) += 1
                *(rbx_3 + 0x5c) += 1
        else
            *(rbx_3 + 0x64) += 1
            *(rbx_3 + 0x5c) += 1
    
    result = arg1[1]

return result
