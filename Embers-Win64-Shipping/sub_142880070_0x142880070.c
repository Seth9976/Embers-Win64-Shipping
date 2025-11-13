// 函数: sub_142880070
// 地址: 0x142880070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x110)
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r13 = *(arg1 + 0x5f8)
void* r14 = &arg1[0x354]
int64_t rax_2 = *(arg1 + 0x508)
int64_t rsi = 0
void* var_f8 = r14

if (r13 == 0)
    r13 = 1

int64_t r12 = 0
int32_t result

while (true)
    void* rbp_1 = r14
    
    if (arg1[0x203] == 0xf1 && *(arg1 + 0x1650) u>= 5)
        goto label_14288038e
    
    void var_d8
    void* var_110 = &var_d8
    int32_t rax_3
    rax_3.b = r12 == 0
    int32_t var_118 = rax_3
    result = sub_14285cec0(arg1, 5, *(arg1 + 0x830), 0, var_118, var_110)
    
    if (result s<= 0)
        break
    
    int64_t rsi_1 = *(arg1 + 0x1650)
    char* rdi_1 = *(arg1 + 0x1648)
    arg1[0x203] = 0xf1
    int32_t rdx_1
    int32_t r9_1
    
    if (rsi_1 u> 0x7fffffffffffffff)
        var_110.d = 0xda
        r9_1 = 0x44
        rdx_1 = 0x50
    else
        int64_t var_e0_1 = rsi_1
        uint64_t rcx_3
        
        if (rsi_1 u>= 2)
            rcx_3 = zx.q(*rdi_1) << 8 | zx.q(rdi_1[1])
        
        if (rsi_1 u< 2 || rdi_1.o:8.q == 2)
            rdx_1 = 0x32
            var_110.d = 0xe1
            r9_1 = 0x44
        else
            int64_t var_108
            uint32_t* rcx_16
            int32_t rdx_6
            int32_t r9_6
            
            if (arg1[0xe] == 0 || arg1[0x5aa] == 0 || not(test_bit(rcx_3, 0xf)) || rdi_1[2] != 1)
                int64_t r10_1 = *(arg1 + 0xb8)
                
                if (r10_1 != 0)
                    var_108 = *(arg1 + 0xc0)
                    var_110 = arg1
                    var_118.q = 5
                    r10_1(0, 0, 0x100, rdi_1, var_118, var_110, var_108)
                
                if (rsi_1 == 0)
                label_142880df7:
                    rdx_1 = 0x32
                    var_110.d = 0x10f
                    r9_1 = 0x44
                else
                    uint32_t r8_2 = zx.d(*rdi_1)
                    int64_t var_e0_2 = rsi_1 - 1
                    
                    if (rsi_1 - 1 u< 2)
                        goto label_142880df7
                    
                    uint32_t rdx_4 = zx.d(rdi_1[1]) << 8 | zx.d(rdi_1[2])
                    int64_t var_e0_3 = rsi_1 - 3
                    
                    if (rsi_1 - 3 u< 2)
                        goto label_142880df7
                    
                    void* var_e8_2 = &rdi_1[5]
                    int64_t var_e0_4 = rsi_1 - 5
                    uint64_t r9_5 = zx.q(rdi_1[3]) << 8 | zx.q(rdi_1[4])
                    *(r14 - 4) = r8_2
                    *r14 = r9_5
                    *(r14 - 8) = rdx_4
                    
                    if (arg1[0x178] != 0)
                    label_1428802ea:
                        
                        if ((rdx_4 & 0xffffff00) != 0x300)
                            if (arg1[0x5aa] != 0)
                                char* _Str1 = *(arg1 + 0x1648)
                                
                                if (strncmp(_Str1, "GET ", 4) != 0
                                        && strncmp(_Str1, "POST ", 5) != 0
                                        && strncmp(_Str1, "HEAD ", 5) != 0
                                        && strncmp(_Str1, "PUT ", 4) != 0)
                                    if (strncmp(_Str1, "CONNE", 5) != 0)
                                        var_110.d = 0x14c
                                        var_118.q = "ssl\record\ssl3_record.c"
                                        sub_142856580(arg1, 0xffffffff, 0x8f, 0x10b, var_118, 
                                            var_110.d)
                                        result = -1
                                    else
                                        var_110.d = 0x146
                                        var_118.q = "ssl\record\ssl3_record.c"
                                        sub_142856580(arg1, 0xffffffff, 0x8f, 0x9b, var_118, 
                                            var_110.d)
                                        result = -1
                                    
                                    break
                                
                                var_110.d = 0x142
                                r9_6 = 0x9c
                                goto label_142880528
                            
                            var_110.d = 0x151
                            rdx_1 = 0x46
                            r9_1 = 0x10b
                        else
                            int32_t* rcx_6 = *(arg1 + 8)
                            
                            if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) != 0)
                            label_142880375:
                                
                                if (r9_5 u<= *(arg1 + 0x830) - 5)
                                    goto label_14288037e
                                
                                var_110.d = 0x16b
                                rdx_1 = 0x16
                                r9_1 = 0xc6
                            else
                                int32_t rax_21 = *rcx_6
                                
                                if (rax_21 s< 0x304 || rax_21 == 0x10000 || *(arg1 + 0x430) == 0)
                                    goto label_142880375
                                
                                if (r8_2 == 0x17)
                                label_14288035e:
                                    
                                    if (rdx_4 == 0x303)
                                        goto label_142880375
                                    
                                    var_110.d = 0x163
                                    rdx_1 = 0x32
                                    r9_1 = 0x10b
                                else
                                    bool cond:7_1
                                    
                                    if (r8_2 == 0x14)
                                        void* rax_22 = *(arg1 + 0xa8)
                                        
                                        if (*(rax_22 + 0x198) == 0)
                                            goto label_14288035e
                                        
                                        cond:7_1 = *(rax_22 + 0x220) != 0
                                        goto label_142880358
                                    
                                    if (r8_2 == 0x15)
                                        cond:7_1 = arg1[0x20] != 1
                                    label_142880358:
                                        
                                        if (cond:7_1)
                                            goto label_142880565
                                        
                                        goto label_14288035e
                                    
                                label_142880565:
                                    var_110.d = 0x15e
                                    rdx_1 = 0xa
                                    r9_1 = 0x1bb
                    else
                        int32_t* rcx_5 = *(arg1 + 8)
                        int32_t rax_16
                        
                        if ((*(*(rcx_5 + 0xc0) + 0x60) & 8) == 0)
                            rax_16 = *rcx_5
                        
                        if ((*(*(rcx_5 + 0xc0) + 0x60) & 8) == 0 && rax_16 s>= 0x304)
                            if (rax_16 != 0x10000 || arg1[0x136] == 1)
                                goto label_1428802ea
                            
                            goto label_1428802d9
                        
                        if (arg1[0x136] == 1)
                            goto label_1428802ea
                        
                    label_1428802d9:
                        uint32_t rax_17 = *arg1
                        
                        if (rdx_4 == rax_17)
                            goto label_1428802ea
                        
                        if (((rax_17 ^ rdx_4) & 0xff00) != 0 || *(arg1 + 0x460) != 0
                                || *(arg1 + 0x478) != 0)
                            goto label_14288054d
                        
                        if (r8_2 == 0x15)
                            var_110.d = 0x12b
                            r9_6 = 0x10b
                        label_142880528:
                            rdx_6 = -1
                        label_14288052a:
                            rcx_16 = arg1
                        label_14288053a:
                            var_118.q = "ssl\record\ssl3_record.c"
                            sub_142856580(rcx_16, rdx_6, 0x8f, r9_6, var_118, var_110.d)
                            result = -1
                            break
                        
                        *arg1 = rdx_4
                    label_14288054d:
                        var_110.d = 0x134
                        rdx_1 = 0x46
                        r9_1 = 0x10b
            else
                uint64_t rcx_4 = zx.q(rcx_3.d) & 0x7fff
                *(r14 - 4) = 0x16
                *r14 = rcx_4
                *(r14 - 8) = 2
                
                if (rcx_4 u> *(arg1 + 0x830) - 2)
                    var_110.d = 0xfb
                    rdx_1 = 0x16
                    r9_1 = 0xc6
                else if (rcx_4 u>= 9)
                label_14288037e:
                    rsi = 0
                label_14288038e:
                    int32_t* rcx_7 = *(arg1 + 8)
                    int32_t rax_26
                    
                    if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0)
                        rax_26 = *rcx_7
                    
                    int64_t rcx_8
                    
                    if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) != 0 || rax_26 s< 0x304
                            || rax_26 == 0x10000)
                        int64_t rax_27 = 0x4140
                        rcx_8 = *r14
                        
                        if (*(arg1 + 0x458) != 0)
                            rax_27 = 0x4540
                        
                        if (rcx_8 u<= rax_27)
                            goto label_1428803f5
                        
                        var_110.d = 0x187
                        rdx_1 = 0x16
                        r9_1 = 0x96
                    else
                        rcx_8 = *r14
                        
                        if (rcx_8 u<= 0x4100)
                        label_1428803f5:
                            int64_t rdx_5 = rcx_8 - 3
                            
                            if (*(r14 - 8) != 2)
                                rdx_5 = rcx_8
                            
                            if (rdx_5 != 0)
                                var_110 = &var_d8
                                var_118 = 0
                                result = sub_14285cec0(arg1, rdx_5, rdx_5, 1, var_118, var_110)
                                
                                if (result s<= 0)
                                    break
                            
                            arg1[0x203] = 0xf0
                            int64_t rcx_10 = 2
                            
                            if (*(r14 - 8) != 2)
                                rcx_10 = 5
                            
                            r12 += 1
                            int64_t rcx_11 = rcx_10 + *(arg1 + 0x1648)
                            *(r14 + 0x20) = rcx_11
                            *(r14 + 8) = *r14
                            *(r14 + 0x18) = rcx_11
                            *(r14 + 0x30) = 0
                            r14 += 0x48
                            int128_t var_c8
                            var_c8.q = r12
                            *(arg1 + 0x1650) = 0
                            arg1[0x5aa] = 0
                            
                            if (r12 u< r13 && *(rbp_1 - 4) == 0x17
                                    && (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 1) != 0)
                                int64_t* rcx_13 = *(arg1 + 0x430)
                                
                                if (rcx_13 != 0
                                        && test_bit(sub_142890eb0(sub_140687ad0(rcx_13)), 0x17)
                                        && sub_142880e80(arg1) != 0)
                                    continue
                            
                            if (r12 != 1 || *(rbp_1 - 4) != 0x14)
                            label_142880673:
                                int64_t* rcx_18
                                
                                if ((**(arg1 + 0xa8) & 0x100) != 0)
                                    rcx_18 = *(arg1 + 0x448)
                                
                                void var_b8
                                void* r15_1
                                
                                if ((**(arg1 + 0xa8) & 0x100) == 0 || rcx_18 == 0)
                                    r15_1 = var_f8
                                label_142880758:
                                    void* r13_1 = &arg1[0x352]
                                    int64_t rsi_3 = *r15_1
                                    int32_t rax_45 = (**(*(arg1 + 8) + 0xc0))(arg1, r13_1, r12, 0, 
                                        var_118, var_110, var_108)
                                    int32_t r14_3 = rax_45
                                    int64_t rdx_10
                                    
                                    if (rax_45 != 0)
                                        if (rax_2 != 0 && *(arg1 + 0x430) != 0
                                                && (**(arg1 + 0xa8) & 0x100) == 0
                                                && sub_142891580(*(arg1 + 0x448)) != 0)
                                            int64_t rbp_3 =
                                                sx.q(sub_1428916c0(sub_142891580(*(arg1 + 0x448))))
                                            
                                            if (rbp_3 u> 0x40)
                                                rdx_6 = 0x50
                                                var_110.d = 0x24b
                                                r9_6 = 0x44
                                                goto label_14288052a
                                            
                                            int64_t r13_2 = 0
                                            
                                            if (r12 != 0)
                                                void* rsi_4 = r15_1
                                                
                                                while (true)
                                                    if (*(rsi_4 + 8) u>= rbp_3 && ((sub_142890eb0(
                                                            sub_140687ad0(*(arg1 + 0x430))) & 0xf0007) != 2
                                                            || *(rsi_4 + 8) u>= rbp_3 + 1))
                                                        void* r12_1
                                                        
                                                        if ((sub_142890eb0(sub_140687ad0(
                                                                *(arg1 + 0x430))) & 0xf0007) != 2)
                                                            *rsi_4 -= rbp_3
                                                            r12_1 = *rsi_4 + *(rsi_4 + 0x18)
                                                        else
                                                            void var_78
                                                            r12_1 = &var_78
                                                            
                                                            if (
                                                                    sub_14287fb60(&var_78, rsi_4 - 8, rbp_3)
                                                                    == 0)
                                                                rdx_6 = 0x50
                                                                var_110.d = 0x26a
                                                                r9_6 = 0x44
                                                                goto label_14288052a
                                                            
                                                            *rsi_4 -= rbp_3
                                                        
                                                        int32_t rax_62 = (
                                                            *(*(*(arg1 + 8) + 0xc0) + 8))(arg1, 
                                                            rsi_4 - 8, &var_b8, 0)
                                                        int32_t rax_63
                                                        
                                                        if (rax_62 != 0 && r12_1 != 0)
                                                            rax_63 =
                                                                sub_1428bc500(&var_b8, r12_1, rbp_3)
                                                        
                                                        if (rax_62 == 0 || r12_1 == 0
                                                                || rax_63 != 0)
                                                            r14_3 = -1
                                                        
                                                        r12 = var_c8.q
                                                        
                                                        if (*rsi_4 u> rbp_3 + 0x4400)
                                                            r14_3 = -1
                                                        
                                                        r13_2 += 1
                                                        rsi_4 += 0x48
                                                        
                                                        if (r13_2 u< r12)
                                                            continue
                                                        
                                                        r15_1 = var_f8
                                                        break
                                                    
                                                    rdx_6 = 0x32
                                                    var_110.d = 0x25c
                                                    r9_6 = 0xa0
                                                    goto label_14288052a
                                            
                                            r13_1 = &arg1[0x352]
                                        
                                        if (r14_3 s>= 0)
                                            int64_t rbp_4 = 0
                                            
                                            if (r12 != 0)
                                                void* rsi_5 = r13_1
                                                
                                                do
                                                    if (*(arg1 + 0x458) != 0)
                                                        rcx_16 = arg1
                                                        
                                                        if (*(rsi_5 + 8) u> 0x4400)
                                                            rdx_6 = 0x16
                                                            var_110.d = 0x2b0
                                                            r9_6 = 0x8c
                                                            goto label_14288053a
                                                        
                                                        if (sub_14287fda0(rcx_16, rsi_5) == 0)
                                                            rdx_6 = 0x1e
                                                            var_110.d = 0x2b5
                                                            r9_6 = 0x6b
                                                            goto label_14288052a
                                                    
                                                    int32_t* rcx_41 = *(arg1 + 8)
                                                    
                                                    if ((*(*(rcx_41 + 0xc0) + 0x60) & 8) == 0)
                                                        int32_t rax_69 = *rcx_41
                                                        
                                                        if (rax_69 s>= 0x304 && rax_69 != 0x10000
                                                                && *(arg1 + 0x430) != 0)
                                                            int32_t rax_70 = *(rsi_5 + 4)
                                                            
                                                            if (rax_70 != 0x15)
                                                                int64_t rcx_42 = *(rsi_5 + 8)
                                                                
                                                                if (rcx_42 == 0 || rax_70 != 0x17)
                                                                    var_110.d = 0x2c2
                                                                    rdx_6 = 0xa
                                                                    r9_6 = 0x1bb
                                                                    goto label_14288052a
                                                                
                                                                int64_t rcx_43 = rcx_42 - 1
                                                                
                                                                if (rcx_42 != 1)
                                                                    while ((*(rsi_5 + 0x20))[rcx_43] == 0)
                                                                        int64_t temp2_1 = rcx_43
                                                                        rcx_43 -= 1
                                                                        
                                                                        if (temp2_1 == 1)
                                                                            break
                                                                
                                                                char* r9_8 = *(rsi_5 + 0x20) + rcx_43
                                                                *(rsi_5 + 8) = rcx_43
                                                                uint32_t rax_72 = zx.d(*r9_8)
                                                                *(rsi_5 + 4) = rax_72
                                                                
                                                                if (rax_72 != 0x17
                                                                        && rax_72 - 0x15 u> 1)
                                                                    var_110.d = 0x2d1
                                                                    rdx_6 = 0xa
                                                                    r9_6 = 0x1bb
                                                                    goto label_14288052a
                                                                
                                                                int64_t r10_5 = *(arg1 + 0xb8)
                                                                
                                                                if (r10_5 != 0)
                                                                    int64_t var_108_1 = *(arg1 + 0xc0)
                                                                    var_110 = arg1
                                                                    var_118.q = 1
                                                                    r10_5(0, zx.q(*arg1), 0x101)
                                                    
                                                    int32_t* rcx_44 = *(arg1 + 8)
                                                    
                                                    if ((*(*(rcx_44 + 0xc0) + 0x60) & 8) == 0)
                                                        int32_t rax_76 = *rcx_44
                                                        
                                                        if (rax_76 s>= 0x304 && rax_76 != 0x10000
                                                                && *(rsi_5 + 4) - 0x15 u<= 1
                                                                && *(rsi_5 + 8) == 0)
                                                            var_110.d = 0x2e2
                                                            rdx_6 = 0xa
                                                            r9_6 = 0x10f
                                                            goto label_14288052a
                                                    
                                                    int64_t r8_10 = *(rsi_5 + 8)
                                                    
                                                    if (r8_10 u> 0x4000)
                                                        rdx_6 = 0x16
                                                        var_110.d = 0x2e8
                                                        r9_6 = 0x92
                                                        goto label_14288052a
                                                    
                                                    void* rax_79 = *(arg1 + 0x508)
                                                    
                                                    if (rax_79 != 0)
                                                        char rcx_45 = *(rax_79 + 0x1b0)
                                                        
                                                        if (rcx_45 - 1 u<= 3 && r8_10
                                                                u> zx.q(0x200 << (rcx_45 - 1)))
                                                            rdx_6 = 0x16
                                                            var_110.d = 0x2f0
                                                            r9_6 = 0x92
                                                            goto label_14288052a
                                                    
                                                    *(rsi_5 + 0x18) = 0
                                                    
                                                    if (r8_10 != 0)
                                                        *(arg1 + 0x1670) = 0
                                                    else
                                                        int64_t rax_83 = *(arg1 + 0x1670) + 1
                                                        *(arg1 + 0x1670) = rax_83
                                                        
                                                        if (rax_83 u> 0x20)
                                                            var_110.d = 0x303
                                                            rdx_6 = (r8_10 + 0xa).d
                                                            r9_6 = 0x12a
                                                            goto label_14288052a
                                                    
                                                    rbp_4 += 1
                                                    rsi_5 += 0x48
                                                while (rbp_4 u< r12)
                                            
                                            int32_t rax_84
                                            
                                            if (arg1[0x21] == 0xb && *(r13_1 + 4) == 0x17)
                                                rax_84 = sub_14287f730(arg1, *r15_1, 0, 0)
                                            
                                            if (arg1[0x21] != 0xb || *(r13_1 + 4) != 0x17
                                                    || rax_84 != 0)
                                                *(arg1 + 0x810) = r12
                                                result = 1
                                                break
                                            
                                            result = -1
                                            break
                                            break
                                        
                                        if (sub_142856600(arg1) != 0)
                                            result = -1
                                            break
                                            break
                                        
                                        int32_t rax_66
                                        
                                        if (r12 == 1)
                                            rax_66 = sub_142856650(arg1)
                                        
                                        if (r12 != 1 || rax_66 == 0)
                                            var_110.d = 0x2a5
                                            rdx_6 = 0x14
                                            r9_6 = 0x119
                                            goto label_14288052a
                                        
                                        rdx_10 = rsi_3
                                    else
                                        if (sub_142856600(arg1) != 0)
                                            result = -1
                                            break
                                            break
                                        
                                        int32_t rax_47
                                        
                                        if (r12 == 1)
                                            rax_47 = sub_142856650(arg1)
                                        
                                        if (r12 != 1 || rax_47 == 0)
                                            rdx_6 = 0x15
                                            var_110.d = 0x233
                                            r9_6 = 0x81
                                            goto label_14288052a
                                        
                                        rdx_10 = *r15_1
                                    
                                    if (sub_14287f730(arg1, rdx_10, 0x68, 0) == 0)
                                        result = -1
                                        break
                                    
                                    *r15_1 = 0
                                    *(r13_1 + 0x38) = 1
                                    *(arg1 + 0x810) = 1
                                    sub_14285b840(&arg1[0x200])
                                    result = 1
                                    break
                                
                                int32_t rax_40 = sub_1428916c0(sub_142891580(rcx_18))
                                
                                if (rax_40 u<= 0x40)
                                    r15_1 = var_f8
                                    int64_t rbp_2 = sx.q(rax_40)
                                    
                                    if (r12 != 0)
                                        void* rdi_2 = r15_1
                                        
                                        while (true)
                                            int64_t rcx_20 = *rdi_2
                                            
                                            if (rcx_20 u< rbp_2)
                                                rdx_1 = 0x32
                                                var_110.d = 0x201
                                                r9_1 = 0xa0
                                                goto label_142880e40
                                            
                                            int64_t r14_1 = *(rdi_2 + 0x18)
                                            int64_t rcx_21 = rcx_20 - rbp_2
                                            *rdi_2 = rcx_21
                                            
                                            if ((*(*(*(arg1 + 8) + 0xc0) + 8))(arg1, rdi_2 - 8, 
                                                    &var_b8, 0, var_118, var_110, var_108) != 0 &&
                                                    sub_1428bc500(&var_b8, r14_1 + rcx_21, rbp_2) == 0)
                                                rsi += 1
                                                rdi_2 += 0x48
                                                
                                                if (rsi u>= r12)
                                                    break
                                                
                                                continue
                                            
                                            var_110.d = 0x209
                                            rdx_1 = 0x14
                                            r9_1 = 0x119
                                            goto label_142880e40
                                    
                                    goto label_142880758
                                
                                var_110.d = 0x1f8
                                r9_1 = 6
                                rdx_1 = 0x50
                            else
                                int32_t* rcx_17 = *(arg1 + 8)
                                int32_t rax_35
                                
                                if ((*(*(rcx_17 + 0xc0) + 0x60) & 8) == 0)
                                    rax_35 = *rcx_17
                                
                                if ((*(*(rcx_17 + 0xc0) + 0x60) & 8) != 0 || rax_35 s< 0x304)
                                    if (arg1[0x136] == 0)
                                        goto label_142880673
                                else if (rax_35 == 0x10000 && arg1[0x136] == 0)
                                    goto label_142880673
                                
                                void* rax_36 = *(arg1 + 0xa8)
                                
                                if (*(rax_36 + 0x198) != 0 && *(rax_36 + 0x220) != 0)
                                    goto label_142880673
                                
                                if (*rbp_1 != 1 || **(rbp_1 + 0x18) != 1)
                                    var_110.d = 0x1d9
                                    rdx_1 = 0x2f
                                    r9_1 = 0x104
                                else
                                    *(rbp_1 - 4) = 0x16
                                    *(arg1 + 0x1670) += 1
                                    
                                    if (*(arg1 + 0x1670) u<= 0x20)
                                        *(rbp_1 + 0x30) = 1
                                        result = 1
                                        *(arg1 + 0x810) = 1
                                        break
                                    
                                    var_110.d = 0x1e5
                                    rdx_1 = 0xa
                                    r9_1 = 0x106
                        else
                            var_110.d = 0x176
                            rdx_1 = 0x16
                            r9_1 = 0x96
                else
                    rdx_1 = 0x32
                    var_110.d = 0x101
                    r9_1 = 0xa0
    
label_142880e40:
    var_118.q = "ssl\record\ssl3_record.c"
    sub_142856580(arg1, rdx_1, 0x8f, r9_1, var_118, var_110.d)
    result = -1
    break

__security_check_cookie(rax_1 ^ &var_138)
return result
