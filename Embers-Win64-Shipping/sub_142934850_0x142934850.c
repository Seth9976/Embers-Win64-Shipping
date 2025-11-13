// 函数: sub_142934850
// 地址: 0x142934850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x148)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t* rbx = nullptr
int32_t r14 = arg4
int64_t rdi = sx.q(arg3)
int64_t* rsi = arg2
int32_t result_1 = 0
int64_t* var_f0 = nullptr
int32_t var_110 = 0
uint64_t result

if (arg5 s<= 0x80)
    void* r12_1 = *arg2
    char* var_120 = r12_1
    void* rax_2 = r12_1 + rdi
    int64_t* r14_3
    
    if (arg3 s<= 0)
        r14_3 = arg2
    label_142935241:
        result_1 = 1
    else
        while (true)
            int32_t var_138
            int32_t var_118
            int32_t var_100
            int32_t rax_3 = sub_1428f2ef0(&var_120, &var_138, &var_118, &var_100, rdi.d)
            
            if (rax_3.b s< 0)
                rbx = nullptr
                
                if (sub_14289aa40(arg1, "Error in encoding\n", 0x12) s> 0)
                    result_1 = 0
            else
                int32_t rbx_2 = var_120.d - r12_1.d
                int32_t rdi_1 = rdi.d - rbx_2
                
                if (sub_1428b6f70(arg1, "%5ld:", zx.q(r12_1.d - *rsi + r14)) s<= 0)
                    goto label_1429351ff
                
                uint64_t r8_4 = zx.q(arg5)
                int32_t rax_6
                
                if (rax_3 == 0x21)
                    rax_6 = sub_1428b6f70(arg1, "d=%-2d hl=%ld l=inf  ", r8_4)
                else
                    int32_t var_158_2 = var_138
                    rax_6 = sub_1428b6f70(arg1, "d=%-2d hl=%ld l=%4ld ", r8_4)
                
                if (rax_6 s<= 0)
                    goto label_1429351ff
                
                char rdi_2 = var_100.b
                int32_t rbx_3 = var_118
                char const* const rdx_1 = "cons: "
                int32_t r14_2 = rax_3 & 0x20
                
                if (r14_2 == 0)
                    rdx_1 = "prim: "
                
                if (sub_14289aa40(arg1, rdx_1, 6) s< 6)
                    goto label_1429351ff
                
                int32_t rdx_2 = 0
                
                if (arg6 != 0)
                    rdx_2 = arg5
                
                sub_14289a2c0(arg1, rdx_2, 0x80)
                void var_d8
                void* rsi_2 = &var_d8
                
                if ((rdi_2 & 0xc0) == 0xc0)
                    sub_1428b7080(&var_d8, 0x80, "priv [ %d ] ", zx.q(rbx_3))
                else if (rdi_2 s< 0)
                    sub_1428b7080(&var_d8, 0x80, "cont [ %d ]", zx.q(rbx_3))
                else if ((rdi_2 & 0x40) != 0)
                    sub_1428b7080(&var_d8, 0x80, "appl [ %d ]", zx.q(rbx_3))
                else if (rbx_3 s<= 0x1e)
                    if (((rbx_3 - 0x102) & 0xfffffff7) == 0)
                        rbx_3 &= 0xfffffeff
                    
                    if (rbx_3 u> 0x1e)
                        rsi_2 = "(unknown)"
                    else
                        rsi_2 = (&data_143538ce0)[sx.q(rbx_3)]
                else
                    sub_1428b7080(&var_d8, 0x80, "<ASN1 %d>", zx.q(rbx_3))
                
                if (sub_1428b6f70(arg1, "%-18s", rsi_2) s<= 0)
                    goto label_1429351ff
                
                if (r14_2 != 0)
                    char* rsi_3 = var_120
                    void* rdi_4 = &rsi_3[sx.q(var_138)]
                    
                    if (sub_14289aa40(arg1, &data_14370209c, 1) s<= 0)
                        goto label_1429351ff
                    
                    int32_t r8_7 = var_138
                    
                    if (r8_7 s> rdi_1)
                        sub_1428b6f70(arg1, "length is greater than %ld\n", zx.q(rdi_1))
                        result_1 = 0
                    label_1429351ff:
                        r14_3 = arg2
                        rbx = nullptr
                        break
                    
                    if (rax_3 == 0x21 && r8_7 == 0)
                        r12_1 = var_120
                        r14_3 = arg2
                        
                        while (true)
                            int32_t rax_17 = sub_142934850(arg1, &var_120, zx.q(rax_2.d - r12_1.d), 
                                zx.q(r12_1.d - *r14_3 + arg4), arg5 + 1, arg6, arg7)
                            
                            if (rax_17 == 0)
                                goto label_1429351d9
                            
                            r12_1 = var_120
                            
                            if (rax_17 != 2 && r12_1 u< rax_2)
                                continue
                            
                            var_138 = r12_1.d - rsi_3.d
                            break
                        
                        goto label_1429351c2
                    
                    r12_1 = var_120
                    int32_t rbx_6 = var_138
                    r14_3 = arg2
                    
                    if (r12_1 u>= rdi_4)
                        goto label_1429351c2
                    
                    while (sub_142934850(arg1, &var_120, zx.q(rbx_6), 
                            zx.q(arg4 - *r14_3 + r12_1.d), arg5 + 1, arg6, arg7) != 0)
                        int32_t rax_23 = r12_1.d
                        r12_1 = var_120
                        rbx_6 += rax_23 - r12_1.d
                        
                        if (r12_1 u>= rdi_4)
                            goto label_1429351c2
                    
                label_1429351d9:
                    result_1 = 0
                    rbx = nullptr
                    break
                
                if (var_100 == 0)
                    int32_t rax_27 = var_118
                    int32_t r14_4 = 0
                    
                    if (rax_27 u<= 0x1a && test_bit(0x5dc1000, rax_27))
                        if (sub_14289aa40(arg1, &data_142d6bc34, 1) s<= 0)
                            goto label_1429351ff
                        
                        int32_t r8_11 = var_138
                        
                        if (r8_11 s<= 0)
                            goto label_142935110
                        
                        if (sub_14289aa40(arg1, var_120, r8_11) != var_138)
                            goto label_1429351ff
                        
                        goto label_142935110
                    
                    void* var_108
                    int32_t r15_4
                    
                    if (var_118 == 6)
                        r15_4 = rbx_2
                        int32_t r8_13 = var_138 + r15_4
                        var_108 = r12_1
                        
                        if (sub_1428cdbb0(&var_f0, &var_108, r8_13) == 0)
                            if (sub_14289a750(arg1, ":BAD OBJECT") s<= 0)
                                goto label_1429351ff
                            
                            var_110 = 1
                        label_142935129:
                            char* rbx_11 = sx.q(r15_4) + r12_1
                            
                            if (sub_14289a750(arg1, &data_143538ff0) s<= 0)
                                goto label_1429351ff
                            
                            int32_t rdi_10 = 0
                            
                            if (var_138 s> 0)
                                do
                                    if (sub_1428b6f70(arg1, "%02X", zx.q(*rbx_11)) s<= 0)
                                        goto label_1429351ff
                                    
                                    rdi_10 += 1
                                    rbx_11 = &rbx_11[1]
                                while (rdi_10 s< var_138)
                            
                            if (sub_14289a750(arg1, &(*U"},{]")[3]) s<= 0)
                                goto label_1429351ff
                            
                            goto label_142935181
                        
                        if (sub_14289aa40(arg1, &data_142d6bc34, 1) s<= 0)
                            goto label_1429351ff
                        
                        sub_1428cdc60(arg1, var_f0)
                    label_142935115:
                        
                        if (var_110 != 0)
                            goto label_142935129
                        
                    label_142935181:
                        int32_t rax_69
                        
                        if (r14_4 == 0)
                            rax_69 = sub_14289aa40(arg1, &data_14370209c, r14_4 + 1)
                        
                        if (r14_4 == 0 && rax_69 s<= 0)
                            goto label_1429351ff
                        
                        r12_1 = &var_120[sx.q(var_138)]
                        bool cond:3_1 = var_118 != 0
                        var_120 = r12_1
                        
                        if (cond:3_1 || var_100 != 0)
                            r14_3 = arg2
                            goto label_1429351c2
                        
                        r14_3 = arg2
                        rbx = nullptr
                        result_1 = 2
                        break
                    
                    if (var_118 == 1)
                        if (var_138 != 1)
                            if (sub_14289a750(arg1, ":BAD BOOLEAN") s<= 0)
                                goto label_1429351ff
                            
                            var_110 = 1
                        
                        if (var_138 s<= 0)
                            goto label_142935110
                        
                        sub_1428b6f70(arg1, ":%u", zx.q(*var_120))
                    label_142935110:
                        r15_4 = rbx_2
                        goto label_142935115
                    
                    int32_t rax_35 = var_118
                    
                    if (rax_35 == 0x1e)
                        goto label_142935110
                    
                    if (rax_35 != 4)
                        if (var_118 == 2)
                            r15_4 = rbx_2
                            int32_t r8_23 = var_138 + r15_4
                            var_108 = r12_1
                            int32_t* rax_46 = sub_1428c36d0(nullptr, &var_108, r8_23)
                            
                            if (rax_46 == 0)
                                if (sub_14289a750(arg1, ":BAD INTEGER") s<= 0)
                                    goto label_1429351ff
                                
                                var_110 = 1
                            label_142934f98:
                                sub_1428c3460(rax_46)
                                goto label_142935115
                            
                            if (sub_14289aa40(arg1, &data_142d6bc34, 1) s<= 0)
                                goto label_1429351ff
                            
                            int32_t rax_48
                            
                            if (rax_46[1] == 0x102)
                                rax_48 = sub_14289aa40(arg1, &data_142d8bc68, 1)
                            
                            if (rax_46[1] == 0x102 && rax_48 s<= 0)
                                goto label_1429351ff
                            
                            int32_t rax_49 = *rax_46
                            int32_t rdi_8 = 0
                            int64_t rbx_7 = 0
                            bool cond:4_1 = rax_49 != 0
                            
                            if (rax_49 s> 0)
                                int32_t rax_52
                                
                                do
                                    if (sub_1428b6f70(arg1, "%02X", zx.q(*(*(rax_46 + 8) + rbx_7)))
                                            s<= 0)
                                        goto label_1429351ff
                                    
                                    rax_52 = *rax_46
                                    rdi_8 += 1
                                    rbx_7 += 1
                                while (rdi_8 s< rax_52)
                                
                                cond:4_1 = rax_52 != 0
                            
                            if (cond:4_1)
                                goto label_142934f98
                            
                            if (sub_14289aa40(arg1, &data_143508778, 2) s<= 0)
                                goto label_1429351ff
                            
                            sub_1428c3460(rax_46)
                            goto label_142935115
                        
                        if (var_118 != 0xa)
                            if (var_138 s<= 0 || arg7 == 0)
                                goto label_142935110
                            
                            if (sub_14289aa40(arg1, &data_14370209c, 1) s<= 0)
                                goto label_1429351ff
                            
                            int32_t r8_28 = var_138
                            
                            if (arg7 != 0xffffffff && arg7 s<= r8_28)
                                r8_28 = arg7
                            
                            if (sub_142921670(arg1, var_120, r8_28, 6) s<= 0)
                                goto label_1429351ff
                            
                            r14_4 = 1
                            goto label_142935110
                        
                        r15_4 = rbx_2
                        int32_t r8_26 = var_138 + r15_4
                        var_108 = r12_1
                        int32_t* rax_55 = sub_1428c36b0(nullptr, &var_108, r8_26)
                        
                        if (rax_55 == 0)
                            if (sub_14289a750(arg1, ":BAD ENUMERATED") s<= 0)
                                goto label_1429351ff
                            
                            var_110 = 1
                        label_1429350a8:
                            sub_1428c3460(rax_55)
                            goto label_142935115
                        
                        if (sub_14289aa40(arg1, &data_142d6bc34, 1) s<= 0)
                            goto label_1429351ff
                        
                        int32_t rax_57
                        
                        if (rax_55[1] == 0x10a)
                            rax_57 = sub_14289aa40(arg1, &data_142d8bc68, 1)
                        
                        if (rax_55[1] == 0x10a && rax_57 s<= 0)
                            goto label_1429351ff
                        
                        int32_t rax_58 = *rax_55
                        int32_t rdi_9 = 0
                        int64_t rbx_8 = 0
                        bool cond:5_1 = rax_58 != 0
                        
                        if (rax_58 s> 0)
                            int32_t rax_61
                            
                            do
                                if (sub_1428b6f70(arg1, "%02X", zx.q(*(*(rax_55 + 8) + rbx_8)))
                                        s<= 0)
                                    goto label_1429351ff
                                
                                rax_61 = *rax_55
                                rdi_9 += 1
                                rbx_8 += 1
                            while (rdi_9 s< rax_61)
                            
                            cond:5_1 = rax_61 != 0
                        
                        if (cond:5_1)
                            goto label_1429350a8
                        
                        if (sub_14289aa40(arg1, &data_143508778, 2) s<= 0)
                            goto label_1429351ff
                        
                        sub_1428c3460(rax_55)
                        goto label_142935115
                    
                    r15_4 = rbx_2
                    int32_t r8_16 = var_138 + r15_4
                    var_108 = r12_1
                    int32_t* rax_36 = sub_1428c36f0(nullptr, &var_108, r8_16)
                    rbx = rax_36
                    
                    if (rax_36 == 0 || *rax_36 s<= 0)
                    label_142934dcf:
                        sub_1428c3460(rbx)
                        goto label_142935115
                    
                    void* r8_17 = *(rax_36 + 8)
                    var_108 = r8_17
                    int64_t r9_9 = sx.q(*rax_36)
                    
                    if (r9_9 s<= 0)
                    label_142934da7:
                        
                        if (sub_14289aa40(arg1, &data_142d6bc34, 1) s> 0
                                && sub_14289aa40(arg1, var_108, *rbx) s> 0)
                            goto label_142934dcf
                    else
                        void* rdx_9 = r8_17
                        
                        while (true)
                            uint32_t rcx_18 = zx.d(*rdx_9)
                            
                            if (rcx_18.b u<= 0x1f && test_bit(0xffffd9ff, rcx_18))
                                break
                            
                            if (rcx_18.b u>= 0x7f)
                                break
                            
                            rdx_9 += 1
                            
                            if (rdx_9 - r8_17 s>= r9_9)
                                goto label_142934da7
                        
                        if (arg7 != 0)
                            if (sub_14289aa40(arg1, &data_14370209c, 1) s> 0)
                                int32_t r8_21
                                
                                if (arg7 != 0xffffffff)
                                    r8_21 = arg7
                                
                                if (arg7 == 0xffffffff || arg7 s> *rbx)
                                    r8_21 = *rbx
                                
                                if (sub_142921670(arg1, var_108, r8_21, 6) s> 0)
                                    r14_4 = 1
                                    sub_1428c3460(rbx)
                                    goto label_142935115
                        else if (sub_14289aa40(arg1, "[HEX DUMP]:", arg7 + 0xb) s> 0)
                            int32_t i = 0
                            void* rdi_7 = nullptr
                            
                            if (*rbx s<= 0)
                                goto label_142934dcf
                            
                            do
                                if (sub_1428b6f70(arg1, "%02X", zx.q(*(rdi_7 + var_108))) s<= 0)
                                    goto label_142935237
                                
                                i += 1
                                rdi_7 += 1
                            while (i s< *rbx)
                            
                            sub_1428c3460(rbx)
                            goto label_142935115
                else
                    var_120 = &var_120[sx.q(var_138)]
                    r14_3 = arg2
                    
                    if (sub_14289aa40(arg1, &data_14370209c, 1) s<= 0)
                        rbx = nullptr
                        break
                    
                    r12_1 = var_120
                label_1429351c2:
                    rdi = zx.q(rdi_1 - var_138)
                    
                    if (rdi.d s<= 0)
                        rbx = nullptr
                        goto label_142935241
                    
                    rsi = arg2
                    r14 = arg4
                    continue
            
        label_142935237:
            r14_3 = arg2
            break
    
    sub_1428cd400(var_f0)
    sub_1428c3460(rbx)
    result = zx.q(result_1)
    *r14_3 = var_120
else
    sub_14289a750(arg1, "BAD RECURSION DEPTH\n")
    result = 0

__security_check_cookie(rax_1 ^ &var_178)
return result
