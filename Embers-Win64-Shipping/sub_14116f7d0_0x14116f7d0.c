// 函数: sub_14116f7d0
// 地址: 0x14116f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
void* r13 = arg3
char result = sub_1411a4ac0(data_143f0f1a0, *(arg2 + 8))

if (result != 0)
    sub_140b33630("UploadDynamicPrimitiveShaderData")
    uint32_t r15_1 = *(r13 + 0x26f8)
    void* rcx_58
    
    if (r15_1 s<= 0)
        rcx_58 = arg2 + 0x1758
    else
        void* rcx_1 = *(r13 + 0x15a8)
        void* r12_1 = r13 + 0x2720
        int32_t rcx_2 = *(arg2 + 0xdc0)
        
        if (rcx_1 != 0)
            r12_1 = rcx_1 + 0xf70
        
        int32_t rax_3 = (rcx_2 + r15_1) * 0x23
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_3)
        int32_t rcx_4
        
        if (rcx_2 == neg.d(r15_1))
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_3 - 1)
        char r8
        
        if (rax_3 == 1)
            r8 = 0x20
        else
            r8 = 0x1f - temp0_3
        
        int32_t rbx_2 = data_1439c861c << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - r8))
        
        if (rbx_2 != *(r12_1 + 0x18))
            sub_1411938c0(r12_1)
            sub_1419bfd30(arg1, r12_1, rbx_2)
        
        void* rbx_3 = arg1 + 0x30
        int64_t rax_5 = *(r12_1 + 8)
        int64_t* rdi_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_11 = &rdi_3[1]
        
        if (rcx_11 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x10)
            rdi_3 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rcx_11 = &rdi_3[1]
        
        *rbx_3 = rcx_11
        *rdi_3 = rax_5
        void*** rcx_15 = (*rbx_3 + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_15[6]
        
        if (rax_6 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x38)
            rcx_15 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_15[6]
        
        *rbx_3 = rax_6
        void**** rax_7 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        int32_t var_4f0_1 = 0
        int32_t var_4f8_1 = 0
        *rax_7 = rcx_15
        *(arg1 + 8) = &rcx_15[1]
        rcx_15[1] = 0
        rcx_15[5] = 0
        *rcx_15 = &data_142da7798
        rcx_15[2].d = 1
        rcx_15[3] = rdi_3
        rcx_15[4] = 1
        int128_t zmm2_1
        int128_t zmm3_1
        zmm2_1, zmm3_1 =
            sub_1419bf8e0(arg1, r12_1, arg2 + 0x1758, *(arg2 + 0xdc0) * 0x230, var_4f8_1, var_4f0_1)
        int64_t rax_9 = *(r12_1 + 8)
        int64_t* rdi_8 = (*rbx_3 + 7) & 0xfffffffffffffff8
        void* rcx_20 = &rdi_8[1]
        
        if (rcx_20 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x10)
            rdi_8 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rcx_20 = &rdi_8[1]
        
        *rbx_3 = rcx_20
        *rdi_8 = rax_9
        void*** rcx_24 = (*rbx_3 + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_24[6]
        
        if (rax_10 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x38)
            rcx_24 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_24[6]
        
        *rbx_3 = rax_10
        *(arg1 + 0x14) += 1
        uint32_t r12_2 = r15_1
        int32_t var_4d8_1 = 0
        **(arg1 + 8) = rcx_24
        *(arg1 + 8) = &rcx_24[1]
        rcx_24[1] = 0
        *rcx_24 = &data_142da7798
        rcx_24[3] = rdi_8
        int32_t rdi_11 = 0
        rcx_24[2].d = 1
        rcx_24[4].d = 2
        *(rcx_24 + 0x24) = 3
        rcx_24[5] = 0
        int64_t rax_13
        int64_t rdx_4
        rdx_4:rax_13 = mulu.dp.q(-0x15f15f15f15f15f1, data_1439c7a80)
        uint32_t rdx_5 = (rdx_4 u>> 5).d
        
        if (rdx_5 u<= r15_1)
            r12_2 = rdx_5
        
        int128_t var_4a8
        
        if (r15_1 s> 0)
            void* rax_14 = arg2 + 0x1778
            int32_t r13_1 = 0
            
            do
                var_4f8_1.q = u"PrimitiveUploadBuffer"
                sub_1419cff60(rax_14, r12_2, 0x230, 1, var_4f8_1)
                
                if (r12_2 s> 0)
                    while (rdi_11 s< r15_1)
                        int512_t zmm1_1
                        zmm1_1.o = data_142d3f660
                        __builtin_memcpy(&var_4a8, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                        "
                            0x230)
                        zmm1_1, zmm2_1, zmm3_1 =
                            sub_1422ad010(&var_4a8, sx.q(rdi_11) * 0x230 + *(arg3 + 0x26f0))
                        **(arg2 + 0x17a8) = *(arg2 + 0xdc0) + rdi_11
                        int64_t rcx_32 = *(arg2 + 0x17b0)
                        uint64_t r8_3 = zx.q(*(arg2 + 0x17c4))
                        *(arg2 + 0x17a8) += 4
                        *(arg2 + 0x17b8) += 1
                        *(arg2 + 0x17b0) = r8_3 + rcx_32
                        memcpy(rcx_32, &var_4a8, r8_3.d)
                        rdi_11 += 1
                        
                        if (rdi_11 + r13_1 s>= r12_2)
                            break
                    
                    rbx_3 = arg1 + 0x30
                
                int64_t* rdi_14 = (*rbx_3 + 7) & 0xfffffffffffffff8
                int64_t rax_19 = *(r12_1 + 8)
                void* rcx_33 = &rdi_14[1]
                
                if (rcx_33 u> *(rbx_3 + 8))
                    sub_140b0e3d0(rbx_3, 0x10)
                    rdi_14 = (*rbx_3 + 7) & 0xfffffffffffffff8
                    rcx_33 = &rdi_14[1]
                
                *rbx_3 = rcx_33
                *rdi_14 = rax_19
                void*** rcx_37 = (*rbx_3 + 7) & 0xfffffffffffffff8
                void* rax_20 = &rcx_37[6]
                
                if (rax_20 u> *(rbx_3 + 8))
                    sub_140b0e3d0(rbx_3, 0x38)
                    rcx_37 = (*rbx_3 + 7) & 0xfffffffffffffff8
                    rax_20 = &rcx_37[6]
                
                *rbx_3 = rax_20
                void**** rax_21 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_21 = rcx_37
                *(arg1 + 8) = &rcx_37[1]
                rcx_37[1] = 0
                rcx_37[5] = 0
                *rcx_37 = &data_142da7798
                rcx_37[2].d = 1
                rcx_37[3] = rdi_14
                rcx_37[4].d = 2
                *(rcx_37 + 0x24) = 3
                zmm2_1, zmm3_1 = sub_1419c02f0(arg2 + 0x1778, arg1, r12_1, 0, zmm2_1, zmm3_1)
                rax_14 = arg2 + 0x1778
                rdi_11 = var_4d8_1 + r12_2
                r13_1 -= r12_2
                var_4d8_1 = rdi_11
            while (rdi_11 s< r15_1)
            
            r13 = arg3
        
        int64_t* rdi_20 = (*rbx_3 + 7) & 0xfffffffffffffff8
        int64_t rax_23 = *(r12_1 + 8)
        void* rcx_42 = &rdi_20[1]
        int64_t var_4d0_4 = rax_23
        
        if (rcx_42 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x10)
            rax_23 = var_4d0_4
            rdi_20 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rcx_42 = &rdi_20[1]
        
        *rbx_3 = rcx_42
        *rdi_20 = rax_23
        void*** rcx_46 = (*rbx_3 + 7) & 0xfffffffffffffff8
        void* rax_24 = &rcx_46[6]
        
        if (rax_24 u> *(rbx_3 + 8))
            sub_140b0e3d0(rbx_3, 0x38)
            rcx_46 = (*rbx_3 + 7) & 0xfffffffffffffff8
            rax_24 = &rcx_46[6]
        
        *rbx_3 = rax_24
        void**** rax_25 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_25 = rcx_46
        *(arg1 + 8) = &rcx_46[1]
        rcx_46[1] = 0
        *rcx_46 = &data_142da7798
        rcx_46[2].d = 1
        rcx_46[3] = rdi_20
        rcx_46[4].d = 0
        *(rcx_46 + 0x24) = 1
        rcx_46[5] = 0
        
        if (data_143e6a680 != 0 && (*(arg2 + 0x1750) u> 0 || *(arg2 + 0x1770) u> 0))
            int64_t* rcx_50 = data_143f0f180
            int64_t r8_6 = *r12_1
            char var_4e0_1 = 1
            int32_t var_4b8 = 0
            var_4f0_1.q = &var_4b8
            (*(*rcx_50 + 0x510))(rcx_50, &data_143f02b98, r8_6, 0, 0, var_4f0_1, 0, var_4e0_1, 
                var_4d8_1, var_4d0_4, r12_1, arg3, var_4b8)
            int64_t rax_27
            int64_t rdx_11
            rdx_11:rax_27 = mulu.dp.q(-0x15f15f15f15f15f1, data_1439c7a80)
            uint32_t r13_3 = *(r13 + 0x26f8) + *(arg2 + 0xde0)
            uint32_t rdx_12 = (rdx_11 u>> 5).d
            uint32_t r8_7 = r13_3
            
            if (rdx_12 u<= r13_3)
                r8_7 = rdx_12
            
            int32_t rax_28 = 0
            uint32_t var_4b4_1 = r8_7
            int32_t var_4d8_2 = 0
            int64_t r15_3 = sx.q(r8_7)
            int64_t rdx_13 = sx.q(r13_3)
            
            if (r13_3 s> 0)
                int64_t rcx_51 = 0
                int64_t var_4d0_5 = 0
                int32_t r12_3 = 0
                
                do
                    int64_t rsi_1 = 0
                    
                    if (r15_3 s> 0)
                        int32_t rbx_5 = rax_28
                        int64_t rdi_23 = rcx_51 << 3
                        
                        while (rbx_5 s< r13_3)
                            void var_278
                            sub_14117ab70(&var_278)
                            int32_t rcx_53 = *(arg2 + 0xde0)
                            
                            if (rbx_5 s>= rcx_53)
                                int128_t zmm0_2 = data_142d3f660
                                __builtin_memcpy(&var_4a8, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                                "
                                    0x230)
                                int512_t zmm1_2
                                zmm1_2.o = zmm0_2
                                sub_1422ad010(&var_4a8, 
                                    sx.q(r12_3 - rcx_53 + rbx_5 + var_4d8_2) * 0x230
                                        + *(arg3 + 0x26f0))
                            else
                                sub_142288d70(&var_4a8, *(*(arg2 + 0xdd8) + rdi_23))
                            
                            rbx_5 += 1
                            rsi_1 += 1
                            rdi_23 += 8
                            
                            if (rsi_1 s>= r15_3)
                                break
                        
                        rax_28 = var_4d8_2
                        rcx_51 = var_4d0_5
                        r8_7 = var_4b4_1
                        rdx_13 = sx.q(r13_3)
                    
                    rax_28 += r8_7
                    rcx_51 += r15_3
                    r12_3 -= r8_7
                    var_4d8_2 = rax_28
                    var_4d0_5 = rcx_51
                while (rcx_51 s< rdx_13)
            
            int64_t* rcx_56 = data_143f0f180
            var_4f0_1.b = 1
            int32_t var_4f8_2
            var_4f8_2.b = 0
            (*(*rcx_56 + 0x518))(rcx_56, &data_143f02b98, *r12_1, 0, var_4f8_2, var_4f0_1)
            r13 = arg3
        
        void* rcx_57 = *(r13 + 0x15a8)
        rcx_58 = r13 + 0x2720
        
        if (rcx_57 != 0)
            rcx_58 = rcx_57 + 0xf70
    
    *(*(r13 + 0x15b0) + 0xf60) = *rcx_58
    *(*(r13 + 0x15b0) + 0xf68) = *(arg2 + 0x1848)
    int64_t* rcx_59 = data_143f0f180
    (*(*rcx_59 + 0x100))(rcx_59, *(r13 + 0x10), *(r13 + 0x15b0))
    result = sub_140b37f60("UploadDynamicPrimitiveShaderData")

__security_check_cookie(rax_1 ^ &var_518)
return result
