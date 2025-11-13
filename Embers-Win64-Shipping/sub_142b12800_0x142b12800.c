// 函数: sub_142b12800
// 地址: 0x142b12800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_378 = -2
void var_3f8
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** result =
    __security_cookie ^ &var_3f8
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** result_2 = result
void* r10 = arg4
int32_t r14 = arg3
int16_t* rsi = arg2

if (*arg5 s<= 0)
    if (arg1 == 0)
    label_142b128df:
        
        if (rsi == 0 || r14 u<= 7)
            *arg5 = 1
        else
            uint64_t rbp_1 = zx.q(*rsi)
            
            if (rbp_1.d s< 2)
                *arg5 = 3
            else
                if (r14 s>= 0)
                    result = zx.q((rbp_1 << 2).d)
                
                if (r14 s>= 0 && r14 s< result.d)
                    *arg5 = 3
                else
                    if (rbp_1.d s> 0x13)
                        result = zx.q(*(rsi + 0x4c))
                    else if (rbp_1.d s<= 5)
                        result = nullptr
                    else
                        result = zx.q(*(rsi + (sx.q((rbp_1 - 1).d) << 2)))
                    
                    if (r14 s< 0 || r14 s>= result.d)
                        void* r13_1
                        
                        if (arg1 != 0)
                            r13_1 = *(arg1 + 0x18)
                        else
                            r13_1 = nullptr
                        
                        void* buffer1_2 = nullptr
                        int64_t r9_1 = 0
                        int32_t var_3b0_1 = 0
                        void* var_388_1 = nullptr
                        int32_t r11_1 = 0
                        int32_t var_3a0_1 = 0
                        int32_t r12_1 = -1
                        int32_t rcx_4
                        
                        if (rbp_1.d s<= 5)
                            rcx_4 = -1
                        else
                            rcx_4 = *(rsi + 0x14)
                        
                        int32_t rax_3
                        
                        if (rbp_1.d s<= 6)
                            rax_3 = -1
                        else
                            rax_3 = *(rsi + 0x18)
                        
                        result = zx.q(rax_3 - rcx_4)
                        
                        if (result.d s< 4)
                        label_142b129f5:
                            void* var_390_1 = nullptr
                            int32_t rcx_7
                            
                            if (rbp_1.d s<= 6)
                                rcx_7 = -1
                            else
                                rcx_7 = *(rsi + 0x18)
                            
                            int32_t rax_9
                            
                            if (rbp_1.d s<= 7)
                                rax_9 = -1
                            else
                                rax_9 = *(rsi + 0x1c)
                            
                            result = zx.q(rax_9 - rcx_7)
                            
                            if (result.d s< 0x100)
                                goto label_142b12a38
                            
                            if (r9_1.d == 0)
                                *arg5 = 3
                            else
                                var_390_1 = sx.q(rcx_7) + rsi
                            label_142b12a38:
                                
                                if (r13_1 != 0)
                                    result = zx.q(*(rsi + 4)) & 0xff000000
                                
                                if (r13_1 != 0 && *(r13_1 + 0x38) != result.d)
                                    *arg5 = 3
                                else
                                    struct icu_64::SharedObject::icu_64::CollationSettings::VTable**
                                        * rbx_3 = nullptr
                                    int32_t r15_1
                                    
                                    if (rbp_1.d s<= 7)
                                        r15_1 = -1
                                    else
                                        r15_1 = *(rsi + 0x1c)
                                    
                                    int32_t r14_1
                                    
                                    if (rbp_1.d s<= 8)
                                        r14_1 = -1
                                    else
                                        r14_1 = *(rsi + 0x20)
                                    
                                    int32_t r14_2 = r14_1 - r15_1
                                    
                                    if (r14_2 s>= 8)
                                        result = sub_142b133f0(r10, arg5)
                                        
                                        if (result.b != 0)
                                            rbx_3 = *(arg4 + 0x150)
                                            rbx_3[4] = r13_1
                                            rbx_3[7].d = *(rsi + 4) & 0xff000000
                                            result = sub_142a95be0(1, sx.q(r15_1) + rsi, r14_2, 
                                                nullptr, arg5)
                                            r10 = arg4
                                            *(r10 + 0x170) = result
                                            *rbx_3 = result
                                            
                                            if (*arg5 s<= 0)
                                                goto label_142b12ae5
                                    else if (r13_1 == 0)
                                        *arg5 = 3
                                    else
                                        *(r10 + 0x18) = r13_1
                                    label_142b12ae5:
                                        int32_t rcx_10
                                        
                                        if (rbp_1.d s<= 9)
                                            rcx_10 = -1
                                        else
                                            rcx_10 = *(rsi + 0x24)
                                        
                                        int32_t rax_13
                                        
                                        if (rbp_1.d s<= 0xa)
                                            rax_13 = -1
                                        else
                                            rax_13 = *(rsi + 0x28)
                                        
                                        result = zx.q(rax_13 - rcx_10)
                                        
                                        if (result.d s< 8)
                                            goto label_142b12b25
                                        
                                        if (rbx_3 == 0)
                                            *arg5 = 3
                                        else
                                            rbx_3[2] = sx.q(rcx_10) + rsi
                                            int32_t temp2_1
                                            int32_t temp3_1
                                            temp2_1:temp3_1 = sx.q(result.d)
                                            rbx_3[8].d = (temp3_1 + (temp2_1 & 7)) s>> 3
                                        label_142b12b25:
                                            int32_t rcx_13
                                            
                                            if (rbp_1.d s<= 0xb)
                                                rcx_13 = -1
                                            else
                                                rcx_13 = *(rsi + 0x2c)
                                            
                                            int32_t rax_17
                                            
                                            if (rbp_1.d s<= 0xc)
                                                rax_17 = -1
                                            else
                                                rax_17 = *(rsi + 0x30)
                                            
                                            result = zx.q(rax_17 - rcx_13)
                                            
                                            if (result.d s< 4)
                                                goto label_142b12b65
                                            
                                            if (rbx_3 == 0)
                                                *arg5 = 3
                                            else
                                                rbx_3[1] = sx.q(rcx_13) + rsi
                                                int32_t temp4_1
                                                int32_t temp5_1
                                                temp4_1:temp5_1 = sx.q(result.d)
                                                result = zx.q((temp5_1 + (temp4_1 & 3)) s>> 2)
                                                *(rbx_3 + 0x3c) = result.d
                                            label_142b12b65:
                                                
                                                if (rbp_1.d s> 4)
                                                    result = sx.q(*(rsi + 0x10))
                                                
                                                if (rbp_1.d s<= 4 || result.d s< 0)
                                                    if (rbx_3 == 0)
                                                        goto label_142b12ba8
                                                    
                                                    if (r13_1 == 0)
                                                        *arg5 = 3
                                                    else
                                                        rbx_3[5] = *(r13_1 + 0x28)
                                                    label_142b12ba8:
                                                        int32_t rcx_18
                                                        
                                                        if (rbp_1.d s<= 0xc)
                                                            rcx_18 = -1
                                                        else
                                                            rcx_18 = *(rsi + 0x30)
                                                        
                                                        int32_t rax_21
                                                        
                                                        if (rbp_1.d s<= 0xd)
                                                            rax_21 = -1
                                                        else
                                                            rax_21 = *(rsi + 0x34)
                                                        
                                                        int32_t rax_22 = rax_21 - rcx_18
                                                        
                                                        if (rax_22 s< 4)
                                                        label_142b12c17:
                                                            int32_t rcx_19
                                                            
                                                            if (rbp_1.d s<= 0xd)
                                                                rcx_19 = -1
                                                            else
                                                                rcx_19 = *(rsi + 0x34)
                                                            
                                                            int32_t rax_26
                                                            
                                                            if (rbp_1.d s<= 0xe)
                                                                rax_26 = -1
                                                            else
                                                                rax_26 = *(rsi + 0x38)
                                                            
                                                            result = zx.q(rax_26 - rcx_19)
                                                            
                                                            if (result.d s< 2)
                                                                goto label_142b12c53
                                                            
                                                            if (rbx_3 == 0)
                                                                *arg5 = 3
                                                            else
                                                                rbx_3[3] = sx.q(rcx_19) + rsi
                                                                int32_t temp8_1
                                                                int32_t temp9_1
                                                                temp8_1:temp9_1 = sx.q(result.d)
                                                                result = zx.q((temp9_1 - temp8_1) s>> 1)
                                                                *(rbx_3 + 0x44) = result.d
                                                            label_142b12c53:
                                                                int32_t r15_2
                                                                
                                                                if (rbp_1.d s<= 0xe)
                                                                    r15_2 = -1
                                                                else
                                                                    r15_2 = *(rsi + 0x38)
                                                                
                                                                int32_t r14_3
                                                                
                                                                if (rbp_1.d s<= 0xf)
                                                                    r14_3 = -1
                                                                else
                                                                    r14_3 = *(rsi + 0x3c)
                                                                
                                                                int32_t r14_4 = r14_3 - r15_2
                                                                int64_t rax_36
                                                                
                                                                if (r14_4 s< 2)
                                                                    if (rbx_3 == 0)
                                                                    label_142b12e8a:
                                                                        int32_t rcx_34
                                                                        
                                                                        if (rbp_1.d s<= 0x10)
                                                                            rcx_34 = -1
                                                                        else
                                                                            rcx_34 = *(rsi + 0x40)
                                                                        
                                                                        int32_t rax_46
                                                                        
                                                                        if (rbp_1.d s<= 0x11)
                                                                            rax_46 = -1
                                                                        else
                                                                            rax_46 = *(rsi + 0x44)
                                                                        
                                                                        result = zx.q(rax_46 - rcx_34)
                                                                        
                                                                        if (result.d s< 2)
                                                                            if (rbx_3 != 0 && r13_1 != 0)
                                                                                *(rbx_3 + 0x64) = *(r13_1 + 0x64)
                                                                                rbx_3[0xd] = *(r13_1 + 0x68)
                                                                                rbx_3[0xe] = *(r13_1 + 0x70)
                                                                                rbx_3[0xf].d = *(r13_1 + 0x78)
                                                                            
                                                                            goto label_142b12f42
                                                                        
                                                                        if (rbx_3 == 0)
                                                                            *arg5 = 3
                                                                        else
                                                                            void* r8_8 = sx.q(rcx_34) + rsi
                                                                            uint64_t rcx_35 = zx.q(*r8_8)
                                                                            *(rbx_3 + 0x64) = rcx_35.d
                                                                            int32_t temp12_1
                                                                            int32_t temp13_1
                                                                            temp12_1:temp13_1 = sx.q(result.d)
                                                                            rbx_3[0xf].d = ((temp13_1 - temp12_1)
                                                                                s>> 1) - rcx_35.d - 0x11
                                                                            result = zx.q(((temp13_1 - temp12_1)
                                                                                s>> 1) - rcx_35.d - 0x14)
                                                                            
                                                                            if (result.d u> 0xfd)
                                                                                *arg5 = 3
                                                                            else
                                                                                result = r8_8 + 2
                                                                                rbx_3[0xd] = result
                                                                                void* rcx_37 =
                                                                                    r8_8 + ((rcx_35 + 0x11) << 1)
                                                                                rbx_3[0xe] = rcx_37
                                                                                
                                                                                if (*rcx_37 != 0
                                                                                        || *(rcx_37 + 2) != 0x300)
                                                                                    *arg5 = 3
                                                                                else
                                                                                    result = sx.q(((temp13_1 - temp12_1)
                                                                                        s>> 1) - rcx_35.d - 0x12)
                                                                                    
                                                                                    if (*(rcx_37 + (result << 1)) == 0xff00)
                                                                                    label_142b12f42:
                                                                                        
                                                                                        if (rbp_1.d s<= 0x11)
                                                                                            result = 0xffffffff
                                                                                        else
                                                                                            result = zx.q(*(rsi + 0x44))
                                                                                        
                                                                                        if (rbp_1.d s> 0x12)
                                                                                            r12_1 = *(rsi + 0x48)
                                                                                        
                                                                                        void* rax_57
                                                                                        
                                                                                        if (r12_1 - result.d s< 0x100)
                                                                                            if (rbx_3 == 0)
                                                                                                goto label_142b12f8b
                                                                                            
                                                                                            if (r13_1 != 0)
                                                                                                rax_57 = *(r13_1 + 0x48)
                                                                                                goto label_142b12f83
                                                                                            
                                                                                            *arg5 = 3
                                                                                        else if (rbx_3 == 0)
                                                                                            *arg5 = 3
                                                                                        else
                                                                                            rax_57 = sx.q(result.d) + rsi
                                                                                        label_142b12f83:
                                                                                            rbx_3[9] = rax_57
                                                                                        label_142b12f8b:
                                                                                            void* rbx_4 = *(r10 + 0x20)
                                                                                            uint32_t rsi_1 = zx.d(rsi[2])
                                                                                            void buffer1
                                                                                            result = sub_142b21a80(*(r10 + 0x18), 
                                                                                                rbx_4, &buffer1, 0x180)
                                                                                            int32_t rbp_2 = result.d
                                                                                            uint64_t r15_5 = zx.q(var_3b0_1)
                                                                                            void* buffer1_1
                                                                                            
                                                                                            if (rsi_1 != *(rbx_4 + 0x18)
                                                                                                    || *(rbx_4 + 0x1c) == 0
                                                                                                    || r15_5.d != *(rbx_4 + 0x48))
                                                                                                buffer1_1 = buffer1_2
                                                                                            label_142b1301f:
                                                                                                result = sub_142aa1030(r10 + 0x20)
                                                                                                struct icu_64::SharedObject::icu_64::CollationSettings::VTable
                                                                                                    ** result_3 = result
                                                                                                
                                                                                                if (result == 0)
                                                                                                    *arg5 = 7
                                                                                                else
                                                                                                    result[3].d = rsi_1
                                                                                                    result = sub_142aa6280(*(arg4 + 0x18), 
                                                                                                        (rsi_1 s>> 4 & 7) + 0x1000)
                                                                                                    *(result_3 + 0x1c) = result.d
                                                                                                    
                                                                                                    if (result.d == 0)
                                                                                                        *arg5 = 3
                                                                                                    else
                                                                                                        if (r15_5.d != 0)
                                                                                                            sub_142b27040(result_3, r13_1, 
                                                                                                                buffer1_1, r15_5.d, var_388_1, 
                                                                                                                var_3a0_1, var_390_1, arg5)
                                                                                                        
                                                                                                        result = sub_142b21a80(*(arg4 + 0x18), 
                                                                                                            result_3, result_3 + 0x54, 0x180)
                                                                                                        result_3[0xa].d = result.d
                                                                                            else
                                                                                                buffer1_1 = buffer1_2
                                                                                                
                                                                                                if (r15_5.d != 0)
                                                                                                    result = memcmp(buffer1_1, 
                                                                                                        *(rbx_4 + 0x40), sx.q((r15_5 << 2).d))
                                                                                                    
                                                                                                    if (result.d != 0
                                                                                                            || rbp_2 != *(rbx_4 + 0x50))
                                                                                                        goto label_142b1301f
                                                                                                else if (rbp_2 != *(rbx_4 + 0x50))
                                                                                                    goto label_142b1301f
                                                                                                
                                                                                                if (rbp_2 s>= 0)
                                                                                                    result =
                                                                                                        memcmp(&buffer1, rbx_4 + 0x54, 0x300)
                                                                                                    
                                                                                                    if (result.d != 0)
                                                                                                        goto label_142b1301f
                                                                                    else
                                                                                        *arg5 = 3
                                                                    else if (r13_1 == 0)
                                                                        *arg5 = 3
                                                                    else
                                                                        rax_36 = *(r13_1 + 0x50)
                                                                    label_142b12e07:
                                                                        rbx_3[0xa] = rax_36
                                                                        rbx_3[0xb] = 0
                                                                        rbx_3[0xc].d = 0
                                                                        
                                                                        if ((*(rsi + 4) & 0xff0000) != 0x20000)
                                                                            goto label_142b12e8a
                                                                        
                                                                        int32_t rcx_33
                                                                        
                                                                        if (rbp_1.d s<= 0xf)
                                                                            rcx_33 = -1
                                                                        else
                                                                            rcx_33 = *(rsi + 0x3c)
                                                                        
                                                                        int32_t rax_39
                                                                        
                                                                        if (rbp_1.d s<= 0x10)
                                                                            rax_39 = -1
                                                                        else
                                                                            rax_39 = *(rsi + 0x40)
                                                                        
                                                                        int32_t rax_40 = rax_39 - rcx_33
                                                                        
                                                                        if (rax_40 s< 2)
                                                                            if (r13_1 != 0)
                                                                                rbx_3[0xb] = *(r13_1 + 0x58)
                                                                                rbx_3[0xc].d = *(r13_1 + 0x60)
                                                                            
                                                                            goto label_142b12e8a
                                                                        
                                                                        void* r8_6 = sx.q(rcx_33) + rsi
                                                                        rbx_3[0xb] = r8_6
                                                                        int32_t temp14_1
                                                                        int32_t temp15_1
                                                                        temp14_1:temp15_1 = sx.q(rax_40)
                                                                        rbx_3[0xc].d =
                                                                            (temp15_1 - temp14_1) s>> 1
                                                                        result.w = *r8_6 & 0xff00
                                                                        
                                                                        if (result.w == 0x200)
                                                                            goto label_142b12e8a
                                                                        
                                                                        *arg5 = 3
                                                                else if (rbx_3 == 0)
                                                                    *arg5 = 3
                                                                else
                                                                    struct icu_64::SharedObject::icu_64::CollationSettings::VTable
                                                                        ** result_1
                                                                    
                                                                    if (r13_1 != 0)
                                                                        result = sub_142a9ee40(*(r13_1 + 0x50))
                                                                        *(arg4 + 0x178) = result
                                                                        
                                                                        if (result == 0)
                                                                            *arg5 = 7
                                                                        else
                                                                        label_142b12d03:
                                                                            int32_t temp10_1
                                                                            int32_t temp11_1
                                                                            temp10_1:temp11_1 = sx.q(r14_4)
                                                                            void var_370
                                                                            result = sub_142b719c0(&var_370, 
                                                                                sx.q(r15_2) + rsi, 
                                                                                (temp11_1 - temp10_1) s>> 1)
                                                                            
                                                                            if (result.b != 0)
                                                                                int32_t rax_33 = sub_142b718c0(&var_370)
                                                                                int32_t r14_5 = 0
                                                                                
                                                                                if (rax_33 s> 0)
                                                                                    do
                                                                                        int32_t var_39c
                                                                                        sub_142b718e0(&var_370, r14_5, 
                                                                                            &result_1, &var_39c)
                                                                                        sub_142a9e9d0(*(arg4 + 0x178), 
                                                                                            result_1.d, var_39c)
                                                                                        r14_5 += 1
                                                                                    while (r14_5 s< rax_33)
                                                                                
                                                                                int32_t r15_4 = 0x10000
                                                                                
                                                                                for (int16_t i = -0x2800; i u< 0xdc00; )
                                                                                    if (sub_142a9f430(*(arg4 + 0x178), 
                                                                                            r15_4, r15_4 + 0x3ff) == 0)
                                                                                        sub_142a9e7d0(*(arg4 + 0x178), zx.d(i))
                                                                                    
                                                                                    i += 1
                                                                                    r15_4 += 0x400
                                                                                
                                                                                sub_142a9f940(*(arg4 + 0x178))
                                                                                r10 = arg4
                                                                                rax_36 = *(arg4 + 0x178)
                                                                                r12_1 = -1
                                                                                goto label_142b12e07
                                                                            
                                                                            *arg5 = 3
                                                                    else
                                                                        result = j_sub_142a7dd00(0xc8)
                                                                        result_1 = result
                                                                        
                                                                        if (result != 0)
                                                                            result = sub_142a9d9c0(result, 
                                                                                &data_14366a260, 0x352, 0, arg5)
                                                                        
                                                                        *(arg4 + 0x178) = result
                                                                        
                                                                        if (result == 0)
                                                                            *arg5 = 7
                                                                        else if (*arg5 s<= 0)
                                                                            goto label_142b12d03
                                                        else
                                                            int32_t temp6_1
                                                            int32_t temp7_1
                                                            temp6_1:temp7_1 = sx.q(rax_22)
                                                            result =
                                                                zx.q((temp7_1 + (temp6_1 & 3)) s>> 2)
                                                            
                                                            if (rbx_3 == 0 || result.d s<= 4)
                                                                *arg5 = 3
                                                            else
                                                                void* rdx_15 = sx.q(rcx_18) + rsi
                                                                rbx_3[0x10] = rdx_15
                                                                rbx_3[0x11].d = result.d
                                                                
                                                                if (*(rdx_15 + 0xc) != 0x5000500)
                                                                    *arg5 = 3
                                                                else
                                                                    result =
                                                                        zx.q(*(rdx_15 + 0x10)) & 0xff000000
                                                                    
                                                                    if (result.d u>= 0x45000000)
                                                                        goto label_142b12c17
                                                                    
                                                                    *arg5 = 3
                                                else if (rbx_3 == 0)
                                                    *arg5 = 3
                                                else
                                                    int64_t rcx_16 = rbx_3[1]
                                                    
                                                    if (rcx_16 != 0)
                                                        rbx_3[5] = rcx_16 + (result << 2)
                                                        goto label_142b12ba8
                                                    
                                                    *arg5 = 3
                        else
                            if (r13_1 != 0)
                                void* buffer1_3 = sx.q(rcx_4) + rsi
                                buffer1_2 = buffer1_3
                                int32_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(result.d)
                                int32_t rax_6 = (temp1_1 + (temp0_1 & 3)) s>> 2
                                r9_1 = sx.q(rax_6)
                                var_3b0_1 = r9_1.d
                                int64_t rdx_2 = 0
                                
                                if (rax_6 s> 0)
                                    void* rcx_6 = buffer1_3 + ((r9_1 - 1) << 2)
                                    
                                    while ((*rcx_6 & 0xffff0000) != 0)
                                        r11_1 += 1
                                        rdx_2 += 1
                                        rcx_6 -= 4
                                        
                                        if (rdx_2 s>= r9_1)
                                            break
                                    
                                    var_3a0_1 = r11_1
                                    
                                    if (r11_1 != 0)
                                        r9_1 = zx.q(r9_1.d - r11_1)
                                        var_3b0_1 = r9_1.d
                                        var_388_1 = buffer1_3 + (sx.q(r9_1.d) << 2)
                                
                                goto label_142b129f5
                            
                            *arg5 = 3
                    else
                        *arg5 = 3
    else if (arg2 == 0 || arg3 u<= 0x17)
        *arg5 = 1
    else if (arg2[1].b != 0xda || *(arg2 + 3) != 0x27)
        *arg5 = 3
    else
        result = sub_142b127b0(r10 + 0x148, 0, 0, &arg2[2])
        
        if (result.b == 0)
            *arg5 = 3
        else
            int32_t rax_1 = sub_142b134e0(arg4)
            result = sub_142b134e0(arg1)
            
            if (result.d == rax_1)
                result = zx.q(*rsi)
                rsi += result
                r10 = arg4
                
                if (r14 s>= 0)
                    r14 -= result.d
                
                goto label_142b128df
            
            *arg5 = 0x1c

__security_check_cookie(result_2 ^ &var_3f8)
return result
