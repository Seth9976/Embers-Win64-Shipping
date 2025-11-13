// 函数: sub_142881040
// 地址: 0x142881040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x430)
void var_458
int64_t rax_1 = __security_cookie ^ &var_458
int64_t rbp = 0
int32_t var_418 = 0
int64_t var_408 = 0
int64_t i_10 = arg3
void* rdi = arg2
uint64_t result

if (arg3 != 0)
    int32_t var_430_2
    void* const var_420_1
    int64_t* r12_1
    void* const r14_1
    
    if (arg4 != 0)
        int64_t rax_2 = sub_142891580(*(arg1 + 0x478))
        int32_t rax_4
        
        if (rax_2 != 0)
            rax_4 = sub_1428916c0(sub_142891580(*(arg1 + 0x478)))
        
        if (rax_2 != 0 && rax_4 s< 0)
            var_430_2 = 0x3bf
            goto label_14288190d
        
        r12_1 = *(arg1 + 0x460)
        
        if (r12_1 != 0)
            void* rax_5 = sub_140687ad0(r12_1)
            r14_1 = rax_5
            var_420_1 = rax_5
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 1) != 0 && (sub_142890eb0(rax_5) & 0xf0007) == 2)
                int32_t rax_8 = sub_140611e40(r14_1)
                
                if (rax_8 s> 1)
                    int64_t r14_2 = 0
                    
                    if (i_10 != 0)
                        void* rdi_1 = rdi + 0x20
                        
                        do
                            int64_t rcx_7 = *(rdi_1 + 8)
                            
                            if (*rdi_1 != rcx_7)
                                var_430_2 = 0x3d7
                                goto label_14288190d
                            
                            if (sub_142897af0(rcx_7, zx.q(rax_8)) s<= 0)
                                var_430_2 = 0x3db
                                goto label_14288190d
                            
                            r14_2 += 1
                            rdi_1 += 0x48
                        while (r14_2 u< i_10)
                        
                        rdi = arg2
                    
                    r14_1 = var_420_1
        else
            r14_1 = nullptr
            var_420_1 = nullptr
        
        goto label_14288119f
    
    int64_t rax_14 = sub_142891580(*(arg1 + 0x448))
    int32_t rax_16
    
    if (rax_14 != 0)
        rax_16 = sub_1428916c0(sub_142891580(*(arg1 + 0x448)))
    
    if (rax_14 == 0 || rax_16 s>= 0)
        r12_1 = *(arg1 + 0x430)
        
        if (r12_1 != 0)
            void* rax_17 = sub_140687ad0(r12_1)
            r14_1 = rax_17
            var_420_1 = rax_17
        else
            r14_1 = nullptr
            var_420_1 = nullptr
        
    label_14288119f:
        
        if (*(arg1 + 0x508) == 0 || r12_1 == 0 || r14_1 == 0)
            if (i_10 != 0)
                void* rdi_7 = rdi + 0x20
                int64_t i
                
                do
                    memmove(*rdi_7, *(rdi_7 + 8), (*(rdi_7 - 0x18)).d)
                    *(rdi_7 + 8) = *rdi_7
                    rdi_7 += 0x48
                    i = i_10
                    i_10 -= 1
                while (i != 1)
            
            result = 1
        else
            int64_t r13_2 = sx.q(opus_repacketizer_get_nb_frames(sub_140687ad0(r12_1)))
            bool c_1
            
            if (i_10 u> 1)
                c_1 = test_bit(sub_142890eb0(sub_140687ad0(r12_1)), 0x17)
            
            if (i_10 u<= 1 || c_1)
                int64_t var_428_1 = 0
                int64_t r10_1 = 0
                int32_t var_3f8
                
                if (i_10 != 0)
                    void var_1df
                    void* r14_3 = &var_1df
                    int64_t* rdi_2 = rdi + 8
                    
                    do
                        *(&var_3f8 + (r10_1 << 3)) = *rdi_2
                        int64_t r10_2
                        
                        if (not(test_bit(sub_142890eb0(sub_140687ad0(r12_1)), 0x15)))
                            r10_2 = var_428_1
                            
                            if (r13_2 == 1)
                                goto label_142881438
                            
                            if (arg4 != 0)
                                char* i_1 = *(&var_3f8 + (r10_2 << 3))
                                int64_t r8_4 = r13_2 - modu.dp.q(0:i_1, r13_2)
                                
                                if (r8_4 u> 0x100)
                                    var_430_2 = 0x43a
                                    goto label_14288190d
                                
                                if (i_1 u< &i_1[r8_4])
                                    char* i_9
                                    
                                    do
                                        i_1[rdi_2[4]] = (r8_4 - 1).b
                                        i_1 = &i_1[1]
                                        i_9 = *(&var_3f8 + (r10_2 << 3))
                                    while (i_1 u< &i_9[r8_4])
                                    
                                    i_1 = i_9
                                
                                *rdi_2 += r8_4
                                *(&var_3f8 + (r10_2 << 3)) = &i_1[r8_4]
                                goto label_142881438
                            
                        label_14288143d:
                            int64_t rax_41 = *(&var_3f8 + (r10_2 << 3))
                            
                            if (rax_41 == 0 || modu.dp.q(0:rax_41, r13_2) != 0)
                            label_1428819cf:
                                result = 0
                                goto label_142881a2b
                        else
                            void* const r8 = 0x16a0
                            
                            if (arg4 == 0)
                                r8 = 0x1698
                            
                            void* r8_1 = r8 + arg1
                            
                            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                                void* rcx_20 = r8_1 + 7
                                *(r14_3 - 9) = *r8_1
                                
                                do
                                    char temp5_1 = *rcx_20
                                    *rcx_20 += 1
                                    
                                    if (temp5_1 != 0xff)
                                        break
                                    
                                    rcx_20 -= 1
                                while (rcx_20 - r8_1 s>= 0)
                            else
                                char* rdx_2 = *(arg1 + 0x16b0)
                                char* rax_22 = &rdx_2[2]
                                
                                if (arg4 == 0)
                                    rax_22 = rdx_2
                                
                                char* rcx_19 = &rdx_2[2]
                                
                                if (arg4 == 0)
                                    rcx_19 = rdx_2
                                
                                char var_1f7_1 = *rcx_19
                                int32_t var_1f6_1 = *(r8_1 + 2)
                                int16_t var_1f2_1 = *(r8_1 + 6)
                                *(r14_3 - 9) = rax_22[1].q
                            
                            int32_t rcx_21 = *arg1
                            *(r14_3 - 1) = *(rdi_2 - 4)
                            *(r14_3 + 1) = rcx_21.b
                            int64_t rcx_22 = *rdi_2
                            *r14_3 = (rcx_21 s>> 8).b
                            *(r14_3 + 3) = rcx_22.b
                            *(r14_3 + 2) = (rcx_22 u>> 8).b
                            int32_t rax_34 = sub_142892150(r12_1)
                            var_418 = rax_34
                            
                            if (rax_34 s<= 0)
                                var_430_2 = 0x42a
                                goto label_14288190d
                            
                            r10_2 = var_428_1
                            
                            if (arg4 == 0)
                                goto label_14288143d
                            
                            int64_t rcx_24 = sx.q(rax_34)
                            *(&var_3f8 + (r10_2 << 3)) += rcx_24
                            *rdi_2 += rcx_24
                        label_142881438:
                            
                            if (arg4 == 0)
                                goto label_14288143d
                        
                        r10_1 = r10_2 + 1
                        r14_3 += 0xd
                        rdi_2 = &rdi_2[9]
                        var_428_1 = r10_1
                    while (r10_1 u< i_10)
                
                if (i_10 u<= 1)
                label_14288155f:
                    void* r14_4 = arg2
                    int32_t rax_48 =
                        sub_142891550(r12_1, *(r14_4 + 0x20), *(r14_4 + 0x28), zx.q(var_3f8))
                    int32_t rcx_33
                    
                    if (not(test_bit(sub_142890eb0(sub_140687ad0(r12_1)), 0x14)))
                        rcx_33.b = rax_48 == 0
                    else
                        rcx_33.b = rax_48 s< 0
                    
                    if (rcx_33 != 0)
                        result = 0xffffffff
                    else
                        if (arg4 == 0)
                            uint128_t zmm0_1
                            int32_t zmm1[0x4]
                            int32_t zmm2[0x4]
                            
                            if ((sub_142890eb0(var_420_1) & 0xf0007) != 6)
                                if ((sub_142890eb0(var_420_1) & 0xf0007) == 7)
                                    int64_t i_2 = 0
                                    
                                    if (i_10 != 0)
                                        if (i_10 u>= 4)
                                            zmm1 = data_1434426e0
                                            void* rcx_38 = r14_4 + 0x68
                                            zmm2 = data_1434e7db0
                                            
                                            do
                                                i_2 += 4
                                                zmm0_1 = *(rcx_38 - 0x48) | *rcx_38 << 0x40
                                                rcx_38 += 0x120
                                                zmm0_1 = _mm_add_epi64(zmm0_1, zmm1)
                                                *(rcx_38 - 0x168) = zmm0_1.q
                                                *(rcx_38 - 0x120) = _mm_bsrli_si128(zmm0_1, 8).q
                                                zmm0_1 = _mm_add_epi64(
                                                    *(rcx_38 - 0x160) | *(rcx_38 - 0x118) << 0x40, 
                                                    zmm1)
                                                *(rcx_38 - 0x160) = zmm0_1.q
                                                *(rcx_38 - 0x118) = _mm_bsrli_si128(zmm0_1, 8).q
                                                zmm0_1 = _mm_add_epi64(
                                                    *(rcx_38 - 0x180) | *(rcx_38 - 0x138) << 0x40, 
                                                    zmm2)
                                                *(rcx_38 - 0x180) = zmm0_1.q
                                                *(rcx_38 - 0x138) = _mm_bsrli_si128(zmm0_1, 8).q
                                                zmm0_1 = _mm_add_epi64(
                                                    *(rcx_38 - 0xd8) | *(rcx_38 - 0x90) << 0x40, 
                                                    zmm1)
                                                *(rcx_38 - 0xd8) = zmm0_1.q
                                                *(rcx_38 - 0x90) = _mm_bsrli_si128(zmm0_1, 8).q
                                                zmm0_1 = _mm_add_epi64(
                                                    *(rcx_38 - 0xd0) | *(rcx_38 - 0x88) << 0x40, 
                                                    zmm1)
                                                *(rcx_38 - 0xd0) = zmm0_1.q
                                                *(rcx_38 - 0x88) = _mm_bsrli_si128(zmm0_1, 8).q
                                                zmm0_1 = _mm_add_epi64(
                                                    *(rcx_38 - 0xf0) | *(rcx_38 - 0xa8) << 0x40, 
                                                    zmm2)
                                                *(rcx_38 - 0xf0) = zmm0_1.q
                                                *(rcx_38 - 0xa8) = _mm_bsrli_si128(zmm0_1, 8).q
                                            while (i_2 u< i_10 - (zx.q(i_10.d) & 3))
                                        
                                        if (i_2 u< i_10)
                                            void* rcx_39 = r14_4 + ((i_2 * 9 + 5) << 3)
                                            int64_t i_8 = i_10 - i_2
                                            int64_t i_3
                                            
                                            do
                                                *(rcx_39 - 8) += 8
                                                *rcx_39 += 8
                                                *(rcx_39 - 0x20) -= 8
                                                rcx_39 += 0x48
                                                i_3 = i_8
                                                i_8 -= 1
                                            while (i_3 != 1)
                            else
                                int64_t i_4 = 0
                                
                                if (i_10 != 0)
                                    if (i_10 u>= 4)
                                        zmm1 = data_1434426e0
                                        void* rcx_35 = r14_4 + 0x68
                                        zmm2 = data_1434e7db0
                                        
                                        do
                                            i_4 += 4
                                            zmm0_1 = *(rcx_35 - 0x48) | *rcx_35 << 0x40
                                            rcx_35 += 0x120
                                            zmm0_1 = _mm_add_epi64(zmm0_1, zmm1)
                                            *(rcx_35 - 0x168) = zmm0_1.q
                                            *(rcx_35 - 0x120) = _mm_bsrli_si128(zmm0_1, 8).q
                                            zmm0_1 = _mm_add_epi64(
                                                *(rcx_35 - 0x160) | *(rcx_35 - 0x118) << 0x40, zmm1)
                                            *(rcx_35 - 0x160) = zmm0_1.q
                                            *(rcx_35 - 0x118) = _mm_bsrli_si128(zmm0_1, 8).q
                                            zmm0_1 = _mm_add_epi64(
                                                *(rcx_35 - 0x180) | *(rcx_35 - 0x138) << 0x40, zmm2)
                                            *(rcx_35 - 0x180) = zmm0_1.q
                                            *(rcx_35 - 0x138) = _mm_bsrli_si128(zmm0_1, 8).q
                                            zmm0_1 = _mm_add_epi64(
                                                *(rcx_35 - 0xd8) | *(rcx_35 - 0x90) << 0x40, zmm1)
                                            *(rcx_35 - 0xd8) = zmm0_1.q
                                            *(rcx_35 - 0x90) = _mm_bsrli_si128(zmm0_1, 8).q
                                            zmm0_1 = _mm_add_epi64(
                                                *(rcx_35 - 0xd0) | *(rcx_35 - 0x88) << 0x40, zmm1)
                                            *(rcx_35 - 0xd0) = zmm0_1.q
                                            *(rcx_35 - 0x88) = _mm_bsrli_si128(zmm0_1, 8).q
                                            zmm0_1 = _mm_add_epi64(
                                                *(rcx_35 - 0xf0) | *(rcx_35 - 0xa8) << 0x40, zmm2)
                                            *(rcx_35 - 0xf0) = zmm0_1.q
                                            *(rcx_35 - 0xa8) = _mm_bsrli_si128(zmm0_1, 8).q
                                        while (i_4 u< i_10 - (zx.q(i_10.d) & 3))
                                    
                                    if (i_4 u< i_10)
                                        void* rcx_36 = r14_4 + ((i_4 * 9 + 5) << 3)
                                        int64_t i_7 = i_10 - i_4
                                        int64_t i_5
                                        
                                        do
                                            *(rcx_36 - 8) += 8
                                            *rcx_36 += 8
                                            *(rcx_36 - 0x20) -= 8
                                            rcx_36 += 0x48
                                            i_5 = i_7
                                            i_7 -= 1
                                        while (i_5 != 1)
                        
                        int32_t result_1 = 1
                        int64_t rax_66
                        
                        if ((**(arg1 + 0xa8) & 0x100) == 0)
                            rax_66 = sub_142891580(*(arg1 + 0x448))
                        
                        int64_t rax_69
                        
                        if ((**(arg1 + 0xa8) & 0x100) != 0 || rax_66 == 0)
                            rax_69 = 0
                        else
                            int32_t rax_68 = sub_1428916c0(sub_142891580(*(arg1 + 0x448)))
                            
                            if (rax_68 s< 0)
                                var_430_2 = 0x483
                                goto label_14288190d
                            
                            rax_69 = sx.q(rax_68)
                            var_408 = rax_69
                        
                        if (r13_2 != 1 && arg4 == 0 && i_10 != 0)
                            do
                                int32_t rax_70 = sub_142880ed0(arg1, r14_4, r13_2, rax_69)
                                
                                if (rax_70 == 0)
                                    goto label_1428819cf
                                
                                int32_t rax_71 = rax_70 ^ 1
                                rbp += 1
                                r14_4 += 0x48
                                rax_69 = var_408
                                int32_t rcx_48 =
                                    neg.d((rax_71 - 1) u>> 0x1f & not.d(rax_71) u>> 0x1f)
                                result_1 = (result_1 & rcx_48) | not.d(rcx_48)
                            while (rbp u< i_10)
                            
                            r14_4 = arg2
                        
                        int64_t rax_74 = sx.q(var_418)
                        
                        if (rax_74.d != 0 && arg4 == 0 && i_10 != 0)
                            void* rax_75 = r14_4 + 8
                            int64_t i_6
                            
                            do
                                *rax_75 -= rax_74
                                rax_75 += 0x48
                                i_6 = i_10
                                i_10 -= 1
                            while (i_6 != 1)
                        
                        result = zx.q(result_1)
                else
                    int64_t rcx_25 = 0
                    int64_t var_2f8[0x20]
                    
                    if (i_10 != 0)
                        void* rdx_7 = arg2 + 0x20
                        
                        do
                            int64_t rax_43 = *rdx_7
                            rdx_7 += 0x48
                            var_2f8[rcx_25] = rax_43
                            rcx_25 += 1
                        while (rcx_25 u< i_10)
                    
                    if (sub_142892150(r12_1) s> 0)
                        int64_t rcx_27 = 0
                        
                        if (i_10 != 0)
                            void* rdx_9 = arg2 + 0x28
                            
                            do
                                int64_t rax_45 = *rdx_9
                                rdx_9 += 0x48
                                var_2f8[rcx_27] = rax_45
                                rcx_27 += 1
                            while (rcx_27 u< i_10)
                        
                        int32_t rax_46 = sub_142892150(r12_1)
                        int32_t rax_47
                        
                        if (rax_46 s> 0)
                            rax_47 = sub_142892150(r12_1)
                        
                        if (rax_46 s> 0 && rax_47 s> 0)
                            goto label_14288155f
                        
                        sub_142856580(arg1, 0x50, 0x191, 0x196, "ssl\record\ssl3_record.c", 0x460)
                        result = 0xffffffff
                    else
                        sub_142856580(arg1, 0x50, 0x191, 0x196, "ssl\record\ssl3_record.c", 0x454)
                        result = 0xffffffff
            else
                sub_142856580(arg1, 0x50, 0x191, 0x196, "ssl\record\ssl3_record.c", 0x402)
                result = 0xffffffff
    else
        var_430_2 = 0x3e6
    label_14288190d:
        sub_142856580(arg1, 0x50, 0x191, 0x44, "ssl\record\ssl3_record.c", var_430_2)
        result = 0xffffffff
else
    sub_142856580(arg1, 0x50, 0x191, (arg3 + 0x44).d, "ssl\record\ssl3_record.c", 0x3b6)
    result = 0

label_142881a2b:
__security_check_cookie(rax_1 ^ &var_458)
return result
