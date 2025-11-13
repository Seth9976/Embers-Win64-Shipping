// 函数: sub_14288eb20
// 地址: 0x14288eb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3b8)
void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
uint64_t count_1 = 0x40
int64_t r14 = 0x28
uint64_t count_2 = 8
uint64_t count = 0x28
char var_3d8 = 1
int64_t result

if (arg7 u>= 0x100000)
    result = 0
else
    int32_t rax_5 = sub_1406938b0(sub_142891580(arg1))
    int64_t var_3c8_1
    int64_t (* var_3b8_1)(char* arg1, char* arg2)
    void var_318
    int64_t (* rax_6)(int32_t* arg1, char* arg2)
    int64_t (* rcx_3)(char* arg1, char* arg2)
    int64_t r12_1
    
    if (rax_5 s<= 0x2a1)
        if (rax_5 == 0x2a1)
            sub_1428c8ee0(&var_318)
            r12_1 = 0x30
            var_3b8_1 = sub_14288f7b0
            rax_6 = sub_1428c9930
            var_3c8_1 = 0x30
            count_1 = 0x80
            count_2 = 0x10
            goto label_14288ed43
        
        if (rax_5 == 4)
            sub_1428cb930(&var_318)
            r12_1 = 0x10
            var_3d8 = 0
            r14 = 0x30
            var_3c8_1 = 0x10
            count = 0x30
            rcx_3 = sub_14288f5c0
            rax_6 = sub_1428cb980
            goto label_14288ed36
        
        if (rax_5 == 0x40)
            sub_1428c7900(&var_318)
            r12_1 = 0x14
            rcx_3 = sub_14288f640
            var_3c8_1 = 0x14
            rax_6 = sub_1428c7960
            goto label_14288ed36
        
        if (rax_5 != 0x2a0)
            goto label_14288ecc5
        
        sub_14289bdc0(&var_318)
        r12_1 = 0x20
        rcx_3 = sub_14288f6d0
        var_3c8_1 = 0x20
        rax_6 = sub_14289be30
        goto label_14288ed36
    
    if (rax_5 == 0x2a2)
        sub_1428c98a0(&var_318)
        r12_1 = 0x40
        var_3c8_1 = 0x40
        count_1 = 0x80
        rcx_3 = sub_14288f7b0
        rax_6 = sub_1428c9930
        count_2 = 0x10
    label_14288ed36:
        var_3b8_1 = rcx_3
    label_14288ed43:
        int64_t rsi_1 = 0xd
        
        if (arg10 != 0)
            rsi_1 = arg9 + 0xb + r14
        
        int64_t r10_1 = 6
        
        if (arg10 != 0)
            r10_1 = 2
        
        int64_t r8_1 = rsi_1 - r12_1
        int64_t r14_2 = arg6 + r8_1
        int64_t r15_1 = 0
        int64_t rbx_2 = 0
        uint64_t temp0_1 = divu.dp.q(0:(r8_1 + count_2 + count_1 + arg7 - 1), count_1)
        uint64_t temp1_1 = modu.dp.q(0:r14_2, count_1)
        int64_t rcx_10
        rcx_10.b = arg10 != 0
        int64_t rdx_5 = rcx_10 + r10_1
        int64_t rcx_12 = temp0_1 - r10_1
        bool cond:3_1 = temp0_1 u<= rdx_5
        
        if (temp0_1 u> rdx_5)
            rbx_2 = rcx_12 * count_1
            cond:3_1 = temp0_1 u<= rdx_5
        
        if (cond:3_1)
            rcx_12 = 0
        
        int64_t r14_3 = r14_2 << 3
        int64_t var_388_1 = rcx_12
        void var_1e8
        void var_1d8
        void var_1c8
        void var_1b8
        int128_t zmm2
        
        if (arg10 != 0)
        label_14288eecf:
            void var_238
            void* rcx_16 = &var_238
            uint8_t rax_19 = (r14_3 u>> 0x18).b
            uint8_t rax_21 = (r14_3 u>> 0x10).b
            uint8_t rax_23 = (r14_3 u>> 8).b
            
            if (var_3d8 == 0)
                memset(rcx_16, 0, count_2)
                void var_23d
                *(&var_23d + count_2) = rax_19
                void var_23e
                *(&var_23e + count_2) = rax_21
                void var_23f
                *(&var_23f + count_2) = rax_23
                void var_240
                *(&var_240 + count_2) = r14_3.b
            else
                memset(rcx_16, 0, count_2 - 4)
                void var_23c
                *(&var_23c + count_2) = rax_19
                void var_23b
                *(&var_23b + count_2) = rax_21
                void var_23a
                *(&var_23a + count_2) = rax_23
                void var_239
                *(&var_239 + count_2) = r14_3.b
            
            if (rbx_2 == 0)
                goto label_14288f0ab
            
            uint64_t var_168
            
            if (arg10 == 0)
                int32_t var_160_1 = *(arg4 + 8)
                char var_15c_1 = arg4[0xc]
                var_168 = *arg4
                void var_15b
                memcpy(&var_15b, arg5, count_1.d - 0xd)
                rax_6(&var_318, &var_168)
                uint64_t temp0_5 = divu.dp.q(0:rbx_2, count_1)
                
                if (temp0_5 u<= 1)
                    goto label_14288f0ab
                
                int64_t i_4 = temp0_5 - 1
                int64_t r14_11 = arg5 - 0xd + count_1
                int64_t i
                
                do
                    rax_6(&var_318, r14_11)
                    r14_11 += count_1
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            label_14288f0a3:
                r12_1 = var_3c8_1
                r15_1 = 0
            label_14288f0ab:
                int64_t r8_10 = var_388_1
                int64_t var_228
                __builtin_memset(&var_228, 0, 0x40)
                int64_t rax_38 = r10_1 + r8_10
                
                if (r8_10 u<= rax_38)
                    uint128_t zmm6
                    uint128_t var_58_1 = zmm6
                    uint8_t rax_40 = (temp1_1 u>> 0x3f).b
                    uint64_t r9_2 = not.q(temp1_1)
                    int64_t rdx_21 = temp1_1 + 1
                    uint64_t var_340_1 = r9_2
                    int64_t var_3b0_2 = rdx_21
                    uint8_t rax_42 = (rdx_21 u>> 0x3f).b
                    
                    do
                        uint64_t r10_2 = r9_2
                        int64_t rax_51 = r8_10 ^ divu.dp.q(0:r14_2, count_1)
                        int64_t rax_55 = r8_10 ^ divu.dp.q(0:(r14_2 + count_2), count_1)
                        uint8_t r13_1 =
                            neg.b(((rax_51 - 1) u>> 0x3f).b & (not.q(rax_51) u>> 0x3f).b)
                        uint8_t r14_13 =
                            neg.b(((rax_55 - 1) u>> 0x3f).b & (not.q(rax_55) u>> 0x3f).b)
                        zmm6 = zx.o(sx.d(r14_13))
                        uint8_t rax_59 = not.b(r14_13)
                        zmm6 = _mm_unpacklo_epi8(zmm6, zmm6.q)
                        zmm6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm6, zmm6.q), 0)
                        uint64_t r15_2
                        
                        do
                            char r11_2 = 0
                            
                            if (rbx_2 u< rsi_1)
                                r11_2 = arg4[rbx_2]
                            else if (rbx_2 u< arg7 + rsi_1)
                                r11_2 = (arg5 - rsi_1)[rbx_2]
                            
                            int64_t r9_3 = rdx_21 + r10_2
                            r15_2 = r10_2 + 1
                            uint8_t rdx_23 = (r9_3 u>> 0x3f).b
                            uint8_t r8_12 = (((((r15_2 u>> 0x3f).b ^ rax_40) | (rdx_23 ^ rax_40))
                                ^ rdx_23) - 1) & r13_1
                            rbx_2 += 1
                            uint8_t rax_66 = not.b((((((r10_2 u>> 0x3f).b ^ rax_42)
                                | (rdx_23 ^ rax_42)) ^ rdx_23) - 1) & r13_1)
                                & ((not.b(r8_12) & r11_2) | (r8_12 & 0x80)) & (rax_59 | r13_1)
                            char var_2f8[0xb8]
                            
                            if (r9_3 u>= count_1 - count_2)
                                rax_66 = (rax_66 & rax_59) | (
                                    var_2f8[temp1_1 - count_1 + 0xc1 + count_2 + r10_2] & r14_13)
                            rdx_21 = var_3b0_2
                            char var_e7[0xf]
                            var_e7[temp1_1 + r10_2] = rax_66
                            r10_2 = r15_2
                        while (rdx_21 + r15_2 u< count_1)
                        void var_e8
                        rax_6(&var_318, &var_e8)
                        var_3b8_1(&var_318, &var_e8)
                        r12_1 = var_3c8_1
                        r15_1 = 0
                        int64_t i_1 = 0
                        
                        if (r12_1 u>= 0x40)
                            do
                                *(&var_228 + i_1) |= *(&var_e8 + i_1) & zmm6
                                int64_t var_218
                                void var_d8
                                *(&var_218 + i_1) |= *(&var_d8 + i_1) & zmm6
                                int64_t var_208
                                void var_c8
                                *(&var_208 + i_1) |= *(&var_c8 + i_1) & zmm6
                                int64_t var_1f8
                                void var_b8
                                *(&var_1f8 + i_1) |= *(&var_b8 + i_1) & zmm6
                                i_1 += 0x40
                            while (i_1 u< (r12_1 & 0xffffffffffffffc0))
                        
                        for (; i_1 u< r12_1; i_1 += 1)
                            *(&var_228 + i_1) |= *(&var_e8 + i_1) & r14_13
                        
                        rdx_21 = var_3b0_2
                        r8_10 = var_388_1 + 1
                        r9_2 = var_340_1
                        var_388_1 = r8_10
                    while (r8_10 u<= rax_38)
                
                int64_t* rax_71 = sub_142891ee0()
                
                if (rax_71 == 0)
                    sub_142891ea0(rax_71)
                    result = 0
                else if (sub_1428919c0(rax_71, sub_142891580(arg1), nullptr) s<= 0)
                    sub_142891ea0(rax_71)
                    result = 0
                else if (arg10 == 0)
                    zmm2 = (*"jjjjjjjjjjjjjjjjSRTP_AES128_CM_SHA1_80")[0].o
                    
                    do
                        *(&var_1e8 + r15_1) ^= zmm2
                        *(&var_1d8 + r15_1) ^= zmm2
                        *(&var_1c8 + r15_1) ^= zmm2
                        *(&var_1b8 + r15_1) ^= zmm2
                        r15_1 += 0x40
                    while (r15_1 u< count_1)
                    
                    if (sub_142891c10(rax_71, &var_1e8, count_1) s<= 0)
                        sub_142891ea0(rax_71)
                        result = 0
                    else
                        if (sub_142891c10(rax_71, &var_228, r12_1) s> 0)
                            goto label_14288f549
                        
                        sub_142891ea0(rax_71)
                        result = 0
                else
                    memset(&var_1e8, 0x5c, count)
                    
                    if (sub_142891c10(rax_71, arg8, arg9) s<= 0)
                        sub_142891ea0(rax_71)
                        result = 0
                    else if (sub_142891c10(rax_71, &var_1e8, count) s<= 0)
                        sub_142891ea0(rax_71)
                        result = 0
                    else if (sub_142891c10(rax_71, &var_228, r12_1) s> 0)
                    label_14288f549:
                        int32_t var_398
                        
                        if (sub_1428917e0(rax_71, arg2, &var_398) != 0 && arg3 != 0)
                            *arg3 = zx.q(var_398)
                        
                        sub_142891ea0(rax_71)
                        result = 1
                    else
                        sub_142891ea0(rax_71)
                        result = 0
            else
                if (rsi_1 u> count_1)
                    int64_t r14_5 = rsi_1 - count_1
                    rax_6(&var_318, arg4)
                    memcpy(&var_168, &arg4[count_1], r14_5.d)
                    memcpy(&var_168 + r14_5, arg5, count_1.d - r14_5.d)
                    rax_6(&var_318, &var_168)
                    
                    if (divu.dp.q(0:rbx_2, count_1) - 1 u<= 1)
                        goto label_14288f0ab
                    
                    int64_t i_3 = divu.dp.q(0:rbx_2, count_1) - 2
                    int64_t r14_8 = arg5 - r14_5 + count_1
                    int64_t i_2
                    
                    do
                        rax_6(&var_318, r14_8)
                        r14_8 += count_1
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
                    goto label_14288f0a3
                
                result = 0
        else
            r14_3 += count_1 << 3
            memset(&var_1e8, 0, count_1)
            
            if (arg9 u<= 0x80)
                memcpy(&var_1e8, arg8, arg9.d)
                zmm2 = (*"6666666666666666")[0].o
                int64_t rax_17 = 0
                
                do
                    *(&var_1e8 + rax_17) ^= zmm2
                    *(&var_1d8 + rax_17) ^= zmm2
                    *(&var_1c8 + rax_17) ^= zmm2
                    *(&var_1b8 + rax_17) ^= zmm2
                    rax_17 += 0x40
                while (rax_17 u< count_1)
                
                rax_6(&var_318, &var_1e8)
                goto label_14288eecf
            
            result = 0
    else
        if (rax_5 == 0x2a3)
            sub_14289ba10(&var_318)
            r12_1 = 0x1c
            rcx_3 = sub_14288f6d0
            var_3c8_1 = 0x1c
            rax_6 = sub_14289be30
            goto label_14288ed36
        
    label_14288ecc5:
        
        if (arg3 == 0)
            result = 0
        else
            *arg3 = 0
            result = 0

__security_check_cookie(rax_1 ^ &var_3f8)
return result
