// 函数: sub_142602d30
// 地址: 0x142602d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ba8
int64_t rax_1 = __security_cookie ^ &var_ba8
bool cond:0 = *arg2 == 0x444e4156
void* r12 = arg2
void* r13 = arg1
int32_t var_b64 = arg3
int64_t result

if (not(cond:0))
    result = 0x80000001
else if (*(arg2 + 4) == 7)
    int32_t r9 = *(arg2 + 0xc)
    int32_t r10_1 = *(arg2 + 8)
    
    for (void* i = *(*(r13 + 0x80)
            + ((sx.q(r10_1 * 0x8da6b343 - r9 * 0x27e9c7bf) & sx.q(*(r13 + 0x38))) << 3)); i != 0; 
            i = *(i + 0x68))
        void* rcx_2 = *(i + 8)
        
        if (rcx_2 != 0 && *(rcx_2 + 8) == r10_1 && *(rcx_2 + 0xc) == r9
                && *(rcx_2 + 0x10) == *(r12 + 0x10))
            result = 0x80000000
            goto label_1426037bc
    
    int32_t* i_1
    
    if (arg5 != 0)
        int32_t r8_2 = (arg5 u>> (*(r13 + 0xa0)).b).d & ((1 << (*(r13 + 0x9c)).b).d - 1)
        
        if (r8_2 s>= *(r13 + 0x30))
            result = 0x80000004
        else
            i_1 = *(r13 + 0x88)
            int32_t* i_10 = nullptr
            int64_t rcx_6 = sx.q(r8_2) * 0xb0 + *(r13 + 0x90)
            
            for (; i_1 != 0; i_1 = *(i_1 + 0x68))
                if (i_1 == rcx_6)
                    goto label_142602e9f
                
                i_10 = i_1
            
            if (i_1 == rcx_6)
            label_142602e9f:
                int64_t rcx_7 = *(i_1 + 0x68)
                
                if (i_10 != 0)
                    *(i_10 + 0x68) = rcx_7
                else
                    *(r13 + 0x88) = rcx_7
                
                *i_1 = (arg5 u>> ((*(r13 + 0xa0)).b + (*(r13 + 0x9c)).b)).d
                    & ((1 << (*(r13 + 0x98)).b).d - 1)
                goto label_142602f1f
            
            result = 0x80000004
    else
        i_1 = *(r13 + 0x88)
        
        if (i_1 == 0)
            result = 0x80000004
        else
            *(r13 + 0x88) = *(i_1 + 0x68)
            *(i_1 + 0x68) = arg5
        label_142602f1f:
            int64_t rdx_6 =
                sx.q(*(r12 + 0xc) * 0xd8163841 - *(r12 + 8) * 0x72594cbd) & sx.q(*(r13 + 0x38))
            *(i_1 + 0x68) = *(*(r13 + 0x80) + (rdx_6 << 3))
            *(*(r13 + 0x80) + (rdx_6 << 3)) = i_1
            uint64_t rax_17 = zx.q(*(r12 + 0x1c))
            uint64_t rax_18 = zx.q(*(r12 + 0x24))
            int32_t r14_2 = *(r12 + 0x30) << 4
            int32_t r8_4 = *(r12 + 0x18) << 5
            uint64_t rax_19 = zx.q(*(r12 + 0x28))
            int32_t rbp_2 = *(r12 + 0x20) << 4
            int32_t r10_3 = *(r12 + 0x2c) << 2
            int32_t rdi_2 = *(r12 + 0x38) << 6
            uint64_t rax_20 = zx.q(*(r12 + 0x34))
            uint64_t rax_21 = zx.q(*(r12 + 0x70))
            *(i_1 + 0x18) = r12 + 0x74
            void* rcx_15 = r12 + 0x74 + sx.q((rax_17 * 3).d << 2)
            *(i_1 + 0x10) = rcx_15
            void* rdx_10 = sx.q(r8_4) + rcx_15
            *(i_1 + 0x20) = rdx_10
            void* rcx_17 = rdx_10 + sx.q(rbp_2)
            *(i_1 + 0x28) = rcx_17
            void* rcx_18 = rcx_17 + sx.q((rax_18 * 3).d << 2)
            *(i_1 + 0x30) = rcx_18
            void* rcx_19 = rcx_18 + sx.q((rax_19 * 3).d << 2)
            *(i_1 + 0x38) = rcx_19
            void* rcx_20 = rcx_19 + sx.q(r10_3)
            *(i_1 + 0x40) = rcx_20
            void* rcx_21 = rcx_20 + sx.q(r14_2)
            *(i_1 + 0x48) = rcx_21
            void* rcx_22 = rcx_21 + sx.q((rax_20 * 5).d << 3)
            *(i_1 + 0x50) = rcx_22
            void* rcx_23 = rcx_22 + sx.q(rdi_2)
            *(i_1 + 0x70) = rcx_23
            *(i_1 + 0x78) = sx.q((rax_21 * 5).d << 2) + rcx_23
            int64_t rax_32 = *(i_1 + 0x40)
            
            if (r14_2 == 0)
                rax_32 = 0
            
            *(i_1 + 0x40) = rax_32
            int32_t rax_33 = *(r12 + 0x70)
            rbp_2.b = rax_33 s> 0
            char var_b68 = rbp_2.b
            
            if (rax_33 s<= 0)
                *(i_1 + 0x78) = 0
            else
                int32_t i_2 = 0
                int64_t rcx_24 = 0
                
                do
                    rcx_24 += 0x14
                    i_2 += 1
                    *(rcx_24 + *(i_1 + 0x70) - 4) = 0
                    *(rcx_24 + *(i_1 + 0x70) - 8) = 0xffffffff
                while (i_2 s< *(r12 + 0x70))
                
                rdx_10 = *(i_1 + 0x20)
            
            i_1[1] = 0
            int32_t i_3 = 0
            *(rdx_10 + sx.q(*(r12 + 0x20)) * 0x10 - 8) = 0xffffffff
            
            if (*(r12 + 0x20) - 1 s> 0)
                int64_t rdx_11 = 0
                
                do
                    rdx_11 += 0x10
                    i_3 += 1
                    *(rdx_11 + *(i_1 + 0x20) - 8) = i_3
                while (i_3 s< *(r12 + 0x20) - 1)
            
            i_1[0x24] = 0xffffffff
            sub_142616170(&i_1[0x20], 0)
            i_1[0x2a] = 0xffffffff
            sub_142616170(&i_1[0x26], 0)
            uint64_t rbx_3 = zx.q(*i_1)
            int32_t i_4 = 0
            i_1[0x18] = var_b64
            i_1[0x19] = arg4
            *(i_1 + 8) = r12
            *(i_1 + 0x58) = r12
            char r8_5 = (*(r13 + 0xa0)).b
            int64_t rax_45
            int64_t rdx_14
            rdx_14:rax_45 = muls.dp.q(0x2e8ba2e8ba2e8ba3, i_1 - *(r13 + 0x90))
            int64_t rdx_15 = rdx_14 s>> 5
            uint64_t rbx_5 =
                rbx_3 << ((*(r13 + 0x9c)).b + r8_5) | zx.q((rdx_15 u>> 0x3f).d + rdx_15.d) << r8_5
            
            if (*(r12 + 0x18) s> 0)
                int64_t rdi_3 = 0
                
                do
                    int32_t* r8_7 = *(i_1 + 0x10) + rdi_3
                    bool cond:2_1 = *(r8_7 + 0x1f) u>= 0x40
                    *r8_7 = 0xffffffff
                    
                    if (not(cond:2_1))
                        uint64_t rax_51 = zx.q(*(r8_7 + 0x1e))
                        int32_t r9_3 = (rax_51 - 1).d
                        
                        if (r9_3 s>= 0)
                            void* r10_4 = (rax_51 << 1) + 0xe
                            int32_t temp2_1
                            
                            do
                                int16_t rax_52 = *(r10_4 + r8_7)
                                
                                if (rax_52 != 0 && rax_52 s>= 0)
                                    int32_t r11_3 = i_1[1]
                                    
                                    if (r11_3 != 0xffffffff)
                                        int64_t rcx_30 = *(i_1 + 0x20)
                                        uint64_t rdx_17 = zx.q(r11_3) * 2
                                        i_1[1] = *(rcx_30 + (rdx_17 << 3) + 8)
                                        int64_t rax_55 = zx.q(*(r10_4 + r8_7)) - 1
                                        *(rcx_30 + (rdx_17 << 3) + 0xc) = r9_3.b
                                        *(rcx_30 + (rdx_17 << 3) + 0xd) = 0x80
                                        *(rcx_30 + (rdx_17 << 3)) = rax_55 | rbx_5
                                        *(rcx_30 + (rdx_17 << 3) + 0xf) = 0
                                        *(rcx_30 + (rdx_17 << 3) + 8) = *r8_7
                                        *r8_7 = r11_3
                                
                                r10_4 -= 2
                                temp2_1 = r9_3
                                r9_3 -= 1
                            while (temp2_1 - 1 s>= 0)
                    
                    i_4 += 1
                    rdi_3 += 0x20
                while (i_4 s< *(*(i_1 + 8) + 0x18))
            
            sub_142604160(r13, i_1)
            int64_t i_13 = sx.q(*(*(i_1 + 8) + 0x38))
            void* const var_b58_1
            void* const rsi_3
            
            if (i_13.d s> 0)
                void* rax_60 = data_143b50290(zx.q(i_13.d * 0x410), 1)
                var_b58_1 = rax_60
                rsi_3 = rax_60
                
                if (rax_60 != 0)
                    memset(rsi_3, 0, i_13 * 0x410)
                    
                    if (i_13 s> 0)
                        int64_t r12_1 = 0
                        int32_t rbp_3 = 0
                        int64_t i_12 = i_13
                        int64_t i_5
                        
                        do
                            float (* rdi_5)[0x4] = *(i_1 + 0x50) + r12_1
                            void* rbx_7 = sx.q(rbp_3) * 0x410 + rsi_3
                            sub_14260f100(i_1, rdi_5, &(*rdi_5)[3], rdi_5[3][0], rbx_7)
                            sub_14260f100(i_1, &(*rdi_5)[6], &(*rdi_5)[9], rdi_5[3][0], 
                                rbx_7 + 0x208)
                            rbp_3 += 1
                            r12_1 += 0x40
                            i_5 = i_12
                            i_12 -= 1
                        while (i_5 != 1)
                        r13 = arg1
                        rbp_2 = zx.d(var_b68)
                        r12 = arg2
                else
                    rsi_3 = nullptr
                    var_b58_1 = nullptr
            else
                rsi_3 = nullptr
                var_b58_1 = nullptr
            
            int32_t r8_11 = *(r12 + 0xc)
            void* rdi_6 = nullptr
            int32_t r9_4 = *(r12 + 8)
            uint64_t rbx_8 = 0
            int32_t var_a38_1 = 0
            void* var_a30_1 = nullptr
            void* i_6 = *(*(r13 + 0x80)
                + ((sx.q(r8_11 * 0xd8163841 - r9_4 * 0x72594cbd) & sx.q(*(r13 + 0x38))) << 3))
            void var_b38
            
            if (i_6 == 0)
                rdi_6 = &var_b38
            else
                do
                    void* rax_66 = *(i_6 + 8)
                    
                    if (rax_66 != 0 && *(rax_66 + 8) == r9_4 && *(rax_66 + 0xc) == r8_11)
                        rbx_8 = zx.q(rbx_8.d + 1)
                    
                    i_6 = *(i_6 + 0x68)
                while (i_6 != 0)
                
                if (rbx_8.d s< 0x20)
                    rdi_6 = &var_b38
                else if (rbx_8.d s> 0)
                    void* rax_67 = data_143b50290(zx.q((rbx_8 << 3).d), 1)
                    rdi_6 = rax_67
                    var_a30_1 = rax_67
                    var_a38_1 = rbx_8.d
            
            void* var_b88
            var_b88.d = rbx_8.d
            sub_142611090(r13, *(r12 + 8), *(r12 + 0xc), rdi_6, var_b88.d)
            
            if (rbx_8.d s> 0)
                int64_t i_7 = 0
                
                do
                    int32_t* rdx_28 = *(rdi_6 + (i_7 << 3))
                    
                    if (rdx_28 != i_1)
                        var_b88.b = rbp_2.b
                        sub_142605c60(r13, i_1, rdx_28, 0xffffffff, var_b88.b)
                        var_b88.b = rbp_2.b
                        sub_142605c60(r13, *(rdi_6 + (i_7 << 3)), i_1, 0xffffffff, var_b88.b)
                        sub_142603d30(rsi_3, i_1, *(rdi_6 + (i_7 << 3)))
                        var_b88.b = rbp_2.b
                        sub_142606150(r13, i_1, *(rdi_6 + (i_7 << 3)), 0xffffffff, var_b88.b)
                        rdx_28 = *(rdi_6 + (i_7 << 3))
                    
                    var_b88.b = rbp_2.b
                    sub_142606150(r13, rdx_28, i_1, 0xffffffff, var_b88.b)
                    i_7 += 1
                while (i_7 s< sx.q(rbx_8.d))
            
            for (int32_t i_8 = 0; i_8 s< 8; i_8 += 1)
                int32_t rax_69
                void* r8_19
                rax_69, r8_19 = sub_14260f910(r13, *(r12 + 8), *(r12 + 0xc), i_8)
                int64_t rbx_9 = sx.q(rax_69)
                void* rdi_7
                
                if (rbx_9.d s>= 0x20)
                    void* rax_70
                    
                    if (var_a38_1 s>= rbx_9.d)
                        rax_70 = var_a30_1
                    else
                        if (var_a30_1 != 0)
                            data_143b50298(var_a30_1)
                        
                        rax_70, r8_19 = data_143b50290(zx.q((rbx_9 << 3).d), 1)
                        var_a30_1 = rax_70
                        var_a38_1 = rbx_9.d
                    
                    rdi_7 = rax_70
                else
                    rdi_7 = &var_b38
                
                int32_t r9_7 = *(r12 + 8)
                int32_t r10_5 = *(r12 + 0xc)
                
                if (i_8 u<= 7)
                    int64_t i_11 = sx.q(i_8)
                    void* rcx_49 = &__dos_header.e_magic[zx.q(jump_table_1426037d0[i_11])]
                    char temp3 = rcx_49.b
                    rcx_49.b += *(i_11 - 0x77)
                    *(r8_19 - 0x77) =
                        adc.b(*(r8_19 - 0x77), rcx_49.b, temp3 + *(i_11 - 0x77) u< temp3)
                    data_143ee471a = sub_140b4fdf0(rcx_49)
                    sub_1419da370()
                    data_143ee46f8 = &data_143f213e8
                    data_143ee4708 = rdi_7
                    data_143ee4710 = 0x142
                    data_143ee4714 = 1
                    data_143ee4718 = 0
                    data_143ee4700 = *(rbx_9 + 0x10)
                    *(rbx_9 + 0x10) = &data_143ee46f0
                    data_143ee3e80 = u"LightPosition"
                    data_143ee3eaa = sub_140b4fdf0(u"LightPosition")
                    sub_1419da370()
                    data_143ee3e88 = &data_143f213e8
                    data_143ee3e98 = rdi_7
                    data_143ee3ea0 = 0x13c
                    data_143ee3ea4 = 1
                    data_143ee3ea8 = 0
                    data_143ee3e90 = *(rbx_9 + 0x10)
                    *(rbx_9 + 0x10) = &data_143ee3e80
                    data_143ee3610 = u"ShadowDepthTextureSampler"
                    data_143ee363a = sub_140b4fdf0(u"ShadowDepthTextureSampler")
                    sub_1419daf40()
                    data_143ee3618 = &data_143f21450
                    data_143ee3628 = rdi_7
                    data_143ee3630 = 0x138
                    data_143ee3634 = 1
                    data_143ee3638 = 0
                    data_143ee3620 = *(rbx_9 + 0x10)
                    *(rbx_9 + 0x10) = &data_143ee3610
                    return &data_143ee3610
                
                int64_t r8_20 = 0
                
                for (void* j = *(*(r13 + 0x80) + ((sx.q(r10_5 * 0xd8163841 - r9_7 * 0x72594cbd)
                        & sx.q(*(r13 + 0x38))) << 3)); j != 0; j = *(j + 0x68))
                    void* rax_74 = *(j + 8)
                    
                    if (rax_74 != 0 && *(rax_74 + 8) == r9_7 && *(rax_74 + 0xc) == r10_5
                            && r8_20 s< rbx_9)
                        *(rdi_7 + (r8_20 << 3)) = j
                        r8_20 += 1
                
                int64_t rbx_10 = 0
                
                if (rbx_9 s> 0)
                    int32_t rax_76 = i_8 & 1
                    var_b64 = rax_76
                    int32_t r14_4 = (i_8 - 4) & 7
                    
                    do
                        if (rax_76 == 0)
                            var_b88.b = rbp_2.b
                            sub_142605c60(r13, i_1, *(rdi_7 + (rbx_10 << 3)), i_8, var_b88.b)
                            var_b88.b = rbp_2.b
                            sub_142605c60(r13, *(rdi_7 + (rbx_10 << 3)), i_1, r14_4, var_b88.b)
                        
                        sub_142603d30(var_b58_1, i_1, *(rdi_7 + (rbx_10 << 3)))
                        var_b88.b = rbp_2.b
                        sub_142606150(r13, i_1, *(rdi_7 + (rbx_10 << 3)), i_8, var_b88.b)
                        var_b88.b = rbp_2.b
                        sub_142606150(r13, *(rdi_7 + (rbx_10 << 3)), i_1, r14_4, var_b88.b)
                        rax_76 = var_b64
                        rbx_10 += 1
                    while (rbx_10 s< rbx_9)
                
                r12 = arg2
            
            void* const rbp_4 = var_b58_1
            
            if (rbp_4 != 0)
                void* rax_77 = *(i_1 + 8)
                int32_t i_9 = 0
                var_b68.w = *(rax_77 + 0x44)
                int32_t var_b60_1 = *(rax_77 + 0x40)
                
                if (*(rax_77 + 0x38) s> 0)
                    void* rsi_4 = rbp_4 + 0x408
                    int16_t rbp_5 = var_b68.w
                    
                    do
                        int32_t* rdi_10 = (sx.q(i_9) << 6) + *(i_1 + 0x50)
                        qsort(rsi_4 - 0x408, sx.q(*(rsi_4 - 0x208)), 0x10, sub_142616350)
                        qsort(rsi_4 - 0x200, sx.q(*rsi_4), 0x10, sub_142616350)
                        var_b64 = 0
                        var_b68.w = 0
                        void var_a28
                        sub_142606bc0(i_1, rsi_4 - 0x408, &var_a28, 0x3f, &var_b64, &var_b68)
                        int32_t rbx_11 = var_b64
                        int64_t var_b78
                        var_b78.d = var_b60_1
                        uint64_t var_b80_1
                        var_b80_1.w = rbp_5
                        int32_t* var_b88_2
                        var_b88_2.d = rbx_11
                        sub_1426070b0(r13, i_1, rdi_10, &var_a28, var_b88_2.d, var_b80_1.w, 
                            var_b78.d)
                        rsi_4 += 0x410
                        rbp_5 += var_b68.w
                        i_9 += 1
                        var_b60_1 += rbx_11
                    while (i_9 s< *(*(i_1 + 8) + 0x38))
                    
                    rbp_4 = var_b58_1
                
                data_143b50298(rbp_4)
            
            if (arg6 != 0)
                char r8_28 = (*(r13 + 0xa0)).b
                int64_t rax_80
                int64_t rdx_41
                rdx_41:rax_80 = muls.dp.q(0x2e8ba2e8ba2e8ba3, i_1 - *(r13 + 0x90))
                int64_t rdx_42 = rdx_41 s>> 5
                *arg6 = zx.q(*i_1) << ((*(r13 + 0x9c)).b + r8_28)
                    | zx.q((rdx_42 u>> 0x3f).d + rdx_42.d) << r8_28
            
            if (var_a30_1 != 0)
                data_143b50298(var_a30_1)
            
            result = 0x40000000
else
    result = 0x80000002

label_1426037bc:
__security_check_cookie(rax_1 ^ &var_ba8)
return result
