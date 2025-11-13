// 函数: sub_141d472c0
// 地址: 0x141d472c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* var_270 = arg4
int64_t* rsi = arg3
void* result
int16_t* var_278
int16_t* var_200
int64_t* r13_7

if (arg2 == 0)
label_141d48395:
    r13_7 = nullptr
label_141d48398:
    int64_t* rcx_131 = *arg1
    
    if (r13_7 == 0)
    label_141d484bd:
        int64_t* rax_160 = sub_140b74df0(rcx_131, &var_200)
        int16_t* const rdi_14
        
        if (rax_160[1].d == 0)
            rdi_14 = &data_142d40450
        else
            rdi_14 = *rax_160
        
        result = sub_140941070(arg2, rdi_14, rsi, 0, 0, data_143ddb418)
        int16_t* rcx_142 = var_200
        void* rbx
        rbx.b = result == 0
        
        if (rcx_142 != 0)
            sub_140a74f90(rcx_142)
        
        if (rbx.b == 0)
        labelid_1:
            result.b = 1
        else
            result.b = 0
    else
        result = zx.q(rcx_131[1].d)
        
        if (result.d != 6)
            if (result.d == 2)
                goto label_141d484bd
            
        labelid_1:
            result.b = 1
        else
            void* rdi_12 = sub_140cde0b0()
            char rax_153 = sub_140cc16d0(arg4, sub_140d41340())
            void* rbx_17 = r13_7[0xf]
            char* var_2a8_6 = nullptr
            
            if (rax_153 != 0)
                rdi_12 = arg6
            
            char var_2b0 = 0
            var_278 = nullptr
            void* rax_154 = sub_140d2d830(rbx_17, rdi_12, 0, 0, 0, var_2b0, var_2a8_6)
            int32_t var_2b8
            var_2b8.b = 0
            void var_1a0
            (*(rbx_17 + 0xb0))(sub_140d158c0(&var_1a0, rax_154, *(rbx_17 + 0x118), 0, var_2b8.b, 0))
            sub_140d16260(&var_1a0)
            int64_t r9_11 = *r13_7
            (*(r9_11 + 0x148))(r13_7, rsi, rax_154, r9_11)
            int64_t* rcx_138 = *arg1
            int16_t** rax_157 = (**rcx_138)(rcx_138)
            void* rdx_75 = rax_157[1]
            int16_t* rcx_139 = *rax_157
            var_200 = rcx_139
            void* var_1f8_7 = rdx_75
            
            if (rdx_75 != 0)
                *(rdx_75 + 8) += 1
            
            void* rdx_76 = r13_7[0xf]
            char rax_159 = sub_141d48fb0(rcx_139, rdx_76, rax_154, rdx_76, rax_154, 
                arg7 & 0xfffffffff7fffa7d, arg8)
            sub_140669d70(&var_200)
            
            if (rax_159 != 0)
            labelid_1:
                result.b = 1
            else
                result.b = 0
