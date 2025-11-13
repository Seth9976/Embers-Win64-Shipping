// 函数: sub_1424100e0
// 地址: 0x1424100e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = &arg2[8]
int32_t rbx = 0
void* rsi = arg6
char r15 = arg3
char var_227 = 0
int64_t result
int32_t var_220
int128_t var_1b0
char var_178

if (*r12 != data_143e1df78)
    if (rsi == 0)
        int32_t var_1c0
        sub_14240da20(arg1 + 0x260, &var_1c0, r12)
        int64_t rax_49 = sx.q(var_1c0)
        int64_t rsi_4
        
        if (rax_49.d != 0xffffffff)
            rsi_4 = rax_49 * 0xf0
        
        if (rax_49.d == 0xffffffff || rsi_4 == neg.q(*(arg1 + 0x260)))
            rsi = nullptr
        else
            rsi = rsi_4 + *(arg1 + 0x260) + 0x18
        
        r15 = arg3
    
    var_220.q = *r12
    int64_t var_218_1 = r12[1]
    void* rax_52 = r12[2]
    int32_t var_210
    var_210.q = rax_52
    
    if (rax_52 != 0)
        *(rax_52 + 8) += 1
    
    result = sub_142415bf0(arg1, &var_220, rsi)
    
    if (result.b == 0)
        if ((arg2[0x20] & 4) != 0)
            result = sub_1424159f0(arg1)
        
        if ((arg2[0x20] & 4) == 0 || result.b != 0)
            if ((arg2[0x20] & 2) != 0)
                result = sub_142415b10(arg1)
            
            if ((arg2[0x20] & 2) == 0 || result.b != 0)
                if ((arg2[0x20] & 1) != 0)
                    result = sub_142416250(arg1)
                
                if ((arg2[0x20] & 1) == 0 || result.b != 0)
                    if ((arg2[0x20] & 8) != 0)
                        result = sub_142415a80(arg1)
                    
                    if ((arg2[0x20] & 8) == 0 || result.b != 0)
                        uint32_t r8_6 = zx.d(arg2[1])
                        var_220.q = *r12
                        int64_t var_218_2 = r12[1]
                        void* rax_55 = r12[2]
                        var_210.q = rax_55
                        
                        if (rax_55 != 0)
                            *(rax_55 + 8) += 1
                        
                        result = sub_142417060(arg1, &var_220, r8_6, arg1 + 0x390, rsi)
                        
                        if (result.b != 0)
                            int32_t rsi_6 = arg4[1].d
                            int32_t rsi_7 = rsi_6 - 1
                            
                            if (rsi_6 - 1 s>= 0)
                                int32_t temp7_1
                                
                                do
                                    result = sub_140e68f40(r12, *arg4 + 0x48 + sx.q(rsi_7) * 0xc8)
                                    
                                    if (result.d == 3)
                                        sub_14241dd30(arg4, rsi_7, (result - 2).d, 0)
                                    else if (result.d == 2)
                                        goto label_142410846
                                    
                                    temp7_1 = rsi_7
                                    rsi_7 -= 1
                                while (temp7_1 - 1 s>= 0)
                            
                            char* rcx_29
                            int64_t rdx_18
                            int32_t rsi_8
                            int32_t r15_5
                            
                            if (r15 == 0 || (*arg2 & 2) != 0)
                                void* rax_57 = *(arg2 + 0x30)
                                rdx_18 = *(arg2 + 0x28)
                                var_1b0.q = rdx_18
                                var_1b0:8.q = rax_57
                                
                                if (rax_57 != 0)
                                    *(rax_57 + 8) += 1
                                
                                int128_t var_1a0
                                var_1a0.q = *(arg2 + 0x38)
                                void* rax_59 = *(arg2 + 0x40)
                                var_1a0:8.q = rax_59
                                
                                if (rax_59 != 0)
                                    *(rax_59 + 8) += 1
                                
                                int64_t var_190_2 = *(arg2 + 0x48)
                                void* rax_61 = *(arg2 + 0x50)
                                void* var_188_1 = rax_61
                                
                                if (rax_61 != 0)
                                    *(rax_61 + 8) += 1
                                
                                rcx_29 = &var_1b0
                                char var_180_1 = arg2[0x58]
                                rsi_8 = 0
                                r15_5 = 2
                            else
                                rcx_29 = &var_178
                                __builtin_memset(&var_178, 0, 0x31)
                                rdx_18 = 0
                                rsi_8 = 1
                                r15_5 = 0
                            
                            int64_t rax_63 = *(rcx_29 + 8)
                            int32_t r8_8 = arg4[1].d
                            __builtin_memset(rcx_29, 0, 0x30)
                            int64_t var_218_3 = rax_63
                            var_210.q = *(rcx_29 + 0x10)
                            int64_t var_20c = *(rcx_29 + 0x18)
                            int64_t var_200_1 = *(rcx_29 + 0x20)
                            int64_t var_1f8_1 = *(rcx_29 + 0x28)
                            char var_1f0_1 = rcx_29[0x30]
                            var_220.q = rdx_18
                            int32_t var_118
                            sub_1423fb4b0(&var_118, **(arg1 + 0x390), r8_8, r12, &var_220, arg2[1], 
                                0)
                            
                            if (r15_5 != 0)
                                sub_141b84450(&var_1b0)
                            
                            if (rsi_8 != 0)
                                sub_141b84450(&var_178)
                            
                            int64_t rax_72 = sx.q(*(arg1 + 0x398)) - 1
                            
                            if (rax_72 s> 0)
                                int64_t rsi_9 = 0
                                
                                do
                                    int64_t r15_6 = sx.q(arg4[1].d)
                                    int32_t rax_74 = (r15_6 + 1).d
                                    var_118 = *(*(arg1 + 0x390) + (rsi_9 << 2))
                                    arg4[1].d = rax_74
                                    
                                    if (rax_74 s> *(arg4 + 0xc))
                                        sub_1405c5190(arg4)
                                    
                                    sub_1423fb320(r15_6 * 0xc8 + *arg4, &var_118)
                                    rsi_9 += 1
                                while (rsi_9 s< rax_72)
                                
                                r12 = &arg2[8]
                            
                            int64_t rsi_10 = sx.q(arg4[1].d)
                            int32_t rax_76 = (rsi_10 + 1).d
                            var_118 = *(*(arg1 + 0x390) + (rax_72 << 2))
                            arg4[1].d = rax_76
                            
                            if (rax_76 s> *(arg4 + 0xc))
                                sub_1405c5190(arg4)
                            
                            sub_1423fb170(rsi_10 * 0xc8 + *arg4, &var_118)
                            var_227 = 1
                            void var_78
                            sub_140e53610(&var_78)
                            void var_a8
                            sub_140e53610(&var_a8)
                            int64_t* var_c0
                            
                            if (var_c0 != 0)
                                var_c0[1].d -= 1
                                
                                if (var_c0[1].d == 1)
                                    (**var_c0)(var_c0)
                                    int32_t temp13_1 = *(var_c0 + 0xc)
                                    *(var_c0 + 0xc) -= 1
                                    
                                    if (temp13_1 == 1)
                                        (*(*var_c0 + 8))(var_c0, 1)
                            
                            void var_110
                            result = sub_141b84450(&var_110)
                        label_142410846:
                            *(arg1 + 0x398) = 0
                            
                            if (*(arg1 + 0x39c) s<= 0xffffffff)
                                result = sub_1405dadb0(arg1 + 0x390, 0)
