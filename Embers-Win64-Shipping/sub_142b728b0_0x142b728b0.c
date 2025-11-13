// 函数: sub_142b728b0
// 地址: 0x142b728b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19d0)
void var_19f8
int64_t rax_1 = __security_cookie ^ &var_19f8
int64_t* r13 = arg3
int64_t rdi = sx.q(arg2)
int32_t result_2 = rdi.d s>> 2
uint64_t result

if (arg1[6].d s>> 6 s> result_2)
    int32_t r9 = -1
    int32_t result_1 = 0
    int32_t r10_1 = 0
    int32_t r11_1 = 0
    void var_1958
    
    if (arg2 s> 0)
        int64_t rcx = 0
        void* rdi_1 = &var_1958
        
        do
            int32_t rdx = *(*arg1 + (rcx << 2))
            *rdi_1 = rdx.w
            
            if (rdx != arg1[4].d)
                r9 = -1
            else if (r9 s< 0)
                r9 = r11_1
            else if (*(arg1 + 0xc) s< 0 && r11_1 - r9 == 0x1f)
                *(arg1 + 0xc) = r9
            
            rcx += 1
            int64_t r8_2 = sx.q(r10_1 + 4)
            r10_1 += 1
            
            if (rcx s< r8_2)
                r10_1 += r8_2.d - rcx.d
                
                do
                    rdx += 0x10
                    *(*arg1 + (rcx << 2)) = rdx
                    rcx += 1
                while (rcx s< r8_2)
            
            r11_1 += 1
            rdi_1 += 2
        while (rcx s< rdi)
        
        rdi = zx.q(rdi.d)
    
    int32_t r12_1 = 0x20
    
    if (sub_142b73d40(r13, result_2, 0x20) == 0)
        *arg4 = 7
        result = 0
    else
        sub_142b71a30(r13, &var_1958, 0, 0, result_2)
        int32_t rax_10 = 0x1000
        int32_t var_19c0_1 = *(arg1 + 0xc)
        int32_t r15_1 = 0
        
        if (rdi.d s< 0x1000)
            rax_10 = 0
        
        char var_19c8_1 = 0
        int32_t rcx_5 = arg1[6].d s>> 4
        uint64_t rdx_3 = zx.q(rax_10)
        int64_t r8_3 = sx.q(rcx_5)
        uint64_t var_1998_1 = rdx_3
        int32_t var_19c4_1 = rdx_3.d
        
        if (rdx_3 s< r8_3)
            uint64_t i_17 = zx.q(rdx_3.d)
            uint64_t i
            
            do
                int32_t rsi_2 = rax_10
                int32_t r9_1 = 0
                i = i_17
                char r10_2 = 1
                int64_t r8_4 = *arg1 + (i_17 << 2)
                char rdx_4
                
                do
                    r9_1 |= *r8_4
                    rdx_4 = 0
                    bool cond:1_1 = *r8_4 == arg1[4].d
                    r8_4 += 4
                    
                    if (cond:1_1)
                        rdx_4 = r10_2
                    
                    rsi_2 += 1
                    i += 1
                    r10_2 = rdx_4
                while (i s< sx.q(rax_10 + 0x20))
                
                int64_t r11_3 = *arg1
                
                if (rdx_4 == 0)
                    r13 = arg3
                    
                    if (r9_1 u> 0xffff)
                        *(i_17 + arg1 + 0x40) = 3
                        r15_1 += 0x24
                        var_19c8_1 = 1
                    else
                        int64_t i_1 = i_17 + 1
                        int32_t rcx_11 = *(r11_3 + (i_17 << 2))
                        
                        do
                            rcx_11 = rcx_11 * 0x25 + *(r11_3 + (i_1 << 2))
                            i_1 += 1
                        while (i_1 s< sx.q(r13[3].d + var_19c4_1))
                        
                        int32_t rax_23 = sub_142b71c90(r13, &var_1958, r11_3, var_19c4_1, rcx_11)
                        int32_t rdx_9
                        
                        if (rax_23 s>= 0)
                            rdx_9 = *(*r13 + (sx.q(rax_23) << 2)) & *(r13 + 0x14)
                        
                        if (rax_23 s< 0 || rdx_9 - 1 s< 0)
                            *(i_17 + arg1 + 0x40) = 2
                            r15_1 += 0x20
                        else
                            *(i_17 + arg1 + 0x40) = 1
                            *(*arg1 + (i_17 << 2)) = rdx_9 - 1
                else
                    *(i_17 + arg1 + 0x40) = 0
                    
                    if (var_19c0_1 s< 0)
                        int32_t rax_13
                        
                        if (r9_1 u> 0xffff)
                            var_19c8_1 = 1
                            rax_13 = 0x24
                        else
                            rax_13 = 0x20
                        
                        var_19c0_1 = 0
                        r15_1 += rax_13
                    
                    r13 = arg3
                
                rax_10 = rsi_2
                i_17 = i
                var_19c4_1 = rax_10
            while (i s< r8_3)
            r12_1 = 0x20
            rdx_3 = var_1998_1
            result_1 = 0
        
        int32_t rcx_7 = (rcx_5 - rdx_3.d) s>> 5
        int32_t rdi_3 = (rcx_7 + 0x1f) s>> 5
        int32_t rsi_4 = result_2 + 1 + rdi_3 + rcx_7 + r15_1
        int64_t rax_17 = sub_142a7dd00(sx.q(rsi_4 * 2))
        arg1[7] = rax_17
        
        if (rax_17 == 0)
            *arg4 = 7
            result = 0
        else
            memcpy(rax_17, &var_1958, result_2 * 2)
            
            if (sub_142b73d40(r13, rsi_4, 0x20) != 0)
                uint64_t var_1978
                __builtin_memset(&var_1978, 0, 0x1c)
                
                if (var_19c8_1 == 0)
                label_142b72c32:
                    int64_t r10_3 = r8_3
                    int32_t result_4 = rdi_3 + result_2
                    uint64_t rdi_4 = var_1998_1
                    int32_t rdx_12 = 0
                    int32_t r8_8 = *(arg1 + 0xc)
                    int32_t result_3 = result_4
                    int32_t var_1980_1 = 0
                    int32_t var_19c0_2 = r8_8
                    int32_t result_9 = result_4
                    int16_t var_1158[0x880]
                    
                    if (rdi_4 s< r10_3)
                        int64_t result_11 = sx.q(result_4)
                        int16_t (* r9_3)[0x880] = &var_1158
                        int16_t (* var_1990_1)[0x880] = &var_1158
                        uint64_t rcx_16 = rdi_4
                        int32_t var_19b0_1
                        var_19b0_1.q = rcx_16
                        var_1980_1 = ((r10_3 - rdi_4 - 1) u>> 5).d + 1
                        
                        do
                            bool rax_33 = *(rcx_16 + arg1 + 0x40)
                            int64_t i_5 = rcx_16 + 1
                            int32_t rdi_5
                            
                            if (rax_33 != 0)
                            label_142b72cc0:
                                
                                if (rax_33 != 1)
                                    int32_t result_12
                                    int32_t result_8
                                    
                                    if (rax_33 != 2)
                                        int32_t i_2 = rdi_4.d
                                        int32_t r11_5 = result_3 - 9
                                        int32_t result_5 = result_3
                                        
                                        do
                                            int32_t rdx_19 = *(*arg1 + (sx.q(i_2) << 2))
                                            *(arg1[7] + (sx.q(result_5 + 1) << 1)) = rdx_19.w
                                            int32_t rdx_20 = *(*arg1 + (sx.q(i_2 + 1) << 2))
                                            *(arg1[7] + (sx.q(result_5 + 2) << 1)) = rdx_20.w
                                            int32_t rdx_21 = *(*arg1 + (sx.q(i_2 + 2) << 2))
                                            *(arg1[7] + (sx.q(result_5 + 3) << 1)) = rdx_21.w
                                            int32_t rdx_22 = *(*arg1 + (sx.q(i_2 + 3) << 2))
                                            *(arg1[7] + (sx.q(result_5 + 4) << 1)) = rdx_22.w
                                            int32_t rdx_23 = *(*arg1 + (sx.q(i_2 + 4) << 2))
                                            int16_t r8_19 = ((rdx_19 u>> 2).w & 0xc000)
                                                | ((rdx_20 u>> 4).w & 0x3000)
                                                | ((rdx_21 u>> 6).w & 0xc00)
                                                | ((rdx_22 u>> 8).w & 0x300)
                                                | ((rdx_23 u>> 0xa).w & 0xc0)
                                            *(arg1[7] + (sx.q(result_5 + 5) << 1)) = rdx_23.w
                                            int32_t rdx_24 = *(*arg1 + (sx.q(i_2 + 5) << 2))
                                            *(arg1[7] + (sx.q(result_5 + 6) << 1)) = rdx_24.w
                                            int32_t rdx_25 = *(*arg1 + (sx.q(i_2 + 6) << 2))
                                            r11_5 += 9
                                            *(arg1[7] + (sx.q(result_5 + 7) << 1)) = rdx_25.w
                                            int64_t rcx_36 = sx.q(i_2 + 7)
                                            i_2 += 8
                                            int32_t rdx_26 = *(*arg1 + (rcx_36 << 2))
                                            int64_t rcx_37 = sx.q(result_5 + 8)
                                            result_5 += 9
                                            *(arg1[7] + (rcx_37 << 1)) = rdx_26.w
                                            *(arg1[7] + (sx.q(r11_5) << 1)) = ((rdx_26 u>> 0x10).w
                                                & 3) | r8_19 | ((rdx_24 u>> 0xc).w & 0x30)
                                                | ((rdx_25 u>> 0xe).w & 0xc)
                                        while (i_2 s< (rdi_4 + 0x20).d)
                                        
                                        int64_t r15_4 = arg1[7]
                                        int64_t i_3 = sx.q(result_3 + 1)
                                        uint32_t r8_22 = zx.d(*(r15_4 + (result_11 << 1)))
                                        int32_t var_1960
                                        uint32_t rcx_40
                                        
                                        do
                                            uint32_t rcx_39 = zx.d(*(r15_4 + (i_3 << 1)))
                                            i_3 += 1
                                            rcx_40 = rcx_39 + r8_22 * 0x25
                                            r8_22 = rcx_40
                                        while (i_3 s< sx.q(var_1960 + result_3))
                                        
                                        int32_t rax_84 =
                                            sub_142b71bb0(&var_1978, r15_4, r15_4, result_3, rcx_40)
                                        int32_t rdi_11
                                        int64_t var_1968
                                        
                                        if (rax_84 s>= 0)
                                            rdi_11 =
                                                *(var_1978 + (sx.q(rax_84) << 2)) & var_1968:4.d
                                        
                                        if (rax_84 s< 0 || rdi_11 - 1 s< 0)
                                            result_12 = result_9
                                            int32_t rax_86
                                            
                                            if (result_3 != result_12)
                                                rax_86 = sub_142b71e50(r15_4, result_3, r15_4, 
                                                    result_3, 0x24)
                                                result_12 = result_9
                                            else
                                                rax_86 = 0
                                            
                                            result_8 = result_3
                                            rdi_5 = (result_3 - rax_86) | 0x8000
                                            
                                            if (rax_86 s<= 0)
                                                result_3 += 0x24
                                                result_11 += 0x24
                                            else
                                                int64_t rcx_44 = sx.q(rax_86)
                                                
                                                if (rcx_44 s< 0x24)
                                                    int64_t i_15 = 0x24 - rcx_44
                                                    int64_t rdx_31 = (rcx_44 + sx.q(result_3)) * 2
                                                    result_3 += i_15.d
                                                    int64_t i_4
                                                    
                                                    do
                                                        int64_t rcx_45 = arg1[7]
                                                        rdx_31 += 2
                                                        *(rcx_45 + (result_11 << 1)) =
                                                            *(rdx_31 + rcx_45 - 2)
                                                        result_11 += 1
                                                        i_4 = i_15
                                                        i_15 -= 1
                                                    while (i_4 != 1)
                                            
                                        label_142b73068:
                                            sub_142b71a30(r13, arg1[7], result_12, result_8, 
                                                result_3)
                                            
                                            if (var_19c8_1 != 0)
                                                sub_142b71a30(&var_1978, arg1[7], result_9, 
                                                    result_8, result_3)
                                        else
                                            rdi_5 = (rdi_11 - 1) | 0x8000
                                    else
                                        int64_t r15_3 = *arg1
                                        int32_t rcx_17 = *(r15_3 + (rcx_16 << 2))
                                        
                                        do
                                            rcx_17 = rcx_17 * 0x25 + *(r15_3 + (i_5 << 2))
                                            i_5 += 1
                                        while (i_5 s< sx.q(r13[3].d + rdi_4.d))
                                        
                                        int64_t r13_2 = arg1[7]
                                        int32_t rax_37 =
                                            sub_142b71c90(arg3, r13_2, r15_3, rdi_4.d, rcx_17)
                                        
                                        if (rax_37 s< 0)
                                            goto label_142b72d41
                                        
                                        int32_t rdi_7 =
                                            *(*arg3 + (sx.q(rax_37) << 2)) & *(arg3 + 0x14)
                                        rdi_5 = rdi_7 - 1
                                        
                                        if (rdi_7 - 1 s< 0)
                                            rdi_4 = var_1998_1
                                        label_142b72d41:
                                            result_12 = result_9
                                            int32_t i_6
                                            int64_t r11_4
                                            
                                            if (result_3 != result_12)
                                                int32_t r10_4 = result_3 - 0x1f
                                                i_6 = 0x1f
                                                r11_4 = 0x1f
                                                
                                                do
                                                    int32_t i_11 = i_6
                                                    int32_t* rdx_15 = r15_3 + (sx.q(rdi_4.d) << 2)
                                                    int16_t* r8_12 = (sx.q(r10_4) << 1) + r13_2
                                                    
                                                    if (i_6 s> 0)
                                                        while (zx.d(*r8_12) == *rdx_15)
                                                            r8_12 = &r8_12[1]
                                                            rdx_15 = &rdx_15[1]
                                                            i_11 -= 1
                                                            
                                                            if (i_11 s<= 0)
                                                                break
                                                    
                                                    if (i_11 == 0)
                                                        break
                                                    
                                                    i_6 -= 1
                                                    r10_4 += 1
                                                    r11_4 -= 1
                                                while (i_6 s> 0)
                                                
                                                result_12 = result_9
                                            else
                                                i_6 = 0
                                                r11_4 = 0
                                            
                                            result_8 = result_3
                                            rdi_5 = result_3 - i_6
                                            
                                            if (r11_4 s< 0x20)
                                                int64_t i_14 = 0x20 - r11_4
                                                int64_t rdx_18 = (var_19b0_1.q + r11_4) << 2
                                                result_3 += i_14.d
                                                int64_t i_7
                                                
                                                do
                                                    rdx_18 += 4
                                                    *(arg1[7] + (result_11 << 1)) =
                                                        *(rdx_18 + *arg1 - 4)
                                                    result_11 += 1
                                                    i_7 = i_14
                                                    i_14 -= 1
                                                while (i_7 != 1)
                                            
                                            r13 = arg3
                                            goto label_142b73068
                                        
                                        r13 = arg3
                                    r10_3 = r8_3
                                    r9_3 = var_1990_1
                                    rcx_16 = var_19b0_1.q
                                else
                                    rdi_5 = *(*arg1 + (rcx_16 << 2))
                            else
                                bool cond:4_1
                                
                                if (r8_8 s< 0)
                                    cond:4_1 = arg1[4].d s> 0xffff
                                    var_19c0_2 = 0
                                    rax_33 = cond:4_1 + 2
                                
                                if (r8_8 s< 0 && cond:4_1 != 0xfe)
                                    goto label_142b72cc0
                                
                                rdi_5 = *(arg1 + 0xc)
                            
                            r8_8 = var_19c0_2
                            
                            if (*(arg1 + 0xc) s< 0 && r8_8 s>= 0)
                                *(arg1 + 0xc) = rdi_5
                            
                            *r9_3 = rdi_5.w
                            rcx_16 += 0x20
                            r9_3 = &(*r9_3)[1]
                            rdi_4 = zx.q(var_1998_1.d + 0x20)
                            var_1990_1 = r9_3
                            var_1998_1 = rdi_4
                            var_19b0_1.q = rcx_16
                        while (rcx_16 s< r10_3)
                        
                        result_4 = result_9
                        result_1 = 0
                        rdx_12 = var_1980_1
                    
                    if (*(arg1 + 0xc) s< 0)
                        *(arg1 + 0xc) = 0x7fff
                    
                    if (result_3 s< 0x801f)
                        int64_t rcx_48 = sx.q(rdx_12)
                        int32_t r15_5 = 0
                        
                        if (rdx_12 s> 0)
                            int64_t r13_3 = 0
                            int64_t result_7 = sx.q(result_3)
                            int64_t var_1998_2 = sx.q(result_2) * 2
                            int64_t var_19a8_1 = 0x20
                            
                            do
                                int32_t rax_93 = rdx_12 - r15_5
                                int32_t result_10
                                
                                if (rax_93 s< r12_1)
                                    r12_1 = rax_93
                                    result_10 = result_4
                                    var_19a8_1 = rcx_48 - r13_3
                                    int32_t r10_13 = result_3 - r12_1
                                    void* r9_20 = &var_1158[sx.q(r15_5)]
                                    
                                    if (result_9 s<= r10_13)
                                        while (true)
                                            int32_t rdx_35 = r12_1
                                            void* rcx_53 = r9_20
                                            
                                            if (r12_1 s> 0)
                                                while (*(sx.q(result_10) * 2 - r9_20 + arg1[7]
                                                        + rcx_53) == *rcx_53)
                                                    rcx_53 += 2
                                                    rdx_35 -= 1
                                                    
                                                    if (rdx_35 s<= 0)
                                                        break
                                            
                                            if (rdx_35 == 0)
                                                break
                                            
                                            result_10 += 1
                                            
                                            if (result_10 s> r10_13)
                                                goto label_142b731c2
                                        
                                        goto label_142b731ba
                                    
                                label_142b731c2:
                                    int32_t result_13 = result_9
                                    int32_t i_8
                                    
                                    if (result_3 != result_13)
                                        i_8 = r12_1 - 1
                                        void* r11_7 = &var_1158[sx.q(r15_5)]
                                        
                                        if (i_8 s> 0)
                                            int32_t r10_15 = result_3 - i_8
                                            
                                            do
                                                int32_t i_13 = i_8
                                                void* rax_106 = r11_7
                                                
                                                if (i_8 s> 0)
                                                    while (*(sx.q(r10_15) * 2 - r11_7 + arg1[7]
                                                            + rax_106) == *rax_106)
                                                        rax_106 += 2
                                                        i_13 -= 1
                                                        
                                                        if (i_13 s<= 0)
                                                            break
                                                
                                                if (i_13 == 0)
                                                    break
                                                
                                                i_8 -= 1
                                                r10_15 += 1
                                            while (i_8 s> 0)
                                            
                                            result_13 = result_9
                                    else
                                        i_8 = 0
                                    
                                    int64_t i_12 = sx.q(i_8)
                                    result_10 = result_3 - i_8
                                    int32_t result_6 = result_3
                                    
                                    if (i_12 s< var_19a8_1)
                                        int64_t i_16 = var_19a8_1 - i_12
                                        result_3 += i_16.d
                                        void* rdx_36 = &var_1158[i_12 + r13_3]
                                        int64_t i_9
                                        
                                        do
                                            int16_t rax_108 = *rdx_36
                                            rdx_36 += 2
                                            *(arg1[7] + (result_7 << 1)) = rax_108
                                            result_7 += 1
                                            i_9 = i_16
                                            i_16 -= 1
                                        while (i_9 != 1)
                                    
                                    sub_142b71a30(arg3, arg1[7], result_13, result_6, result_3)
                                else
                                    int64_t i_10 = r13_3 + 1
                                    uint32_t r8_27 = zx.d(var_1158[r13_3])
                                    uint32_t rcx_50
                                    
                                    do
                                        uint32_t rcx_49 = zx.d(var_1158[i_10])
                                        i_10 += 1
                                        rcx_50 = rcx_49 + r8_27 * 0x25
                                        r8_27 = rcx_50
                                    while (i_10 s< sx.q(arg3[3].d + r15_5))
                                    
                                    int32_t rax_97 =
                                        sub_142b71bb0(arg3, arg1[7], &var_1158, r15_5, rcx_50)
                                    
                                    if (rax_97 s< 0)
                                        goto label_142b731c2
                                    
                                    result_10 =
                                        (*(*arg3 + (sx.q(rax_97) << 2)) & *(arg3 + 0x14)) - 1
                                label_142b731ba:
                                    
                                    if (result_10 s< 0)
                                        goto label_142b731c2
                                
                                r15_5 += r12_1
                                rdx_12 = var_1980_1
                                r13_3 += var_19a8_1
                                result_4 = result_9
                                *(var_1998_2 + arg1[7]) = result_10.w
                                var_1998_2 += 2
                                rcx_48 = sx.q(rdx_12)
                            while (r13_3 s< rcx_48)
                        
                        result_1 = result_3
                    else
                        *arg4 = 8
                else
                    if (sub_142b73d40(&var_1978, rsi_4, 0x24) != 0)
                        goto label_142b72c32
                    
                    *arg4 = 7
                
                sub_142a7dcd0(var_1978)
                result = zx.q(result_1)
            else
                *arg4 = 7
                result = 0
else
    *(arg1 + 0xc) = 0x7fff
    result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_19f8)
return result