else
    int64_t rcx = *(arg2[1] + 0x10)
    int64_t* var_290
    int16_t* var_258
    int32_t var_250
    int16_t* rcx_5
    
    if (((rcx u>> 0x30).b & 1) != 0)
        int64_t* rcx_1 = *arg1
        
        if (rcx_1[1].d != 2)
            int64_t* rbx_2 = arg2[0xf]
            (*(*rbx_2 + 0x148))(rbx_2, rsi, int.q(sub_140b74be0(rcx_1)))
        labelid_1:
            result.b = 1
        else
            int64_t* rbx_1 = arg2[0x10]
            sub_140b74df0(rcx_1, &var_258)
            int16_t* const rdx_1 = &data_142d40450
            
            if (var_250 != 0)
                rdx_1 = var_258
            
            result = sub_140be0d00(rbx_1, *sub_140b58260(&var_290, rdx_1, 1), 0)
            
            if (result != -1)
                int64_t* rcx_4 = arg2[0xf]
                (*(*rcx_4 + 0x148))(rcx_4, rsi, result)
                rcx_5 = var_258
                goto label_141d48376
            
        label_141d4743f:
            int16_t* rcx_12 = var_258
            
            if (rcx_12 == 0)
                result.b = 0
            else
                sub_140a74f90(rcx_12)
                result.b = 0
    else if (((rcx u>> 0x18).b & 1) != 0)
        if ((*(*arg2 + 0x140))(arg2) != 0 && *(*arg1 + 8) == 2)
            int64_t* rax_13 = (*(*arg2 + 0x140))(arg2)
            sub_140b74df0(*arg1, &var_258)
            int16_t* rdx_6 = &data_142d40450
            
            if (var_250 != 0)
                rdx_6 = var_258
            
            result = sub_140be0d00(rax_13, *sub_140b58260(&var_290, rdx_6, 1), 0)
            
            if (result == -1)
                goto label_141d4743f
            
            (*(*arg2 + 0x148))(arg2, rsi, result)
            rcx_5 = var_258
            goto label_141d48376
        
        if ((*(*arg2 + 0x130))(arg2) == 0)
            if ((*(*arg2 + 0x138))(arg2).b == 0)
                result.b = 0
            else
                int64_t* rcx_18 = *arg1
                
                if (rcx_18[1].d == 2)
                    int64_t* rax_19 = sub_140b74df0(rcx_18, &var_200)
                    wchar16* _String
                    
                    if (rax_19[1].d == 0)
                        _String = &data_142d40450
                    else
                        _String = *rax_19
                    
                    int64_t rax_20 = _wtoi64(_String)
                    int64_t r9 = *arg2
                    (*(r9 + 0x148))(arg2, rsi, rax_20, r9)
                    goto label_141d48372
                
                (*(*arg2 + 0x148))(arg2, rsi, int.q(sub_140b74be0(rcx_18)))
            labelid_1:
                result.b = 1
        else
            (*(*arg2 + 0x158))(arg2, rsi, sub_140b74be0(*arg1))
        labelid_1:
            result.b = 1
    else if (((rcx u>> 0x11).b & 1) != 0)
        char rax_23 = sub_140b74b60(*arg1)
        char* rcx_23 = zx.q(*(arg2 + 0x79))
        
        if (rax_23 == 0)
            result.b = not.b(*(arg2 + 0x7b))
            result.b &= *(rcx_23 + rsi)
            result.b = result.b
            *(rcx_23 + rsi) = result.b
        else
            result.b = not.b(*(arg2 + 0x7b))
            result.b &= *(rcx_23 + rsi)
            result.b |= *(arg2 + 0x7a)
            *(rcx_23 + rsi) = result.b
        
    labelid_1:
        result.b = 1
    else if (((rcx u>> 0xe).b & 1) != 0)
        sub_140597df0(rsi, sub_140b74df0(*arg1, &var_200))
    label_141d48372:
        rcx_5 = var_200
    label_141d48376:
        
        if (rcx_5 == 0)
        labelid_1:
            result.b = 1
        else
            sub_140a74f90(rcx_5)
        labelid_1:
            result.b = 1
    else if (((rcx u>> 0x15).b & 1) != 0)
        int64_t* rcx_26 = *arg1
        
        if (rcx_26[1].d != 5)
            result.b = 0
        else
            int64_t* rax_28 = sub_140b74a70(rcx_26)
            int64_t* rdi_2 = nullptr
            var_290 = nullptr
            int32_t i_2 = rax_28[1].d
            int64_t r12_1 = *rax_28
            int32_t i_4 = i_2
            
            if (i_2 != 0)
                sub_14061cb30(&var_290, i_2, 0)
                rdi_2 = var_290
                int64_t* rcx_28 = rdi_2
                void* r12_2 = r12_1 - rdi_2
                int32_t i
                
                do
                    *rcx_28 = *(r12_2 + rcx_28)
                    void* rax_30 = *(r12_2 + rcx_28 + 8)
                    rcx_28[1] = rax_30
                    
                    if (rax_30 != 0)
                        *(rax_30 + 8) += 1
                    
                    rcx_28 = &rcx_28[2]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                i_2 = i_4
            else
                int32_t var_284_1 = 0
            
            int16_t* rax_31 = arg2[0xf]
            char rdx_17 = (arg2[0x10].d).b
            int32_t rcx_29 = *(rax_31 + 0x3c)
            var_200 = rax_31
            int64_t* var_1f8_1 = rsi
            int32_t r12_3 = rsi[1].d
            
            if (i_2 s> r12_3)
                sub_140cd78f0(&var_200, i_2 - r12_3)
                rsi = var_1f8_1
            else if (i_2 s< r12_3)
                int32_t r12_4 = r12_3 - i_2
                sub_140cd9680(&var_200, i_2, r12_4)
                int32_t i_6 = i_2
                var_258 = &var_200
                int32_t var_24c_1 = r12_4
                sub_140cd32c0(&var_200, &var_258)
                rsi = var_1f8_1
            
            int32_t r12_5 = 0
            
            if (i_2 s<= 0)
                goto label_141d47f0c
            
            int64_t rbx_6 = 0
            
            while (true)
                void* rax_32 = *rdi_2
                
                if (rax_32 != 0 && *(rax_32 + 8) u> 1)
                    void* r8_6
                    
                    if (rsi[1].d != 0)
                        void* rcx_34 = *rsi
                        
                        if ((not.b(rdx_17) & 1) == 0 && (rcx_34.b & 1) != 0)
                            rcx_34 = (rcx_34 s>> 1) + rsi
                        
                        r8_6 = sx.q(rcx_29 * r12_5) + rcx_34
                    else
                        r8_6 = nullptr
                    
                    char rax_39
                    rax_39, arg5 = sub_141d49370(rdi_2, arg2[0xf], r8_6, var_270, arg5, arg6, 
                        arg7 & 0xfffffffff7fffa7d, arg8)
                    
                    if (rax_39 == 0)
                        break
                    
                    rsi = var_1f8_1
                
                r12_5 += 1
                rbx_6 += 1
                rdi_2 = &rdi_2[2]
                
                if (rbx_6 s>= sx.q(i_2))
                    sub_140627040(&var_290)
                    goto label_141d47cb6_2
            
            sub_140627040(&var_290)
            result.b = 0
    else
        int16_t* var_280
        int16_t* var_268
        int64_t rax_101
        int64_t* rcx_72
        
        if (((rcx u>> 0x2e).b & 1) != 0)
            int64_t* rcx_40 = *arg1
            
            if (rcx_40[1].d != 6)
                result.b = 0
            else
                int16_t** rax_42 = (**rcx_40)(rcx_40)
                int64_t* r12_6 = rax_42[1]
                int16_t* r10_1 = *rax_42
                var_280 = r10_1
                
                if (r12_6 != 0)
                    r12_6[1].d += 1
                
                char rcx_41 = (arg2[0x14].d).b
                int128_t zmm0 = *(arg2 + 0x88)
                int64_t var_1d8 = arg2[0xf]
                uint128_t zmm1 = zx.o(arg2[0x13])
                int64_t var_1d0_1 = arg2[0x10]
                int128_t var_1c0 = zmm0
                int64_t* var_1c8_1 = rsi
                uint64_t var_1b0 = zmm1.q
                int32_t rbx_8 = *(r10_1 + 8) - *(r10_1 + 0x34)
                int32_t r8_8 = rsi[1].d
                int32_t r8_9
                
                if ((not.b(rcx_41) & 1) != 0)
                    r8_9 = r8_8 - *(rsi + 0x34)
                else
                    r8_9 = r8_8 - *(rsi + 0x24)
                
                if (r8_9 != 0)
                    sub_140cfaf40(&var_1d8, 0, r8_9)
                    rsi = var_1c8_1
                label_141d477f2:
                    void* r8_10 = &var_1c0:4
                    
                    if ((not.b(rcx_41) & 1) != 0)
                        sub_141d485f0(rsi, rbx_8, r8_10)
                    else
                        sub_140cfb920(rsi, rbx_8, r8_10)
                    
                    r10_1 = var_280
                    rsi = var_1c8_1
                else if (rbx_8 != 0)
                    goto label_141d477f2
                
                int32_t rbx_9 = *(r10_1 + 0x28)
                void* r9_2 = &r10_1[8]
                var_200:4.d = 1
                int32_t rcx_44 = 0
                var_200.d = 0
                int32_t r8_11 = 0
                void* var_1f8_2 = r9_2
                int32_t var_1f0_2 = 0xffffffff
                int32_t var_1ec
                var_1ec.q = 0
                
                if (rbx_9 != 0)
                    void* rax_46 = *(r9_2 + 0x10)
                    
                    if (rax_46 != 0)
                        r9_2 = rax_46
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rbx_9 - 1)
                    int32_t rdx_26 = *r9_2
                    int32_t var_1ec_3
                    
                    if (rdx_26 != 0)
                    label_141d47898:
                        int32_t rax_53 = neg.d(rdx_26) & rdx_26
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_53)
                        var_200:4.d = rax_53
                        int32_t rax_54
                        
                        if (rax_53 == 0)
                            rax_54 = 0x20
                        else
                            rax_54 = 0x1f - temp0_1
                        
                        int32_t var_1ec_2 = r8_11 - rax_54 + 0x1f
                        
                        if (r8_11 - rax_54 + 0x1f s> rbx_9)
                            var_1ec_3 = rbx_9
                    else
                        while (true)
                            int64_t rdx_27 = sx.q(rcx_44)
                            r8_11 += 0x20
                            rcx_44 += 1
                            int32_t var_1e8_1 = r8_11
                            var_200.d = rcx_44
                            
                            if (rdx_27.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_26 = *(r9_2 + (rdx_27 << 2) + 4)
                            var_1f0_2 = 0xffffffff
                            
                            if (rdx_26 != 0)
                                goto label_141d47898
                        
                        var_1ec_3 = rbx_9
                    r10_1 = var_280
                
                int32_t rdx_28 = *(r10_1 + 0x28)
                int16_t* rbx_10 = &r10_1[8]
                arg5 = var_1f0_2.o
                int32_t rdi_3 = *(rbx_10 + 0x18)
                zmm0 = var_200.o
                var_258 = r10_1
                double var_240_1[0x2] = arg5
                var_250.o = zmm0
                int32_t r13_2 = 0xffffffff << (rdx_28.b & 0x1f)
                zmm0 = var_258.o
                int32_t r8_14 = rdx_28 s>> 5
                int32_t r9_4 = rdx_28 & 0xffffffe0
                arg5 = _mm_unpackhi_pd(arg5, arg5[0])
                int64_t var_208_1 = arg5.q
                var_278 = rbx_10
                int32_t var_1f0_3 = r13_2
                int32_t var_1ec_4 = rdx_28
                int128_t var_228 = zmm0
                uint128_t var_248
                uint128_t var_218_1 = var_248
                
                if (rdx_28 != rdi_3)
                    int16_t* rax_56 = *(rbx_10 + 0x10)
                    int16_t* r10_2 = rbx_10
                    
                    if (rax_56 != 0)
                        r10_2 = rax_56
                    
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(rdi_3 - 1)
                    int32_t rdx_32 = *(r10_2 + (sx.q(r8_14) << 2)) & r13_2
                    int32_t var_1ec_6
                    
                    if (rdx_32 != 0)
                    label_141d47972:
                        int32_t rax_63 = neg.d(rdx_32) & rdx_32
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rax_63)
                        int32_t r11_1
                        
                        if (rax_63 == 0)
                            r11_1 = 0x20
                        else
                            r11_1 = 0x1f - temp0_3
                        
                        int32_t var_1ec_5 = r9_4 - r11_1 + 0x1f
                        
                        if (r9_4 - r11_1 + 0x1f s> rdi_3)
                            var_1ec_6 = rdi_3
                    else
                        while (true)
                            int64_t rcx_49 = sx.q(r8_14)
                            r9_4 += 0x20
                            r8_14 += 1
                            
                            if (rcx_49.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_32 = *(r10_2 + (rcx_49 << 2) + 4)
                            var_1f0_3 = 0xffffffff
                            
                            if (rdx_32 != 0)
                                goto label_141d47972
                        
                        var_1ec_6 = rdi_3
                    rbx_10 = var_278
                    r10_1 = var_280
                
                int64_t* rcx_52 = var_1f0_3.q u>> 0x20
                var_290 = rcx_52
                int64_t* rbx_12
                
                while (true)
                    int64_t rax_65 = sx.q(var_218_1:0xc.d)
                    int64_t* rdx_33 = var_228.q
                    
                    if (rax_65.d == rcx_52.d && var_218_1.q == rbx_10 && rdx_33 == r10_1)
                        sub_140d0c840(&var_1d8)
                        
                        if (r12_6 == 0)
                            goto label_141d47cb6_2
                        
                        r12_6[1].d -= 1
                        
                        if (r12_6[1].d != 1)
                            goto label_141d47cb6_2
                        
                        (**r12_6)(r12_6)
                        int32_t temp13_1 = *(r12_6 + 0xc)
                        *(r12_6 + 0xc) -= 1
                        
                        if (temp13_1 != 1)
                            goto label_141d47cb6_2
                        
                        rax_101 = *r12_6
                        rcx_72 = r12_6
                        goto label_141d47cb3
                    
                    int64_t* rdi_4 = *rdx_33 + rax_65 * 0x28
                    var_268 = &rdi_4[2]
                    void* rax_68 = rdi_4[2]
                    
                    if (rax_68 != 0 && *(rax_68 + 8) u> 1)
                        int64_t* rdx_34 = &var_1b0
                        int32_t rax_70
                        
                        if ((not.b(rcx_41) & 1) != 0)
                            rax_70 = sub_140cf1c20(rsi, rdx_34)
                        else
                            rax_70 = sub_140cf1af0(rsi, rdx_34)
                        
                        sub_140cf59a0(&var_1d8, rax_70)
                        void*** rax_71 = j_sub_140a82f30(0x30)
                        void*** rbx_11 = rax_71
                        
                        if (rax_71 == 0)
                            rbx_11 = nullptr
                        else
                            rax_71[1].d = 1
                            *(rax_71 + 0xc) = 1
                            *rax_71 = &data_142d85508
                            rax_71[3].d = 0
                            rbx_11[2] = &data_142d84ab0
                            sub_140596d10(&rbx_11[4], rdi_4)
                            rbx_11[3].d = 2
                        
                        var_250.q = rbx_11
                        var_258 = &rbx_11[2]
                        rbx_12 = var_250.q
                        int16_t* r13_3 = var_258
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d += 1
                            int64_t* rdi_5 = var_250.q
                            
                            if (rdi_5 != 0)
                                rdi_5[1].d -= 1
                                
                                if (rdi_5[1].d == 1)
                                    (**rdi_5)(rdi_5)
                                    int32_t temp15_1 = *(rdi_5 + 0xc)
                                    *(rdi_5 + 0xc) -= 1
                                    
                                    if (temp15_1 == 1)
                                        (*(*rdi_5 + 8))(rdi_5, 1)
                        
                        var_200 = r13_3
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d += 1
                        
                        int64_t* r8_15
                        
                        if ((not.b(rcx_41) & 1) != 0)
                            if (var_1c8_1[1].d != *(var_1c8_1 + 0x34))
                                r8_15 = sx.q(var_1b0:4.d * rax_70) + *var_1c8_1
                            else
                                r8_15 = nullptr
                        else if (var_1c8_1[1].d != *(var_1c8_1 + 0x24))
                            void* rcx_59 = *var_1c8_1
                            
                            if ((rcx_59.b & 1) != 0)
                                rcx_59 = (rcx_59 s>> 1) + var_1c8_1
                            
                            r8_15 = sx.q(var_1b0:4.d * rax_70) + rcx_59
                        else
                            r8_15 = nullptr
                        
                        int64_t r13_5 = arg7 & 0xfffffffff7fffa7d
                        char rax_83
                        double zmm2[0x2]
                        rax_83, zmm2 = sub_141d49370(&var_200, arg2[0xf], r8_15, var_270, arg5, 
                            arg6, r13_5, arg8)
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d -= 1
                            
                            if (rbx_12[1].d == 1)
                                int64_t rdx_40 = *rbx_12
                                (*rdx_40)(rbx_12, rdx_40)
                                int32_t temp17_1 = *(rbx_12 + 0xc)
                                *(rbx_12 + 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    (*(*rbx_12 + 8))(rbx_12, 1)
                        
                        int32_t rax_86 = var_1c8_1[1].d
                        int64_t* r8_18
                        
                        if ((not.b(rcx_41) & 1) != 0)
                            if (rax_86 != *(var_1c8_1 + 0x34))
                                r8_18 = sx.q(var_1b0:4.d * rax_70) + sx.q(var_1c0.d) + *var_1c8_1
                            else
                                r8_18 = nullptr
                        else if (rax_86 != *(var_1c8_1 + 0x24))
                            void* rdx_41 = *var_1c8_1
                            
                            if ((rdx_41.b & 1) != 0)
                                rdx_41 = (rdx_41 s>> 1) + var_1c8_1
                            
                            r8_18 = sx.q(var_1c0.d) + sx.q(var_1b0:4.d * rax_70) + rdx_41
                        else
                            r8_18 = nullptr
                        
                        result, arg5 = sub_141d49370(var_268, arg2[0x10], r8_18, var_270, zmm2, 
                            arg6, r13_5, arg8)
                        
                        if (rax_83 == 0)
                            break
                        
                        if (result.b == 0)
                            break
                        
                        if (rbx_12 != 0)
                            rbx_12[1].d -= 1
                            
                            if (rbx_12[1].d == 1)
                                (**rbx_12)(rbx_12)
                                int32_t temp23_1 = *(rbx_12 + 0xc)
                                *(rbx_12 + 0xc) -= 1
                                
                                if (temp23_1 == 1)
                                    (*(*rbx_12 + 8))(rbx_12, 1)
                    
                    var_218_1:8.d &= not.d(var_228:0xc.d)
                    sub_14059bdd0(&var_228:8)
                    rcx_52 = var_290
                    r10_1 = var_280
                    rsi = var_1c8_1
                    rbx_10 = var_278
                
                if (rbx_12 != 0)
                    rbx_12[1].d -= 1
                    
                    if (rbx_12[1].d == 1)
                        (**rbx_12)(rbx_12)
                        int32_t temp20_1 = *(rbx_12 + 0xc)
                        *(rbx_12 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            (*(*rbx_12 + 8))(rbx_12, 1)
                
                if (r12_6 == 0)
                    result.b = 0
                else
                    r12_6[1].d -= 1
                    
                    if (r12_6[1].d != 1)
                        result.b = 0
                    else
                        (**r12_6)(r12_6)
                        int32_t temp22_1 = *(r12_6 + 0xc)
                        *(r12_6 + 0xc) -= 1
                        
                        if (temp22_1 != 1)
                            result.b = 0
                        else
                            (*(*r12_6 + 8))(r12_6, 1)
                            result.b = 0
        else if (((rcx u>> 0x2f).b & 1) != 0)
            int64_t* rcx_79 = *arg1
            
            if (rcx_79[1].d != 5)
                result.b = 0
            else
                int64_t* rax_107 = sub_140b74a70(rcx_79)
                int64_t* rbx_13 = nullptr
                var_290 = nullptr
                int32_t i_3 = rax_107[1].d
                int64_t r12_7 = *rax_107
                int32_t i_5 = i_3
                
                if (i_3 != 0)
                    sub_14061cb30(&var_290, i_3, 0)
                    rbx_13 = var_290
                    int64_t* rcx_81 = rbx_13
                    void* r12_8 = r12_7 - rbx_13
                    int32_t i_1
                    
                    do
                        *rcx_81 = *(r12_8 + rcx_81)
                        void* rax_109 = *(r12_8 + rcx_81 + 8)
                        rcx_81[1] = rax_109
                        
                        if (rax_109 != 0)
                            *(rax_109 + 8) += 1
                        
                        rcx_81 = &rcx_81[2]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    i_3 = i_5
                else
                    int32_t var_284_2 = 0
                
                var_200 = arg2[0xf]
                int32_t rax_111 = arg2[0x12].d
                int64_t* var_1f8_4 = rsi
                int32_t var_1f0
                var_1f0.o = *(arg2 + 0x80)
                
                if (i_3 s<= 0)
                label_141d47f02:
                    sub_140d0c8b0(&var_200)
                label_141d47f0c:
                    sub_140627040(&var_290)
                label_141d47cb6:
                    result.b = 1
                else
                    int64_t r12_9 = 0
                    
                    while (true)
                        void* rax_112 = *rbx_13
                        
                        if (rax_112 != 0 && *(rax_112 + 8) u> 1)
                            void var_1e4
                            int32_t rax_113 = sub_140cf1c20(rsi, &var_1e4)
                            int16_t* r9_8 = var_200
                            int64_t rax_114 = *(r9_8 + 0x40)
                            int64_t r10_4 = sx.q(rax_113 * rax_111) + *var_1f8_4
                            uint8_t r8_23 = (rax_114 u>> 9).b & 1
                            int32_t var_1e8
                            
                            if (r8_23 != 0)
                                memset(r10_4, 0, sx.q(var_1e8))
                            else if (not(test_bit(rax_114, 9)))
                                (*(*r9_8 + 0xf0))(r9_8, sx.q(*(r9_8 + 0x4c)) + r10_4, r8_23)
                            else
                                memset(sx.q(*(r9_8 + 0x4c)) + r10_4, 0, 
                                    sx.q(*(r9_8 + 0x3c) * *(r9_8 + 0x38)))
                            int64_t* r8_26
                            
                            if (var_1f8_4[1].d != *(var_1f8_4 + 0x34))
                                r8_26 = sx.q(rax_113 * rax_111) + *var_1f8_4
                            else
                                r8_26 = nullptr
                            
                            char rax_122
                            rax_122, arg5 = sub_141d49370(rbx_13, arg2[0xf], r8_26, var_270, arg5, 
                                arg6, arg7 & 0xfffffffff7fffa7d, arg8)
                            
                            if (rax_122 == 0)
                                break
                            
                            rsi = var_1f8_4
                        
                        r12_9 += 1
                        rbx_13 = &rbx_13[2]
                        
                        if (r12_9 s>= sx.q(i_3))
                            goto label_141d47f02
                    
                    sub_140627040(&var_290)
                    result.b = 0
        else
            int64_t* rbx_14
            
            if (((rcx u>> 0x1e).b & 1) == 0)
                if (((rcx u>> 0x14).b & 1) == 0)
                    r13_7 = arg2
                    
                    if (((rcx u>> 0x10).b & 1) != 0)
                        goto label_141d48398
                    
                    goto label_141d48395
                
                TEB* gsbase
                void* rbx_15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                
                if (data_143f378b0 s> *(rbx_15 + 0x14))
                    _Init_thread_header(&data_143f378b0)
                    
                    if (data_143f378b0 == 0xffffffff)
                        sub_140b58260(&data_143f378a8, u"DateTime", 1)
                        _Init_thread_footer(&data_143f378b0)
                
                if (data_143f378c0 s> *(rbx_15 + 0x14))
                    _Init_thread_header(&data_143f378c0)
                    
                    if (data_143f378c0 == 0xffffffff)
                        sub_140b58260(&data_143f378b8, u"Color", 1)
                        _Init_thread_footer(&data_143f378c0)
                
                if (data_143f378d0 s> *(rbx_15 + 0x14))
                    _Init_thread_header(&data_143f378d0)
                    
                    if (data_143f378d0 == 0xffffffff)
                        sub_140b58260(&data_143f378c8, u"LinearColor", 1)
                        _Init_thread_footer(&data_143f378d0)
                
                int64_t* rcx_109 = *arg1
                result = zx.q(rcx_109[1].d)
                
                if (result.d == 6)
                    int16_t** rax_142 = (**rcx_109)()
                    rbx_14 = rax_142[1]
                    int16_t* rcx_110 = *rax_142
                    var_200 = rcx_110
                    int64_t* var_1f8_6 = rbx_14
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d += 1
                    
                    if (sub_141d48fb0(rcx_110, arg2[0xf], rsi, var_270, arg6, 
                            arg7 & 0xfffffffff7fffa7d, arg8).b == 0)
                        goto label_141d47fdd
                    
                    sub_140669d70(&var_200)
                label_141d47cb6_1:
                    result.b = 1
                else
                    int32_t var_1f8
                    
                    if (result.d != 2)
                    label_141d48329:
                        int64_t* rcx_128 = *arg1
                        
                        if (rcx_128[1].d == 2)
                            sub_140b74df0(rcx_128, &var_200)
                            int16_t* rdx_69 = &data_142d40450
                            
                            if (var_1f8 != 0)
                                rdx_69 = var_200
                            
                            sub_140941070(arg2, rdx_69, rsi, 0, 0, data_143ddb418)
                            goto label_141d48372
                        
                        result.b = 0
                    else
                        void* rdx_58 = arg2[0xf]
                        result = *(rdx_58 + 0x18)
                        
                        if (result == data_143f378c8)
                            sub_140b74df0(rcx_109, &var_200)
                            var_270.d = *sub_140ad6f70(&var_280, &var_200)
                            sub_140acc920(&var_258, &var_270)
                            *rsi = var_258.o
                            goto label_141d48372
                        
                        if (result == data_143f378b8)
                            sub_140b74df0(rcx_109, &var_200)
                            *rsi = *sub_140ad6f70(&var_280, &var_200)
                            goto label_141d48372
                        
                        if (result != data_143f378a8)
                            int64_t* rcx_125 = *(rdx_58 + 0xb8)
                            
                            if (rcx_125 == 0)
                                goto label_141d48329
                            
                            if ((*(*rcx_125 + 0xd0))(rcx_125).b == 0)
                                goto label_141d48329
                            
                            int64_t* rbx_16 = *(arg2[0xf] + 0xb8)
                            sub_140b74df0(*arg1, &var_200)
                            int16_t* rdi_11 = &data_142d40450
                            int64_t rax_149 = data_143ddb418
                            
                            if (var_1f8 != 0)
                                rdi_11 = var_200
                            
                            var_278 = rdi_11
                            
                            if ((*(*rbx_16 + 0xd8))(rbx_16, &var_278, rsi, 0, 0, rax_149).b != 0)
                                goto label_141d48372
                            
                            sub_140941070(arg2, var_278, rsi, 0, 0, data_143ddb418)
                            goto label_141d48372
                        
                        sub_140b74df0(rcx_109, &var_268)
                        wchar16* rdi_10 = &data_142d40450
                        int16_t* rcx_117 = &data_142d40450
                        int32_t var_260
                        
                        if (var_260 != 0)
                            rcx_117 = var_268
                        
                        if (sub_140a54510(rcx_117, &data_142e226a8).d == 0)
                            *rsi = 0
                        label_141d481e8:
                            rcx_5 = var_268
                            goto label_141d48376
                        
                        int16_t* rcx_118 = &data_142d40450
                        
                        if (var_260 != 0)
                            rcx_118 = var_268
                        
                        if (sub_140a54510(rcx_118, &data_142e226b0) == 0)
                            rcx_5 = var_268
                            *rsi = 0x2bca2875f4373fff
                            goto label_141d48376
                        
                        int16_t* rcx_119 = &data_142d40450
                        
                        if (var_260 != 0)
                            rcx_119 = var_268
                        
                        if (sub_140a54510(rcx_119, &data_142e226b8) == 0)
                            *rsi = *sub_140b29d90(&var_290)
                            rcx_5 = var_268
                            goto label_141d48376
                        
                        if (var_260 != 0)
                            rdi_10 = var_268
                        
                        if (sub_140b247f0(rdi_10, rsi).b != 0)
                            goto label_141d481e8
                        
                        if (sub_140b21b90(&var_268, rsi).b != 0)
                            goto label_141d481e8
                        
                        int16_t* rcx_124 = var_268
                        
                        if (rcx_124 == 0)
                            result.b = 0
                        else
                            sub_140a74f90(rcx_124)
                            result.b = 0
            else
                int64_t* rcx_94 = *arg1
                result = zx.q(rcx_94[1].d)
                
                if (result.d == 2)
                    sub_14065da90(rsi, sub_140aae2f0(&var_258, sub_140b74df0(rcx_94, &var_200)))
                    sub_1405970a0(&var_258)
                    goto label_141d48372
                
                if (result.d != 6)
                    result.b = 0
                else
                    int64_t* rax_128 = (**rcx_94)()
                    rbx_14 = rax_128[1]
                    int16_t* rdi_9 = *rax_128
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d += 1
                    
                    sub_140a96170(&var_258)
                    var_200 = rdi_9
                    int64_t* var_1f8_5 = rbx_14
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d += 1
                    
                    rdi_9.b = sub_141d48820(&var_200, &var_258) == 0
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d -= 1
                        
                        if (rbx_14[1].d == 1)
                            (**rbx_14)(rbx_14)
                            int32_t temp3_1 = *(rbx_14 + 0xc)
                            *(rbx_14 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_14 + 8))(rbx_14, 1)
                    
                    if (rdi_9.b == 0)
                        sub_14065da90(rsi, &var_258)
                        sub_1405970a0(&var_258)
                        
                        if (rbx_14 != 0)
                            rbx_14[1].d -= 1
                            
                            if (rbx_14[1].d == 1)
                                (**rbx_14)(rbx_14)
                                int32_t temp10_1 = *(rbx_14 + 0xc)
                                *(rbx_14 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    rax_101 = *rbx_14
                                    rcx_72 = rbx_14
                                label_141d47cb3:
                                    (*(rax_101 + 8))(rcx_72, 1)
                        
                    label_141d47cb6_2:
                        result.b = 1
                    else
                        sub_1405970a0(&var_258)
                    label_141d47fdd:
                        
                        if (rbx_14 == 0)
                            result.b = 0
                        else
                            rbx_14[1].d -= 1
                            
                            if (rbx_14[1].d != 1)
                                result.b = 0
                            else
                                (**rbx_14)(rbx_14)
                                int32_t temp11_1 = *(rbx_14 + 0xc)
                                *(rbx_14 + 0xc) -= 1
                                
                                if (temp11_1 != 1)
                                    result.b = 0
                                else
                                    (*(*rbx_14 + 8))(rbx_14, 1)
                                    result.b = 0
__security_check_cookie(rax_1 ^ &var_2d8)
return result
