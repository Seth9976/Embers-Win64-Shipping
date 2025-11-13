// 函数: sub_140f7c300
// 地址: 0x140f7c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
uint128_t zmm0
rax, zmm0 = sub_140e59810(data_143e29f28)

if (rax != 0)
    int64_t* rcx_1 = arg1[0xdf]
    
    if ((*(*rcx_1 + 8))(rcx_1) == 0 || arg2[1] == 1)
        int32_t i_6 = arg1[0xf2].d
        int64_t rsi
        rsi.b = 1
        uint64_t r14
        uint64_t var_30 = r14
        int32_t r15 = 0
        int32_t rax_2 = 0
        int32_t rcx_2
        rcx_2.b = arg1[0xf3].b == 1
        int64_t var_70 = 0
        int32_t rcx_3 = rcx_2 + *(arg1 + 0x794)
        bool cond:1 = rcx_2 + *(arg1 + 0x794) s>= 0
        int32_t i_1 = i_6
        
        if (cond:1)
            rax_2 = rcx_3
        
        int64_t var_60
        int32_t var_5c
        int64_t var_58
        
        if (arg2[4] == 0)
            r14 = zx.q(arg2[1])
            
            if (r14.d != 1 && sub_140f6a470(arg1).b != 0)
                zmm0 = arg2[2]
                
                if (zmm0.d f== 0f)
                    rsi.b = 1
                else
                    rsi.b = 0
                
                int32_t rax_3
                
                if (r14.d != 0)
                    rax_3.b = 0
                else
                    zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d)))
                    
                    if (zmm0.d f< 0f)
                        rax_3.b = 1
                    else
                        zmm0 = _mm_cvtepi32_ps(zx.o(int.d(fconvert.t(arg2[3]))))
                        
                        if (zmm0.d f>= 0f)
                            rax_3.b = 0
                        else
                            rax_3.b = 1
                
                int64_t rdx = arg1[0xf0]
                uint32_t r8_2 = (rdx u>> 0x20).d
                int64_t rax_4 = i_1.q
                
                if (rax_3.b == 0)
                    bool cond:5_1 = rdx.d s> i_6
                    
                    if (rdx.d == i_6)
                        cond:5_1 = r8_2 s> (rax_4 u>> 0x20).d
                    
                    if (cond:5_1)
                        rax_4 = rdx
                    
                    rdx = rax_4
                else if (rdx.d != i_6)
                    if (rdx.d s< i_6)
                        rax_4 = rdx
                    
                    rdx = rax_4
                else if (r8_2 s>= (rax_4 u>> 0x20).d)
                    rdx = rax_4
                
                bool cond:9_1 = *arg2 != 1
                i_1.q = rdx
                var_70 = rdx
                
                if (not(cond:9_1))
                    sub_140f05750(arg1[9], &var_60, &var_70)
                    int64_t rdx_2 = var_60
                    int64_t rcx_10 = var_58
                    bool cond:10_1 = rdx_2.d s< rcx_10.d
                    
                    if (rdx_2.d == rcx_10.d)
                        cond:10_1 = var_5c s< var_58:4.d
                    
                    if (cond:10_1)
                        rcx_10 = rdx_2
                    
                    uint32_t rax_7 = (rcx_10 u>> 0x20).d
                    
                    if (rcx_10.d != 0xffffffff && rax_7 != 0xffffffff && rcx_10.d == var_70.d
                            && rax_7 == var_70:4.d)
                        rsi.b = 0
                
                i_6 = i_1
        
        uint64_t r12
        r12.b = 0
        r14.b = 0
        char arg_21 = 0
        
        if (rsi.b == 0)
            goto label_140f7c821
        
        int32_t rax_8 = arg2[1]
        int32_t i_3
        int32_t i_2
        bool arg_20
        int64_t rax_20
        
        if (rax_8 != 0)
            if (rax_8 != 1)
                goto label_140f7c821
            
            zmm0.d = arg2[2].d f* arg2[5]
            void* rcx_34 = arg1[9]
            float zmm1 = arg2[3] f* arg2[5]
            i_2.b = 0
            i_3 = zmm0.d
            float var_64_4 = zmm1
            int64_t* rax_34
            rax_34, zmm0 = sub_140f047e0(rcx_34, &var_60, &i_3, &i_2)
            bool cond:2_1 = i_2.b != 2
            r14.b = 1
            int64_t rcx_35 = *rax_34
            var_70 = rcx_35
            
            if (cond:2_1)
                goto label_140f7c821
            
            i_2 = rcx_35.d
            int32_t rax_35 = 0
            uint32_t rcx_36 = (rcx_35 u>> 0x20).d
            arg_20 = true
            r12 = 1
            
            if (rcx_36 - 1 s>= 0)
                rax_35 = rcx_36 - 1
            
            arg3 = rax_35
            rax_20 = i_2.q
            goto label_140f7c818
        
        zmm0 = arg2[2]
        
        if (*arg2 == 0)
            int64_t* result
            int64_t* var_88
            
            if (zmm0.d f== 0f)
                int64_t* rcx_13 = *arg1
                
                if ((*(*rcx_13 + 0x10))(rcx_13).b != 0)
                    var_88 = &var_70
                    zmm0 = sub_140f8f360(arg1, &i_1, int.d(fconvert.t(arg2[3])), arg2[5], var_88, 
                        &arg_20)
                    r12 = zx.q(arg_21)
                    goto label_140f7c821
                
                result.b = 0
            else
                r14.b = 1
                var_70 = *sub_140f8f4d0(arg1, &i_2, &i_1, (int.d(zmm0.d)).b)
            label_140f7c821:
                
                if (arg2[4] != 1)
                    if (&var_60 != &arg1[0xf0] && arg1[0xf1].b != 0)
                        arg1[0xf1].b = 0
                else if (arg1[0xf1].b == 0 && &i_1 != &arg1[0xf0])
                    arg1[0xf0] = i_1.q
                    arg1[0xf1].b = 1
                
                void* rdx_22 = arg1[9]
                int64_t* r8_14 = &var_70
                
                if (r12.b == 0)
                    sub_140f8b080(&arg1[0xf2], rdx_22, r8_14, arg1.d, zmm0.q)
                else
                    sub_140f8af60(&arg1[0xf2], rdx_22, r8_14, arg_20, zmm0.q, var_88.d)
                
                bool cond:4_1 = arg1[0xf3].b == 1
                int64_t* rcx_40 = *arg1
                i_2 = arg1[0xf2].d
                int32_t rax_39
                rax_39.b = cond:4_1
                
                if (rax_39 + *(arg1 + 0x794) s>= 0)
                    r15 = rax_39 + *(arg1 + 0x794)
                
                arg3 = r15
                char rdx_24
                uint32_t r8_15
                rdx_24, r8_15 = (*(*rcx_40 + 0xa8))(rcx_40, &i_2)
                
                if (r14.b != 0)
                    rdx_24, r8_15 = sub_140f90a90(arg1, (&arg1[0xf2]).d)
                
                sub_140f8fc70(arg1, rdx_24, r8_15)
                int64_t* rcx_43 = arg1[0xdf]
                
                if ((*(*rcx_43 + 8))(rcx_43).b != 0)
                    int64_t* rcx_44 = data_143e20d18
                    result = (*(*rcx_44 + 0xe8))(rcx_44)
                    
                    if (result != 0 && arg1[0xde].b != 0)
                        int64_t* rbx_3 = arg1[0xe0]
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        var_60 = arg1[0xdf]
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        (*(*result + 0x28))(result, &var_60)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp7_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp8_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        int64_t* rbx_4 = arg1[0xe0]
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        var_60 = arg1[0xdf]
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        (*(*result + 0x20))(result, &var_60)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp11_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp12_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp12_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                
                result.b = 1
            return result
        
        void* rsi_1 = arg1[9]
        int64_t* rcx_15 = arg1[1]
        int64_t* r8_6 = sx.q(i_6) * 0x70
        r14 = zx.q(int.d(zmm0.d))
        int64_t r9_2 = *rcx_15
        (*(r9_2 + 0x20))(rcx_15, *(r8_6 + *(rsi_1 + 0x18)), r8_6, r9_2)
        int64_t* rcx_16 = arg1[1]
        uint64_t rdx_7 = zx.q(rax_2)
        int64_t rax_12 = *rcx_16
        int32_t rax_13
        
        if (r14.b s<= 0)
            rax_13 = (*(rax_12 + 0x58))(rcx_16, rdx_7)
        else
            rax_13 = (*(rax_12 + 0x60))(rcx_16, rdx_7)
        
        int64_t* rcx_17 = arg1[1]
        (*(*rcx_17 + 0x28))(rcx_17)
        int32_t i = i_1
        
        if (rax_13 != 0xffffffff)
            arg3 = rax_13
            i_2 = i
            rax_20 = i_2.q
        else if (r14.b s> 0)
            if (i s>= *(rsi_1 + 0x20) - 1)
                goto label_140f7c5d3
            
            i += 1
            arg3 = 0
            i_2 = i
            rax_20 = i_2.q
        else if (i s<= 0)
        label_140f7c5d3:
            rax_20 = i_1.q
            i_2.q = rax_20
            i = i_2
        else
            i -= 1
            int32_t rdx_8 = *(*(sx.q(i) * 0x70 + *(rsi_1 + 0x18)) + 8)
            int32_t rax_19 = rdx_8 - 1
            
            if (rdx_8 == 0)
                rax_19 = 0
            
            arg3 = rax_19
            i_2 = i
            rax_20 = i_2.q
        
        while (i != 0 || (rax_20 u>> 0x20).d != 0)
            uint32_t r9_4 = (rax_20 u>> 0x20).d
            
            if (r9_4 == 0)
                break
            
            void* r10_1 = arg1[9]
            int32_t rcx_22 = *(r10_1 + 0x20)
            
            if (rcx_22 == 0)
                break
            
            if (rcx_22 - 1 == i)
                int32_t rcx_26 = *(*(sx.q(i) * 0x70 + *(r10_1 + 0x18)) + 8)
                int32_t rdx_11 = rcx_26 - 1
                
                if (rcx_26 == 0)
                    rdx_11 = 0
                
                if (rdx_11 == r9_4)
                    break
            
            int32_t rdx_14 = *(*(sx.q(i) * 0x70 + *(r10_1 + 0x18)) + 8)
            int32_t r8_9 = rdx_14 - 1
            
            if (rdx_14 == 0)
                r8_9 = 0
            
            if (r8_9 == r9_4)
                break
            
            sub_140f05750(r10_1, &var_60, &i_2)
            int64_t rdx_16 = var_60
            int64_t rcx_28 = var_58
            bool cond:13_1 = rdx_16.d s< rcx_28.d
            
            if (rdx_16.d == rcx_28.d)
                cond:13_1 = var_5c s< var_58:4.d
            
            if (cond:13_1)
                rcx_28 = rdx_16
            
            int64_t i_5 = sx.q(i_2)
            uint32_t rax_23 = (rcx_28 u>> 0x20).d
            
            if (rcx_28.d != 0xffffffff && rax_23 != 0xffffffff && rcx_28.d == i_5.d
                    && rax_23 == arg3)
                rax_20 = i_2.q
                break
            
            void* rsi_2 = arg1[9]
            int64_t* rcx_29 = arg1[1]
            int64_t* r8_11 = i_5 * 0x70
            int64_t r9_5 = *rcx_29
            (*(r9_5 + 0x20))(rcx_29, *(r8_11 + *(rsi_2 + 0x18)), r8_11, r9_5)
            int64_t* rcx_30 = arg1[1]
            uint64_t rdx_19 = zx.q(arg3)
            int64_t rax_24 = *rcx_30
            int32_t rax_25
            
            if (r14.b s<= 0)
                rax_25 = (*(rax_24 + 0x58))(rcx_30, rdx_19)
            else
                rax_25 = (*(rax_24 + 0x60))(rcx_30, rdx_19)
            
            int64_t* rcx_31 = arg1[1]
            (*(*rcx_31 + 0x28))(rcx_31)
            
            if (rax_25 != 0xffffffff)
                i_3 = i_2
                int32_t var_64_3 = rax_25
                rax_20 = i_3.q
                i_2.q = rax_20
                i = i_2
            else
                if (r14.b s<= 0)
                    int32_t i_7 = i_2
                    
                    if (i_7 s> 0)
                        int64_t rax_31 = *(rsi_2 + 0x18)
                        i_3 = i_7 - 1
                        int32_t rdx_20 = *(*(sx.q(i_7 - 1) * 0x70 + rax_31) + 8)
                        int32_t rax_32 = rdx_20 - 1
                        
                        if (rdx_20 == 0)
                            rax_32 = 0
                        
                        int32_t var_64_2 = rax_32
                        rax_20 = i_3.q
                        i_2.q = rax_20
                        i = i_2
                        continue
                else
                    int32_t i_4 = i_2
                    
                    if (i_4 s< *(rsi_2 + 0x20) - 1)
                        int32_t var_64_1 = 0
                        i_3 = i_4 + 1
                        rax_20 = i_3.q
                        i_2.q = rax_20
                        i = i_2
                        continue
                
                rax_20 = i_2.q
                i_2.q = rax_20
                i = i_2
                i_3.q = rax_20
        
        r14.b = 1
    label_140f7c818:
        var_70 = rax_20
        goto label_140f7c821

return 1
