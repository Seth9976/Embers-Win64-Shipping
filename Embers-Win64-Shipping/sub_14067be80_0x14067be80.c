// 函数: sub_14067be80
// 地址: 0x14067be80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm6
int128_t var_38 = zmm6

do
    int64_t rdx_1 = sx.q(arg1[9].d)
    
    if (rdx_1.d s<= 0)
        arg1[0xb].d = 1
    else
        result = arg1[8]
        int64_t r8_1 = sx.q(*(result + (sx.q(arg1[9].d) << 2) - 4))
        int64_t* rbx_4
        int64_t* rsi_5
        uint128_t zmm1
        bool cond:5_1
        
        if (r8_1.d u<= 7)
            switch (r8_1)
                case 0
                    int64_t rcx_3
                    
                    if (rdx_1.d s> 1)
                        result = sx.q(arg1[9].d)
                        rcx_3 = arg1[8]
                    
                    if (rdx_1.d s> 1 && *(rcx_3 + (result << 2) - 8) == 2
                            && *(rcx_3 + (result << 2) - 4) == 0)
                        arg1[0xa].d = 6
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            result = arg1[6]
                            void* r13_1 = result[sx.q(arg1[7].d) * 2 - 2]
                            
                            if (r13_1 == 0 || *(r13_1 + 8) != 5)
                                arg1[0xb].d = 1
                            else
                                void*** rax = j_sub_140a82f30(0x20)
                                void* rbx_2
                                
                                if (rax == 0)
                                    rbx_2 = nullptr
                                else
                                    void* rax_1 = j_sub_140a82f30(0x50)
                                    void* const rbx_1 = rax_1
                                    
                                    if (rax_1 == 0)
                                        rbx_1 = nullptr
                                    else
                                        *(rax_1 + 0x28) = 0
                                        __builtin_memset(rax_1, 0, 0x2c)
                                        *(rax_1 + 0x2c) = 0x80
                                        *(rax_1 + 0x30) = 0xffffffff
                                        __builtin_memset(rax_1 + 0x34, 0, 0x1c)
                                    
                                    void* const var_118 = rbx_1
                                    void*** rax_2 = j_sub_140a82f30(0x18)
                                    
                                    if (rax_2 == 0)
                                        rax_2 = nullptr
                                    else
                                        rax_2[1].d = 1
                                        *rax_2 = &data_142d86160
                                        *(rax_2 + 0xc) = 1
                                        rax_2[2] = rbx_1
                                    
                                    void*** var_110_1 = rax_2
                                    rbx_2 = sub_140669820(rax, &var_118)
                                
                                int64_t* rax_4 = j_sub_140a82f30(0x18)
                                
                                if (rax_4 == 0)
                                    rax_4 = nullptr
                                else
                                    rax_4[1].d = 1
                                    *(rax_4 + 0xc) = 1
                                    *rax_4 = &data_142d86170
                                    rax_4[2] = rbx_2
                                
                                if (rax_4 != 0)
                                    rax_4[1].d += 1
                                
                                int64_t r14_2 = sx.q(arg1[7].d)
                                int32_t rax_5 = (r14_2 + 1).d
                                arg1[7].d = rax_5
                                
                                if (rax_5 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                void** rax_8 = (r14_2 << 4) + arg1[6]
                                *rax_8 = rbx_2
                                rax_8[1] = rax_4
                                arg1[0xc].d += 0x30
                                
                                if (rax_4 != 0)
                                    rax_4[1].d += 1
                                
                                int64_t r14_3 = sx.q(*(r13_1 + 0x18))
                                int32_t rax_9 = (r14_3 + 1).d
                                *(r13_1 + 0x18) = rax_9
                                
                                if (rax_9 s> *(r13_1 + 0x1c))
                                    sub_140610660(r13_1 + 0x10)
                                
                                result = (r14_3 << 4) + *(r13_1 + 0x10)
                                *result = rbx_2
                                result[1] = rax_4
                                rbx_4 = rax_4
                            label_14067c104:
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        result = (**rbx_4)(rbx_4)
                                        int32_t temp40_1 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (temp40_1 == 1)
                                            result = (*(*rbx_4 + 8))(rbx_4, 1)
                    else if (rdx_1.d s> 2)
                        int64_t rax_14 = sx.q(arg1[9].d)
                        int64_t rcx_11 = arg1[8]
                        
                        if (*(rcx_11 + (rax_14 << 2) - 0xc) != 0
                                || *(rcx_11 + (rax_14 << 2) - 8) != 5
                                || *(rcx_11 + (rax_14 << 2) - 4) != 0)
                            goto label_14067c40a
                        
                        result = zx.q(arg1[1].d)
                        int32_t rcx_12 = (result - 1).d
                        
                        if (result.d == 0)
                            rcx_12 = 0
                        
                        if (rcx_12 s<= 0)
                            arg1[0xb].d = 1
                        else
                            arg1[0xa].d = 6
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            else
                                result = arg1[6]
                                int64_t* r15_3 = result[sx.q(arg1[7].d) * 2 - 2]
                                
                                if (r15_3 == 0 || r15_3[1].d != 6)
                                    arg1[0xb].d = 1
                                else
                                    void*** rax_15 = j_sub_140a82f30(0x20)
                                    void*** rbx_6
                                    
                                    if (rax_15 == 0)
                                        rbx_6 = nullptr
                                    else
                                        void* rax_16 = j_sub_140a82f30(0x50)
                                        void* const rbx_5 = rax_16
                                        
                                        if (rax_16 == 0)
                                            rbx_5 = nullptr
                                        else
                                            *(rax_16 + 0x28) = 0
                                            __builtin_memset(rax_16, 0, 0x2c)
                                            *(rax_16 + 0x2c) = 0x80
                                            *(rax_16 + 0x30) = 0xffffffff
                                            __builtin_memset(rax_16 + 0x34, 0, 0x1c)
                                        
                                        void* const var_108 = rbx_5
                                        void*** rax_17 = j_sub_140a82f30(0x18)
                                        
                                        if (rax_17 == 0)
                                            rax_17 = nullptr
                                        else
                                            rax_17[1].d = 1
                                            *rax_17 = &data_142d86160
                                            *(rax_17 + 0xc) = 1
                                            rax_17[2] = rbx_5
                                        
                                        void*** var_100_1 = rax_17
                                        rbx_6 = sub_140669820(rax_15, &var_108)
                                    
                                    void*** rax_19 = j_sub_140a82f30(0x18)
                                    
                                    if (rax_19 == 0)
                                        rax_19 = nullptr
                                    else
                                        rax_19[1].d = 1
                                        *(rax_19 + 0xc) = 1
                                        *rax_19 = &data_142d86170
                                        rax_19[2] = rbx_6
                                    
                                    if (rax_19 != 0)
                                        rax_19[1].d += 1
                                    
                                    int64_t r14_5 = sx.q(arg1[7].d)
                                    int32_t rax_20 = (r14_5 + 1).d
                                    arg1[7].d = rax_20
                                    
                                    if (rax_20 s> *(arg1 + 0x3c))
                                        sub_140610660(&arg1[6])
                                    
                                    void**** rax_23 = (r14_5 << 4) + arg1[6]
                                    *rax_23 = rbx_6
                                    rax_23[1] = rax_19
                                    uint128_t zmm0_1 = rbx_6.o
                                    arg1[0xc].d += 0x30
                                    uint128_t var_b8 = zmm0_1
                                    void* rax_24 = _mm_bsrli_si128(zmm0_1, 8).q
                                    
                                    if (rax_24 != 0)
                                        *(rax_24 + 8) += 1
                                    
                                    result = j_sub_140b746f0(*(**r15_3)(r15_3), arg1, &var_b8)
                                    int64_t* rbx_8 = var_b8:8.q
                                    
                                    if (rbx_8 != 0)
                                        rbx_8[1].d -= 1
                                        
                                        if (rbx_8[1].d == 1)
                                            result = (**rbx_8)(rbx_8)
                                            int32_t temp43_1 = *(rbx_8 + 0xc)
                                            *(rbx_8 + 0xc) -= 1
                                            
                                            if (temp43_1 == 1)
                                                result = (*(*rbx_8 + 8))(rbx_8, 1)
                                    
                                    if (rax_19 != 0)
                                        rax_19[1].d -= 1
                                        
                                        if (rax_19[1].d == 1)
                                            result = (**rax_19)(rax_19)
                                            int32_t temp44_1 = *(rax_19 + 0xc)
                                            *(rax_19 + 0xc) -= 1
                                            
                                            if (temp44_1 == 1)
                                                result = (*rax_19)[1](rax_19, 1)
                                    
                                    arg1[1].d = 0
                    else if (rdx_1.d s<= 1)
                        arg1[0xb].d = 1
                    else
                    label_14067c40a:
                        result = sx.q(arg1[9].d)
                        int64_t rcx_23 = arg1[8]
                        
                        if (*(rcx_23 + (result << 2) - 8) != 6 || *(rcx_23 + (result << 2) - 4) != 0
                                || arg1[4] != 0)
                            arg1[0xb].d = 1
                        else
                            void* rax_31 = j_sub_140a82f30(0x50)
                            void* rbx_10 = rax_31
                            
                            if (rax_31 == 0)
                                rbx_10 = nullptr
                            else
                                *(rax_31 + 0x28) = 0
                                __builtin_memset(rax_31, 0, 0x2c)
                                *(rax_31 + 0x2c) = 0x80
                                *(rax_31 + 0x30) = 0xffffffff
                                __builtin_memset(rax_31 + 0x34, 0, 0x1c)
                            
                            void* const var_1e8 = rbx_10
                            void*** rax_32 = j_sub_140a82f30(0x18)
                            
                            if (rax_32 == 0)
                                rax_32 = nullptr
                            else
                                rax_32[1].d = 1
                                *(rax_32 + 0xc) = 1
                                *rax_32 = &data_142d86160
                                rax_32[2] = rbx_10
                            
                            void*** var_1e0_1 = rax_32
                            void*** rbx_11
                            
                            if (&arg1[4] == &var_1e8)
                            label_14067c51e:
                                rbx_11 = var_1e0_1
                            label_14067c522:
                                
                                if (rbx_11 != 0)
                                    rbx_11[1].d -= 1
                                    
                                    if (rbx_11[1].d == 1)
                                        (**rbx_11)(rbx_11)
                                        int32_t temp37_1 = *(rbx_11 + 0xc)
                                        *(rbx_11 + 0xc) -= 1
                                        
                                        if (temp37_1 == 1)
                                            (*rbx_11)[1](rbx_11, 1)
                            else
                                rbx_11 = var_1e0_1
                                arg1[4] = var_1e8
                                int64_t* rsi_2 = arg1[5]
                                var_1e8 = nullptr
                                
                                if (rbx_11 == rsi_2)
                                    goto label_14067c522
                                
                                var_1e0_1 = nullptr
                                arg1[5] = rbx_11
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d -= 1
                                    
                                    if (rsi_2[1].d == 1)
                                        (**rsi_2)(rsi_2)
                                        int32_t temp38_1 = *(rsi_2 + 0xc)
                                        *(rsi_2 + 0xc) -= 1
                                        
                                        if (temp38_1 == 1)
                                            (*(*rsi_2 + 8))(rsi_2, 1)
                                    
                                    goto label_14067c51e
                            int64_t* rbx_12 = arg1[5]
                            int64_t rsi_3 = arg1[4]
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d += 1
                            
                            void*** rax_38 = j_sub_140a82f30(0x20)
                            void* rsi_4
                            
                            if (rax_38 == 0)
                                rsi_4 = nullptr
                            else
                                int64_t var_a8 = rsi_3
                                int64_t* var_a0_1 = rbx_12
                                
                                if (rbx_12 != 0)
                                    rbx_12[1].d += 1
                                
                                rsi_4 = sub_140669820(rax_38, &var_a8)
                            
                            int64_t* rax_40 = j_sub_140a82f30(0x18)
                            
                            if (rax_40 == 0)
                                rax_40 = nullptr
                            else
                                rax_40[1].d = 1
                                *(rax_40 + 0xc) = 1
                                *rax_40 = &data_142d86170
                                rax_40[2] = rsi_4
                            
                            if (rax_40 != 0)
                                rax_40[1].d += 1
                            
                            int64_t r15_4 = sx.q(arg1[7].d)
                            int32_t rax_41 = (r15_4 + 1).d
                            arg1[7].d = rax_41
                            
                            if (rax_41 s> *(arg1 + 0x3c))
                                sub_140610660(&arg1[6])
                            
                            result = (r15_4 << 4) + arg1[6]
                            *result = rsi_4
                            result[1] = rax_40
                            arg1[0xc].d += 0x30
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    result = (**rbx_12)(rbx_12)
                                    int32_t temp48_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp48_1 == 1)
                                        result = (*(*rbx_12 + 8))(rbx_12, 1)
                            
                            if (rax_40 != 0)
                                rax_40[1].d -= 1
                                
                                if (rax_40[1].d == 1)
                                    result = (**rax_40)(rax_40)
                                    int32_t temp50_1 = *(rax_40 + 0xc)
                                    *(rax_40 + 0xc) -= 1
                                    
                                    if (temp50_1 == 1)
                                        result = (*(*rax_40 + 8))(rax_40, 1)
                            
                            arg1[0xa].d = 6
                case 1
                    uint64_t rcx_34
                    int64_t r9_1
                    
                    if (rdx_1.d s> 1)
                        rcx_34 = sx.q(arg1[9].d)
                        r9_1 = arg1[8]
                    
                    if (rdx_1.d s> 1 && *(r9_1 + (rcx_34 << 2) - 8) == 0
                            && *(r9_1 + (rcx_34 << 2) - 4) == 1)
                        int32_t r10_1 = (rdx_1 - 2).d
                        int32_t rax_49 = rcx_34.d - r10_1
                        
                        if (rax_49 != 2)
                            memmove(r9_1 + (sx.q(r10_1) << 2), r9_1 + (rdx_1 << 2), 
                                (rax_49 - 2) << 2)
                            rcx_34 = zx.q(arg1[9].d)
                        
                        result = zx.q((rcx_34 - 2).d)
                        arg1[9].d = result.d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            goto label_14067ce3c
                        
                        int64_t rax_52 = arg1[6]
                        int64_t rdx_14 = sx.q(arg1[7].d) * 2
                        void* rbx_14 = *(rax_52 + (rdx_14 << 3) - 0x10)
                        rsi_5 = *(rax_52 + (rdx_14 << 3) - 8)
                        *(rax_52 + (rdx_14 << 3) - 8) = 0
                        *(rax_52 + (rdx_14 << 3) - 0x10) = 0
                        result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        
                        if (*(rbx_14 + 8) != 6)
                        label_14067ce15:
                            
                            if (rsi_5 == 0)
                                goto label_14067ce3c
                            
                            rsi_5[1].d -= 1
                            
                            if (rsi_5[1].d == 1)
                                result = (**rsi_5)(rsi_5)
                                int32_t temp7_1 = *(rsi_5 + 0xc)
                                *(rsi_5 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    result = (*(*rsi_5 + 8))(rsi_5, 1)
                            
                            goto label_14067ce3c
                        
                    label_14067c72a:
                        
                        if (rsi_5 == 0)
                            goto label_14067ce43
                        
                        rsi_5[1].d -= 1
                        
                        if (rsi_5[1].d == 1)
                            result = (**rsi_5)(rsi_5)
                            int32_t temp8_1 = *(rsi_5 + 0xc)
                            *(rsi_5 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                result = (*(*rsi_5 + 8))(rsi_5, 1)
                        
                        goto label_14067ce43
                    
                    if (rdx_1.d s> 2)
                        uint64_t r8_7 = sx.q(arg1[9].d)
                        int64_t rcx_39 = arg1[8]
                        
                        if (*(rcx_39 + (r8_7 << 2) - 0xc) != 0 || *(rcx_39 + (r8_7 << 2) - 8) != 5
                                || *(rcx_39 + (r8_7 << 2) - 4) != 1)
                            goto label_14067ce3c
                        
                        int32_t r9_2 = (rdx_1 - 3).d
                        int32_t rax_56 = r8_7.d - r9_2
                        
                        if (rax_56 != 3)
                            memmove(rcx_39 + (sx.q(r9_2) << 2), rcx_39 + (rdx_1 << 2), 
                                (rax_56 - 3) << 2)
                            r8_7 = zx.q(arg1[9].d)
                        
                        result = zx.q((r8_7 - 3).d)
                        arg1[9].d = result.d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            int64_t rax_59 = arg1[6]
                            int64_t rcx_42 = sx.q(arg1[7].d) * 2
                            void* r8_10 = *(rax_59 + (rcx_42 << 3) - 0x10)
                            void* var_288 = r8_10
                            void** result_1 = *(rax_59 + (rcx_42 << 3) - 8)
                            
                            if (result_1 != 0)
                                result_1[1].d += 1
                                r8_10 = var_288
                            
                            result = zx.q(*(r8_10 + 8) - 5)
                            
                            if (result.d u<= 1)
                                arg1[0xb].d = 1
                            else
                                int64_t rax_61 = arg1[6]
                                int64_t rcx_44 = sx.q(arg1[7].d) * 2
                                int64_t* rbx_15 = *(rax_61 + (rcx_44 << 3) - 8)
                                *(rax_61 + (rcx_44 << 3) - 8) = 0
                                *(rax_61 + (rcx_44 << 3) - 0x10) = 0
                                result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                
                                if (rbx_15 != 0)
                                    rbx_15[1].d -= 1
                                    
                                    if (rbx_15[1].d == 1)
                                        result = (**rbx_15)(rbx_15)
                                        int32_t temp27_1 = *(rbx_15 + 0xc)
                                        *(rbx_15 + 0xc) -= 1
                                        
                                        if (temp27_1 == 1)
                                            result = (*(*rbx_15 + 8))(rbx_15, 1)
                                
                                if (arg1[7].d s<= 0)
                                    arg1[0xb].d = 1
                                else
                                    void* rbx_16 = var_288
                                    int32_t rcx_48 = *(rbx_16 + 8)
                                    int16_t* _String_36
                                    void* r15_5
                                    
                                    if (rcx_48 == 1)
                                        r15_5 = &arg1[2]
                                        int16_t* _String_52
                                        sub_140a35730(r15_5, &_String_52)
                                        int16_t* _String_58 = &data_142d40450
                                        int32_t var_f0
                                        
                                        if (var_f0 != 0)
                                            _String_58 = _String_52
                                        
                                        if (sub_140a54510(_String_58, u"null") != 0)
                                            arg1[0xb].d = 1
                                        
                                        _String_36 = _String_52
                                    label_14067cc63:
                                        
                                        if (_String_36 == 0)
                                            goto label_14067cc6d
                                        
                                        goto label_14067cc68
                                    
                                    if (rcx_48 == 2)
                                        r15_5 = &arg1[2]
                                        sub_140597df0(rbx_16 + 0x10, r15_5)
                                        int32_t rdx_31 = *(rbx_16 + 0x18)
                                        
                                        if (*(rbx_16 + 0x1c) != rdx_31)
                                            sub_1405947f0(rbx_16 + 0x10, rdx_31)
                                        
                                        arg1[0xc].d += *(rbx_16 + 0x1c) * 2
                                        goto label_14067cc6d
                                    
                                    if (rcx_48 == 3)
                                        r15_5 = &arg1[2]
                                        int16_t* _String_20
                                        int128_t zmm0_2 = sub_140a35730(r15_5, &_String_20)
                                        int16_t* _String_32 = _String_20
                                        int32_t var_230
                                        int64_t rdx_22 = sx.q(var_230)
                                        int16_t* _String_40 = _String_32
                                        void* rcx_56 = &_String_32[rdx_22]
                                        int32_t rbx_19
                                        
                                        if (_String_32 != rcx_56)
                                            while (*_String_40 != 0x65)
                                                _String_40 = &_String_40[1]
                                                
                                                if (_String_40 == rcx_56)
                                                    goto label_14067c9a6
                                            
                                            rbx_19 = ((_String_40 - _String_32) s>> 1).d
                                        
                                        if (_String_32 == rcx_56 || rbx_19 == 0xffffffff)
                                        label_14067c9a6:
                                            
                                            if (sub_140a24720(&_String_20) == 0)
                                                arg1[0xb].d = 1
                                            else
                                                int16_t* _String = &data_142d40450
                                                
                                                if (var_230 != 0)
                                                    _String = _String_20
                                                
                                                wcstod(_String, nullptr)
                                                *(var_288 + 0x10) = zmm0_2.q
                                            
                                            _String_32 = _String_20
                                        else
                                            int32_t rcx_58 = (rdx_22 - 1).d
                                            
                                            if (rdx_22.d == 0)
                                                rcx_58 = 0
                                            
                                            if (rcx_58 s<= rbx_19 + 2)
                                                arg1[0xb].d = 1
                                            else
                                                int32_t rsi_6
                                                int16_t* _String_44
                                                
                                                if (rdx_22.d == 0)
                                                    _String_44 = &data_142d40450
                                                    rsi_6 = 0
                                                else
                                                    _String_44 = _String_32
                                                    rsi_6 = (rdx_22 - 1).d
                                                
                                                if (rbx_19 s< 0)
                                                    rsi_6 = 0
                                                else if (rbx_19 s< rsi_6)
                                                    rsi_6 = rbx_19
                                                
                                                int16_t* _String_12 = nullptr
                                                int32_t var_2c0_1 = 0
                                                
                                                if (_String_44 != 0 && *_String_44 != 0
                                                        && rsi_6 s> 0)
                                                    sub_1405947f0(&_String_12, rsi_6 + 1)
                                                    int32_t rax_74 = var_2c0_1 + 1 + rsi_6
                                                    var_2c0_1 = rax_74
                                                    
                                                    if (rax_74 s> 0)
                                                        sub_140594770(&_String_12)
                                                    
                                                    zmm0_2 = UnDecorator::getReferenceType(
                                                        _String_12, _String_44, rsi_6 * 2)
                                                    _String_12[sx.q(var_2c0_1) - 1] = 0
                                                    rdx_22 = zx.q(var_230)
                                                    _String_32 = _String_20
                                                
                                                int32_t rax_76 = (rdx_22 - 1).d
                                                
                                                if (rdx_22.d == 0)
                                                    rax_76 = 0
                                                
                                                int32_t rcx_63
                                                
                                                if (rdx_22.d == 0)
                                                    rcx_63 = 0
                                                    _String_32 = &data_142d40450
                                                else
                                                    rcx_63 = (rdx_22 - 1).d
                                                
                                                int32_t rdx_26
                                                
                                                if (rax_76 - rbx_19 - 1 s>= 0)
                                                    rdx_26 = rcx_63
                                                    
                                                    if (rax_76 - rbx_19 - 1 s< rcx_63)
                                                        rdx_26 = rax_76 - rbx_19 - 1
                                                else
                                                    rdx_26 = 0
                                                
                                                int32_t rdx_27 = 0
                                                int16_t* _String_16 = nullptr
                                                int32_t var_270_1 = 0
                                                void* rsi_7 =
                                                    &_String_32[sx.q(rcx_63) - sx.q(rdx_26)]
                                                int32_t rcx_66 = 0
                                                int32_t var_26c_1 = 0
                                                
                                                if (rsi_7 != 0 && *rsi_7 != 0)
                                                    int64_t rbx_20 = -1
                                                    
                                                    do
                                                        rbx_20 += 1
                                                    while (*(rsi_7 + (rbx_20 << 1)) != 0)
                                                    
                                                    if (rbx_20.d + 1 s> 0)
                                                        sub_1405947f0(&_String_16, rbx_20.d + 1)
                                                        rcx_66 = var_26c_1
                                                        rdx_27 = var_270_1
                                                    
                                                    int32_t rax_80 = rdx_27 + rbx_20.d + 1
                                                    var_270_1 = rax_80
                                                    
                                                    if (rax_80 s> rcx_66)
                                                        sub_140594770(&_String_16)
                                                    
                                                    zmm0_2 = UnDecorator::getReferenceType(
                                                        _String_16, rsi_7, (rbx_20.d + 1) * 2)
                                                
                                                char rax_81 = sub_140a24720(&_String_12)
                                                char rax_82
                                                
                                                if (rax_81 != 0)
                                                    rax_82 = sub_140a24720(&_String_16)
                                                
                                                if (rax_81 == 0 || rax_82 == 0)
                                                    arg1[0xb].d = 1
                                                else
                                                    int16_t* const _String_1 = &data_142d40450
                                                    
                                                    if (var_2c0_1 != 0)
                                                        _String_1 = _String_12
                                                    
                                                    wcstod(_String_1, nullptr)
                                                    int16_t* const _String_2 = &data_142d40450
                                                    
                                                    if (var_270_1 != 0)
                                                        _String_2 = _String_16
                                                    
                                                    zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                        _mm_cvtepi32_ps(zx.o(_wtoi(_String_2))).d))
                                                    zmm1.q = zmm1.q f* zmm0_2.q
                                                    *(var_288 + 0x10) = zmm1.q
                                                
                                                int16_t* _String_24 = _String_16
                                                
                                                if (_String_24 != 0)
                                                    sub_140a74f90(_String_24)
                                                
                                                int16_t* _String_25 = _String_12
                                                
                                                if (_String_25 != 0)
                                                    sub_140a74f90(_String_25)
                                                
                                                _String_32 = _String_20
                                        
                                        if (_String_32 == 0)
                                            goto label_14067cc6d
                                        
                                        _String_36 = _String_32
                                    label_14067cc68:
                                        sub_140a74f90(_String_36)
                                    label_14067cc6d:
                                        int32_t rdx_33 = *(arg1 + 0x1c)
                                        *(r15_5 + 8) = 0
                                        
                                        if (*(r15_5 + 0xc) != rdx_33)
                                            sub_1405947f0(r15_5, rdx_33)
                                        
                                        int64_t rax_88 = arg1[6]
                                        int64_t rcx_77 = sx.q(arg1[7].d) * 2
                                        int64_t* rsi_8 = *(rax_88 + (rcx_77 << 3) - 8)
                                        int64_t* r14_8 = *(rax_88 + (rcx_77 << 3) - 0x10)
                                        
                                        if (rsi_8 != 0)
                                            rsi_8[1].d += 1
                                        
                                        result = zx.q(r14_8[1].d)
                                        
                                        if (result.d == 6)
                                            int32_t rbx_22 = arg1[1].d
                                            result = zx.q(rbx_22 - 1)
                                            
                                            if (rbx_22 == 0)
                                                result = nullptr
                                            
                                            if (result.d s<= 0)
                                                arg1[0xb].d = 1
                                            else
                                                int64_t r15_6 = *arg1
                                                int64_t var_1f8 = 0
                                                int32_t var_1ec
                                                int32_t rax_89
                                                
                                                if (rbx_22 != 0)
                                                    sub_1405a4c70(&var_1f8, rbx_22, 0)
                                                    memcpy(var_1f8, r15_6, rbx_22 * 2)
                                                    rax_89 = var_1ec
                                                else
                                                    rax_89 = 0
                                                    var_1ec = 0
                                                
                                                if (rax_89 != rbx_22)
                                                    sub_1405947f0(&var_1f8, rbx_22)
                                                
                                                j_sub_140b746f0(*(**r14_8)(r14_8), &var_1f8, 
                                                    &var_288)
                                                int64_t rcx_83 = var_1f8
                                                result = zx.q(var_1ec * 2)
                                                arg1[0xc].d += result.d
                                                arg1[1].d = 0
                                                
                                                if (rcx_83 != 0)
                                                    result = sub_140a74f90(rcx_83)
                                        else if (result.d != 5)
                                            arg1[0xb].d = 1
                                        else
                                            int64_t r14_9 = sx.q(r14_8[3].d)
                                            int32_t rax_93 = (r14_9 + 1).d
                                            r14_8[3].d = rax_93
                                            
                                            if (rax_93 s> *(r14_8 + 0x1c))
                                                sub_140610660(&r14_8[2])
                                            
                                            void** rcx_87 = (r14_9 << 4) + r14_8[2]
                                            *rcx_87 = var_288
                                            result = result_1
                                            rcx_87[1] = result
                                            
                                            if (result_1 != 0)
                                                result_1[1].d += 1
                                        
                                        if (rsi_8 != 0)
                                            rsi_8[1].d -= 1
                                            
                                            if (rsi_8[1].d == 1)
                                                result = (**rsi_8)(rsi_8)
                                                int32_t temp49_1 = *(rsi_8 + 0xc)
                                                *(rsi_8 + 0xc) -= 1
                                                
                                                if (temp49_1 == 1)
                                                    result = (*(*rsi_8 + 8))(rsi_8, 1)
                                    else
                                        if (rcx_48 == 4)
                                            r15_5 = &arg1[2]
                                            int16_t* _String_48
                                            sub_140a35730(r15_5, &_String_48)
                                            int16_t* const _String_56 = &data_142d40450
                                            int32_t var_150
                                            
                                            if (var_150 != 0)
                                                _String_56 = _String_48
                                            
                                            if (sub_140a54510(_String_56, u"true") != 0)
                                                int16_t* _String_57 = &data_142d40450
                                                
                                                if (var_150 != 0)
                                                    _String_57 = _String_48
                                                
                                                if (sub_140a54510(_String_57, u"false") != 0)
                                                    _String_36 = _String_48
                                                    arg1[0xb].d = 1
                                                else
                                                    *(var_288 + 0x10) = 0
                                                    _String_36 = _String_48
                                            else
                                                *(var_288 + 0x10) = 1
                                                _String_36 = _String_48
                                            
                                            goto label_14067cc63
                                        
                                        arg1[0xb].d = 1
                            
                            if (result_1 != 0)
                                result_1[1].d -= 1
                                
                                if (result_1[1].d == 1)
                                    result = (**result_1)(result_1)
                                    int32_t temp31_1 = *(result_1 + 0xc)
                                    *(result_1 + 0xc) -= 1
                                    
                                    if (temp31_1 == 1)
                                        result = (*(*result_1 + 8))(result_1, 1)
                        
                        if (arg1[7].d s<= 0)
                            goto label_14067ce3c
                        
                        int64_t rax_97 = arg1[6]
                        int64_t rdx_40 = sx.q(arg1[7].d) * 2
                        int64_t rbx_25 = *(rax_97 + (rdx_40 << 3) - 0x10)
                        rsi_5 = *(rax_97 + (rdx_40 << 3) - 8)
                        *(rax_97 + (rdx_40 << 3) - 8) = 0
                        *(rax_97 + (rdx_40 << 3) - 0x10) = 0
                        result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        cond:5_1 = *(rbx_25 + 8) == 6
                        goto label_14067ce0f
                    
                label_14067ce3c:
                    arg1[0xb].d = 1
                label_14067ce43:
                    int64_t rdx_43 = sx.q(arg1[9].d)
                    
                    if (rdx_43.d s<= 0)
                        arg1[0xa].d = 3
                    else
                        uint64_t rcx_93 = sx.q(arg1[9].d)
                        int64_t r9_3 = arg1[8]
                        
                        if (*(r9_3 + (rcx_93 << 2) - 4) != 5)
                            arg1[0xa].d = 3
                        else
                            int32_t r10_2 = (rdx_43 - 1).d
                            int32_t rax_101 = rcx_93.d - r10_2
                            
                            if (rax_101 != 1)
                                memmove(r9_3 + (sx.q(r10_2) << 2), r9_3 + (rdx_43 << 2), 
                                    (rax_101 - 1) << 2)
                                rcx_93 = zx.q(arg1[9].d)
                            
                            result = zx.q((rcx_93 - 1).d)
                            arg1[9].d = result.d
                            arg1[0xa].d = 3
                case 2
                    int64_t rcx_95
                    
                    if (rdx_1.d s> 1)
                        result = sx.q(arg1[9].d)
                        rcx_95 = arg1[8]
                    
                    if (rdx_1.d s> 1 && *(rcx_95 + (result << 2) - 8) == 2
                            && *(rcx_95 + (result << 2) - 4) == 2)
                        arg1[0xa].d = 5
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            result = arg1[6]
                            void* r15_7 = result[sx.q(arg1[7].d) * 2 - 2]
                            
                            if (r15_7 != 0 && *(r15_7 + 8) == 5)
                                void* rax_104 = j_sub_140a82f30(0x20)
                                void* rbx_26 = rax_104
                                
                                if (rax_104 == 0)
                                    rbx_26 = nullptr
                                else
                                    *(rax_104 + 8) = 0
                                    *rax_104 = &data_142d84d00
                                    *(rax_104 + 0x10) = 0
                                    sub_140664cf0(rax_104 + 0x10, nullptr, 0, 0, 0)
                                    *(rbx_26 + 8) = 5
                                    *rbx_26 = &data_142d84d00
                                
                                int64_t* rax_105 = sub_140666ae0(rbx_26)
                                
                                if (rax_105 != 0)
                                    rax_105[1].d += 1
                                
                                int64_t r14_10 = sx.q(arg1[7].d)
                                int32_t rax_106 = (r14_10 + 1).d
                                arg1[7].d = rax_106
                                
                                if (rax_106 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                int64_t* rax_109 = (r14_10 << 4) + arg1[6]
                                *rax_109 = rbx_26
                                rax_109[1] = rax_105
                                arg1[0xc].d += 0x30
                                
                                if (rax_105 != 0)
                                    rax_105[1].d += 1
                                
                                int64_t r14_11 = sx.q(*(r15_7 + 0x18))
                                int32_t rax_110 = (r14_11 + 1).d
                                *(r15_7 + 0x18) = rax_110
                                
                                if (rax_110 s> *(r15_7 + 0x1c))
                                    sub_140610660(r15_7 + 0x10)
                                
                                result = (r14_11 << 4) + *(r15_7 + 0x10)
                                *result = rbx_26
                                result[1] = rax_105
                                rbx_4 = rax_105
                                goto label_14067c104
                            
                            arg1[0xb].d = 1
                    else if (rdx_1.d s<= 2)
                        arg1[0xb].d = 1
                    else
                        result = sx.q(arg1[9].d)
                        int64_t rcx_102 = arg1[8]
                        
                        if (*(rcx_102 + (result << 2) - 0xc) != 0
                                || *(rcx_102 + (result << 2) - 8) != 5
                                || *(rcx_102 + (result << 2) - 4) != 2)
                            arg1[0xb].d = 1
                        else
                            arg1[0xa].d = 5
                            result = zx.q(arg1[1].d)
                            int32_t rcx_103 = (result - 1).d
                            
                            if (result.d == 0)
                                rcx_103 = 0
                            
                            if (rcx_103 s<= 0 || arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            else
                                result = arg1[6]
                                int64_t* r15_8 = result[sx.q(arg1[7].d) * 2 - 2]
                                
                                if (r15_8 == 0 || r15_8[1].d != 6)
                                    arg1[0xb].d = 1
                                else
                                    void*** rax_113 = j_sub_140a82f30(0x20)
                                    void*** rbx_28 = rax_113
                                    
                                    if (rax_113 == 0)
                                        rbx_28 = nullptr
                                    else
                                        rax_113[1].d = 0
                                        *rax_113 = &data_142d84d00
                                        rax_113[2] = 0
                                        sub_140664cf0(&rax_113[2], nullptr, 0, 0, 0)
                                        rbx_28[1].d = 5
                                        *rbx_28 = &data_142d84d00
                                    
                                    void*** var_1a8 = rbx_28
                                    void*** rax_114 = sub_140666ae0(rbx_28)
                                    void*** r12_5 = var_1a8
                                    
                                    if (rax_114 != 0)
                                        rax_114[1].d += 1
                                    
                                    int64_t r14_12 = sx.q(arg1[7].d)
                                    int32_t rax_115 = (r14_12 + 1).d
                                    arg1[7].d = rax_115
                                    
                                    if (rax_115 s> *(arg1 + 0x3c))
                                        sub_140610660(&arg1[6])
                                    
                                    void**** rax_118 = (r14_12 << 4) + arg1[6]
                                    *rax_118 = r12_5
                                    rax_118[1] = rax_114
                                    uint128_t zmm0_4 = var_1a8.o
                                    arg1[0xc].d += 0x30
                                    uint128_t var_98 = zmm0_4
                                    void* rax_119 = _mm_bsrli_si128(zmm0_4, 8).q
                                    
                                    if (rax_119 != 0)
                                        *(rax_119 + 8) += 1
                                    
                                    j_sub_140b746f0(*(**r15_8)(r15_8), arg1, &var_98)
                                    sub_140669d70(&var_98)
                                    result = sub_140669d70(&var_1a8)
                                    arg1[1].d = 0
                case 3
                    uint64_t rcx_113
                    int64_t r9_4
                    
                    if (rdx_1.d s> 1)
                        rcx_113 = sx.q(arg1[9].d)
                        r9_4 = arg1[8]
                    
                    if (rdx_1.d s> 1 && *(r9_4 + (rcx_113 << 2) - 8) == 2
                            && *(r9_4 + (rcx_113 << 2) - 4) == 3)
                        int32_t r10_3 = (rdx_1 - 2).d
                        int32_t rax_123 = rcx_113.d - r10_3
                        
                        if (rax_123 != 2)
                            memmove(r9_4 + (sx.q(r10_3) << 2), r9_4 + (rdx_1 << 2), 
                                (rax_123 - 2) << 2)
                            rcx_113 = zx.q(arg1[9].d)
                        
                        result = zx.q((rcx_113 - 2).d)
                        arg1[9].d = result.d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            int64_t rax_126 = arg1[6]
                            int64_t rcx_116 = sx.q(arg1[7].d) * 2
                            void* rdx_50 = *(rax_126 + (rcx_116 << 3) - 0x10)
                            void* var_2f8 = rdx_50
                            int64_t* rbx_30 = *(rax_126 + (rcx_116 << 3) - 8)
                            int64_t* var_2f0_1 = rbx_30
                            
                            if (rbx_30 != 0)
                                rbx_30[1].d += 1
                                rbx_30 = var_2f0_1
                                rdx_50 = var_2f8
                            
                            result = zx.q(*(rdx_50 + 8) - 5)
                            
                            if (result.d u<= 1)
                                goto label_14067d7a8
                            
                            int64_t rax_128 = arg1[6]
                            int64_t rcx_118 = sx.q(arg1[7].d) * 2
                            int64_t* rbx_31 = *(rax_128 + (rcx_118 << 3) - 8)
                            *(rax_128 + (rcx_118 << 3) - 8) = 0
                            *(rax_128 + (rcx_118 << 3) - 0x10) = 0
                            result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                            
                            if (rbx_31 != 0)
                                rbx_31[1].d -= 1
                                
                                if (rbx_31[1].d == 1)
                                    result = (**rbx_31)(rbx_31)
                                    int32_t temp13_1 = *(rbx_31 + 0xc)
                                    *(rbx_31 + 0xc) -= 1
                                    
                                    if (temp13_1 == 1)
                                        result = (*(*rbx_31 + 8))(rbx_31, 1)
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            label_14067d7a3:
                                rbx_30 = var_2f0_1
                            label_14067d7a8:
                                
                                if (rbx_30 != 0)
                                    rbx_30[1].d -= 1
                                    
                                    if (rbx_30[1].d == 1)
                                        result = (**rbx_30)(rbx_30)
                                        int32_t temp11_1 = *(rbx_30 + 0xc)
                                        *(rbx_30 + 0xc) -= 1
                                        
                                        if (temp11_1 == 1)
                                            result = (*(*rbx_30 + 8))(rbx_30, 1)
                            else
                                void* rbx_32 = var_2f8
                                int32_t rcx_122 = *(rbx_32 + 8)
                                int16_t* _String_37
                                void* r15_9
                                
                                if (rcx_122 == 1)
                                    r15_9 = &arg1[2]
                                    int16_t* _String_53
                                    sub_140a35730(r15_9, &_String_53)
                                    int16_t* _String_61 = &data_142d40450
                                    int32_t var_e0
                                    
                                    if (var_e0 != 0)
                                        _String_61 = _String_53
                                    
                                    if (sub_140a54510(_String_61, u"null") != 0)
                                        arg1[0xb].d = 1
                                    
                                    _String_37 = _String_53
                                label_14067d654:
                                    
                                    if (_String_37 == 0)
                                        goto label_14067d65e
                                    
                                    goto label_14067d659
                                
                                if (rcx_122 == 2)
                                    r15_9 = &arg1[2]
                                    sub_140597df0(rbx_32 + 0x10, r15_9)
                                    int32_t rdx_64 = *(rbx_32 + 0x18)
                                    
                                    if (*(rbx_32 + 0x1c) != rdx_64)
                                        sub_1405947f0(rbx_32 + 0x10, rdx_64)
                                    
                                    arg1[0xc].d += *(rbx_32 + 0x1c) * 2
                                    goto label_14067d65e
                                
                                if (rcx_122 == 3)
                                    r15_9 = &arg1[2]
                                    int16_t* _String_21
                                    int128_t zmm0_5 = sub_140a35730(r15_9, &_String_21)
                                    int16_t* _String_33 = _String_21
                                    int32_t var_220
                                    int64_t rdx_55 = sx.q(var_220)
                                    int16_t* _String_41 = _String_33
                                    void* rcx_129 = &_String_33[rdx_55]
                                    int32_t rbx_34
                                    
                                    if (_String_33 != rcx_129)
                                        while (*_String_41 != 0x65)
                                            _String_41 = &_String_41[1]
                                            
                                            if (_String_41 == rcx_129)
                                                goto label_14067d393
                                        
                                        rbx_34 = ((_String_41 - _String_33) s>> 1).d
                                    
                                    if (_String_33 == rcx_129 || rbx_34 == 0xffffffff)
                                    label_14067d393:
                                        
                                        if (sub_140a24720(&_String_21) == 0)
                                            arg1[0xb].d = 1
                                        else
                                            int16_t* _String_3 = &data_142d40450
                                            
                                            if (var_220 != 0)
                                                _String_3 = _String_21
                                            
                                            wcstod(_String_3, nullptr)
                                            *(var_2f8 + 0x10) = zmm0_5.q
                                        
                                        _String_33 = _String_21
                                    else
                                        int32_t rcx_131 = (rdx_55 - 1).d
                                        
                                        if (rdx_55.d == 0)
                                            rcx_131 = 0
                                        
                                        if (rcx_131 s<= rbx_34 + 2)
                                            arg1[0xb].d = 1
                                        else
                                            int32_t rsi_10
                                            int16_t* _String_45
                                            
                                            if (rdx_55.d == 0)
                                                _String_45 = &data_142d40450
                                                rsi_10 = 0
                                            else
                                                _String_45 = _String_33
                                                rsi_10 = (rdx_55 - 1).d
                                            
                                            if (rbx_34 s< 0)
                                                rsi_10 = 0
                                            else if (rbx_34 s< rsi_10)
                                                rsi_10 = rbx_34
                                            
                                            int16_t* _String_13 = nullptr
                                            int32_t var_2b0_1 = 0
                                            
                                            if (_String_45 != 0 && *_String_45 != 0 && rsi_10 s> 0)
                                                sub_1405947f0(&_String_13, rsi_10 + 1)
                                                int32_t rax_139 = var_2b0_1 + 1 + rsi_10
                                                var_2b0_1 = rax_139
                                                
                                                if (rax_139 s> 0)
                                                    sub_140594770(&_String_13)
                                                
                                                zmm0_5 = UnDecorator::getReferenceType(_String_13, 
                                                    _String_45, rsi_10 * 2)
                                                _String_13[sx.q(var_2b0_1) - 1] = 0
                                                rdx_55 = zx.q(var_220)
                                                _String_33 = _String_21
                                            
                                            int32_t rax_141 = (rdx_55 - 1).d
                                            
                                            if (rdx_55.d == 0)
                                                rax_141 = 0
                                            
                                            int32_t rcx_136
                                            
                                            if (rdx_55.d == 0)
                                                rcx_136 = 0
                                                _String_33 = &data_142d40450
                                            else
                                                rcx_136 = (rdx_55 - 1).d
                                            
                                            int32_t rdx_59
                                            
                                            if (rax_141 - rbx_34 - 1 s>= 0)
                                                rdx_59 = rcx_136
                                                
                                                if (rax_141 - rbx_34 - 1 s< rcx_136)
                                                    rdx_59 = rax_141 - rbx_34 - 1
                                            else
                                                rdx_59 = 0
                                            
                                            int32_t rdx_60 = 0
                                            int16_t* _String_17 = nullptr
                                            int32_t var_260_1 = 0
                                            void* rsi_11 = &_String_33[sx.q(rcx_136) - sx.q(rdx_59)]
                                            int32_t rcx_139 = 0
                                            int32_t var_25c_1 = 0
                                            
                                            if (rsi_11 != 0 && *rsi_11 != 0)
                                                int64_t rbx_35 = -1
                                                
                                                do
                                                    rbx_35 += 1
                                                while (*(rsi_11 + (rbx_35 << 1)) != 0)
                                                
                                                if (rbx_35.d + 1 s> 0)
                                                    sub_1405947f0(&_String_17, rbx_35.d + 1)
                                                    rcx_139 = var_25c_1
                                                    rdx_60 = var_260_1
                                                
                                                int32_t rax_145 = rdx_60 + rbx_35.d + 1
                                                var_260_1 = rax_145
                                                
                                                if (rax_145 s> rcx_139)
                                                    sub_140594770(&_String_17)
                                                
                                                zmm0_5 = UnDecorator::getReferenceType(_String_17, 
                                                    rsi_11, (rbx_35.d + 1) * 2)
                                            
                                            char rax_146 = sub_140a24720(&_String_13)
                                            char rax_147
                                            
                                            if (rax_146 != 0)
                                                rax_147 = sub_140a24720(&_String_17)
                                            
                                            if (rax_146 == 0 || rax_147 == 0)
                                                arg1[0xb].d = 1
                                            else
                                                int16_t* const _String_4 = &data_142d40450
                                                
                                                if (var_2b0_1 != 0)
                                                    _String_4 = _String_13
                                                
                                                wcstod(_String_4, nullptr)
                                                int16_t* const _String_5 = &data_142d40450
                                                
                                                if (var_260_1 != 0)
                                                    _String_5 = _String_17
                                                
                                                zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                    _mm_cvtepi32_ps(zx.o(_wtoi(_String_5))).d))
                                                zmm1.q = zmm1.q f* zmm0_5.q
                                                *(var_2f8 + 0x10) = zmm1.q
                                            
                                            int16_t* _String_26 = _String_17
                                            
                                            if (_String_26 != 0)
                                                sub_140a74f90(_String_26)
                                            
                                            int16_t* _String_27 = _String_13
                                            
                                            if (_String_27 != 0)
                                                sub_140a74f90(_String_27)
                                            
                                            _String_33 = _String_21
                                    
                                    if (_String_33 == 0)
                                        goto label_14067d65e
                                    
                                    _String_37 = _String_33
                                label_14067d659:
                                    sub_140a74f90(_String_37)
                                label_14067d65e:
                                    int32_t rdx_66 = *(arg1 + 0x1c)
                                    *(r15_9 + 8) = 0
                                    
                                    if (*(r15_9 + 0xc) != rdx_66)
                                        sub_1405947f0(r15_9, rdx_66)
                                    
                                    int64_t rax_153 = arg1[6]
                                    int64_t rcx_150 = sx.q(arg1[7].d) * 2
                                    void* rdx_67 = *(rax_153 + (rcx_150 << 3) - 8)
                                    int64_t* rbx_37 = *(rax_153 + (rcx_150 << 3) - 0x10)
                                    int64_t* var_88 = rbx_37
                                    void* var_80_1 = rdx_67
                                    
                                    if (rdx_67 != 0)
                                        *(rdx_67 + 8) += 1
                                    
                                    int32_t rax_154 = rbx_37[1].d
                                    
                                    if (rax_154 == 6)
                                        int32_t rax_155 = arg1[1].d
                                        int32_t rcx_151 = rax_155 - 1
                                        
                                        if (rax_155 == 0)
                                            rcx_151 = 0
                                        
                                        if (rcx_151 s<= 0)
                                            arg1[0xb].d = 1
                                            result = sub_140669d70(&var_88)
                                        else
                                            int64_t var_198
                                            sub_140596d10(&var_198, arg1)
                                            int32_t var_190
                                            int32_t var_18c
                                            
                                            if (var_18c != var_190)
                                                sub_1405947f0(&var_198, var_190)
                                            
                                            j_sub_140b746f0(*(**rbx_37)(rbx_37), &var_198, &var_2f8)
                                            int64_t rcx_156 = var_198
                                            arg1[0xc].d += var_18c * 2
                                            arg1[1].d = 0
                                            
                                            if (rcx_156 == 0)
                                                result = sub_140669d70(&var_88)
                                            else
                                                sub_140a74f90(rcx_156)
                                                result = sub_140669d70(&var_88)
                                    else if (rax_154 != 5)
                                        arg1[0xb].d = 1
                                        result = sub_140669d70(&var_88)
                                    else
                                        int64_t rsi_12 = sx.q(rbx_37[3].d)
                                        int32_t rax_160 = (rsi_12 + 1).d
                                        rbx_37[3].d = rax_160
                                        
                                        if (rax_160 s> *(rbx_37 + 0x1c))
                                            sub_140610660(&rbx_37[2])
                                        
                                        void** rcx_161 = (rsi_12 << 4) + rbx_37[2]
                                        *rcx_161 = var_2f8
                                        rcx_161[1] = var_2f0_1
                                        
                                        if (var_2f0_1 == 0)
                                            result = sub_140669d70(&var_88)
                                        else
                                            var_2f0_1[1].d += 1
                                            result = sub_140669d70(&var_88)
                                    
                                    goto label_14067d7a3
                                
                                if (rcx_122 == 4)
                                    r15_9 = &arg1[2]
                                    int16_t* _String_49
                                    sub_140a35730(r15_9, &_String_49)
                                    int16_t* const _String_59 = &data_142d40450
                                    int32_t var_140
                                    
                                    if (var_140 != 0)
                                        _String_59 = _String_49
                                    
                                    if (sub_140a54510(_String_59, u"true") != 0)
                                        int16_t* _String_60 = &data_142d40450
                                        
                                        if (var_140 != 0)
                                            _String_60 = _String_49
                                        
                                        if (sub_140a54510(_String_60, u"false") != 0)
                                            _String_37 = _String_49
                                            arg1[0xb].d = 1
                                        else
                                            *(var_2f8 + 0x10) = 0
                                            _String_37 = _String_49
                                    else
                                        *(var_2f8 + 0x10) = 1
                                        _String_37 = _String_49
                                    
                                    goto label_14067d654
                                
                                arg1[0xb].d = 1
                                result = sub_140669d70(&var_2f8)
                        
                        if (arg1[7].d s<= 0)
                            goto label_14067ce3c
                        
                        int64_t rax_166 = arg1[6]
                        int64_t rdx_73 = sx.q(arg1[7].d) * 2
                        int64_t rbx_38 = *(rax_166 + (rdx_73 << 3) - 0x10)
                        rsi_5 = *(rax_166 + (rdx_73 << 3) - 8)
                        *(rax_166 + (rdx_73 << 3) - 8) = 0
                        *(rax_166 + (rdx_73 << 3) - 0x10) = 0
                        result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        cond:5_1 = *(rbx_38 + 8) == 5
                    label_14067ce0f:
                        
                        if (cond:5_1)
                            goto label_14067c72a
                        
                        goto label_14067ce15
                    
                    arg1[0xb].d = 1
                    arg1[0xa].d = 3
                case 4
                    if (rdx_1.d s> 2)
                        int64_t r8_28 = sx.q(arg1[9].d)
                        int64_t rcx_167 = arg1[8]
                        
                        if (*(rcx_167 + (r8_28 << 2) - 0xc) != 0
                                || *(rcx_167 + (r8_28 << 2) - 8) != 5
                                || *(rcx_167 + (r8_28 << 2) - 4) != 4)
                            goto label_14067deb5
                        
                        int32_t r9_5 = (rdx_1 - 2).d
                        int32_t rax_168 = r8_28.d - r9_5
                        
                        if (rax_168 != 2)
                            memmove(rcx_167 + (sx.q(r9_5) << 2), rcx_167 + (rdx_1 << 2), 
                                (rax_168 - 2) << 2)
                            r8_28 = zx.q(arg1[9].d)
                        
                        result = zx.q((r8_28 - 2).d)
                        arg1[9].d = result.d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                            arg1[0xa].d = 6
                        else
                            int64_t rax_171 = arg1[6]
                            int64_t rcx_170 = sx.q(arg1[7].d) * 2
                            void* rdx_77 = *(rax_171 + (rcx_170 << 3) - 0x10)
                            void* var_2e8 = rdx_77
                            int64_t* rbx_39 = *(rax_171 + (rcx_170 << 3) - 8)
                            int64_t* var_2e0_1 = rbx_39
                            
                            if (rbx_39 != 0)
                                rbx_39[1].d += 1
                                rbx_39 = var_2e0_1
                                rdx_77 = var_2e8
                            
                            result = zx.q(*(rdx_77 + 8) - 5)
                            
                            if (result.d u<= 1)
                                goto label_14067de66
                            
                            int64_t rax_173 = arg1[6]
                            int64_t rcx_172 = sx.q(arg1[7].d) * 2
                            int64_t* rbx_40 = *(rax_173 + (rcx_172 << 3) - 8)
                            *(rax_173 + (rcx_172 << 3) - 8) = 0
                            *(rax_173 + (rcx_172 << 3) - 0x10) = 0
                            result = sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                            
                            if (rbx_40 != 0)
                                rbx_40[1].d -= 1
                                
                                if (rbx_40[1].d == 1)
                                    result = (**rbx_40)(rbx_40)
                                    int32_t temp24_1 = *(rbx_40 + 0xc)
                                    *(rbx_40 + 0xc) -= 1
                                    
                                    if (temp24_1 == 1)
                                        result = (*(*rbx_40 + 8))(rbx_40, 1)
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            label_14067de61:
                                rbx_39 = var_2e0_1
                            label_14067de66:
                                
                                if (rbx_39 == 0)
                                    arg1[0xa].d = 6
                                else
                                    rbx_39[1].d -= 1
                                    
                                    if (rbx_39[1].d != 1)
                                        arg1[0xa].d = 6
                                    else
                                        result = (**rbx_39)(rbx_39)
                                        int32_t temp22_1 = *(rbx_39 + 0xc)
                                        *(rbx_39 + 0xc) -= 1
                                        
                                        if (temp22_1 != 1)
                                            arg1[0xa].d = 6
                                        else
                                            result = (*(*rbx_39 + 8))(rbx_39, 1)
                                            arg1[0xa].d = 6
                            else
                                void* rbx_41 = var_2e8
                                int32_t rcx_176 = *(rbx_41 + 8)
                                int16_t* _String_38
                                void* r15_10
                                
                                if (rcx_176 == 1)
                                    r15_10 = &arg1[2]
                                    int16_t* _String_54
                                    sub_140a35730(r15_10, &_String_54)
                                    int16_t* _String_64 = &data_142d40450
                                    int32_t var_d0
                                    
                                    if (var_d0 != 0)
                                        _String_64 = _String_54
                                    
                                    if (sub_140a54510(_String_64, u"null") != 0)
                                        arg1[0xb].d = 1
                                    
                                    _String_38 = _String_54
                                label_14067dd12:
                                    
                                    if (_String_38 == 0)
                                        goto label_14067dd1c
                                    
                                    goto label_14067dd17
                                
                                if (rcx_176 == 2)
                                    r15_10 = &arg1[2]
                                    sub_140597df0(rbx_41 + 0x10, r15_10)
                                    int32_t rdx_91 = *(rbx_41 + 0x18)
                                    
                                    if (*(rbx_41 + 0x1c) != rdx_91)
                                        sub_1405947f0(rbx_41 + 0x10, rdx_91)
                                    
                                    arg1[0xc].d += *(rbx_41 + 0x1c) * 2
                                    goto label_14067dd1c
                                
                                if (rcx_176 == 3)
                                    r15_10 = &arg1[2]
                                    int16_t* _String_22
                                    int128_t zmm0_7 = sub_140a35730(r15_10, &_String_22)
                                    int16_t* _String_34 = _String_22
                                    int32_t var_210
                                    int64_t rdx_82 = sx.q(var_210)
                                    int16_t* _String_42 = _String_34
                                    void* rcx_183 = &_String_34[rdx_82]
                                    int32_t rbx_43
                                    
                                    if (_String_34 != rcx_183)
                                        while (*_String_42 != 0x65)
                                            _String_42 = &_String_42[1]
                                            
                                            if (_String_42 == rcx_183)
                                                goto label_14067da63
                                        
                                        rbx_43 = ((_String_42 - _String_34) s>> 1).d
                                    
                                    if (_String_34 == rcx_183 || rbx_43 == 0xffffffff)
                                    label_14067da63:
                                        
                                        if (sub_140a24720(&_String_22) == 0)
                                            arg1[0xb].d = 1
                                        else
                                            int16_t* _String_6 = &data_142d40450
                                            
                                            if (var_210 != 0)
                                                _String_6 = _String_22
                                            
                                            wcstod(_String_6, nullptr)
                                            *(var_2e8 + 0x10) = zmm0_7.q
                                        
                                        _String_34 = _String_22
                                    else
                                        int32_t rcx_185 = (rdx_82 - 1).d
                                        
                                        if (rdx_82.d == 0)
                                            rcx_185 = 0
                                        
                                        if (rcx_185 s<= rbx_43 + 2)
                                            arg1[0xb].d = 1
                                        else
                                            int32_t rsi_13
                                            int16_t* _String_46
                                            
                                            if (rdx_82.d == 0)
                                                _String_46 = &data_142d40450
                                                rsi_13 = 0
                                            else
                                                _String_46 = _String_34
                                                rsi_13 = (rdx_82 - 1).d
                                            
                                            if (rbx_43 s< 0)
                                                rsi_13 = 0
                                            else if (rbx_43 s< rsi_13)
                                                rsi_13 = rbx_43
                                            
                                            int16_t* _String_14 = nullptr
                                            int32_t var_2a0_1 = 0
                                            
                                            if (_String_46 != 0 && *_String_46 != 0 && rsi_13 s> 0)
                                                sub_1405947f0(&_String_14, rsi_13 + 1)
                                                int32_t rax_184 = var_2a0_1 + 1 + rsi_13
                                                var_2a0_1 = rax_184
                                                
                                                if (rax_184 s> 0)
                                                    sub_140594770(&_String_14)
                                                
                                                zmm0_7 = UnDecorator::getReferenceType(_String_14, 
                                                    _String_46, rsi_13 * 2)
                                                _String_14[sx.q(var_2a0_1) - 1] = 0
                                                rdx_82 = zx.q(var_210)
                                                _String_34 = _String_22
                                            
                                            int32_t rax_186 = (rdx_82 - 1).d
                                            
                                            if (rdx_82.d == 0)
                                                rax_186 = 0
                                            
                                            int32_t rdx_86
                                            
                                            if (rdx_82.d == 0)
                                                rdx_86 = 0
                                                _String_34 = &data_142d40450
                                            else
                                                rdx_86 = rdx_82.d - 1
                                            
                                            int32_t rcx_190
                                            
                                            if (rax_186 - rbx_43 - 1 s>= 0)
                                                rcx_190 = rdx_86
                                                
                                                if (rax_186 - rbx_43 - 1 s< rdx_86)
                                                    rcx_190 = rax_186 - rbx_43 - 1
                                            else
                                                rcx_190 = 0
                                            
                                            int32_t rdx_87 = 0
                                            int16_t* _String_18 = nullptr
                                            int32_t var_250_1 = 0
                                            void* rsi_14 = &_String_34[sx.q(rdx_86) - sx.q(rcx_190)]
                                            int32_t rcx_193 = 0
                                            int32_t var_24c_1 = 0
                                            
                                            if (rsi_14 != 0 && *rsi_14 != 0)
                                                int64_t rbx_44 = -1
                                                
                                                do
                                                    rbx_44 += 1
                                                while (*(rsi_14 + (rbx_44 << 1)) != 0)
                                                
                                                if (rbx_44.d + 1 s> 0)
                                                    sub_1405947f0(&_String_18, rbx_44.d + 1)
                                                    rcx_193 = var_24c_1
                                                    rdx_87 = var_250_1
                                                
                                                int32_t rax_190 = rbx_44.d + 1 + rdx_87
                                                var_250_1 = rax_190
                                                
                                                if (rax_190 s> rcx_193)
                                                    sub_140594770(&_String_18)
                                                
                                                zmm0_7 = UnDecorator::getReferenceType(_String_18, 
                                                    rsi_14, (rbx_44.d + 1) * 2)
                                            
                                            char rax_191 = sub_140a24720(&_String_14)
                                            char rax_192
                                            
                                            if (rax_191 != 0)
                                                rax_192 = sub_140a24720(&_String_18)
                                            
                                            if (rax_191 == 0 || rax_192 == 0)
                                                arg1[0xb].d = 1
                                            else
                                                int16_t* const _String_7 = &data_142d40450
                                                
                                                if (var_2a0_1 != 0)
                                                    _String_7 = _String_14
                                                
                                                wcstod(_String_7, nullptr)
                                                int16_t* const _String_8 = &data_142d40450
                                                
                                                if (var_250_1 != 0)
                                                    _String_8 = _String_18
                                                
                                                zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                    _mm_cvtepi32_ps(zx.o(_wtoi(_String_8))).d))
                                                zmm1.q = zmm1.q f* zmm0_7.q
                                                *(var_2e8 + 0x10) = zmm1.q
                                            
                                            int16_t* _String_28 = _String_18
                                            
                                            if (_String_28 != 0)
                                                sub_140a74f90(_String_28)
                                            
                                            int16_t* _String_29 = _String_14
                                            
                                            if (_String_29 != 0)
                                                sub_140a74f90(_String_29)
                                            
                                            _String_34 = _String_22
                                    
                                    if (_String_34 == 0)
                                        goto label_14067dd1c
                                    
                                    _String_38 = _String_34
                                label_14067dd17:
                                    sub_140a74f90(_String_38)
                                label_14067dd1c:
                                    int32_t rdx_93 = *(arg1 + 0x1c)
                                    *(r15_10 + 8) = 0
                                    
                                    if (*(r15_10 + 0xc) != rdx_93)
                                        sub_1405947f0(r15_10, rdx_93)
                                    
                                    int64_t rax_198 = arg1[6]
                                    int64_t rcx_204 = sx.q(arg1[7].d) * 2
                                    void* rdx_94 = *(rax_198 + (rcx_204 << 3) - 8)
                                    int64_t* rbx_46 = *(rax_198 + (rcx_204 << 3) - 0x10)
                                    int64_t* var_78 = rbx_46
                                    void* var_70_1 = rdx_94
                                    
                                    if (rdx_94 != 0)
                                        *(rdx_94 + 8) += 1
                                    
                                    int32_t rax_199 = rbx_46[1].d
                                    
                                    if (rax_199 == 6)
                                        int32_t rax_200 = arg1[1].d
                                        int32_t rcx_205 = rax_200 - 1
                                        
                                        if (rax_200 == 0)
                                            rcx_205 = 0
                                        
                                        if (rcx_205 s<= 0)
                                            arg1[0xb].d = 1
                                            result = sub_140669d70(&var_78)
                                        else
                                            int64_t var_188
                                            sub_140596d10(&var_188, arg1)
                                            int32_t var_180
                                            int32_t var_17c
                                            
                                            if (var_17c != var_180)
                                                sub_1405947f0(&var_188, var_180)
                                            
                                            j_sub_140b746f0(*(**rbx_46)(rbx_46), &var_188, &var_2e8)
                                            int64_t rcx_210 = var_188
                                            arg1[0xc].d += var_17c * 2
                                            arg1[1].d = 0
                                            
                                            if (rcx_210 == 0)
                                                result = sub_140669d70(&var_78)
                                            else
                                                sub_140a74f90(rcx_210)
                                                result = sub_140669d70(&var_78)
                                    else if (rax_199 != 5)
                                        arg1[0xb].d = 1
                                        result = sub_140669d70(&var_78)
                                    else
                                        int64_t rsi_15 = sx.q(rbx_46[3].d)
                                        int32_t rax_205 = (rsi_15 + 1).d
                                        rbx_46[3].d = rax_205
                                        
                                        if (rax_205 s> *(rbx_46 + 0x1c))
                                            sub_140610660(&rbx_46[2])
                                        
                                        void** rcx_215 = (rsi_15 << 4) + rbx_46[2]
                                        *rcx_215 = var_2e8
                                        rcx_215[1] = var_2e0_1
                                        
                                        if (var_2e0_1 == 0)
                                            result = sub_140669d70(&var_78)
                                        else
                                            var_2e0_1[1].d += 1
                                            result = sub_140669d70(&var_78)
                                    
                                    goto label_14067de61
                                
                                if (rcx_176 == 4)
                                    r15_10 = &arg1[2]
                                    int16_t* _String_50
                                    sub_140a35730(r15_10, &_String_50)
                                    int16_t* const _String_62 = &data_142d40450
                                    int32_t var_130
                                    
                                    if (var_130 != 0)
                                        _String_62 = _String_50
                                    
                                    if (sub_140a54510(_String_62, u"true") != 0)
                                        int16_t* _String_63 = &data_142d40450
                                        
                                        if (var_130 != 0)
                                            _String_63 = _String_50
                                        
                                        if (sub_140a54510(_String_63, u"false") != 0)
                                            _String_38 = _String_50
                                            arg1[0xb].d = 1
                                        else
                                            *(var_2e8 + 0x10) = 0
                                            _String_38 = _String_50
                                    else
                                        *(var_2e8 + 0x10) = 1
                                        _String_38 = _String_50
                                    
                                    goto label_14067dd12
                                
                                arg1[0xb].d = 1
                                result = sub_140669d70(&var_2e8)
                                arg1[0xa].d = 6
                    else if (rdx_1.d s<= 1)
                        arg1[0xb].d = 1
                    else
                    label_14067deb5:
                        int64_t r8_36 = arg1[8]
                        
                        if (*(r8_36 + (sx.q(arg1[9].d) << 2) - 8) != 0
                                || *(r8_36 + (sx.q(arg1[9].d) << 2) - 4) != 4)
                            int64_t r8_37 = arg1[8]
                            result = sx.q(arg1[9].d)
                            
                            if (*(r8_37 + (result << 2) - 8) != 2)
                                arg1[0xb].d = 1
                            else
                                result = sx.q(arg1[9].d)
                                
                                if (*(r8_37 + (result << 2) - 4) != 4)
                                    arg1[0xb].d = 1
                                else
                                    result = sub_1406793d0(&arg1[8], rdx_1.d - 1, 1, 0)
                                    arg1[0xa].d = 0
                                    
                                    if (arg1[7].d s<= 0)
                                        arg1[0xb].d = 1
                                        arg1[0xa].d = 5
                                    else
                                        int64_t rax_213 = arg1[6]
                                        int64_t rcx_223 = sx.q(arg1[7].d) * 2
                                        void* rdx_101 = *(rax_213 + (rcx_223 << 3) - 0x10)
                                        void* var_2d8 = rdx_101
                                        int64_t* rbx_47 = *(rax_213 + (rcx_223 << 3) - 8)
                                        int64_t* var_2d0_1 = rbx_47
                                        
                                        if (rbx_47 != 0)
                                            rbx_47[1].d += 1
                                            rbx_47 = var_2d0_1
                                            rdx_101 = var_2d8
                                        
                                        result = zx.q(*(rdx_101 + 8) - 5)
                                        
                                        if (result.d u<= 1)
                                            goto label_14067e4ea
                                        
                                        int64_t rcx_224 = arg1[6]
                                        int64_t rdx_103 = sx.q(arg1[7].d) * 2
                                        int64_t var_68 = *(rcx_224 + (rdx_103 << 3) - 0x10)
                                        int64_t rax_216 = *(rcx_224 + (rdx_103 << 3) - 8)
                                        *(rcx_224 + (rdx_103 << 3) - 8) = 0
                                        *(rcx_224 + (rdx_103 << 3) - 0x10) = 0
                                        int64_t var_60_1 = rax_216
                                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                        result = sub_140669d70(&var_68)
                                        
                                        if (arg1[7].d s<= 0)
                                            arg1[0xb].d = 1
                                        label_14067e4e5:
                                            rbx_47 = var_2d0_1
                                        label_14067e4ea:
                                            
                                            if (rbx_47 == 0)
                                                arg1[0xa].d = 5
                                            else
                                                rbx_47[1].d -= 1
                                                
                                                if (rbx_47[1].d != 1)
                                                    arg1[0xa].d = 5
                                                else
                                                    result = (**rbx_47)(rbx_47)
                                                    int32_t temp20_1 = *(rbx_47 + 0xc)
                                                    *(rbx_47 + 0xc) -= 1
                                                    
                                                    if (temp20_1 != 1)
                                                        arg1[0xa].d = 5
                                                    else
                                                        result = (*(*rbx_47 + 8))(rbx_47, 1)
                                                        arg1[0xa].d = 5
                                        else
                                            void* rbx_48 = var_2d8
                                            int32_t rcx_227 = *(rbx_48 + 8)
                                            int16_t* _String_39
                                            void* r15_11
                                            
                                            if (rcx_227 == 1)
                                                r15_11 = &arg1[2]
                                                int16_t* _String_55
                                                sub_140a35730(r15_11, &_String_55)
                                                int16_t* _String_67 = &data_142d40450
                                                int32_t var_c0
                                                
                                                if (var_c0 != 0)
                                                    _String_67 = _String_55
                                                
                                                if (sub_140a54510(_String_67, u"null") != 0)
                                                    arg1[0xb].d = 1
                                                
                                                _String_39 = _String_55
                                            label_14067e396:
                                                
                                                if (_String_39 == 0)
                                                    goto label_14067e3a0
                                                
                                                goto label_14067e39b
                                            
                                            if (rcx_227 == 2)
                                                r15_11 = &arg1[2]
                                                sub_140597df0(rbx_48 + 0x10, r15_11)
                                                int32_t rdx_117 = *(rbx_48 + 0x18)
                                                
                                                if (*(rbx_48 + 0x1c) != rdx_117)
                                                    sub_1405947f0(rbx_48 + 0x10, rdx_117)
                                                
                                                arg1[0xc].d += *(rbx_48 + 0x1c) * 2
                                                goto label_14067e3a0
                                            
                                            if (rcx_227 == 3)
                                                r15_11 = &arg1[2]
                                                int16_t* _String_23
                                                int128_t zmm0_9 = sub_140a35730(r15_11, &_String_23)
                                                int16_t* _String_35 = _String_23
                                                int32_t var_200
                                                int64_t rdx_108 = sx.q(var_200)
                                                int16_t* _String_43 = _String_35
                                                void* rcx_234 = &_String_35[rdx_108]
                                                int32_t rbx_50
                                                
                                                if (_String_35 != rcx_234)
                                                    while (*_String_43 != 0x65)
                                                        _String_43 = &_String_43[1]
                                                        
                                                        if (_String_43 == rcx_234)
                                                            goto label_14067e0e3
                                                    
                                                    rbx_50 = ((_String_43 - _String_35) s>> 1).d
                                                
                                                if (_String_35 == rcx_234 || rbx_50 == 0xffffffff)
                                                label_14067e0e3:
                                                    
                                                    if (sub_140a24720(&_String_23) == 0)
                                                        arg1[0xb].d = 1
                                                    else
                                                        int16_t* _String_9 = &data_142d40450
                                                        
                                                        if (var_200 != 0)
                                                            _String_9 = _String_23
                                                        
                                                        wcstod(_String_9, nullptr)
                                                        *(var_2d8 + 0x10) = zmm0_9.q
                                                    
                                                    _String_35 = _String_23
                                                else
                                                    int32_t rcx_236 = (rdx_108 - 1).d
                                                    
                                                    if (rdx_108.d == 0)
                                                        rcx_236 = 0
                                                    
                                                    if (rcx_236 s<= rbx_50 + 2)
                                                        arg1[0xb].d = 1
                                                    else
                                                        int32_t rsi_16
                                                        int16_t* _String_47
                                                        
                                                        if (rdx_108.d == 0)
                                                            _String_47 = &data_142d40450
                                                            rsi_16 = 0
                                                        else
                                                            _String_47 = _String_35
                                                            rsi_16 = (rdx_108 - 1).d
                                                        
                                                        if (rbx_50 s< 0)
                                                            rsi_16 = 0
                                                        else if (rbx_50 s< rsi_16)
                                                            rsi_16 = rbx_50
                                                        
                                                        int16_t* _String_15 = nullptr
                                                        int32_t var_290_1 = 0
                                                        
                                                        if (_String_47 != 0 && *_String_47 != 0
                                                                && rsi_16 s> 0)
                                                            sub_1405947f0(&_String_15, rsi_16 + 1)
                                                            int32_t rax_225 = var_290_1 + 1 + rsi_16
                                                            var_290_1 = rax_225
                                                            
                                                            if (rax_225 s> 0)
                                                                sub_140594770(&_String_15)
                                                            
                                                            zmm0_9 = UnDecorator::getReferenceType(
                                                                _String_15, _String_47, rsi_16 * 2)
                                                            _String_15[sx.q(var_290_1) - 1] = 0
                                                            rdx_108 = zx.q(var_200)
                                                            _String_35 = _String_23
                                                        
                                                        int32_t rax_227 = (rdx_108 - 1).d
                                                        
                                                        if (rdx_108.d == 0)
                                                            rax_227 = 0
                                                        
                                                        int32_t rcx_241
                                                        
                                                        if (rdx_108.d == 0)
                                                            rcx_241 = 0
                                                            _String_35 = &data_142d40450
                                                        else
                                                            rcx_241 = (rdx_108 - 1).d
                                                        
                                                        int32_t rdx_112
                                                        
                                                        if (rax_227 - rbx_50 - 1 s>= 0)
                                                            rdx_112 = rcx_241
                                                            
                                                            if (rax_227 - rbx_50 - 1 s< rcx_241)
                                                                rdx_112 = rax_227 - rbx_50 - 1
                                                        else
                                                            rdx_112 = 0
                                                        
                                                        int32_t rdx_113 = 0
                                                        int16_t* _String_19 = nullptr
                                                        int32_t var_240_1 = 0
                                                        void* rsi_17 = &_String_35[sx.q(rcx_241)
                                                            - sx.q(rdx_112)]
                                                        int32_t rcx_244 = 0
                                                        int32_t var_23c_1 = 0
                                                        
                                                        if (rsi_17 != 0 && *rsi_17 != 0)
                                                            int64_t rbx_51 = -1
                                                            
                                                            do
                                                                rbx_51 += 1
                                                            while (*(rsi_17 + (rbx_51 << 1)) != 0)
                                                            
                                                            if (rbx_51.d + 1 s> 0)
                                                                sub_1405947f0(&_String_19, rbx_51.d + 1)
                                                                rcx_244 = var_23c_1
                                                                rdx_113 = var_240_1
                                                            
                                                            int32_t rax_231 = rdx_113 + rbx_51.d + 1
                                                            var_240_1 = rax_231
                                                            
                                                            if (rax_231 s> rcx_244)
                                                                sub_140594770(&_String_19)
                                                            
                                                            zmm0_9 = UnDecorator::getReferenceType(
                                                                _String_19, rsi_17, (rbx_51.d + 1) * 2)
                                                        
                                                        char rax_232 = sub_140a24720(&_String_15)
                                                        char rax_233
                                                        
                                                        if (rax_232 != 0)
                                                            rax_233 = sub_140a24720(&_String_19)
                                                        
                                                        if (rax_232 == 0 || rax_233 == 0)
                                                            arg1[0xb].d = 1
                                                        else
                                                            int16_t* const _String_10 =
                                                                &data_142d40450
                                                            
                                                            if (var_290_1 != 0)
                                                                _String_10 = _String_15
                                                            
                                                            wcstod(_String_10, nullptr)
                                                            int16_t* const _String_11 =
                                                                &data_142d40450
                                                            
                                                            if (var_240_1 != 0)
                                                                _String_11 = _String_19
                                                            
                                                            zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                                _mm_cvtepi32_ps(zx.o(_wtoi(_String_11)))
                                                                    .d))
                                                            zmm1.q = zmm1.q f* zmm0_9.q
                                                            *(var_2d8 + 0x10) = zmm1.q
                                                        
                                                        int16_t* _String_30 = _String_19
                                                        
                                                        if (_String_30 != 0)
                                                            sub_140a74f90(_String_30)
                                                        
                                                        int16_t* _String_31 = _String_15
                                                        
                                                        if (_String_31 != 0)
                                                            sub_140a74f90(_String_31)
                                                        
                                                        _String_35 = _String_23
                                                
                                                if (_String_35 == 0)
                                                    goto label_14067e3a0
                                                
                                                _String_39 = _String_35
                                            label_14067e39b:
                                                sub_140a74f90(_String_39)
                                            label_14067e3a0:
                                                int32_t rdx_119 = *(arg1 + 0x1c)
                                                *(r15_11 + 8) = 0
                                                
                                                if (*(r15_11 + 0xc) != rdx_119)
                                                    sub_1405947f0(r15_11, rdx_119)
                                                
                                                int64_t rax_239 = arg1[6]
                                                int64_t rcx_255 = sx.q(arg1[7].d) * 2
                                                void* rdx_120 = *(rax_239 + (rcx_255 << 3) - 8)
                                                int64_t* rbx_53 = *(rax_239 + (rcx_255 << 3) - 0x10)
                                                int64_t* var_58 = rbx_53
                                                void* var_50_1 = rdx_120
                                                
                                                if (rdx_120 != 0)
                                                    *(rdx_120 + 8) += 1
                                                
                                                int32_t rax_240 = rbx_53[1].d
                                                
                                                if (rax_240 == 6)
                                                    int32_t rax_241 = arg1[1].d
                                                    int32_t rcx_256 = rax_241 - 1
                                                    
                                                    if (rax_241 == 0)
                                                        rcx_256 = 0
                                                    
                                                    if (rcx_256 s<= 0)
                                                        arg1[0xb].d = 1
                                                        result = sub_140669d70(&var_58)
                                                    else
                                                        int64_t var_178
                                                        sub_140596d10(&var_178, arg1)
                                                        int32_t var_170
                                                        int32_t var_16c
                                                        
                                                        if (var_16c != var_170)
                                                            sub_1405947f0(&var_178, var_170)
                                                        
                                                        j_sub_140b746f0(*(**rbx_53)(rbx_53), 
                                                            &var_178, &var_2d8)
                                                        int64_t rcx_261 = var_178
                                                        arg1[0xc].d += var_16c * 2
                                                        arg1[1].d = 0
                                                        
                                                        if (rcx_261 == 0)
                                                            result = sub_140669d70(&var_58)
                                                        else
                                                            sub_140a74f90(rcx_261)
                                                            result = sub_140669d70(&var_58)
                                                else if (rax_240 != 5)
                                                    arg1[0xb].d = 1
                                                    result = sub_140669d70(&var_58)
                                                else
                                                    int64_t rsi_18 = sx.q(rbx_53[3].d)
                                                    int32_t rax_246 = (rsi_18 + 1).d
                                                    rbx_53[3].d = rax_246
                                                    
                                                    if (rax_246 s> *(rbx_53 + 0x1c))
                                                        sub_140610660(&rbx_53[2])
                                                    
                                                    void** rcx_266 = (rsi_18 << 4) + rbx_53[2]
                                                    *rcx_266 = var_2d8
                                                    rcx_266[1] = var_2d0_1
                                                    
                                                    if (var_2d0_1 == 0)
                                                        result = sub_140669d70(&var_58)
                                                    else
                                                        var_2d0_1[1].d += 1
                                                        result = sub_140669d70(&var_58)
                                                
                                                goto label_14067e4e5
                                            
                                            if (rcx_227 == 4)
                                                r15_11 = &arg1[2]
                                                int16_t* _String_51
                                                sub_140a35730(r15_11, &_String_51)
                                                int16_t* const _String_65 = &data_142d40450
                                                int32_t var_120
                                                
                                                if (var_120 != 0)
                                                    _String_65 = _String_51
                                                
                                                if (sub_140a54510(_String_65, u"true") != 0)
                                                    int16_t* _String_66 = &data_142d40450
                                                    
                                                    if (var_120 != 0)
                                                        _String_66 = _String_51
                                                    
                                                    if (sub_140a54510(_String_66, u"false") != 0)
                                                        _String_39 = _String_51
                                                        arg1[0xb].d = 1
                                                    else
                                                        *(var_2d8 + 0x10) = 0
                                                        _String_39 = _String_51
                                                else
                                                    *(var_2d8 + 0x10) = 1
                                                    _String_39 = _String_51
                                                
                                                goto label_14067e396
                                            
                                            arg1[0xb].d = 1
                                            result = sub_140669d70(&var_2d8)
                                            arg1[0xa].d = 5
                        else
                            result = sub_1406793d0(&arg1[8], rdx_1.d - 1, 1, 0)
                            arg1[0xa].d = 6
                case 5
                    if (rdx_1.d s<= 1)
                        arg1[0xb].d = 1
                    else
                        result = sx.q(arg1[9].d)
                        int64_t rcx_271 = arg1[8]
                        
                        if (*(rcx_271 + (result << 2) - 8) != 0
                                || *(rcx_271 + (result << 2) - 4) != 5)
                            arg1[0xb].d = 1
                        else
                            arg1[0xa].d = 6
                            result = zx.q(arg1[3].d)
                            
                            if (result.d == 0)
                                arg1[0xb].d = 1
                            else
                                result = zx.q(result.d - 1)
                                
                                if (result.d s<= 0)
                                    arg1[0xb].d = 1
                                else
                                    arg1[1].d = 0
                                    int32_t rax_252 = arg1[3].d
                                    int32_t r8_43 = rax_252 - 1
                                    
                                    if (rax_252 == 0)
                                        r8_43 = 0
                                    
                                    result = sub_140a20ba0(arg1, arg1[2], r8_43)
                                    int32_t rdx_126 = *(arg1 + 0x1c)
                                    arg1[3].d = 0
                                    
                                    if (rdx_126 != rdx_126)
                                        result = sub_1405947f0(&arg1[2], rdx_126)
                case 6
                    break
                case 7
                    arg1[0xb].d = 1
    
    if (arg1[0xb].d != 0)
        break
while (arg1[0xa].d == 0)

return result
