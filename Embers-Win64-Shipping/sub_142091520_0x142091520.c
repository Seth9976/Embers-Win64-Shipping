// 函数: sub_142091520
// 地址: 0x142091520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r9 = arg2
int64_t* result_3 = *(*arg1 + sx.q(arg1[1].d) * 0x10 - 0x10)
int64_t result = 0x2008000000000
int64_t r8 = result_3[8]

if ((0x2008000000000 & r8) != 0)
    int64_t rcx_2 = *(result_3[1] + 0x10)
    result = rcx_2 u>> 0x15
    int32_t var_f0
    int64_t* result_1
    int64_t var_d8
    int64_t* var_98
    
    if ((result.b & 1) == 0)
        result = rcx_2 u>> 0x2e
        
        if ((result.b & 1) == 0)
            result = rcx_2 u>> 0x2f
            
            if ((result.b & 1) != 0)
                int64_t* r15_10 = result_3[0xf]
                
                if (r15_10 != 0)
                    result = r15_10[1]
                    
                    if (((zx.q(*(result + 0x10)) u>> 0x14).b & 1) != 0)
                        void* r9_4 = r15_10[0xf]
                        void* var_a8_4 = r9_4
                        
                        if (r9_4 != 0)
                            result = result_3
                            int32_t rsi_6 = 0
                            void* r13_5 = sx.q(*(result_3 + 0x4c)) + arg2
                            int32_t r10_1 = *(result + 0x90)
                            int32_t rdx_29 = *(r13_5 + 8)
                            int32_t i = rdx_29 - *(r13_5 + 0x34)
                            int32_t i_11 = i
                            int128_t var_d0_1 = *(result + 0x80)
                            int32_t var_108_4 = r10_1
                            
                            if (rdx_29 != *(r13_5 + 0x34))
                                int32_t rdi_10 = 1
                                var_f0 = 0
                                int32_t var_fc_2 = 1
                                int32_t r8_11 = 0
                                
                                do
                                    if (rsi_6 s>= 0 && rsi_6 s< *(r13_5 + 0x28))
                                        void* rax_63 = *(r13_5 + 0x20)
                                        void* rcx_72 = r13_5 + 0x10
                                        
                                        if (rax_63 != 0)
                                            rcx_72 = rax_63
                                        
                                        int32_t rax_64 = rsi_6
                                        
                                        if (rsi_6 s< 0)
                                            rax_64 = rsi_6 + 0x1f
                                        
                                        result = sx.q(rax_64 s>> 5)
                                        
                                        if ((*(rcx_72 + (result << 2)) & rdi_10) != 0)
                                            result = zx.q(*(r13_5 + 8))
                                            int64_t r14_12
                                            
                                            if (result.d != *(r13_5 + 0x34))
                                                r14_12 = sx.q(r8_11) + *r13_5
                                            else
                                                r14_12 = 0
                                            
                                            void* j = *(r9_4 + 0x78)
                                            
                                            if (j != 0)
                                                do
                                                    sub_14209c810(arg1, r15_10)
                                                    int64_t* result_7 = *arg3
                                                    result_1 = result_7
                                                    
                                                    if (result_7 != 0)
                                                        var_d8 = arg3[1]
                                                    
                                                    sub_142091520(arg1, r14_12, &result_1)
                                                    arg1[1].d -= 1
                                                    result = sub_1405a5010(arg1)
                                                    j = *(j + 0x60)
                                                while (j != 0)
                                                
                                                i = i_11
                                                r8_11 = var_f0
                                                r9_4 = var_a8_4
                                                r10_1 = var_108_4
                                            
                                            rdi_10 = var_fc_2
                                            i -= 1
                                            i_11 = i
                                    
                                    r8_11 += r10_1
                                    rdi_10 = rol.d(rdi_10, 1)
                                    rsi_6 += 1
                                    var_f0 = r8_11
                                    var_fc_2 = rdi_10
                                while (i != 0)
                    else if (r15_10 != 0)
                        result = r15_10[1]
                        
                        if (((zx.q(*(result + 0x10)) u>> 0x10).b & 1) != 0)
                            result = r15_10[8] u>> 0x31
                            
                            if ((result.b & 1) != 0)
                                int32_t result_2 = result_3[0x12].d
                                void* rsi_8 = sx.q(*(result_3 + 0x4c)) + r9
                                int32_t rdi_11 = 0
                                int128_t var_d0_2 = *(result_3 + 0x80)
                                int32_t r14_14 = *(rsi_8 + 8)
                                int32_t i_1 = r14_14 - *(rsi_8 + 0x34)
                                
                                if (r14_14 != *(rsi_8 + 0x34))
                                    result = zx.q(result_2)
                                    int32_t r9_5 = 1
                                    int32_t rdx_32 = 0
                                    int32_t var_fc_3 = 1
                                    int32_t var_104_6 = 0
                                    
                                    do
                                        if (rdi_11 s>= 0 && rdi_11 s< *(rsi_8 + 0x28))
                                            void* rax_68 = *(rsi_8 + 0x20)
                                            void* rcx_78 = rsi_8 + 0x10
                                            
                                            if (rax_68 != 0)
                                                rcx_78 = rax_68
                                            
                                            int32_t rax_69 = rdi_11
                                            
                                            if (rdi_11 s< 0)
                                                rax_69 = rdi_11 + 0x1f
                                            
                                            if ((*(rcx_78 + (sx.q(rax_69 s>> 5) << 2)) & r9_5) != 0)
                                                int64_t rdx_33
                                                
                                                if (*(rsi_8 + 8) != *(rsi_8 + 0x34))
                                                    rdx_33 = sx.q(rdx_32) + *rsi_8
                                                else
                                                    rdx_33 = 0
                                                
                                                int64_t* result_8 =
                                                    (*(*r15_10 + 0x140))(r15_10, rdx_33)
                                                
                                                if (result_8 != 0)
                                                    sub_14209c810(arg1, r15_10)
                                                    result_1 = result_8
                                                    sub_1405d5180(&var_d8, arg1)
                                                    (*arg3)(arg3[1], &result_1)
                                                    int64_t rcx_83 = var_d8
                                                    
                                                    if (rcx_83 != 0)
                                                        sub_140a74f90(rcx_83)
                                                    
                                                    arg1[1].d -= 1
                                                    sub_1405a5010(arg1)
                                                
                                                rdx_32 = var_104_6
                                                i_1 -= 1
                                                r9_5 = var_fc_3
                                            
                                            result = zx.q(result_2)
                                        
                                        rdx_32 += result.d
                                        r9_5 = rol.d(r9_5, 1)
                                        rdi_11 += 1
                                        var_104_6 = rdx_32
                                        var_fc_3 = r9_5
                                    while (i_1 != 0)
            else if (((r8 u>> 0x31).b & 1) == 0)
                if (((rcx_2 u>> 0x14).b & 1) != 0 && result_3[0xf] != 0)
                    int32_t i_2 = 0
                    
                    if (result_3[7].d s> 0)
                        do
                            int64_t rsi_10 =
                                sx.q(*(result_3 + 0x4c)) + sx.q(*(result_3 + 0x3c) * i_2) + r9
                            result = result_3[0xf]
                            void* j_1 = *(result + 0x78)
                            
                            if (j_1 != 0)
                                do
                                    sub_14209c810(arg1, j_1)
                                    int64_t* result_9 = *arg3
                                    result_1 = result_9
                                    
                                    if (result_9 != 0)
                                        var_d8 = arg3[1]
                                    
                                    sub_142091520(arg1, rsi_10, &result_1)
                                    arg1[1].d -= 1
                                    result = sub_1405a5010(arg1)
                                    j_1 = *(j_1 + 0x60)
                                while (j_1 != 0)
                                
                                r9 = arg2
                            
                            i_2 += 1
                        while (i_2 s< result_3[7].d)
            else if (((rcx_2 u>> 0x10).b & 1) != 0)
                int32_t i_3 = 0
                
                if (result_3[7].d s> 0)
                    do
                        result = (*(*result_3 + 0x140))(result_3, 
                            sx.q(*(result_3 + 0x4c)) + sx.q(*(result_3 + 0x3c) * i_3) + r9)
                        
                        if (result != 0)
                            result_1 = result
                            sub_1405d5180(&var_d8, arg1)
                            result = (*arg3)(arg3[1], &result_1)
                            int64_t rcx_89 = var_d8
                            
                            if (rcx_89 != 0)
                                result = sub_140a74f90(rcx_89)
                        
                        r9 = arg2
                        i_3 += 1
                    while (i_3 s< result_3[7].d)
        else
            int64_t* rdx_6 = result_3[0xf]
            int32_t r11_1 = 1
            int32_t var_fc_1 = 1
            int64_t* var_f8
            int64_t* var_88
            int32_t var_80
            int64_t zmm1
            
            if (rdx_6 != 0)
                result = rdx_6[1]
                
                if ((1 & (zx.q(*(result + 0x10)) u>> 0x14).b) != 0)
                    void* r11_2 = rdx_6[0xf]
                    void* var_a8_2 = r11_2
                    
                    if (r11_2 == 0)
                        r11_1 = 1
                    else
                        int32_t rcx_24 = result_3[0x14].d
                        int64_t* r15_3 = sx.q(*(result_3 + 0x4c)) + r9
                        int128_t zmm0 = *(result_3 + 0x88)
                        var_98 = r15_3
                        zmm1 = result_3[0x13]
                        result.b = not.b(rcx_24.b)
                        int32_t r8_4 = r15_3[1].d
                        int128_t var_60_1 = zmm0
                        result.b &= 1
                        int32_t i_4
                        
                        if (result.b != 0)
                            i_4 = r8_4 - *(r15_3 + 0x34)
                        else
                            i_4 = r8_4 - *(r15_3 + 0x24)
                        
                        var_f8.d = i_4
                        int32_t rsi_2 = 0
                        
                        if (i_4 == 0)
                            r11_1 = 1
                        else
                            int32_t rdx_7 = 1
                            var_f0 = 0
                            rcx_24.b = not.b(rcx_24.b)
                            int32_t var_104_3 = 1
                            rcx_24.b &= 1
                            int32_t r9_2 = 0
                            int32_t var_108_2 = rcx_24
                            
                            do
                                int64_t r14_4
                                
                                if (rcx_24.b != 0)
                                    if (rsi_2 s>= 0 && rsi_2 s< r15_3[5].d)
                                        void* rax_20 = r15_3[4]
                                        void* rcx_27 = &r15_3[2]
                                        
                                        if (rax_20 != 0)
                                            rcx_27 = rax_20
                                        
                                        int32_t rax_21 = rsi_2
                                        
                                        if (rsi_2 s< 0)
                                            rax_21 = rsi_2 + 0x1f
                                        
                                        result = sx.q(rax_21 s>> 5)
                                        
                                        if ((*(rcx_27 + (result << 2)) & rdx_7) == 0)
                                            rcx_24 = var_108_2
                                        else
                                            result = zx.q(r15_3[1].d)
                                            
                                            if (result.d != *(r15_3 + 0x34))
                                                r14_4 = sx.q(r9_2) + *r15_3
                                            else
                                                r14_4 = 0
                                            
                                        label_142091941:
                                            void* j_2 = *(r11_2 + 0x78)
                                            
                                            if (j_2 != 0)
                                                do
                                                    int64_t rdi_4 = sx.q(arg1[1].d)
                                                    var_88 = rdx_6
                                                    var_80 = rsi_2
                                                    int32_t rax_23 = (rdi_4 + 1).d
                                                    arg1[1].d = rax_23
                                                    
                                                    if (rax_23 s> *(arg1 + 0xc))
                                                        sub_1405a4f90(arg1)
                                                    
                                                    *(*arg1 + rdi_4 * 0x10) = var_88.o
                                                    int64_t* result_6 = *arg3
                                                    result_1 = result_6
                                                    
                                                    if (result_6 != 0)
                                                        var_d8 = arg3[1]
                                                    
                                                    sub_142091520(arg1, r14_4, &result_1)
                                                    arg1[1].d -= 1
                                                    result = sub_1405a5010(arg1)
                                                    j_2 = *(j_2 + 0x60)
                                                while (j_2 != 0)
                                                
                                                r15_3 = var_98
                                                rdx_7 = var_104_3
                                                i_4 = var_f8.d
                                                r9_2 = var_f0
                                                r11_2 = var_a8_2
                                            
                                            i_4 -= 1
                                            var_f8.d = i_4
                                            rcx_24 = var_108_2
                                else if (rsi_2 s>= 0 && rsi_2 s< r15_3[3].d)
                                    void* rcx_25 = r15_3[2]
                                    
                                    if ((rcx_25.b & 1) != 0)
                                        rcx_25 = (rcx_25 s>> 1) + &r15_3[2]
                                    
                                    int32_t rax_17 = rsi_2
                                    
                                    if (rsi_2 s< 0)
                                        rax_17 = rsi_2 + 0x1f
                                    
                                    result = sx.q(rax_17 s>> 5)
                                    
                                    if ((*(rcx_25 + (result << 2)) & rdx_7) != 0)
                                        result = zx.q(r15_3[1].d)
                                        
                                        if (result.d != *(r15_3 + 0x24))
                                            result = *r15_3
                                            
                                            if ((result.b & 1) != 0)
                                                result = (result s>> 1) + r15_3
                                            
                                            r14_4 = sx.q(r9_2) + result
                                        else
                                            r14_4 = 0
                                        
                                        goto label_142091941
                                    
                                    rcx_24 = var_108_2
                                r9_2 += zmm1:4.d
                                rsi_2 += 1
                                rdx_7 = rol.d(rdx_7, 1)
                                var_f0 = r9_2
                                var_104_3 = rdx_7
                            while (i_4 != 0)
                            
                            r9 = arg2
                            r11_1 = 1
                else if (rdx_6 != 0)
                    result = rdx_6[1]
                    
                    if ((1 & (zx.q(*(result + 0x10)) u>> 0x10).b) != 0)
                        result = rdx_6[8] u>> 0x31
                        
                        if ((1 & result.b) != 0)
                            int32_t rcx_35 = result_3[0x14].d
                            void** rdi_6 = sx.q(*(result_3 + 0x4c)) + r9
                            zmm1 = result_3[0x13]
                            result.b = not.b(rcx_35.b)
                            int32_t rdx_10 = rdi_6[1].d
                            int128_t var_60_2 = *(result_3 + 0x88)
                            result.b &= 1
                            int32_t i_5
                            
                            if (result.b != 0)
                                i_5 = rdx_10 - *(rdi_6 + 0x34)
                            else
                                i_5 = rdx_10 - *(rdi_6 + 0x24)
                            
                            int32_t i_9 = i_5
                            int32_t rsi_3 = 0
                            
                            if (i_5 != 0)
                                rcx_35.b = not.b(rcx_35.b)
                                rcx_35.b &= 1
                                int32_t var_104_4 = 0
                                var_f8.d = rcx_35
                                int32_t r15_5 = 1
                                int32_t r8_6 = 0
                                
                                do
                                    void* rdx_11
                                    
                                    if (rcx_35.b != 0)
                                        if (rsi_3 s>= 0 && rsi_3 s< rdi_6[5].d)
                                            void* rax_33 = rdi_6[4]
                                            void* rcx_38 = &rdi_6[2]
                                            
                                            if (rax_33 != 0)
                                                rcx_38 = rax_33
                                            
                                            int32_t rax_34 = rsi_3
                                            
                                            if (rsi_3 s< 0)
                                                rax_34 = rsi_3 + 0x1f
                                            
                                            result = sx.q(rax_34 s>> 5)
                                            
                                            if ((*(rcx_38 + (result << 2)) & r15_5) == 0)
                                                rcx_35 = var_f8.d
                                            else
                                                if (rdi_6[1].d != *(rdi_6 + 0x34))
                                                    rdx_11 = sx.q(r8_6) + *rdi_6
                                                else
                                                    rdx_11 = nullptr
                                                
                                            label_142091b58:
                                                result = (*(*rdx_6 + 0x140))(rdx_6, rdx_11)
                                                
                                                if (result != 0)
                                                    sub_14209c810(arg1, rdx_6)
                                                    result_1 = result
                                                    sub_1405d5180(&var_d8, arg1)
                                                    (*arg3)(arg3[1], &result_1)
                                                    int64_t rcx_43 = var_d8
                                                    
                                                    if (rcx_43 != 0)
                                                        sub_140a74f90(rcx_43)
                                                    
                                                    arg1[1].d -= 1
                                                    result = sub_1405a5010(arg1)
                                                
                                                r8_6 = var_104_4
                                                i_5 = i_9 - 1
                                                i_9 = i_5
                                                rcx_35 = var_f8.d
                                    else if (rsi_3 s>= 0 && rsi_3 s< rdi_6[3].d)
                                        void* rcx_36 = rdi_6[2]
                                        
                                        if ((rcx_36.b & 1) != 0)
                                            rcx_36 = (rcx_36 s>> 1) + &rdi_6[2]
                                        
                                        int32_t rax_28 = rsi_3
                                        
                                        if (rsi_3 s< 0)
                                            rax_28 = rsi_3 + 0x1f
                                        
                                        result = sx.q(rax_28 s>> 5)
                                        
                                        if ((*(rcx_36 + (result << 2)) & r15_5) != 0)
                                            if (rdi_6[1].d != *(rdi_6 + 0x24))
                                                void* rax_31 = *rdi_6
                                                
                                                if ((rax_31.b & 1) != 0)
                                                    rax_31 = (rax_31 s>> 1) + rdi_6
                                                
                                                rdx_11 = sx.q(r8_6) + rax_31
                                            else
                                                rdx_11 = nullptr
                                            
                                            goto label_142091b58
                                        
                                        rcx_35 = var_f8.d
                                    r8_6 += zmm1:4.d
                                    rsi_3 += 1
                                    r15_5 = rol.d(r15_5, 1)
                                    var_104_4 = r8_6
                                while (i_5 != 0)
                                
                                r9 = arg2
                                r11_1 = 1
            
            int64_t* result_10 = result_3[0x10]
            int64_t* result_4 = result_10
            
            if (result_10 != 0)
                result = result_10[1]
                
                if (((zx.q(*(result + 0x10)) u>> 0x14).b & 1) != 0)
                    int64_t* r9_3 = result_10[0xf]
                    var_98 = r9_3
                    
                    if (r9_3 != 0)
                        int64_t* r14_9 = sx.q(*(result_3 + 0x4c)) + arg2
                        int32_t rcx_47 = result_3[0x14].d
                        zmm1 = result_3[0x13]
                        result.b = not.b(rcx_47.b)
                        int64_t* var_a8_3 = r14_9
                        int32_t rdx_18 = r14_9[1].d
                        result.b &= 1
                        int32_t i_6
                        
                        if (result.b != 0)
                            i_6 = rdx_18 - *(r14_9 + 0x34)
                        else
                            i_6 = rdx_18 - *(r14_9 + 0x24)
                        
                        int32_t i_10 = i_6
                        int32_t rsi_4 = 0
                        
                        if (i_6 != 0)
                            rcx_47.b = not.b(rcx_47.b)
                            int32_t var_104_5 = 0
                            rcx_47.b &= 1
                            int32_t r8_8 = 0
                            var_f8.d = rcx_47
                            
                            do
                                int64_t r15_6
                                
                                if (rcx_47.b != 0)
                                    if (rsi_4 s>= 0 && rsi_4 s< r14_9[5].d)
                                        void* rax_42 = r14_9[4]
                                        void* rcx_50 = &r14_9[2]
                                        
                                        if (rax_42 != 0)
                                            rcx_50 = rax_42
                                        
                                        int32_t rax_43 = rsi_4
                                        
                                        if (rsi_4 s< 0)
                                            rax_43 = rsi_4 + 0x1f
                                        
                                        result = sx.q(rax_43 s>> 5)
                                        
                                        if ((*(rcx_50 + (result << 2)) & r11_1) == 0)
                                            rcx_47 = var_f8.d
                                        else
                                            result = zx.q(r14_9[1].d)
                                            
                                            if (result.d != *(r14_9 + 0x34))
                                                r15_6 = sx.q(r8_8) + *r14_9
                                            else
                                                r15_6 = 0
                                            
                                        label_142091d33:
                                            void* j_3 = r9_3[0xf]
                                            
                                            if (j_3 != 0)
                                                do
                                                    int64_t rdi_7 = sx.q(arg1[1].d)
                                                    result_1 = result_4
                                                    var_d8.d = rsi_4
                                                    int32_t rax_45 = (rdi_7 + 1).d
                                                    arg1[1].d = rax_45
                                                    
                                                    if (rax_45 s> *(arg1 + 0xc))
                                                        sub_1405a4f90(arg1)
                                                    
                                                    *(*arg1 + rdi_7 * 0x10) = result_1.o
                                                    int64_t* rax_47 = *arg3
                                                    var_88 = rax_47
                                                    
                                                    if (rax_47 != 0)
                                                        var_80.q = arg3[1]
                                                    
                                                    sub_142091520(arg1, r15_6, &var_88)
                                                    arg1[1].d -= 1
                                                    result = sub_1405a5010(arg1)
                                                    j_3 = *(j_3 + 0x60)
                                                while (j_3 != 0)
                                                
                                                r14_9 = var_a8_3
                                                i_6 = i_10
                                                r8_8 = var_104_5
                                                r9_3 = var_98
                                                r11_1 = var_fc_1
                                            
                                            i_6 -= 1
                                            i_10 = i_6
                                            rcx_47 = var_f8.d
                                else if (rsi_4 s>= 0 && rsi_4 s< r14_9[3].d)
                                    void* rcx_48 = r14_9[2]
                                    
                                    if ((rcx_48.b & 1) != 0)
                                        rcx_48 = (rcx_48 s>> 1) + &r14_9[2]
                                    
                                    int32_t rax_39 = rsi_4
                                    
                                    if (rsi_4 s< 0)
                                        rax_39 = rsi_4 + 0x1f
                                    
                                    result = sx.q(rax_39 s>> 5)
                                    
                                    if ((*(rcx_48 + (result << 2)) & r11_1) != 0)
                                        result = zx.q(r14_9[1].d)
                                        
                                        if (result.d != *(r14_9 + 0x24))
                                            result = *r14_9
                                            
                                            if ((result.b & 1) != 0)
                                                result = (result s>> 1) + r14_9
                                            
                                            r15_6 = sx.q(r8_8) + result
                                        else
                                            r15_6 = 0
                                        
                                        goto label_142091d33
                                    
                                    rcx_47 = var_f8.d
                                r8_8 += zmm1:4.d
                                rsi_4 += 1
                                r11_1 = rol.d(r11_1, 1)
                                var_104_5 = r8_8
                                var_fc_1 = r11_1
                            while (i_6 != 0)
                else if (result_10 != 0)
                    result = result_10[1]
                    
                    if (((zx.q(*(result + 0x10)) u>> 0x10).b & 1) != 0)
                        result = result_10[8] u>> 0x31
                        
                        if ((result.b & 1) != 0)
                            int32_t rcx_58 = result_3[0x14].d
                            void** rdi_9 = sx.q(*(result_3 + 0x4c)) + r9
                            zmm1 = result_3[0x13]
                            result.b = not.b(rcx_58.b)
                            int32_t r15_9 = rdi_9[1].d
                            int32_t var_60_3 = (*(result_3 + 0x88)).d
                            result.b &= 1
                            int32_t i_7
                            
                            if (result.b != 0)
                                i_7 = r15_9 - *(rdi_9 + 0x34)
                            else
                                i_7 = r15_9 - *(rdi_9 + 0x24)
                            
                            int32_t rsi_5 = 0
                            
                            if (i_7 != 0)
                                int32_t rdx_21 = var_60_3
                                rcx_58.b = not.b(rcx_58.b)
                                rcx_58.b &= 1
                                int32_t r13_3 = 0
                                int32_t var_108_3 = rcx_58
                                
                                do
                                    void* rdx_22
                                    
                                    if (rcx_58.b != 0)
                                        if (rsi_5 s>= 0 && rsi_5 s< rdi_9[5].d)
                                            void* rax_56 = rdi_9[4]
                                            void* rcx_63 = &rdi_9[2]
                                            
                                            if (rax_56 != 0)
                                                rcx_63 = rax_56
                                            
                                            int32_t rax_57 = rsi_5
                                            
                                            if (rsi_5 s< 0)
                                                rax_57 = rsi_5 + 0x1f
                                            
                                            result = sx.q(rax_57 s>> 5)
                                            
                                            if ((*(rcx_63 + (result << 2)) & r11_1) == 0)
                                                rcx_58 = var_108_3
                                            else
                                                if (rdi_9[1].d != *(rdi_9 + 0x34))
                                                    rdx_22 = sx.q(rdx_21) + sx.q(r13_3) + *rdi_9
                                                else
                                                    rdx_22 = nullptr
                                                
                                            label_142091f47:
                                                result = (*(*result_10 + 0x140))(result_10, rdx_22)
                                                
                                                if (result != 0)
                                                    sub_14209c810(arg1, result_4)
                                                    result_1 = result
                                                    sub_1405d5180(&var_d8, arg1)
                                                    (*arg3)(arg3[1], &result_1)
                                                    int64_t rcx_68 = var_d8
                                                    
                                                    if (rcx_68 != 0)
                                                        sub_140a74f90(rcx_68)
                                                    
                                                    arg1[1].d -= 1
                                                    result = sub_1405a5010(arg1)
                                                
                                                rdx_21 = var_60_3
                                                i_7 -= 1
                                                result_10 = result_4
                                                r11_1 = var_fc_1
                                                rcx_58 = var_108_3
                                    else if (rsi_5 s>= 0 && rsi_5 s< rdi_9[3].d)
                                        void* rcx_59 = rdi_9[2]
                                        
                                        if ((rcx_59.b & 1) != 0)
                                            rcx_59 = (rcx_59 s>> 1) + &rdi_9[2]
                                        
                                        int32_t rax_51 = rsi_5
                                        
                                        if (rsi_5 s< 0)
                                            rax_51 = rsi_5 + 0x1f
                                        
                                        result = sx.q(rax_51 s>> 5)
                                        
                                        if ((*(rcx_59 + (result << 2)) & r11_1) != 0)
                                            if (rdi_9[1].d != *(rdi_9 + 0x24))
                                                void* rcx_61 = *rdi_9
                                                
                                                if ((rcx_61.b & 1) != 0)
                                                    rcx_61 = (rcx_61 s>> 1) + rdi_9
                                                
                                                rdx_22 = sx.q(r13_3) + sx.q(rdx_21) + rcx_61
                                            else
                                                rdx_22 = nullptr
                                            
                                            goto label_142091f47
                                        
                                        rcx_58 = var_108_3
                                    r13_3 += zmm1:4.d
                                    rsi_5 += 1
                                    r11_1 = rol.d(r11_1, 1)
                                    var_fc_1 = r11_1
                                while (i_7 != 0)
    else
        int64_t* r15_1 = result_3[0xf]
        
        if (r15_1 != 0)
            result = r15_1[1]
            
            if (((zx.q(*(result + 0x10)) u>> 0x14).b & 1) != 0)
                void* r9_1 = r15_1[0xf]
                void* var_b8_1 = r9_1
                
                if (r9_1 != 0)
                    int32_t r8_1
                    r8_1.b = not.b(result_3[0x10].d.b)
                    int32_t rax_5 = *(r15_1 + 0x3c)
                    void** rcx_6 = sx.q(*(result_3 + 0x4c)) + arg2
                    r8_1.b &= 1
                    int32_t var_104_1 = r8_1
                    int32_t r12_1 = 0
                    void** var_b0_1 = rcx_6
                    int32_t rdx = 0
                    
                    while (true)
                        result = zx.q(rcx_6[1].d)
                        
                        if (r12_1 s>= result.d)
                            break
                        
                        void* r14_1
                        
                        if (result.d != 0)
                            void* rax_6 = *rcx_6
                            
                            if (r8_1.b == 0 && (rax_6.b & 1) != 0)
                                rax_6 = (rax_6 s>> 1) + rcx_6
                            
                            r14_1 = sx.q(rdx) + rax_6
                        else
                            r14_1 = nullptr
                        
                        void* i_8 = *(r9_1 + 0x78)
                        
                        if (i_8 != 0)
                            do
                                int64_t rdi_1 = sx.q(arg1[1].d)
                                int32_t var_a0_1 = r12_1
                                int32_t rax_8 = (rdi_1 + 1).d
                                arg1[1].d = rax_8
                                
                                if (rax_8 s> *(arg1 + 0xc))
                                    sub_1405a4f90(arg1)
                                
                                *(*arg1 + rdi_1 * 0x10) = r15_1.o
                                int64_t* rax_10 = *arg3
                                var_98 = rax_10
                                
                                if (rax_10 != 0)
                                    int64_t var_90_1 = arg3[1]
                                
                                sub_142091520(arg1, r14_1, &var_98)
                                arg1[1].d -= 1
                                sub_1405a5010(arg1)
                                i_8 = *(i_8 + 0x60)
                            while (i_8 != 0)
                            
                            rcx_6 = var_b0_1
                            r8_1 = var_104_1
                            r9_1 = var_b8_1
                        
                        r12_1 += 1
                        rdx += rax_5
            else if (r15_1 != 0)
                result = r15_1[1]
                
                if (((zx.q(*(result + 0x10)) u>> 0x10).b & 1) != 0)
                    result = r15_1[8] u>> 0x31
                    
                    if ((result.b & 1) != 0)
                        int32_t rcx_14
                        rcx_14.b = not.b(result_3[0x10].d.b)
                        int32_t rax_13 = *(r15_1 + 0x3c)
                        void** rdi_3 = sx.q(*(result_3 + 0x4c)) + r9
                        rcx_14.b &= 1
                        var_f0 = rcx_14
                        int32_t rsi_1 = 0
                        int32_t r12_2 = 0
                        
                        while (true)
                            result = zx.q(rdi_3[1].d)
                            
                            if (rsi_1 s>= result.d)
                                break
                            
                            *rdi_3
                            int64_t* result_5 = (*(*r15_1 + 0x140))(r15_1)
                            
                            if (result_5 != 0)
                                sub_14209c810(arg1, r15_1)
                                result_1 = result_5
                                sub_1405d5180(&var_d8, arg1)
                                (*arg3)(arg3[1], &result_1)
                                int64_t rcx_20 = var_d8
                                
                                if (rcx_20 != 0)
                                    sub_140a74f90(rcx_20)
                                
                                arg1[1].d -= 1
                                sub_1405a5010(arg1)
                            
                            r12_2 += rax_13
                            rsi_1 += 1

__security_check_cookie(rax_1 ^ &var_128)
return result
