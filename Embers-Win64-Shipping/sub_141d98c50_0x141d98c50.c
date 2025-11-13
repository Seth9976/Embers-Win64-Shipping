// 函数: sub_141d98c50
// 地址: 0x141d98c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
void* rsi = arg2

if (result[0x2e].b == 0)
    *(arg2 + 0xb8) = 0
    
    if (*(arg2 + 0xbc) != 0)
        sub_1405c5510(arg2 + 0xb0, 0)
    
    void* rcx_1 = *arg1
    int64_t var_68
    sub_141d9ef80(rcx_1, &var_68, rcx_1 + 0x3a0)
    int64_t* rcx_2 = *arg1
    int64_t* var_188
    result = (*(*rcx_2 + 0x1d8))(rcx_2, &var_188, &var_68)
    int64_t* rdx_2 = var_188
    int64_t* var_180
    
    if (rdx_2 == 0)
    label_141d993ef:
        
        if (var_180 != 0)
            var_180[1].d -= 1
            
            if (var_180[1].d == 1)
                result = (**var_180)(var_180)
                int32_t temp1_1 = *(var_180 + 0xc)
                *(var_180 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_180 + 8))(var_180, 1)
    else
        int64_t* rcx_3 = *arg1
        int32_t var_168 = 6
        int64_t var_160_1 = 0
        int64_t var_158_1 = 0
        int512_t zmm1_1
        result, zmm1_1 = sub_141da1270(rcx_3, rdx_2, rsi + 0x20, &var_168, 0)
        char rbx_1 = result.b
        
        if (var_160_1 != 0)
            result, zmm1_1 = sub_140a74f90(var_160_1)
        
        int64_t var_1b8
        int64_t var_1b0_1
        int32_t arg_8
        int32_t rbx_2
        int64_t r12_1
        int32_t count_6
        
        if (rbx_1 != 0)
            rbx_2 = 0
            r12_1 = 0
            count_6 = 0
            arg_8 = 0
            var_1b8 = 0
            var_1b0_1 = 0
        
        if (rbx_1 != 0 && arg1[1].d s>= 0)
            int32_t r10_1 = 0
            
            while (true)
                void* r9_2 = *arg1
                int32_t rax_3
                
                if (*(r9_2 + 0x70) != *(r9_2 + 0x9c))
                    void* r8_4 = r9_2 + 0xa0
                    void* rcx_5 = *(r8_4 + 8)
                    
                    if (rcx_5 != 0)
                        r8_4 = rcx_5
                    
                    rax_3 = *(r8_4 + (((sx.q(*(r9_2 + 0xb0)) - 1) & sx.q(r10_1)) << 2))
                
                if (*(r9_2 + 0x70) == *(r9_2 + 0x9c) || rax_3 == 0xffffffff)
                label_141d98db6:
                    rax_3 = -1
                else
                    int64_t rdx_6 = *(r9_2 + 0x68)
                    
                    while (true)
                        int64_t rcx_7 = sx.q(rax_3) << 5
                        
                        if (*(rcx_7 + rdx_6) == r10_1)
                            break
                        
                        rax_3 = *(rcx_7 + rdx_6 + 0x18)
                        
                        if (rax_3 == 0xffffffff)
                            goto label_141d98db6
                
                void** var_138
                int64_t* var_130
                char var_10f
                
                if (rax_3 == 0xffffffff)
                    int64_t* rcx_21 = var_188
                    int64_t rbx_4 = sx.q(rbx_2) * 0xa
                    (*(*rcx_21 + 0x178))(rcx_21, *(*(rsi + 0x80) + (rbx_4 << 3) + 0x48))
                    int32_t rdx_27 = 0
                    
                    if (count_6 s< 0)
                        var_1b0_1.d = 0
                        
                        if (count_6 != 0)
                            sub_1405c5510(&var_1b8, 0)
                            rdx_27 = var_1b0_1.d
                            count_6 = var_1b0_1:4.d
                            r12_1 = var_1b8
                    
                    uint32_t count_4 = *(*(rsi + 0x80) + (rbx_4 << 3) + 0x40) + rdx_27
                    var_1b0_1.d = count_4
                    
                    if (count_4 s> count_6)
                        sub_1405daba0(&var_1b8)
                        count_6 = var_1b0_1:4.d
                        count_4 = var_1b0_1.d
                        r12_1 = var_1b8
                    
                    int64_t* rcx_24 = var_188
                    (*(*rcx_24 + 0x150))(rcx_24, r12_1, sx.q(count_4))
                    bool cond:1_1 = *(rsi + 0x53) == 0
                    int64_t var_1a8 = 0
                    int64_t var_1a0_1 = 0
                    int32_t count_3
                    int64_t rcx_27
                    
                    if (not(cond:1_1))
                        int64_t* rcx_25 = *arg1
                        result = (*(*rcx_25 + 0x1b8))(rcx_25)
                        
                        if (result.b != 0)
                            int32_t var_80_1 = *(rsi + 0x60)
                            int64_t rax_25 = **arg1
                            int128_t var_58 = (*(rsi + 0x58)).o
                            uint32_t count_5 = count_4
                            int128_t zmm0_1 = r12_1.o
                            var_168.o = zmm0_1
                            result = (*(rax_25 + 0x1d0))(zmm0_1, &var_168, &var_1a8, &var_58)
                            
                            if (result.b != 0)
                                count_3 = var_1a0_1:4.d
                                count_4 = var_1a0_1.d
                                rcx_27 = var_1a8
                                goto label_141d990ce
                        
                        *(arg2 + 0xb8) = 0
                        
                        if (*(arg2 + 0xbc) != 0)
                            result = sub_1405c5510(arg2 + 0xb0, 0)
                        
                        goto label_141d9912f
                    
                    rcx_27 = r12_1
                    var_1b8 = 0
                    count_3 = count_6
                    var_1a8 = rcx_27
                    var_1a0_1:4.d = count_3
                    r12_1 = 0
                    var_1a0_1.d = count_4
                    count_6 = 0
                    var_1b0_1 = 0
                label_141d990ce:
                    bool cond:5_1 = *(rsi + 0x52) == 0
                    int64_t var_198 = 0
                    uint32_t count = 0
                    
                    if (not(cond:5_1))
                        int64_t* rcx_28 = *arg1
                        result = (*(*rcx_28 + 0x198))(rcx_28)
                        
                        if (result.b != 0)
                            int64_t* rcx_29 = *arg1
                            result = (*(*rcx_29 + 0x1a8))(rcx_29, &var_1a8, &var_198)
                            
                            if (result.b != 0)
                                goto label_141d99171
                        
                        bool cond:4_1 = *(arg2 + 0xbc) == 0
                        *(arg2 + 0xb8) = 0
                        
                        if (not(cond:4_1))
                            result = sub_1405c5510(arg2 + 0xb0, 0)
                        
                        int64_t rcx_31 = var_198
                        
                        if (rcx_31 != 0)
                            result = sub_140a74f90(rcx_31)
                        
                    label_141d9912f:
                        int64_t rcx_32 = var_1a8
                        
                        if (rcx_32 != 0)
                            result = sub_140a74f90(rcx_32)
                        
                        if (r12_1 != 0)
                            result = sub_140a74f90(r12_1)
                        
                        break
                    
                    var_198 = rcx_27
                    var_1a8 = 0
                    count = count_4
                    count = count_3
                    int64_t var_1a0_2 = 0
                label_141d99171:
                    int64_t var_170_1 = 0
                    memset(&var_138, 0, 0x90)
                    sub_140b4c2a0(&var_138)
                    int64_t var_a8_3 = 0
                    var_138 = &data_142d6ad48
                    int64_t var_98_2 = var_170_1
                    int64_t* var_a0_2 = arg2 + 0xb0
                    sub_140b552b0(&var_138, 1)
                    int64_t rdx_32
                    rdx_32.b = 1
                    var_138[0x1b](&var_138, rdx_32)
                    int64_t var_a8_4 = sx.q(*(arg2 + 0xb8))
                    uint32_t count_2 = count
                    int32_t* rdx_33 = *var_130
                    
                    if (&rdx_33[1] u> var_130[1])
                        int32_t* rdx_34 = &count_2
                        void*** rcx_39 = &var_138
                        
                        if ((var_10f & 0x20) != 0)
                            sub_140b54070(rcx_39, rdx_34, zmm1_1)
                        else
                            var_138[0x2a](rcx_39, rdx_34, 4)
                    else
                        count_2 = *rdx_33
                        *var_130 += 4
                    
                    if (count != 0)
                        int32_t rax_35 = *(arg2 + 0xb8)
                        int32_t rdx_35 = rax_35 + count
                        
                        if (rdx_35 s> *(arg2 + 0xbc))
                            sub_1405c5510(arg2 + 0xb0, rdx_35)
                            rax_35 = *(arg2 + 0xb8)
                        
                        memcpy(sx.q(rax_35) + *(arg2 + 0xb0), var_198, count)
                        *(arg2 + 0xb8) += count
                    
                    int64_t* rax_36 = j_sub_140a82f30(0x18)
                    int64_t* rbx_7 = rax_36
                    
                    if (rax_36 == 0)
                        rbx_7 = nullptr
                    else
                        *rax_36 = 0
                        int64_t r14_2 = var_198
                        rax_36[1].d = count
                        
                        if (count != 0)
                            sub_1405da9e0(rbx_7, count, 0)
                            memcpy(*rbx_7, r14_2, count)
                            rbx_7[2] = 0
                        else
                            *(rax_36 + 0xc) = 0
                            rax_36[2] = 0
                    
                    void*** rax_37 = j_sub_140a82f30(0x18)
                    
                    if (rax_37 == 0)
                        rax_37 = nullptr
                    else
                        rax_37[1].d = 1
                        *rax_37 = &data_1432398f0
                        *(rax_37 + 0xc) = 1
                        rax_37[2] = rbx_7
                    
                    int64_t* var_148 = rbx_7
                    sub_1409175b0(*arg1 + 0x68, &arg_8, &var_148)
                    
                    if (rax_37 != 0)
                        rax_37[1].d -= 1
                        
                        if (rax_37[1].d == 1)
                            (**rax_37)(rax_37)
                            int32_t temp6_1 = *(rax_37 + 0xc)
                            *(rax_37 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*rax_37)[1](rax_37, 1)
                    
                    result, zmm1_1 = sub_140b4cb40(&var_138)
                    int64_t rcx_50 = var_198
                    
                    if (rcx_50 != 0)
                        result, zmm1_1 = sub_140a74f90(rcx_50)
                    
                    int64_t rcx_51 = var_1a8
                    
                    if (rcx_51 != 0)
                        result, zmm1_1 = sub_140a74f90(rcx_51)
                    
                    rbx_2 = arg_8
                else
                    int64_t var_178_1 = 0
                    memset(&var_138, 0, 0x90)
                    sub_140b4c2a0(&var_138)
                    int64_t var_a8_1 = 0
                    var_138 = &data_142d6ad48
                    int64_t var_98_1 = var_178_1
                    int64_t* var_a0_1 = arg2 + 0xb0
                    sub_140b552b0(&var_138, 1)
                    int64_t rdx_8
                    rdx_8.b = 1
                    var_138[0x1b](&var_138, rdx_8)
                    void* r9_3 = *arg1
                    int64_t var_a8_2 = sx.q(*(arg2 + 0xb8))
                    int32_t* rdx_14
                    
                    if (*(r9_3 + 0x70) == *(r9_3 + 0x9c))
                    label_141d98e8d:
                        rdx_14 = nullptr
                    else
                        void* r8_5 = r9_3 + 0xa0
                        void* rcx_12 = *(r8_5 + 8)
                        
                        if (rcx_12 != 0)
                            r8_5 = rcx_12
                        
                        int32_t rax_9 = *(r8_5 + (((sx.q(*(r9_3 + 0xb0)) - 1) & sx.q(rbx_2)) << 2))
                        
                        if (rax_9 == 0xffffffff)
                        label_141d98e8d_1:
                            rdx_14 = nullptr
                        else
                            while (true)
                                rdx_14 = (sx.q(rax_9) << 5) + *(r9_3 + 0x68)
                                
                                if (*rdx_14 == rbx_2)
                                    break
                                
                                rax_9 = rdx_14[6]
                                
                                if (rax_9 == 0xffffffff)
                                    goto label_141d98e8d_2
                            
                            if (rax_9 == 0xffffffff)
                            label_141d98e8d_2:
                                rdx_14 = nullptr
                    
                    int32_t arg_18 = *(*(rdx_14 + 8) + 8)
                    int32_t* rdx_15 = *var_130
                    
                    if (&rdx_15[1] u> var_130[1])
                        int32_t* rdx_16 = &arg_18
                        void*** rcx_15 = &var_138
                        
                        if ((var_10f & 0x20) != 0)
                            sub_140b54070(rcx_15, rdx_16, zmm1_1)
                        else
                            var_138[0x2a](rcx_15, rdx_16, 4)
                    else
                        arg_18 = *rdx_15
                        *var_130 += 4
                    
                    void* r9_4 = *arg1
                    int32_t* rdx_22
                    
                    if (*(r9_4 + 0x70) == *(r9_4 + 0x9c))
                    label_141d98f4d:
                        rdx_22 = nullptr
                    else
                        void* r8_7 = r9_4 + 0xa0
                        void* rcx_16 = *(r8_7 + 8)
                        
                        if (rcx_16 != 0)
                            r8_7 = rcx_16
                        
                        int32_t rax_16 = *(r8_7 + (((sx.q(*(r9_4 + 0xb0)) - 1) & sx.q(rbx_2)) << 2))
                        
                        if (rax_16 == 0xffffffff)
                        label_141d98f4d_1:
                            rdx_22 = nullptr
                        else
                            while (true)
                                rdx_22 = (sx.q(rax_16) << 5) + *(r9_4 + 0x68)
                                
                                if (*rdx_22 == rbx_2)
                                    break
                                
                                rax_16 = rdx_22[6]
                                
                                if (rax_16 == 0xffffffff)
                                    goto label_141d98f4d_2
                            
                            if (rax_16 == 0xffffffff)
                            label_141d98f4d_2:
                                rdx_22 = nullptr
                    
                    int64_t* r14_1 = *(rdx_22 + 8)
                    uint32_t count_1 = r14_1[1].d
                    
                    if (count_1 != 0)
                        int32_t rax_17 = *(arg2 + 0xb8)
                        int32_t rdx_23 = count_1 + rax_17
                        
                        if (rdx_23 s> *(arg2 + 0xbc))
                            sub_1405c5510(arg2 + 0xb0, rdx_23)
                            rax_17 = *(arg2 + 0xb8)
                        
                        memcpy(sx.q(rax_17) + *(arg2 + 0xb0), *r14_1, count_1)
                        *(arg2 + 0xb8) += count_1
                    
                    result, zmm1_1 = sub_140b4cb40(&var_138)
                rbx_2 += 1
                r10_1 = rbx_2
                arg_8 = rbx_2
                
                if (rbx_2 s> arg1[1].d)
                    if (r12_1 != 0)
                        result = sub_140a74f90(r12_1)
                    
                    goto label_141d993b4
                
                rsi = arg2
            
            goto label_141d993ef
        
    label_141d993b4:
        int64_t* rbx_9 = var_180
        var_188 = nullptr
        
        if (rbx_9 != 0)
            var_180 = nullptr
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                result = (**rbx_9)(rbx_9)
                int32_t temp3_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_9 + 8))(rbx_9, 1)
            
            goto label_141d993ef
    int64_t rcx_58 = var_68
    
    if (rcx_58 != 0)
        return sub_140a74f90(rcx_58)

return result
