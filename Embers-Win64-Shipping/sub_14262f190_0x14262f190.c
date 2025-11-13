// 函数: sub_14262f190
// 地址: 0x14262f190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg5, 0x1a)

int64_t rax_4 = data_143b502a8(zx.q(arg2[2] << 3), 1)
int64_t rbp = rax_4
uint64_t rdi

if (rax_4 != 0)
    if (*(arg1 + 9) != 0)
        (*(*arg1 + 0x20))(arg1, 0x16)
    
    if (sub_142638c50(arg1, arg2, arg3, rbp) != 0)
        if (*(arg1 + 9) != 0)
            (*(*arg1 + 0x28))(arg1, 0x16)
            
            if (*(arg1 + 9) != 0)
                (*(*arg1 + 0x20))(arg1, 0x19)
        
        int64_t r15_1 = sx.q(*arg2)
        int32_t rsi_1 = arg2[1]
        uint64_t rbx_1 = zx.q(*(arg2 + 0x1a))
        int32_t var_120_1 = r15_1.d
        int32_t var_134_1 = rsi_1
        int32_t var_12c_1 = rbx_1.d
        uint64_t r14_1 = zx.q((rbx_1 + 1).d)
        int32_t var_130_1 = r14_1.d
        uint64_t rax_11 = data_143b502a8(zx.q((r14_1 * 5).d << 3), 1)
        rdi = rax_11
        
        if (rax_11 != 0)
            memset(rdi, 0, (rbx_1 + 1) * 0x28)
            int32_t i = 0
            
            if (r14_1.d != 0)
                void* rax_13 = rdi + 0x24
                
                do
                    *(rax_13 - 4) = i.w
                    i += 1
                    *(rax_13 - 2) = 0xffff
                    rax_13 += 0x28
                while (i s< r14_1.d)
            
            int32_t var_138_1 = 0
            int32_t r13_1 = 0
            int32_t* var_f8
            uint64_t var_f0
            
            if (rsi_1 s> 0)
                int32_t* var_e8_1 = nullptr
                int64_t rcx_12 = r15_1 << 2
                int32_t* rax_14 = nullptr
                int64_t var_c8_1 = rcx_12
                
                do
                    int32_t i_1 = 0
                    
                    if (r15_1.d s> 0)
                        int32_t* r11_1 = arg2
                        int32_t* rsi_2 = rax_14
                        var_f8 = rax_14
                        
                        do
                            int64_t r10_1 = *(r11_1 + 0x40)
                            int64_t var_100_1 = r10_1
                            int32_t rcx_13 = *(rsi_2 + r10_1)
                            uint64_t rax_16 = zx.q(rcx_13) & 0xffffff
                            uint64_t r14_2 = zx.q(rax_16.d)
                            uint64_t r15_2 = zx.q(rax_16.d + (rcx_13 u>> 0x18))
                            
                            if (r14_2 u< r15_2)
                                uint64_t var_148_1 = r14_2
                                uint64_t r9_5 = rax_16 * 0xc
                                uint64_t r8_3 = zx.q(r14_2.d)
                                var_f0 = r9_5
                                
                                do
                                    int64_t rbx_2 = rax_4
                                    int64_t rdx_3 = *(r11_1 + 0x48)
                                    int16_t rbp_1 = *(rbx_2 + (r8_3 << 1))
                                    
                                    if (rbp_1 != 0 && zx.d(rbp_1) u< var_130_1)
                                        uint64_t rcx_15 = zx.q(rbp_1) * 5
                                        int16_t rax_19 = *(rdi + (rcx_15 << 3) + 0x24)
                                        uint64_t rdi_1 = rdi + (rcx_15 << 3)
                                        int16_t rcx_16 = *(r9_5 + rdx_3)
                                        
                                        if (*(rdi_1 + 0x22) u< rcx_16)
                                            rcx_16 = *(rdi_1 + 0x22)
                                        
                                        *(rdi_1 + 0x22) = rcx_16
                                        int16_t rcx_17 = *(r9_5 + rdx_3)
                                        
                                        if (rax_19 u> rcx_17)
                                            rcx_17 = rax_19
                                        
                                        *(rdi_1 + 0x26) |= 8
                                        *(rdi_1 + 0x24) = rcx_17
                                        uint64_t rsi_4 = zx.q(*(rsi_2 + r10_1)) & 0xffffff
                                        
                                        if (rsi_4 u< r15_2)
                                            do
                                                int16_t rax_20 = *(rbx_2 + (rsi_4 << 1))
                                                
                                                if (rax_20 != 0)
                                                    uint32_t rbx_3 = zx.d(rax_20)
                                                    
                                                    if (rbx_3 u< var_130_1 && rax_20 != rbp_1)
                                                        int64_t r8_4 = sx.q(*(rdi_1 + 8))
                                                        int64_t rcx_18 = 0
                                                        
                                                        if (r8_4.d s> 0)
                                                            int32_t* rax_21 = *rdi_1
                                                            
                                                            do
                                                                if (*rax_21 == rbx_3)
                                                                    goto label_14262f4a7
                                                                
                                                                rcx_18 += 1
                                                                rax_21 = &rax_21[1]
                                                            while (rcx_18 s< r8_4)
                                                        
                                                        sub_142633840(rdi_1, (r8_4 + 1).d)
                                                        *(*rdi_1 + (sx.q(*(rdi_1 + 8)) << 2) - 4) =
                                                            rbx_3
                                                    
                                                label_14262f4a7:
                                                    rbx_2 = rax_4
                                                
                                                rsi_4 += 1
                                            while (rsi_4 s< r15_2)
                                            
                                            r13_1 = var_138_1
                                            r8_3 = var_148_1
                                            r9_5 = var_f0
                                            r11_1 = arg2
                                        
                                        if (*(rdi_1 + 0x18) s<= 0)
                                            for (int32_t j = 0; j s< 4; j += 1)
                                                if (sub_14262cf90(r11_1, rax_4, i_1, r13_1, 
                                                        r14_2.d, j) != 0)
                                                    if (j != 0xffffffff)
                                                        int32_t var_170_1
                                                        var_170_1.q = rax_4
                                                        int32_t var_178_1
                                                        var_178_1.q = arg2
                                                        sub_142635550(i_1, r13_1, r14_2.d, zx.q(j), 
                                                            var_178_1, var_170_1, rdi_1 + 0x10)
                                                    
                                                    break
                                                
                                                r11_1 = arg2
                                            
                                            r8_3 = var_148_1
                                            r9_5 = var_f0
                                        
                                        rdi = rax_11
                                        rsi_2 = var_f8
                                    
                                    r10_1 = var_100_1
                                    r8_3 += 1
                                    r11_1 = arg2
                                    r9_5 += 0xc
                                    r14_2 = zx.q(r14_2.d + 1)
                                    var_148_1 = r8_3
                                    var_f0 = r9_5
                                while (r8_3 s< r15_2)
                            
                            r15_1 = zx.q(var_120_1)
                            rsi_2 = &rsi_2[1]
                            i_1 += 1
                            var_f8 = rsi_2
                        while (i_1 s< r15_1.d)
                        
                        rax_14 = var_e8_1
                        rcx_12 = var_c8_1
                        rsi_1 = var_134_1
                    
                    r13_1 += 1
                    rax_14 += rcx_12
                    var_138_1 = r13_1
                    var_e8_1 = rax_14
                while (r13_1 s< rsi_1)
                
                rbx_1 = zx.q(var_12c_1)
            
            int16_t r12_1 = 0
            int16_t var_154_1 = 0
            uint64_t j_5 = 0x40
            int32_t* rax_26 = data_143b502a8(0x100, 1)
            int64_t rcx_23 = sx.q(rbx_1.d)
            int64_t i_9 = rcx_23 + 1
            int32_t* var_148_2 = rax_26
            int64_t i_17 = i_9
            int32_t* rdx_7 = rax_26
            int32_t j_1 = 0x40
            int32_t var_150_1 = 0
            rdi = 0
            
            if (rcx_23 != -1)
                int16_t* rsi_6 = rax_11 + 0x22
                int64_t i_15 = i_9
                int64_t i_2
                
                do
                    char rax_27 = rsi_6[2].b
                    
                    if ((rax_27 & 2) == 0 && (rax_27 & 8) != 0)
                        rsi_6[-1] = r12_1
                        rsi_6[2].b = rax_27 | 6
                        int32_t temp3_1 = j_5.d
                        
                        if (temp3_1 s< 0)
                            if (temp3_1 == 0)
                                j_5 = 0
                            else if (temp3_1 s< 0)
                                int32_t temp6_1
                                int32_t temp7_1
                                
                                do
                                    temp6_1 = j_5.d
                                    temp7_1 = j_5.d
                                    j_5 = zx.q(j_5.d * 2)
                                while (temp6_1 + temp7_1 s< 0)
                            
                            int32_t* rax_28 = data_143b502a8(zx.q((j_5 << 2).d), 1)
                            int32_t* r13_3
                            
                            if (j_1 == 0 || rax_28 == 0)
                                r13_3 = var_148_2
                            else
                                r13_3 = var_148_2
                                memcpy(rax_28, r13_3, j_1 << 2)
                            
                            if (r13_3 != 0)
                                data_143b502b0(r13_3)
                            
                            rdx_7 = rax_28
                            var_148_2 = rax_28
                        
                        if (j_5.d s< 1)
                            if (j_5.d == 0)
                                j_5 = 1
                            else
                                while (j_5.d s< 1)
                                    j_5 = zx.q(j_5.d * 2)
                            
                            int32_t* rax_29 = data_143b502a8(zx.q((j_5 << 2).d), 1)
                            
                            if (var_148_2 != 0)
                                data_143b502b0(var_148_2)
                            
                            rdx_7 = rax_29
                            var_148_2 = rax_29
                        
                        uint64_t rbx_6 = rax_11
                        j_1 = 1
                        *rdx_7 = rdi.d
                        
                        do
                            int32_t j_3 = j_1
                            int32_t k_2 = 0
                            j_1 -= 1
                            int32_t k = 0
                            
                            if (j_3 s<= 0)
                                j_1 = j_3
                            
                            int64_t rax_31 = sx.q(rdx_7[sx.q(j_1)]) * 5
                            int64_t var_100_2 = rax_31
                            
                            if (*(rbx_6 + (rax_31 << 3) + 0x18) s> 0)
                                int16_t* r10_2 = nullptr
                                int16_t* var_108_1 = nullptr
                                
                                do
                                    int16_t r15_3 = *(r10_2 + *(rbx_6 + (rax_31 << 3) + 0x10))
                                    
                                    if (r15_3 s>= 0)
                                        uint64_t rbp_3 = zx.q(r15_3) * 5
                                        
                                        if ((*(rbx_6 + (rbp_3 << 3) + 0x26) & 2) == 0)
                                            int64_t rax_34 = sx.q(*(rsi_6 - 0x1a))
                                            int64_t rcx_30 = 0
                                            
                                            if (rax_34.d s<= 0)
                                            label_14262f7b5:
                                                int16_t rcx_31 = *(rbx_6 + (rbp_3 << 3) + 0x24)
                                                int16_t r9_8 = *(rbx_6 + (rbp_3 << 3) + 0x22)
                                                
                                                if (rsi_6[1] u> rcx_31)
                                                    rcx_31 = rsi_6[1]
                                                
                                                if (*rsi_6 u< r9_8)
                                                    r9_8 = *rsi_6
                                                
                                                if (zx.d(rcx_31) - zx.d(r9_8) s>= 0xff)
                                                    rdx_7 = var_148_2
                                                else
                                                    int32_t j_4 = j_1 + 1
                                                    
                                                    if (j_4 s<= j_5.d)
                                                        rdx_7 = var_148_2
                                                    else
                                                        if (j_5.d == 0)
                                                            j_5 = zx.q(j_4)
                                                        else
                                                            while (j_5.d s< j_4)
                                                                j_5 = zx.q(j_5.d * 2)
                                                        
                                                        int32_t* rax_37 =
                                                            data_143b502a8(zx.q((j_5 << 2).d), 1)
                                                        int32_t* r13_5
                                                        
                                                        if (j_1 == 0 || rax_37 == 0)
                                                            r13_5 = var_148_2
                                                        else
                                                            r13_5 = var_148_2
                                                            memcpy(rax_37, r13_5, j_1 << 2)
                                                        
                                                        if (r13_5 != 0)
                                                            data_143b502b0(r13_5)
                                                        
                                                        rdx_7 = rax_37
                                                        var_148_2 = rdx_7
                                                    
                                                    j_1 = j_4
                                                    rbx_6 = rax_11
                                                    rdx_7[sx.q(j_4) - 1] = zx.d(r15_3)
                                                    *(rbx_6 + (rbp_3 << 3) + 0x26) |= 2
                                                    *(rbx_6 + (rbp_3 << 3) + 0x20) = r12_1
                                                    int32_t r12_2 = 0
                                                    
                                                    if (*(rbx_6 + (rbp_3 << 3) + 8) s> 0)
                                                        int32_t* r15_4 = nullptr
                                                        
                                                        do
                                                            int64_t rcx_36 = 0
                                                            int64_t r8_12 = sx.q(*(rsi_6 - 0x1a))
                                                            int32_t rdi_3 =
                                                                *(r15_4 + *(rbx_6 + (rbp_3 << 3)))
                                                            
                                                            if (r8_12.d s<= 0)
                                                            label_14262f8d0:
                                                                sub_142633840(&rsi_6[-0x11], 
                                                                    (r8_12 + 1).d)
                                                                rbx_6 = rax_11
                                                                *(*(rsi_6 - 0x22)
                                                                    + (sx.q(*(rsi_6 - 0x1a)) << 2) - 4) =
                                                                    rdi_3
                                                            else
                                                                int32_t* rax_40 = *(rsi_6 - 0x22)
                                                                
                                                                while (*rax_40 != rdi_3)
                                                                    rcx_36 += 1
                                                                    rax_40 = &rax_40[1]
                                                                    
                                                                    if (rcx_36 s>= r8_12)
                                                                        goto label_14262f8d0
                                                            
                                                            r12_2 += 1
                                                            r15_4 = &r15_4[1]
                                                        while (r12_2 s< *(rbx_6 + (rbp_3 << 3) + 8))
                                                        
                                                        j_1 = j_4
                                                        rdx_7 = var_148_2
                                                    
                                                    int16_t rcx_39 = *(rbx_6 + (rbp_3 << 3) + 0x22)
                                                    r10_2 = var_108_1
                                                    
                                                    if (*rsi_6 u< rcx_39)
                                                        rcx_39 = *rsi_6
                                                    
                                                    k = k_2
                                                    r12_1 = var_154_1
                                                    *rsi_6 = rcx_39
                                                    int16_t rcx_40 = *(rbx_6 + (rbp_3 << 3) + 0x24)
                                                    
                                                    if (rsi_6[1] u> rcx_40)
                                                        rcx_40 = rsi_6[1]
                                                    
                                                    rsi_6[1] = rcx_40
                                            else
                                                int32_t* rax_35 = *(rsi_6 - 0x22)
                                                
                                                while (*rax_35 != zx.d(r15_3))
                                                    rcx_30 += 1
                                                    rax_35 = &rax_35[1]
                                                    
                                                    if (rcx_30 s>= rax_34)
                                                        goto label_14262f7b5
                                                
                                                rdx_7 = var_148_2
                                    
                                    rax_31 = var_100_2
                                    k += 1
                                    r10_2 = &r10_2[2]
                                    k_2 = k
                                    var_108_1 = r10_2
                                while (k s< *(rbx_6 + (rax_31 << 3) + 0x18))
                        while (j_1 != 0)
                        
                        rdi = zx.q(var_150_1)
                        r12_1 += 1
                        i_9 = i_15
                        var_154_1 = r12_1
                    
                    rdi = zx.q(rdi.d + 1)
                    rsi_6 = &rsi_6[0x14]
                    i_2 = i_9
                    i_9 -= 1
                    var_150_1 = rdi.d
                    i_15 = i_9
                while (i_2 != 1)
            
            int64_t i_18 = i_17
            uint64_t r15_5 = rax_11
            int32_t r10_3
            r10_3.w = arg4.w << 2
            int32_t var_158_1 = r10_3
            
            if (i_18 != 0)
                int64_t rbp_4 = 0
                int64_t var_110_1 = 0
                int32_t* rbx_7 = r15_5 + 0xc
                
                do
                    if ((*(rbx_7 + 0x1a) & 4) != 0)
                        int16_t r14_3 = rbx_7[5].w
                        int16_t* rax_42 = r15_5 + 0x22
                        var_154_1 = r14_3
                        int16_t* var_100_3 = rax_42
                    label_14262fa00:
                        int64_t rsi_7 = 0
                        int16_t* r11_2 = rax_42
                        
                        do
                            if (rbp_4 != rsi_7 && (r11_2[2].b & 4) != 0)
                                int16_t rcx_41 = r11_2[1]
                                int16_t r9_9 = *(rbx_7 + 0x16)
                                
                                if (r9_9 u<= r10_3.w + rcx_41)
                                    int16_t r8_13 = rbx_7[6].w
                                    int16_t rdx_14 = *r11_2
                                    
                                    if (r10_3.w + r8_13 u>= rdx_14)
                                        if (r8_13 u> rcx_41)
                                            rcx_41 = r8_13
                                        
                                        if (r9_9 u< rdx_14)
                                            rdx_14 = r9_9
                                        
                                        if (zx.d(rcx_41) - zx.d(rdx_14) s< 0xff)
                                            int16_t* r9_10 = r15_5 + 0x20
                                            int32_t i_3 = 0
                                            int64_t r10_4 = 0
                                            
                                            while (true)
                                                if (*r9_10 == r11_2[-1])
                                                    int64_t rax_46 = sx.q(rbx_7[-1])
                                                    int64_t rcx_44 = 0
                                                    
                                                    if (rax_46.d s> 0)
                                                        int32_t* rax_47 = *(rbx_7 - 0xc)
                                                        
                                                        while (*rax_47 != i_3)
                                                            rcx_44 += 1
                                                            rax_47 = &rax_47[1]
                                                            
                                                            if (rcx_44 s>= rax_46)
                                                                goto label_14262faaf
                                                        
                                                        r10_3 = var_158_1
                                                        break
                                                
                                            label_14262faaf:
                                                i_3 += 1
                                                r10_4 += 1
                                                r9_10 = &r9_10[0x14]
                                                
                                                if (r10_4 s>= i_18)
                                                    int16_t rax_48 = r11_2[-1]
                                                    var_150_1.w = rax_48
                                                    
                                                    if (rax_48 == 0xffff)
                                                        goto label_14262fb75
                                                    
                                                    int64_t i_12 = i_18
                                                    char* r15_6 = r15_5 + 0x26
                                                    int64_t i_16 = i_12
                                                    int64_t i_4
                                                    
                                                    do
                                                        if (*(r15_6 - 6) == rax_48)
                                                            *r15_6 &= 0xfb
                                                            int32_t j_2 = 0
                                                            bool cond:11_1 = *(r15_6 - 0x1e) s<= 0
                                                            *(r15_6 - 6) = r14_3
                                                            
                                                            if (not(cond:11_1))
                                                                int64_t r13_6 = 0
                                                                
                                                                do
                                                                    int64_t rcx_45 = 0
                                                                    int64_t r14_4 = sx.q(rbx_7[-1])
                                                                    int32_t k_1 = *(*(r15_6 - 0x26) + r13_6)
                                                                    
                                                                    if (r14_4.d s<= 0)
                                                                    label_14262fb3c:
                                                                        uint64_t rcx_46 = zx.q(*rbx_7)
                                                                        rdi = zx.q((r14_4 + 1).d)
                                                                        
                                                                        if (rdi.d s> rcx_46.d)
                                                                            int32_t rax_51
                                                                            
                                                                            if (rcx_46.d != 0)
                                                                                rax_51 = rcx_46.d
                                                                            else
                                                                                *rbx_7 = rdi.d
                                                                                rcx_46 = zx.q(rdi.d)
                                                                                rax_51 = rdi.d
                                                                            
                                                                            if (rcx_46.d s< rdi.d)
                                                                                rcx_46 = zx.q(rax_51)
                                                                                
                                                                                do
                                                                                    rcx_46 = zx.q(rcx_46.d * 2)
                                                                                while (rcx_46.d s< rdi.d)
                                                                                
                                                                                *rbx_7 = rcx_46.d
                                                                            
                                                                            int64_t rax_55 =
                                                                                data_143b502a8(zx.q((rcx_46 << 2).d), 1)
                                                                            int64_t rax_56 = sx.q(rbx_7[-1])
                                                                            
                                                                            if (rax_56.d != 0 && rax_55 != 0)
                                                                                memcpy(rax_55, *(rbx_7 - 0xc), 
                                                                                    (rax_56 << 2).d)
                                                                            
                                                                            int64_t rcx_52 = *(rbx_7 - 0xc)
                                                                            
                                                                            if (rcx_52 != 0)
                                                                                data_143b502b0(rcx_52)
                                                                            
                                                                            *(rbx_7 - 0xc) = rax_55
                                                                        
                                                                        int64_t rax_57 = *(rbx_7 - 0xc)
                                                                        rbx_7[-1] = rdi.d
                                                                        *(rax_57 + (r14_4 << 2)) = k_1
                                                                    else
                                                                        int32_t* rax_50 = *(rbx_7 - 0xc)
                                                                        
                                                                        while (*rax_50 != k_1)
                                                                            rcx_45 += 1
                                                                            rax_50 = &rax_50[1]
                                                                            
                                                                            if (rcx_45 s>= r14_4)
                                                                                goto label_14262fb3c
                                                                    
                                                                    j_2 += 1
                                                                    r13_6 += 4
                                                                while (j_2 s< *(r15_6 - 0x1e))
                                                                
                                                                i_12 = i_16
                                                                r14_3 = var_154_1
                                                            
                                                            int16_t rcx_54 = *(r15_6 - 4)
                                                            rax_48 = var_150_1.w
                                                            
                                                            if (*(rbx_7 + 0x16) u< rcx_54)
                                                                rcx_54 = *(rbx_7 + 0x16)
                                                            
                                                            *(rbx_7 + 0x16) = rcx_54
                                                            int16_t rcx_55 = *(r15_6 - 2)
                                                            
                                                            if (rbx_7[6].w u> rcx_55)
                                                                rcx_55 = rbx_7[6].w
                                                            
                                                            rbx_7[6].w = rcx_55
                                                        
                                                        r15_6 = &r15_6[0x28]
                                                        i_4 = i_12
                                                        i_12 -= 1
                                                        i_16 = i_12
                                                    while (i_4 != 1)
                                                    rbp_4 = var_110_1
                                                    rax_42 = var_100_3
                                                    r10_3 = var_158_1
                                                    r15_5 = rax_11
                                                    i_18 = i_17
                                                    goto label_14262fa00
                            
                            rsi_7 += 1
                            r11_2 = &r11_2[0x14]
                        while (rsi_7 s< i_18)
                        
                    label_14262fb75:
                        r10_3 = var_158_1
                    
                    rbp_4 += 1
                    rbx_7 = &rbx_7[0xa]
                    var_110_1 = rbp_4
                while (rbp_4 s< i_18)
                
                char* rdx_15 = r15_5 + 0x26
                int64_t i_14 = i_18
                int64_t i_5
                
                do
                    uint8_t rax_52 = *rdx_15
                    uint8_t rcx_47 = ((rax_52 u>> 3 ^ rax_52) & 1) ^ rax_52
                    *rdx_15 = rcx_47
                    
                    if ((rcx_47 & 8) == 0)
                        *(rdx_15 - 6) = 0xffff
                    
                    rdx_15 = &rdx_15[0x28]
                    i_5 = i_14
                    i_14 -= 1
                while (i_5 != 1)
                r15_5 = rax_11
            
            int32_t r13_7 = 0
            int16_t rbx_8 = 0
            
            if (i_18 != 0)
                int64_t r9_11 = 0
                char* r8_15 = r15_5 + 0x26
                
                do
                    if ((*r8_15 & 1) != 0)
                        int16_t rdx_16 = *(r8_15 - 6)
                        
                        if (r9_11 s< i_18)
                            char* rax_53 = r8_15
                            int64_t i_10 = i_18 - r9_11
                            int64_t i_6
                            
                            do
                                if (*(rax_53 - 6) == rdx_16)
                                    *(rax_53 - 6) = rbx_8
                                    *rax_53 &= 0xfe
                                
                                rax_53 = &rax_53[0x28]
                                i_6 = i_10
                                i_10 -= 1
                            while (i_6 != 1)
                        
                        rbx_8 += 1
                    
                    r9_11 += 1
                    r8_15 = &r8_15[0x28]
                while (r9_11 s< i_18)
            
            int64_t* rsi_8 = arg1
            
            if (*(rsi_8 + 9) != 0)
                (*(*rsi_8 + 0x28))(rsi_8, 0x19)
            
            int128_t zmm6
            int128_t var_48_1 = zmm6
            uint128_t zmm7
            uint128_t var_58_1 = zmm7
            uint128_t zmm8
            uint128_t var_68_1 = zmm8
            int128_t zmm9
            int128_t var_78_1 = zmm9
            int128_t zmm10
            int128_t var_88_1 = zmm10
            int128_t zmm11
            int128_t var_98_1 = zmm11
            bool cond:5_1
            
            if (rbx_8 != 0)
                int32_t* rbp_5 = arg2
                zmm9 = rbp_5[0xa]
                zmm10 = rbp_5[0xc]
                int32_t rax_58 = arg3 * 2
                zmm6 = rbp_5[8]
                int32_t r14_6 = var_120_1 - rax_58
                zmm11 = rbp_5[0xb]
                rdi = zx.q(var_134_1 - rax_58)
                uint32_t rax_59 = zx.d(rbx_8)
                int32_t var_138_2 = r14_6
                int32_t var_134_2 = rdi.d
                uint128_t zmm0
                zmm0.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* rbp_5[0xd]
                zmm9.d = zmm9.d f- zmm0.d
                zmm7.d = zmm0.d f+ rbp_5[7]
                zmm10.d = zmm10.d f- zmm0.d
                zmm8.d = zmm0.d f+ rbp_5[9]
                arg6[1].d = rax_59
                int64_t rax_60 = data_143b502a8(zx.q(rax_59 * 0x58), 0)
                *arg6 = rax_60
                int64_t rax_61 = sx.q(arg6[1].d)
                
                if (rax_60 != 0)
                    memset(rax_60, 0, rax_61 * 0x58)
                    int64_t* rcx_60 = arg6
                    int32_t var_12c_3 = 0
                    
                    if (arg6[1].d s> 0)
                        rdi = zx.q(rdi.d * r14_6)
                        var_f0.d = rdi.d
                        uint32_t rbx_10 = (rdi * 2).d
                        
                        while (true)
                            int32_t* rsi_11 = sx.q(r13_7) * 0x58 + *rcx_60
                            int32_t* var_108_2 = rsi_11
                            memset(rsi_11, 0, 0x58)
                            int64_t rax_63 = data_143b502a8(zx.q(rbx_10), 0)
                            *(rsi_11 + 0x40) = rax_63
                            char* r8_28
                            uint64_t r9_18
                            
                            if (rax_63 == 0)
                                r9_18 = zx.q(rbx_10)
                                r8_28 = "rcBuildHeightfieldLayers: Out of memory 'heights' (%d)."
                            else
                                memset(rax_63, 0xff, sx.q(rbx_10))
                                int64_t rax_64 = data_143b502a8(zx.q(rdi.d), 0)
                                *(rsi_11 + 0x48) = rax_64
                                
                                if (rax_64 == 0)
                                    r9_18 = zx.q(rdi.d)
                                    r8_28 = "rcBuildHeightfieldLayers: Out of memory 'areas' (%d)."
                                else
                                    int64_t count = sx.q(rdi.d)
                                    memset(rax_64, 0, count)
                                    int64_t rax_65 = data_143b502a8(zx.q(rdi.d), 0)
                                    *(rsi_11 + 0x50) = rax_65
                                    
                                    if (rax_65 == 0)
                                        r9_18 = zx.q(rdi.d)
                                        r8_28 =
                                            "rcBuildHeightfieldLayers: Out of memory 'cons' (%d)."
                                    else
                                        memset(rax_65, 0, count)
                                        int32_t rbx_11 = 0
                                        uint32_t var_150_2 = 0
                                        uint32_t rdi_5 = 0
                                        uint32_t rdx_19 = 0
                                        
                                        if (i_18 != 0)
                                            int16_t* rax_66 = r15_5 + 0x20
                                            int64_t i_11 = i_18
                                            int64_t i_7
                                            
                                            do
                                                if ((rax_66[3].b & 4) != 0 && *rax_66 == r13_7.w)
                                                    rdi_5 = zx.d(rax_66[1])
                                                    rdx_19 = zx.d(rax_66[2])
                                                
                                                rax_66 = &rax_66[0x14]
                                                i_7 = i_11
                                                i_11 -= 1
                                            while (i_7 != 1)
                                            var_150_2 = rdi_5
                                        
                                        int32_t r8_22 = var_134_2
                                        int32_t r12_3 = 0
                                        rsi_11[8] = r14_6
                                        rsi_11[9] = r8_22
                                        rsi_11[6] = rbp_5[0xd]
                                        rsi_11[7] = rbp_5[0xe]
                                        *rsi_11 = zmm7.d
                                        rsi_11[1] = zmm6.d
                                        rsi_11[2] = zmm8.d
                                        rsi_11[3] = zmm9.d
                                        rsi_11[4] = zmm11.d
                                        rsi_11[5] = zmm10.d
                                        int32_t var_dc_1 = 0
                                        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi_5))
                                        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdx_19))
                                        zmm0_1.d = zmm0_1.d f* rbp_5[0xe]
                                        zmm0_1.d = zmm0_1.d f+ zmm6.d
                                        rsi_11[1] = zmm0_1.d
                                        zmm1_1.d = zmm1_1.d f* rbp_5[0xe]
                                        zmm1_1.d = zmm1_1.d f+ zmm6.d
                                        rsi_11[4] = zmm1_1.d
                                        rsi_11[0xa] = rsi_11[8]
                                        rsi_11[0xc] = rsi_11[9]
                                        rsi_11[0xe] = rdi_5
                                        rsi_11[0xf] = rdx_19
                                        rsi_11[0xb] = 0
                                        rsi_11[0xd] = 0
                                        
                                        if (r8_22 s> 0)
                                            while (true)
                                                int32_t var_e0_1 = 0
                                                
                                                if (r14_6 s> 0)
                                                    int32_t rcx_68 = arg3
                                                    int32_t r11_3 = rcx_68 + r12_3
                                                    int32_t var_158_2 = r11_3
                                                    int32_t rax_72 = r11_3 * var_120_1
                                                    var_f8.d = rax_72
                                                    
                                                    while (true)
                                                        int32_t r10_5 = rcx_68 + rbx_11
                                                        var_154_1.d = r10_5
                                                        int32_t rdx_20 = *(*(rbp_5 + 0x40)
                                                            + (sx.q(rax_72 + r10_5) << 2))
                                                        uint64_t rax_76 = zx.q(rdx_20) & 0xffffff
                                                        uint64_t r9_13 = zx.q(rax_76.d)
                                                        uint64_t var_100_4 = r9_13
                                                        uint64_t rcx_70 =
                                                            zx.q(rax_76.d + (rdx_20 u>> 0x18))
                                                        
                                                        if (r9_13 u< rcx_70)
                                                            uint64_t rax_77 = zx.q(rcx_70.d)
                                                            uint64_t rdx_23 = rax_76 * 0xc
                                                            uint64_t var_110_2 = rdx_23
                                                            
                                                            while (true)
                                                                int64_t r8_23 = *(rbp_5 + 0x48)
                                                                int64_t var_c8_2 = r8_23
                                                                int16_t rcx_72 = *(rax_4 + (r9_13 << 1))
                                                                
                                                                if (rcx_72 != 0)
                                                                    if (zx.d(rcx_72) u< var_130_1)
                                                                        int16_t r15_7 =
                                                                            *(r15_5 + zx.q(rcx_72) * 0x28 + 0x20)
                                                                        
                                                                        if (r15_7 == r13_7.w)
                                                                            int32_t rax_80 = r12_3
                                                                            int32_t rcx_74 = rbx_11
                                                                            
                                                                            if (rsi_11[0xa] s< rbx_11)
                                                                                rcx_74 = rsi_11[0xa]
                                                                            
                                                                            bool cond:15_1 = rsi_11[0xb] s> rbx_11
                                                                            rsi_11[0xa] = rcx_74
                                                                            int32_t rcx_75 = rbx_11
                                                                            
                                                                            if (cond:15_1)
                                                                                rcx_75 = rsi_11[0xb]
                                                                            
                                                                            bool cond:16_1 = rsi_11[0xc] s< r12_3
                                                                            rsi_11[0xb] = rcx_75
                                                                            int32_t rcx_76 = r12_3
                                                                            
                                                                            if (cond:16_1)
                                                                                rcx_76 = rsi_11[0xc]
                                                                            
                                                                            bool cond:17_1 = rsi_11[0xd] s> r12_3
                                                                            rsi_11[0xc] = rcx_76
                                                                            int32_t rcx_77 = r12_3
                                                                            
                                                                            if (cond:17_1)
                                                                                rcx_77 = rsi_11[0xd]
                                                                            
                                                                            r12_3.b = 0
                                                                            rsi_11[0xd] = rcx_77
                                                                            int32_t rax_81 = rax_80 * r14_6
                                                                            r14_6.b = 0
                                                                            int64_t r13_8 = sx.q(rax_81 + rbx_11)
                                                                            *(*(rsi_11 + 0x40) + (r13_8 << 1)) =
                                                                                *(r8_23 + rdx_23) - rdi_5.w
                                                                            (*(rsi_11 + 0x48))[r13_8] =
                                                                                *(r9_13 + *(rbp_5 + 0x58))
                                                                            uint64_t rsi_12 = 0
                                                                            
                                                                            do
                                                                                int32_t r8_25 = *(r8_23 + rdx_23 + 4)
                                                                                char rbp_6 = (rsi_12 << 3).b
                                                                                uint32_t r9_14 =
                                                                                    zx.d((r8_25 u>> rbp_6).b)
                                                                                uint128_t var_b8
                                                                                
                                                                                if (r9_14 != 0xff)
                                                                                    uint64_t rcx_82 = zx.q(rsi_12.d) & 3
                                                                                    var_b8 = data_142fc59d0
                                                                                    int32_t rdi_7 =
                                                                                        *(&var_b8 + (rcx_82 << 2)) + r10_5
                                                                                    var_b8 = data_14344e350
                                                                                    int32_t rbx_13 =
                                                                                        *(&var_b8 + (rcx_82 << 2)) + r11_3
                                                                                    uint64_t rdx_26 = zx.q((*(*(arg2 + 0x40)
                                                                                        + 
                                                                                        (sx.q(rbx_13 * var_120_1 + rdi_7) << 2))
                                                                                        & 0xffffff) + r9_14)
                                                                                    uint64_t r11_4 = zx.q(rdx_26.d)
                                                                                    uint64_t rax_94 =
                                                                                        zx.q(*(rax_4 + (rdx_26 << 1)))
                                                                                    int16_t r10_6
                                                                                    
                                                                                    if (rax_94.d u>= var_130_1)
                                                                                        r10_6 = -1
                                                                                    else
                                                                                        r10_6 = *(rax_11 + rax_94 * 0x28 + 0x20)
                                                                                    
                                                                                    int32_t rax_96 = r8_25
                                                                                    int64_t r9_15 = *(arg2 + 0x58)
                                                                                    int64_t rcx_85 = r9_15
                                                                                    
                                                                                    if (*(r11_4 + r9_15) != 0
                                                                                            && r15_7 != r10_6)
                                                                                        r12_3 =
                                                                                            zx.d(r12_3.b) | 1 << (rsi_12.d u% 0x20)
                                                                                        uint32_t rdx_28 =
                                                                                            zx.d(*(*(arg2 + 0x48) + r11_4 * 0xc))
                                                                                        rax_96 = r8_25
                                                                                        rcx_85 = r9_15
                                                                                        
                                                                                        if (rdx_28 s> var_150_2)
                                                                                            rdx_28.w -= var_150_2.w
                                                                                            int64_t rcx_87 = *(var_108_2 + 0x40)
                                                                                            
                                                                                            if (*(rcx_87 + (r13_8 << 1))
                                                                                                    u> rdx_28.w)
                                                                                                rdx_28.w = *(rcx_87 + (r13_8 << 1))
                                                                                            
                                                                                            *(rcx_87 + (r13_8 << 1)) = rdx_28.w
                                                                                            rcx_85 = *(arg2 + 0x58)
                                                                                            rax_96 = *(var_c8_2 + var_110_2 + 4)
                                                                                    
                                                                                    r8_25 = rax_96
                                                                                    int32_t rbx_14
                                                                                    
                                                                                    if (*(r11_4 + rcx_85) != 0
                                                                                            && r15_7 == r10_6)
                                                                                        rbx_14 = rbx_13 - arg3
                                                                                    
                                                                                    if (*(r11_4 + rcx_85) == 0
                                                                                            || r15_7 != r10_6 || rdi_7 - arg3 s< 0
                                                                                            || rbx_14 s< 0
                                                                                            || rdi_7 - arg3 s>= var_138_2)
                                                                                        rdi_5 = var_150_2
                                                                                        r10_5 = var_154_1.d
                                                                                        r11_3 = var_158_2
                                                                                    else
                                                                                        rdi_5 = var_150_2
                                                                                        r10_5 = var_154_1.d
                                                                                        r11_3 = var_158_2
                                                                                        
                                                                                        if (rbx_14 s< var_134_2)
                                                                                            r14_6 =
                                                                                                zx.d(r14_6.b) | 1 << (rsi_12.d u% 0x20)
                                                                                
                                                                                rbp_5 = arg2
                                                                                uint32_t r9_16 =
                                                                                    zx.d((r8_25 u>> (rbp_6 + 8)).b)
                                                                                
                                                                                if (r9_16 != 0xff)
                                                                                    uint64_t rcx_90 = zx.q(rsi_12.d + 1) & 3
                                                                                    var_b8 = data_142fc59d0
                                                                                    int32_t rbx_16 =
                                                                                        *(&var_b8 + (rcx_90 << 2)) + r10_5
                                                                                    var_b8 = data_14344e350
                                                                                    int32_t r11_5 =
                                                                                        r11_3 + *(&var_b8 + (rcx_90 << 2))
                                                                                    uint64_t rdx_32 = zx.q((*(
                                                                                        *(rbp_5 + 0x40) +
                                                                                        (sx.q(r11_5 * var_120_1 + rbx_16) << 2))
                                                                                        & 0xffffff) + r9_16)
                                                                                    uint64_t rax_106 =
                                                                                        zx.q(*(rax_4 + (rdx_32 << 1)))
                                                                                    int16_t r9_17
                                                                                    
                                                                                    if (rax_106.d u>= var_130_1)
                                                                                        r9_17 = -1
                                                                                    else
                                                                                        r9_17 =
                                                                                            *(rax_11 + rax_106 * 0x28 + 0x20)
                                                                                    
                                                                                    int64_t r8_27 = *(rbp_5 + 0x58)
                                                                                    int64_t rax_108 = r8_27
                                                                                    
                                                                                    if (*(rdx_32 + r8_27) != 0
                                                                                            && r15_7 != r9_17)
                                                                                        r12_3 = zx.d(r12_3.b)
                                                                                            | 1 << ((rsi_12 + 1).d u% 0x20)
                                                                                        uint32_t rdx_33 =
                                                                                            zx.d(*(*(rbp_5 + 0x48) + rdx_32 * 0xc))
                                                                                        rax_108 = r8_27
                                                                                        
                                                                                        if (rdx_33 s> rdi_5)
                                                                                            rdx_33.w -= rdi_5.w
                                                                                            int64_t rcx_94 = *(var_108_2 + 0x40)
                                                                                            
                                                                                            if (*(rcx_94 + (r13_8 << 1))
                                                                                                    u> rdx_33.w)
                                                                                                rdx_33.w = *(rcx_94 + (r13_8 << 1))
                                                                                            
                                                                                            *(rcx_94 + (r13_8 << 1)) = rdx_33.w
                                                                                            rax_108 = *(rbp_5 + 0x58)
                                                                                    
                                                                                    if (*(zx.q(rdx_32.d) + rax_108) != 0
                                                                                            && r15_7 == r9_17)
                                                                                        int32_t r11_6 = r11_5 - arg3
                                                                                        
                                                                                        if (rbx_16 - arg3 s>= 0 && r11_6 s>= 0
                                                                                                && rbx_16 - arg3 s< var_138_2
                                                                                                && r11_6 s< var_134_2)
                                                                                            r14_6 = zx.d(r14_6.b)
                                                                                                | 1 << ((rsi_12 + 1).d u% 0x20)
                                                                                
                                                                                rdx_23 = var_110_2
                                                                                rsi_12 = zx.q(rsi_12.d + 2)
                                                                                r8_23 = var_c8_2
                                                                                r10_5 = var_154_1.d
                                                                                r11_3 = var_158_2
                                                                            while (rsi_12.d s< 4)
                                                                            
                                                                            rsi_11 = var_108_2
                                                                            r9_13 = var_100_4
                                                                            rbx_11 = var_e0_1
                                                                            r12_3.b <<= 4
                                                                            r12_3.b |= r14_6.b
                                                                            r14_6 = var_138_2
                                                                            (*(rsi_11 + 0x50))[r13_8] = r12_3.b
                                                                            r12_3 = var_dc_1
                                                                            r13_7 = var_12c_3
                                                                    
                                                                    rax_77 = rcx_70
                                                                
                                                                r9_13 += 1
                                                                rdx_23 += 0xc
                                                                var_100_4 = r9_13
                                                                var_110_2 = rdx_23
                                                                
                                                                if (r9_13 s>= rax_77)
                                                                    break
                                                                
                                                                r15_5 = rax_11
                                                        
                                                        rax_72 = var_f8.d
                                                        rbx_11 += 1
                                                        rcx_68 = arg3
                                                        var_e0_1 = rbx_11
                                                        
                                                        if (rbx_11 s>= r14_6)
                                                            break
                                                        
                                                        r15_5 = rax_11
                                                    
                                                    r8_22 = var_134_2
                                                
                                                r12_3 += 1
                                                rbx_11 = 0
                                                var_dc_1 = r12_3
                                                
                                                if (r12_3 s>= r8_22)
                                                    break
                                                
                                                r15_5 = rax_11
                                        
                                        sub_14262b110(rsi_11)
                                        
                                        if (rsi_11[0xa] s> rsi_11[0xb])
                                            *(rsi_11 + 0x28) = 0
                                        
                                        if (rsi_11[0xc] s> rsi_11[0xd])
                                            *(rsi_11 + 0x30) = 0
                                        
                                        rcx_60 = arg6
                                        r13_7 += 1
                                        rdi = zx.q(var_f0.d)
                                        i_18 = i_17
                                        var_12c_3 = r13_7
                                        rbx_10 = (rdi * 2).d
                                        
                                        if (r13_7 s>= rcx_60[1].d)
                                            rsi_8 = arg1
                                            break
                                        
                                        r15_5 = rax_11
                                        continue
                            
                            sub_14262d160(arg1, 3, r8_28, r9_18)
                            rdi.b = 0
                            goto label_142630520
                    
                    cond:5_1 = *(rsi_8 + 9) == 0
                    goto label_1426304d4
                
                sub_14262d160(rsi_8, (rax_60 + 3).d, 
                    "rcBuildHeightfieldLayers: Out of memory 'layers' (%d).", zx.q(rax_61.d))
                rdi.b = 0
            else
                cond:5_1 = *(rsi_8 + 9) == 0
            label_1426304d4:
                
                if (not(cond:5_1))
                    (*(*rsi_8 + 0x28))(rsi_8, 0x1a)
                
                rdi.b = 1
        label_142630520:
            
            if (var_148_2 != 0)
                data_143b502b0(var_148_2)
            
            r14_1 = zx.q(var_130_1)
            rbp = rax_4
        else
            sub_14262d160(arg1, (rax_11 + 3).d, 
                "rcBuildHeightfieldLayers: Out of memory 'regions' (%d).", zx.q(r14_1.d))
        
        if (r14_1.d != 0)
            uint64_t rbx_18 = rax_11
            uint64_t i_13 = zx.q(r14_1.d)
            uint64_t i_8
            
            do
                int64_t rcx_98 = *(rbx_18 + 0x10)
                
                if (rcx_98 != 0)
                    data_143b502b0(rcx_98)
                
                int64_t rcx_99 = *rbx_18
                
                if (rcx_99 != 0)
                    data_143b502b0(rcx_99)
                
                rbx_18 += 0x28
                i_8 = i_13
                i_13 -= 1
            while (i_8 != 1)
        
        if (rax_11 != 0)
            data_143b502b0(rax_11)
    else
        rdi.b = 0
else
    sub_14262d160(arg1, (rax_4 + 3).d, "rcBuildHeightfieldLayers: Out of memory 'spanBuf4' (%d).", 
        zx.q(arg2[2] << 2))
    rdi.b = 0

if (rbp != 0)
    data_143b502b0(rbp)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(rdi.b)
