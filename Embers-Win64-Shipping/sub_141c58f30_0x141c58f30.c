// 函数: sub_141c58f30
// 地址: 0x141c58f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rax = data_143f34a18
char rsi = arg2
CRITICAL_SECTION* lpCriticalSection = arg1
int64_t rbx = sx.q(arg3)
sub_140b34200("SourceEffectsBuffers", rax)

if (rbx.d s< arg4)
    void* r14
    void* var_40_1 = r14
    int64_t rcx = rbx * 0x3f0
    int64_t rdx_1 = rbx * 0x2f0
    int64_t var_c8_1 = rcx
    int64_t var_d0_1 = rdx_1
    
    do
        void* rdi_2 = lpCriticalSection->__offset(0xc8).q + rcx
        char rcx_1 = *(rdi_2 + 0x3d0)
        
        if (rcx_1 s< 0 && (rcx_1 & 8) != 0 && (rcx_1 & 0x10) == 0
                && ((*(rdi_2 + 0x3d1) & 0x10) == 0 || *(rdi_2 + 0x1c8) == 0))
            int32_t rax_1 = *(rdi_2 + 0xb8)
            
            if (rsi == 0)
                if (rax_1 == 0xffffffff)
                label_141c5907c:
                    bool cond:0_1 = *(rdi_2 + 0xd0) s<= 0
                    void* var_c0 = lpCriticalSection->__offset(0xd8).q + rdx_1
                    
                    if (not(cond:0_1))
                        *(rdi_2 + 0x48) = 0
                        
                        if (*(rdi_2 + 0x4c) s<= 0xffffffff)
                            sub_140775b10(rdi_2 + 0x40, 0)
                        
                        int32_t rax_4 = *(rdi_2 + 0x58)
                        
                        if (rax_4 s> *(rdi_2 + 0x4c))
                            sub_140775b10(rdi_2 + 0x40, rax_4)
                            rax_4 = *(rdi_2 + 0x58)
                        
                        memcpy(*(rdi_2 + 0x40), *(rdi_2 + 0x50), rax_4 << 2)
                        rcx_1 = *(rdi_2 + 0x3d0)
                    
                    int128_t* r13_1 = *(rdi_2 + 0x50)
                    int64_t r12_1 = sx.q(*(rdi_2 + 0x58))
                    uint128_t zmm0_1
                    
                    if ((rcx_1 & 0x20) == 0)
                        sub_141c37840(r13_1, r12_1.d, *(rdi_2 + 0xfc), (*(rdi_2 + 0x100)).d)
                    else
                        int32_t rsi_1 = lpCriticalSection->__offset(0x1b0).d
                        int32_t rcx_5 = *(rdi_2 + 0x10c)
                        int32_t rax_6 = *(rdi_2 + 0x110) - rcx_5
                        
                        if (rax_6 s<= rsi_1)
                            rsi_1 = rax_6
                        
                        int32_t rax_7 = rcx_5 + rsi_1
                        uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_7))
                        *(rdi_2 + 0x10c) = rax_7
                        zmm3.d = zmm3.d f* *(rdi_2 + 0x104)
                        zmm3.d = zmm3.d f+ *(rdi_2 + 0x108)
                        *(rdi_2 + 0x100) = zmm3.d
                        zmm0_1 = _mm_and_ps(zmm3, 0x7fffffff)
                        
                        if (not(zmm0_1.d f> 9.99999975e-05f))
                            *(rdi_2 + 0x100) = 0
                            zmm3 = zx.o(0)
                        
                        int32_t rbx_2 = *(rdi_2 + 0x3d4) * rsi_1
                        sub_141c37840(r13_1, rbx_2, *(rdi_2 + 0xfc), zmm3.d)
                        
                        if (rsi_1 s< lpCriticalSection->__offset(0x1b0).d)
                            memset((sx.q(rbx_2) << 2) + r13_1, 0, sx.q(r12_1.d - rbx_2) << 2)
                    
                    *(rdi_2 + 0xfc) = *(rdi_2 + 0x100)
                    
                    if (data_143f34da4 == 0 && *(rdi_2 + 0x1b0) s> 0)
                        *(rdi_2 + 0x1d0) = *(rdi_2 + 0x100)
                        *(rdi_2 + 0x1d4) = *(rdi_2 + 0xe8)
                        int32_t rax_14 = *(rdi_2 + 0x3dc)
                        *(rdi_2 + 0x1d8) = *(lpCriticalSection->__offset(0x28).q + 0x360)
                        int128_t zmm1_1
                        
                        if (rax_14 s> 0)
                            zmm1_1.d = float.s(*(rdi_2 + 0x98))
                            zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(rax_14)).d
                            *(rdi_2 + 0x1e0) = zmm1_1.d
                        
                        int64_t rax_15 = *(rdi_2 + 0x50)
                        zmm1_1 = *(rdi_2 + 0x340)
                        int64_t rsi_2 = *(rdi_2 + 0x60)
                        *(rdi_2 + 0x1f0) = *(rdi_2 + 0x330)
                        *(rdi_2 + 0x280) = rax_15
                        zmm0_1 = *(rdi_2 + 0x350)
                        *(rdi_2 + 0x288) = r12_1.d
                        *(rdi_2 + 0x200) = zmm1_1
                        zmm1_1 = *(rdi_2 + 0x360)
                        *(rdi_2 + 0x210) = zmm0_1
                        zmm0_1 = *(rdi_2 + 0x370)
                        *(rdi_2 + 0x220) = zmm1_1
                        zmm1_1 = *(rdi_2 + 0x380)
                        *(rdi_2 + 0x230) = zmm0_1
                        zmm0_1 = *(rdi_2 + 0x390)
                        *(rdi_2 + 0x240) = zmm1_1
                        zmm1_1 = *(rdi_2 + 0x3a0)
                        *(rdi_2 + 0x250) = zmm0_1
                        zmm0_1 = *(rdi_2 + 0x3b0)
                        *(rdi_2 + 0x260) = zmm1_1
                        *(rdi_2 + 0x270) = zmm0_1
                        EnterCriticalSection(lpCriticalSection)
                        int64_t* j = *(rdi_2 + 0x1a8)
                        
                        for (void* rbp_3 = &j[sx.q(*(rdi_2 + 0x1b0)) * 2]; j != rbp_3; j = &j[2])
                            int64_t* rcx_14
                            
                            if (sub_14188ac80(*j) != 0)
                                if (sub_142378690(*j) != 0 || (*(rdi_2 + 0x3d2) & 8) != 0)
                                    rcx_14 = *j
                                    (*(*rcx_14 + 0x20))(rcx_14, rdi_2 + 0x2d0)
                            else if ((*(rdi_2 + 0x3d2) & 8) != 0)
                                rcx_14 = *j
                                (*(*rcx_14 + 0x20))(rcx_14, rdi_2 + 0x2d0)
                            
                            if (sub_14188ac80(*j) != 0)
                                int64_t* rcx_16 = *j
                                (*(*rcx_16 + 0x18))(rcx_16, rdi_2 + 0x1d0, rsi_2)
                                memcpy(*(rdi_2 + 0x280), rsi_2, (r12_1 << 2).d)
                        
                        *(rdi_2 + 0x3d2) &= 0xf7
                        LeaveCriticalSection(lpCriticalSection)
                    
                    char rsi_3 = *(rdi_2 + 0x1c8)
                    bool cond:2_1
                    
                    if (data_143f34da0 == 0)
                        sub_141c3faf0(rdi_2 + 0x2a0, sub_141c39bc0(r13_1, r12_1.d))
                        zmm0_1 = sub_141c39c30(rdi_2 + 0x2a0)
                        cond:2_1 = *(rdi_2 + 0x1c8) != 0
                        *(rdi_2 + 0x2c8) = zmm0_1.d
                    
                    int32_t rax_21
                    
                    if (data_143f34da0 != 0 || cond:2_1 || zmm0_1.d f< 1.58489001e-05f)
                        rax_21.b = 1
                    else
                        rax_21.b = 0
                    
                    *(rdi_2 + 0x1c8) = rax_21.b
                    
                    if (rsi_3 == 0 && rax_21.b != 0)
                        int64_t* rcx_22 = *(rdi_2 + 0x10)
                        (*(*rcx_22 + 0x18))(rcx_22)
                    
                    char rax_27 = *(rdi_2 + 0x3d1)
                    
                    if ((rax_27 & 0x40) == 0)
                        int32_t rbp_5 = *(rdi_2 + 0x3d4) * lpCriticalSection->__offset(0x1b0).d
                        int32_t rax_23 = data_143f34d98
                        
                        if (rax_23 != 0 || 20000f f<= *(rdi_2 + 0x120))
                            r14.b = 1
                            
                            if (rax_23 != 0 || data_143f34d9c != 0
                                    || 20.0000992f f>= *(rdi_2 + 0x160))
                                rsi_3 = 1
                            else
                                rsi_3 = 0
                        else
                            r14.b = 0
                            
                            if (data_143f34d9c != 0 || 20.0000992f f>= *(rdi_2 + 0x160))
                                rsi_3 = 1
                            else
                                rsi_3 = 0
                        
                        int128_t* rbx_3 = *(rdi_2 + 0x30)
                        int128_t* r15 = r13_1
                        
                        if (r14.b == 0)
                            r15 = rbx_3
                            sub_141c41c60(rdi_2 + 0x120, r13_1, rbx_3, rbp_5)
                        
                        if (rsi_3 == 0)
                            sub_141c41a00(rdi_2 + 0x160, r15, rbx_3, rbp_5)
                        
                        int32_t rax_24 = *(rdi_2 + 0x12c)
                        *(rdi_2 + 0x128) = 0
                        *(rdi_2 + 0x124) = rax_24
                        *(rdi_2 + 0x164) = *(rdi_2 + 0x16c)
                        *(rdi_2 + 0x168) = 0
                        
                        if (r14.b != 0 && rsi_3 != 0)
                            memcpy(rbx_3, r13_1, (r12_1 << 2).d)
                        
                        if (data_143f34da8 == 0)
                            sub_141c37840(*(rdi_2 + 0x30), *(rdi_2 + 0x38), *(rdi_2 + 0x114), 
                                (*(rdi_2 + 0x118)).d)
                            *(rdi_2 + 0x114) = *(rdi_2 + 0x118)
                        
                        lpCriticalSection = arg1
                        sub_141c58b80(lpCriticalSection, rdi_2, var_c0, arg_18, r12_1.d)
                        rax_27 = *(rdi_2 + 0x3d1)
                    
                    if ((rax_27 & 0x20) != 0 && *(rdi_2 + 0x1c8) != 0)
                        int32_t rax_28 = *(rdi_2 + 0x7c)
                        *(rdi_2 + 0x78) = 0
                        
                        if (rax_28 s< 0 && rax_28 != 0)
                            sub_1405dadb0(rdi_2 + 0x70, 0)
                        
                        int32_t rax_29 = *(rdi_2 + 0x8c)
                        *(rdi_2 + 0x88) = 0
                        
                        if (rax_29 s< 0 && rax_29 != 0)
                            sub_1405dadb0(rdi_2 + 0x80, 0)
                        
                        var_c0.o = zx.o(0)
                        
                        if (rdi_2 + 0x18 != &var_c0)
                            *(rdi_2 + 0x18) = 0
                            int64_t* var_b8
                            sub_1405aeff0(rdi_2 + 0x20, &var_b8)
                            int64_t* rcx_32 = var_b8
                            
                            if (rcx_32 != 0)
                                rcx_32[1].d -= 1
                                
                                if (rcx_32[1].d == 1)
                                    int64_t* rbx_4 = var_b8
                                    (**rbx_4)(rbx_4)
                                    int32_t rax_32 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (rax_32 == 1)
                                        int64_t* rcx_34 = var_b8
                                        (*(*rcx_34 + 8))(rcx_34, 1)
                    
                    *(rdi_2 + 0x3d2) &= 0xf7
                    rbx = zx.q(arg_18)
                    rdx_1 = var_d0_1
                    rsi = arg2
            else if (rax_1 != 0xffffffff)
                goto label_141c5907c
        
        rbx = zx.q(rbx.d + 1)
        rcx = var_c8_1 + 0x3f0
        arg_18 = rbx.d
        rdx_1 += 0x2f0
        var_c8_1 = rcx
        var_d0_1 = rdx_1
    while (rbx.d s< arg4)

return sub_140b38680("SourceEffectsBuffers", rax) __tailcall
