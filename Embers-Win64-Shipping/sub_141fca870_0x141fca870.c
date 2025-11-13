// 函数: sub_141fca870
// 地址: 0x141fca870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143de7000
sub_140b34200("DemoRecordCheckpointTime", rdi)

if (*(arg1 + 0xe98) != 0)
    int64_t* rcx = *(arg1 + 0x770)
    int64_t* rax_2 = (*(*rcx + 0x28))(rcx)
    int64_t* r12_1 = rax_2
    
    if (rax_2 != 0)
        int32_t rsi_1 = data_143de7000
        sub_140b34200("DemoTickCheckpointTime", rsi_1)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        uint128_t zmm9 = 0x4170000000000000
        int128_t zmm8
        zmm8.q = float.d(performanceCount)
        zmm8.q = zmm8.q f* data_143d796f8
        zmm8.q = zmm8.q f+ zmm9.q
        int64_t var_b0 = zmm8.q
        int64_t rdx_2
        int512_t zmm0_1
        int512_t zmm1_1
        zmm0_1, rdx_2, zmm1_1 = sub_141fb3940(arg1)
        rdx_2.b = 1
        uint8_t rax_3 = r12_1[5].b u>> 6 & 1
        char i = 1
        int128_t zmm7
        zmm7.q = fconvert.d(zmm0_1.d)
        zmm7.q = zmm7.q f* 0.001
        int64_t var_a8_1 = zmm7.q
        (*(*r12_1 + 0xd0))(r12_1, rdx_2)
        int64_t* r13_1 = **(arg1 + 0x90)
        *(arg1 + 0xfb4) += 1
        (*(*r13_1 + 0x2a8))(r13_1, 0)
        void* const rbx_1 = r13_1[0xd]
        void* var_118_1 = rbx_1
        void* rax_7
        int64_t rax_8
        void* rdx_3
        
        if (rbx_1 != 0)
            rax_7, zmm0_1 = sub_14254d5d0()
            rdx_3 = *(rbx_1 + 0x10)
            rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rbx_1 == 0 || rax_8.d s> *(rdx_3 + 0x38)
                || *(*(rdx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
            rbx_1 = nullptr
            var_118_1 = nullptr
        
        sub_14216ff40(rbx_1, arg1 + 0xea0)
        char rdi_1 = *(arg1 + 0xe29)
        char arg_10 = rdi_1
        int128_t zmm6 = zmm8
        
        do
            int32_t rax_10 = *(arg1 + 0xe98)
            
            if (rax_10 == 7)
                break
            
            if (not(zmm7.q f<= 0.0))
                zmm0_1.o = zmm6
                zmm0_1.q = zmm0_1.q f- zmm8.q
                
                if (zmm0_1.q f> zmm7.q)
                    break
            
            int64_t rax_12
            
            if (rax_10 - 1 u<= 5)
                switch (rax_10)
                    case 1
                        void* rax_13 = *(arg1 + 0x140)
                        int64_t* rcx_9
                        
                        if (rax_13 == 0)
                            rcx_9 = nullptr
                        else
                            rcx_9 = *(rax_13 + 0x130)
                        
                        if (rcx_9 == 0)
                            zmm6 = 0xbf800000
                        else
                            zmm6 = *(rcx_9 + 0x24c)
                            (*(*rcx_9 + 0x6a0))(rcx_9)
                        
                        bool arg_18 = r13_1[0x2a1].b
                        int64_t* rbx_2 = nullptr
                        r13_1[0x2a1].b = (rdi_1 != 0) + 1
                        int32_t rsi_2 = *(arg1 + 0xf98)
                        int32_t rdi_2 = -1
                        int32_t rax_16
                        rax_16.b = *(arg1 + 0xe28) != 0
                        int32_t var_110_1 = rsi_2
                        int32_t var_10c_1 = rax_16
                        int64_t* rax_27
                        
                        do
                            int32_t rdx_6 = *(arg1 + 0xf98)
                            int64_t r9_1 = *(arg1 + 0xf90)
                            int64_t rcx_10 = sx.q(rdx_6 - 1) * 3
                            zmm0_1.o = zx.o(*(r9_1 + (rcx_10 << 2)))
                            int64_t var_f8 = (zmm0_1.o).q
                            int32_t rax_18 = *(r9_1 + (rcx_10 << 2) + 8)
                            
                            if (0 != 0)
                                memmove(r9_1 + sx.q(rdx_6 - 1) * 0xc, r9_1 + sx.q(rdx_6) * 0xc, 0)
                                rdx_6 = *(arg1 + 0xf98)
                            
                            *(arg1 + 0xf98) = rdx_6 - 1
                            sub_140775970(arg1 + 0xf90)
                            int64_t* r14_1 = sub_140d3c6e0(&var_f8)
                            int32_t rcx_16
                            rcx_16.b = rax_18 != rdi_2
                            
                            if ((rax_16 & rcx_16) != 0)
                                rax_27, zmm0_1 = j_sub_140a82f30(0x18)
                                int64_t* rsi_3 = rax_27
                                
                                if (rax_27 == 0)
                                    rsi_3 = nullptr
                                else
                                    void* const rcx_17 = 0x1a40
                                    *rax_27 = r13_1
                                    rsi_3[2].d = rax_18 + 1
                                    
                                    if (r13_1[0x2a1].b == 0)
                                        rcx_17 = 0x1a30
                                    
                                    rsi_3[1] = rcx_17 + r13_1
                                    (*(*r13_1 + 0x2a8))(r13_1, 0)
                                    *(rsi_3 + 0x14) = rsi_3[1][1].d
                                
                                if (rbx_2 != rsi_3)
                                    int64_t* rdi_3 = rbx_2
                                    rbx_2 = rsi_3
                                    
                                    if (rdi_3 != 0)
                                        int64_t* rcx_21 = *rdi_3
                                        (*(*rcx_21 + 0x2a8))(rcx_21, 0)
                                        int64_t* rcx_22 = rdi_3[1]
                                        int64_t r8_4 = sx.q(*(rdi_3 + 0x14))
                                        
                                        if (r8_4.d s< rcx_22[1].d)
                                            int64_t r9_3 = r8_4 * 0x28
                                            
                                            do
                                                r9_3 += 0x28
                                                r8_4 = zx.q(r8_4.d + 1)
                                                *(r9_3 + *rcx_22 - 4) = rdi_3[2].d
                                                rcx_22 = rdi_3[1]
                                            while (r8_4.d s< rcx_22[1].d)
                                        
                                        rax_27, zmm0_1, zmm1_1 = j_sub_140a74f90(rdi_3)
                                
                                rdi_2 = rax_18
                                rsi_2 = var_110_1
                            
                            if (r14_1 == 0)
                                rax_27.b = 1
                            else if ((*(*r14_1 + 0x150))(r14_1) == 0)
                                rax_27.b = 1
                            else
                                void var_d8
                                zmm0_1, zmm1_1 = sub_140d3a3a0(&var_d8, r14_1)
                                
                                if (sub_141fb2e20(r13_1, &var_d8) == 0)
                                    rax_27.b = 1
                                else
                                    sub_141dbba80(r14_1, arg1)
                                    int64_t r9_4
                                    r9_4.b = 1
                                    zmm6, zmm7, zmm8, zmm9 = sub_141fac800(arg1, r14_1, r13_1)
                                    zmm0_1, zmm1_1 = sub_141fce5b0(arg1, r14_1)
                                    int64_t performanceCount_1
                                    QueryPerformanceCounter(&performanceCount_1)
                                    
                                    if (zmm7.q f<= 0.0)
                                        rax_27.b = 1
                                    else
                                        zmm0_1.o = zx.o(0)
                                        zmm0_1.q = float.d(performanceCount_1)
                                        zmm0_1.q = zmm0_1.q f* data_143d796f8
                                        zmm0_1.q = zmm0_1.q f+ zmm9.q
                                        zmm0_1.q = zmm0_1.q f- zmm8.q
                                        
                                        if (zmm0_1.q f<= zmm7.q)
                                            rax_27.b = 1
                                        else
                                            rax_27.b = 0
                            
                            int32_t temp6_1 = rsi_2
                            rsi_2 -= 1
                            var_110_1 = rsi_2
                            
                            if (temp6_1 == 1)
                                break
                        while (rax_27.b != 0)
                        r12_1 = rax_2
                        
                        if (rcx_9 != 0)
                            *(rcx_9 + 0x24c) = zmm6.d
                        
                        (*(*r13_1 + 0x2a8))(r13_1, 0)
                        sub_14216ff40(var_118_1, 0)
                        
                        if (rbx_2 != 0)
                            int64_t* rcx_33 = *rbx_2
                            (*(*rcx_33 + 0x2a8))(rcx_33, 0)
                            int64_t* rcx_34 = rbx_2[1]
                            int64_t rdx_16 = sx.q(*(rbx_2 + 0x14))
                            
                            if (rdx_16.d s< rcx_34[1].d)
                                int64_t r8_7 = rdx_16 * 0x28
                                
                                do
                                    r8_7 += 0x28
                                    rdx_16 = zx.q(rdx_16.d + 1)
                                    *(*rcx_34 + r8_7 - 4) = rbx_2[2].d
                                    rcx_34 = rbx_2[1]
                                while (rdx_16.d s< rcx_34[1].d)
                            
                            zmm0_1, zmm1_1 = j_sub_140a74f90(rbx_2)
                        
                        r13_1[0x2a1].b = arg_18
                        int64_t performanceCount_2
                        QueryPerformanceCounter(&performanceCount_2)
                        bool cond:7_1 = *(arg1 + 0xf98) != 0
                        zmm0_1.o = zx.o(0)
                        zmm0_1.q = float.d(performanceCount_2)
                        rbx_1 = var_118_1
                        rdi_1 = arg_10
                        zmm0_1.q = zmm0_1.q f* data_143d796f8
                        zmm0_1.q = zmm0_1.q f+ zmm9.q
                        zmm0_1.q = zmm0_1.q f- zmm8.q
                        zmm0_1.q = zmm0_1.q f+ *(arg1 + 0xfa8)
                        *(arg1 + 0xfa8) = (zmm0_1.o).q
                        
                        if (not(cond:7_1))
                            *(arg1 + 0xe98) = 2
                    case 2
                        if (zmm7.q f> 0.0)
                            zmm6.q = zmm6.q f- zmm8.q
                            zmm6.q = zmm6.q f/ zmm7.q
                            zmm6.q f- 0.40000000000000002
                            void* rcx_8
                            rcx_8.b = zmm6.q f< 0.40000000000000002
                            i = rcx_8.b
                            
                            if (rcx_8.b == 1)
                                goto label_141fcae41
                        else
                            i = 1
                        label_141fcae41:
                            char rax_37 = *(arg1 + 0xe28)
                            *(arg1 + 0xfb0) = rax_37
                            
                            if (rax_37 != 0)
                                *(arg1 + 0xfb8) = (*(*r12_1 + 0x20))(r12_1)
                                sub_14090dc80(r12_1, arg1 + 0xfb8, zmm1_1)
                            
                            int64_t* rcx_40 = r12_1[1]
                            int32_t* r8_8 = *rcx_40
                            
                            if (&r8_8[1] u<= rcx_40[1])
                                *(arg1 + 0x760) = *r8_8
                                int64_t* rax_42 = r12_1[1]
                                *rax_42 += 4
                            else if ((*(r12_1 + 0x29) & 0x20) != 0)
                                sub_140b54070(r12_1, arg1 + 0x760, zmm1_1)
                            else
                                (*(*r12_1 + 0x150))(r12_1, arg1 + 0x760, 4)
                            
                            if (rdi_1 == 0)
                                zmm0_1, zmm1_1 = sub_141fa7ef0(r12_1, arg1 + 0x7a0, zmm1_1)
                                *(arg1 + 0xe98) = 3
                            else
                                sub_141fa7ef0(r12_1, arg1 + 0xfc8, zmm1_1)
                                sub_141fa7e90(r12_1, arg1 + 0x1018, sub_14059a980(arg1 + 0xfc8, 0))
                                sub_141fa7f50(r12_1, arg1 + 0x1068, sub_14084eee0(arg1 + 0x1018, 0))
                                
                                if ((r12_1[5].b & 1) != 0)
                                    int64_t rcx_47 = *(arg1 + 0x10a8)
                                    
                                    if (rcx_47 != 0)
                                        *(arg1 + 0x10a8) = sub_140a84c80(rcx_47, 0, 0)
                                    
                                    *(arg1 + 0x10b0) = 0
                                    sub_1409b3740(arg1 + 0x1068, 
                                        *(arg1 + 0x1070) - *(arg1 + 0x109c), 0)
                                
                                zmm0_1, zmm1_1 = sub_141453140(arg1 + 0x1068, 0)
                                *(arg1 + 0xe98) = 3
                            
                            rbx_1 = var_118_1
                    case 3
                        if (zmm7.q f> 0.0)
                            zmm6.q = zmm6.q f- zmm8.q
                            zmm6.q = zmm6.q f/ zmm7.q
                            zmm6.q f- 0.19999999999999996
                            rax_12.b = zmm6.q f< 0.19999999999999996
                            i = rax_12.b
                            
                            if (rax_12.b == 1)
                                zmm0_1, zmm1_1 = sub_141fa9f00(arg1)
                                *(arg1 + 0xe98) = 4
                        else
                            i = 1
                            zmm0_1, zmm1_1 = sub_141fa9f00(arg1)
                            *(arg1 + 0xe98) = 4
                    case 4
                        char i_1
                        i_1, zmm0_1, zmm1_1, zmm7, zmm8 =
                            sub_141fc88d0(arg1, &var_b0, r12_1, zmm1_1)
                        i = i_1
                        
                        if (i_1 != 0)
                            *(arg1 + 0xe98) = 5
                    case 5
                        if (zmm7.q f> 0.0)
                            zmm6.q = zmm6.q f- zmm8.q
                            zmm6.q = zmm6.q f/ zmm7.q
                            zmm6.q f- 0.40000000000000002
                            rax_12.b = zmm6.q f< 0.40000000000000002
                            i = rax_12.b
                            
                            if (rax_12.b == 1)
                                goto label_141fcb033
                        else
                            i = 1
                        label_141fcb033:
                            
                            if (rdi_1 == 0)
                                void* r8_1
                                r8_1.b = 1
                                zmm0_1, zmm1_1 = sub_1421771f0(rbx_1, r12_1, r8_1.b, zmm1_1)
                                *(arg1 + 0xe98) = 6
                            else
                                zmm0_1, zmm1_1 = sub_142176e80(rbx_1, r12_1, zmm0_1, zmm1_1)
                                *(arg1 + 0xe98) = 6
                    case 6
                        if (zmm7.q f> 0.0)
                            zmm6.q = zmm6.q f- zmm8.q
                            zmm6.q = zmm6.q f/ zmm7.q
                            zmm6.q f- 0.19999999999999996
                            rax_12.b = zmm6.q f< 0.19999999999999996
                            i = rax_12.b
                            
                            if (rax_12.b == 1)
                                goto label_141fcb09e
                        else
                            i = 1
                        label_141fcb09e:
                            
                            if (*(arg1 + 0xfb0) != 0)
                                int64_t rax_46 = (*(*r12_1 + 0x20))(r12_1)
                                int64_t rdx_28 = *(arg1 + 0xfb8)
                                int64_t r8_10 = *r12_1
                                int64_t var_100 = rax_46 - rdx_28 - 8
                                (*(r8_10 + 0x178))(r12_1, rdx_28, r8_10)
                                int64_t* rdx_29 = r12_1[1]
                                int64_t* rax_47 = *rdx_29
                                
                                if (&rax_47[1] u> rdx_29[1])
                                    int64_t* rdx_30 = &var_100
                                    
                                    if ((*(r12_1 + 0x29) & 0x20) != 0)
                                        sub_140b540d0(r12_1, rdx_30, zmm1_1)
                                    else
                                        (*(*r12_1 + 0x150))(r12_1, rdx_30, 8)
                                else
                                    var_100 = *rax_47
                                    *rdx_29 += 8
                                
                                (*(*r12_1 + 0x178))(r12_1, rax_46)
                            
                            *(arg1 + 0xfc0) = (*(*r12_1 + 0x28))(r12_1)
                            int32_t rbx_5 = *(arg1 + 0xe80)
                            *(arg1 + 0xe80) = *(arg1 + 0xd68)
                            zmm0_1, zmm1_1 = sub_141fd05e0(arg1, r12_1, &r13_1[0x348], 
                                _mm_cvtpd_ps(zx.o(*(arg1 + 0x890))).d, zmm1_1, 1)
                            *(arg1 + 0xe98) = 7
                            *(arg1 + 0xe80) = rbx_5
                            rbx_1 = var_118_1
            int64_t performanceCount_3
            QueryPerformanceCounter(&performanceCount_3)
            zmm6.q = float.d(performanceCount_3)
            zmm6.q = zmm6.q f* data_143d796f8
            zmm6.q = zmm6.q f+ zmm9.q
        while (i != 0)
        
        (*(*r12_1 + 0xd0))(r12_1, zx.q(rax_3))
        bool cond:0_1 = *(arg1 + 0xe98) != 7
        zmm6.q = zmm6.q f- zmm8.q
        zmm6.q = zmm6.q f+ *(arg1 + 0xfa0)
        *(arg1 + 0xfa0) = zmm6.q
        
        if (cond:0_1)
            i.d = 0
            *(arg1 + 0x10f8)
            *(arg1 + 0x10f8) = 0
        else
            (*(*r12_1 + 0x28))(r12_1)
            
            if ((*(*r12_1 + 0x28))(r12_1) s> 0)
                zmm0_1.o = zx.o(*(arg1 + 0x890))
                zmm0_1.q = zmm0_1.q f* 1000.0
                int64_t* rcx_67 = *(arg1 + 0x770)
                (*(*rcx_67 + 0x30))(rcx_67, int.q(zmm0_1.q))
            
            i.d = 0x3f800000
            *(arg1 + 0x10f8)
            *(arg1 + 0x10f8) = 0x3f800000
            *(arg1 + 0xe98) = 0
        
        sub_140b38680("DemoTickCheckpointTime", rsi_1)

return sub_140b38680("DemoRecordCheckpointTime", rdi) __tailcall