else
    int32_t* r11_1 = arg1 + 0x270
    var_220 = 0
    int32_t r10_1 = r11_1[6]
    int32_t var_21c_1 = 1
    int32_t rcx = 0
    int32_t* var_218 = r11_1
    int32_t var_210_1 = 0xffffffff
    int64_t var_20c_1 = 0
    
    if (r10_1 != 0)
        int32_t* rax_2 = *(r11_1 + 0x10)
        int32_t* r8 = r11_1
        
        if (rax_2 != 0)
            r8 = rax_2
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r8
        
        if (rdx_2 != 0)
        label_1424101d9:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_21c_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_20c_1.d = rcx - rax_10 + 0x1f
            
            if (rcx - rax_10 + 0x1f s> r10_1)
                var_20c_1.d = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rbx)
                rcx += 0x20
                rbx += 1
                var_20c_1:4.d = rcx
                var_220 = rbx
                
                if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = r8[rdx_3 + 1]
                var_210_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1424101d9
            
            var_20c_1.d = r10_1
    
    int32_t rbx_1 = r11_1[6]
    void* r10_2 = arg1 + 0x260
    int32_t rdx_5 = *(r10_2 + 0x28)
    double zmm2[0x2] = var_210_1.o
    int128_t var_1e0_1 = var_220.o
    int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
    double var_1d0_1[0x2] = zmm2
    int32_t r8_2 = rdx_5 s>> 5
    int32_t r9_1 = rdx_5 & 0xffffffe0
    int64_t var_190_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    uint128_t zmm1 = var_1e0_1
    var_1e0_1:8.d = r15_1
    var_1e0_1:0xc.d = rdx_5
    var_1b0 = r10_2.o
    uint128_t var_1a0_1 = zmm1
    
    if (rdx_5 != rbx_1)
        int32_t* rax_12 = *(r11_1 + 0x10)
        int32_t* r10_3 = r11_1
        
        if (rax_12 != 0)
            r10_3 = rax_12
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = r10_3[sx.q(r8_2)] & r15_1
        
        if (rdx_9 != 0)
        label_1424102b2:
            int32_t rax_19 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rsi_1
            
            if (rax_19 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_3
            
            var_1e0_1:0xc.d = r9_1 - rsi_1 + 0x1f
            
            if (r9_1 - rsi_1 + 0x1f s> rbx_1)
                var_1e0_1:0xc.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_2)
                r9_1 += 0x20
                r8_2 += 1
                
                if (rcx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = r10_3[rcx_5 + 1]
                var_1e0_1:8.d = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1424102b2
            
            var_1e0_1:0xc.d = rbx_1
        
        r11_1 = var_218
        r10_2 = arg1 + 0x260
    
    uint32_t r15_3 = (var_1e0_1:8.q u>> 0x20).d
    
    while (true)
        result = sx.q(var_1a0_1:0xc.d)
        int64_t rcx_7 = var_1b0.q
        
        if (result.d == r15_3 && var_1a0_1.q == r11_1 && rcx_7 == r10_2)
            break
        
        int64_t* rsi_3 = result * 0xf0 + *rcx_7
        
        if (sub_140d6de40(rsi_3) == 0 && sub_140d6df40(rsi_3) == 0 && (*(rsi_3 + 0x34) & 4) == 0)
            var_178 = *arg2
            char var_177_1 = arg2[1]
            int64_t var_170_1 = *r12
            int64_t rax_26 = r12[1]
            int64_t* rax_27 = r12[2]
            
            if (rax_27 != 0)
                rax_27[1].d += 1
            
            int32_t var_158
            int32_t rcx_11 = var_158 ^ ((var_158 ^ r12[3].d) & 0xf)
            int64_t var_150 = *(arg2 + 0x28)
            void* rax_32 = *(arg2 + 0x30)
            var_158 = rcx_11
            void* var_148_1 = rax_32
            
            if (rax_32 != 0)
                *(rax_32 + 8) += 1
            
            int64_t var_140_1 = *(arg2 + 0x38)
            void* rax_34 = *(arg2 + 0x40)
            void* var_138_1 = rax_34
            
            if (rax_34 != 0)
                *(rax_34 + 8) += 1
            
            int64_t var_130_1 = *(arg2 + 0x48)
            void* rax_36 = *(arg2 + 0x50)
            void* var_128_1 = rax_36
            
            if (rax_36 != 0)
                *(rax_36 + 8) += 1
            
            char var_120_1 = arg2[0x58]
            int64_t var_170_2 = *rsi_3
            int64_t rax_39 = rsi_3[1]
            void* rax_40 = rsi_3[2]
            var_1e0_1.q = rax_40
            
            if (rax_40 != 0)
                *(rax_40 + 8) += 1
            
            zmm1 = rax_26.o
            int64_t var_1e8_2
            var_1e8_2.o = zmm1
            int64_t* rbx_2 = _mm_bsrli_si128(zmm1, 8).q
            int64_t var_168_1
            var_168_1.o = rax_39.o
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp10_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            int32_t var_240
            var_240.q = &rsi_3[3]
            sub_1424100e0(arg1, &var_178, zx.q(arg3), arg4, arg5, var_240)
            sub_141b84450(&var_150)
            
            if (rax_27 != 0)
                rax_27[1].d -= 1
                
                if (rax_27[1].d == 1)
                    (**rax_27)(rax_27)
                    int32_t temp11_1 = *(rax_27 + 0xc)
                    *(rax_27 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rax_27 + 8))(rax_27, 1)
        
        var_1a0_1:8.d &= not.d(var_1b0:0xc.d)
        sub_14059bdd0(&var_1b0:8)
        r11_1 = var_218
        r10_2 = arg1 + 0x260

if ((*arg2 & 1) != 0)
    if (var_227 != 0)
        return sub_141b6d510(arg5, r12)
    
    if ((arg2[0x20] & 0xf) == 0 && arg2[1] != 3)
        return sub_141b6d510(arg5, r12)

return result
