// 函数: sub_141da1270
// 地址: 0x141da1270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_a0 = 0xffffffff
int64_t var_e8 = 0
int32_t var_e0 = 0
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x24)
int64_t var_b0 = 0
int64_t var_a8 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x40)
*arg3 = 0
arg3[1].d = 0

if (&arg3[2] != &var_d8)
    int64_t rcx = arg3[2]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg3[2] = 0
    arg3[3] = 0

__builtin_memset(&arg3[4], 0, 0x14)

if (&arg3[7] != &var_b0)
    int64_t rcx_1 = arg3[7]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg3[7] = 0
    arg3[8] = 0

void* rax_2 = &arg3[0xa]
arg3[9].d = 0xffffffff

if (rax_2 != &var_98)
    int64_t rcx_2 = *rax_2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
        rax_2 = &arg3[0xa]
    
    *rax_2 = 0
    *(rax_2 + 8) = 0

int64_t var_88
sub_141d95af0(&arg3[0xc], &var_88)
int64_t var_78
sub_141d95af0(&arg3[0xe], &var_78)
void* rdx_2 = &arg3[0x10]
int64_t var_68

if (rdx_2 == &var_68)
    int64_t rcx_6 = var_68
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
else
    int64_t rcx_5 = *rdx_2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        rdx_2 = &arg3[0x10]
    
    *rdx_2 = var_68
    int64_t var_60
    *(rdx_2 + 8) = var_60.d
    *(rdx_2 + 0xc) = var_60:4.d
    int64_t var_60_1 = 0
    var_68 = 0

sub_141d94e70(&var_78)
int512_t zmm1 = sub_141d94e70(&var_88)
int64_t rcx_9 = var_98

if (rcx_9 != 0)
    zmm1 = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_b0

if (rcx_10 != 0)
    zmm1 = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_d8

if (rcx_11 != 0)
    zmm1 = sub_140a74f90(rcx_11)

int64_t* result

if ((*(*arg2 + 0x28))(arg2) == 0)
    result.b = 0
else
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_3 = *rcx_13
    int32_t var_11c
    
    if (&rdx_3[1] u> rcx_13[1])
        int32_t* rdx_4 = &var_11c
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_4, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        var_11c = *rdx_3
        *rcx_13 += 4
    
    int64_t* rcx_15 = arg2[1]
    int32_t* rdx_5 = *rcx_15
    int32_t result_2
    
    if (&rdx_5[1] u> rcx_15[1])
        int32_t* rdx_6 = &result_2
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_6, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_6, 4)
    else
        result_2 = *rdx_5
        *rcx_15 += 4
    
    int32_t result_1
    int32_t var_120
    
    if (var_11c != 0x1ca2e27f)
    label_141da1c8e:
        
        if (result_2 u< 4)
            int32_t i = 0
            
            if (arg3[0x11].d s> 0)
                int64_t r9 = 0
                int64_t r10_1 = 0
                int64_t rdx_50 = 0
                
                do
                    if (r9 s<= 0 || i - 1 s>= arg3[0xd].d)
                        *(rdx_50 + arg3[0x10] + 4) = 0
                    else
                        *(rdx_50 + arg3[0x10] + 4) = *(r10_1 + arg3[0xc] - 0x18)
                    
                    int32_t rax_102
                    
                    if (r9 s< 0 || i s>= arg3[0xd].d)
                        rax_102 = *arg3
                    else
                        rax_102 = *(arg3[0xc] + r10_1 + 0x38)
                    
                    i += 1
                    r9 += 1
                    r10_1 += 0x50
                    *(rdx_50 + arg3[0x10] + 8) = rax_102
                    rdx_50 += 0x28
                while (i s< arg3[0x11].d)
        
        int32_t* r14_10 = arg3[0x10]
        int32_t* r10_2 = r14_10
        void* r11_1 = &r14_10[sx.q(arg3[0x11].d) * 0xa]
        
        if (r14_10 == r11_1)
        label_141da1d82:
            void* r14_11 = arg3[0xc]
            int64_t rcx_89 = 0
            uint64_t rax_105 = sx.q(arg3[0xd].d)
            __builtin_memset(&var_e8, 0, 0x2c)
            void* r15_4 = rax_105 * 0x50 + r14_11
            int128_t var_c8
            var_c8:0xc.d = 0x80
            int32_t var_b8_1 = 0xffffffff
            int32_t var_b4_1 = 0
            int64_t var_a8_1 = 0
            int32_t var_a0_1 = 0
            
            if (r14_11 != r15_4)
                int64_t* rdi_5 = r14_11 + 8
                
                do
                    if (*sub_140960120(&var_e8, &var_120, rdi_5) != 0xffffffff)
                        *(arg2 + 0x29) |= 1
                        rcx_89 = var_a8_1
                        goto label_141da1e47
                    
                    sub_1406b3860(&var_e8, &result_1, rdi_5, nullptr)
                    r14_11 += 0x50
                    rdi_5 = &rdi_5[0xa]
                while (r14_11 != r15_4)
                
                rcx_89 = var_a8_1
            
            if ((arg5 & 1) == 0)
                rax_105 = zx.q(arg3[9].d)
            
            if ((arg5 & 1) == 0 && (rax_105.d s< 0 || rax_105.d s>= arg3[0xb].d))
                rax_105.b = 0
            else
                rax_105.b = 1
            
            *(arg3 + 0x31) = rax_105.b
            int64_t* rbx
            
            if (rax_105.b == 0 || (*(arg2 + 0x29) & 1) != 0)
            label_141da1e47:
                rbx.b = 0
            else
                rbx.b = 1
            
            int32_t var_a0_2 = 0
            
            if (rcx_89 != 0)
                sub_140a74f90(rcx_89)
            
            sub_140669e00(&var_e8)
            result = zx.q(rbx.b)
        else
            while (true)
                int32_t r8_8 = r10_2[1]
                int32_t* rcx_88 = r14_10
                int32_t r9_1 = r10_2[2]
                
                if (r14_10 != r11_1)
                    while (true)
                        if (*r10_2 != *rcx_88)
                            int32_t rdx_51 = rcx_88[1]
                            int32_t rax_104 = rcx_88[2]
                            
                            if (r8_8 u<= r9_1 && rdx_51 u<= rax_104)
                                if (r8_8 u>= rdx_51)
                                    rdx_51 = r8_8
                                
                                if (r9_1 u<= rax_104)
                                    rax_104 = r9_1
                                
                                if (rdx_51 u<= rax_104 && rax_104 != rdx_51)
                                    *(arg2 + 0x29) |= 1
                                    break
                        
                        rcx_88 = &rcx_88[0xa]
                        
                        if (rcx_88 == r11_1)
                            goto label_141da1d79
                    
                    break
                
            label_141da1d79:
                r10_2 = &r10_2[0xa]
                
                if (r10_2 == r11_1)
                    goto label_141da1d82
            
            result.b = 0
    else
        *arg4 = result_2
        int64_t* rcx_17 = arg2[1]
        int32_t* rdx_7 = *rcx_17
        
        if (&rdx_7[1] u> rcx_17[1])
            int32_t* rdx_8 = arg3
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_8, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_8, 4)
        else
            *arg3 = *rdx_7
            int64_t* rax_16 = arg2[1]
            *rax_16 += 4
        
        int64_t* rcx_19 = arg2[1]
        int32_t* rdx_9 = *rcx_19
        
        if (&rdx_9[1] u<= rcx_19[1])
            *(arg3 + 4) = *rdx_9
            int64_t* rax_20 = arg2[1]
            *rax_20 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, arg3 + 4, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, arg3 + 4, 4)
        
        int64_t* rcx_21 = arg2[1]
        int32_t* rdx_11 = *rcx_21
        
        if (&rdx_11[1] u<= rcx_21[1])
            arg3[1].d = *rdx_11
            int64_t* rax_24 = arg2[1]
            *rax_24 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, &arg3[1], zmm1)
        else
            (*(*arg2 + 0x150))(arg2, &arg3[1], 4)
        
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        int512_t zmm1_1 = sub_140a1d9d0(arg2, &var_118, zmm1)
        
        if (&arg4[2] != &var_118)
            int64_t r12_1 = var_118
            int32_t r8 = arg4[5]
            arg4[4] = var_110_1
            
            if (var_110_1 != 0 || r8 != 0)
                sub_1405a4c70(&arg4[2], var_110_1, r8)
                memcpy(*(arg4 + 8), r12_1, var_110_1 * 2)
            else
                arg4[5] = 0
        
        int64_t var_108
        
        if (result_2 u>= 1)
            zmm1_1 = sub_140597da0(&arg3[2], sub_140a35c50(&var_118, &var_108))
            int64_t rcx_28 = var_108
            
            if (rcx_28 != 0)
                zmm1_1 = sub_140a74f90(rcx_28)
        
        int64_t* rcx_29 = arg2[1]
        int32_t* rdx_18 = *rcx_29
        
        if (&rdx_18[1] u> rcx_29[1])
            int32_t* rdx_19 = &var_120
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_19, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_19, 4)
        else
            var_120 = *rdx_18
            *rcx_29 += 4
        
        int32_t rax_28
        rax_28.b = var_120 != 0
        arg3[6].b = rax_28.b
        result = zx.q(result_2)
        
        if (result.d u>= 3)
            sub_14090dc80(arg2, &arg3[4], zmm1_1)
            result = zx.q(result_2)
        
        if (result.d u>= 2)
            int64_t* rcx_32 = arg2[1]
            int32_t* rdx_21 = *rcx_32
            
            if (&rdx_21[1] u> rcx_32[1])
                int32_t* rdx_22 = &result_1
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_22, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_22, 4)
            else
                result_1 = *rdx_21
                *rcx_32 += 4
            
            int32_t rax_31
            rax_31.b = result_1 != 0
            *(arg3 + 0x32) = rax_31.b
            result = zx.q(result_2)
        
        if (result.d u>= 6)
            int64_t* rcx_34 = arg2[1]
            int32_t* rdx_23 = *rcx_34
            
            if (&rdx_23[1] u> rcx_34[1])
                int32_t* rdx_24 = &result_1
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_24, zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_24, 4)
            else
                result_1 = *rdx_23
                *rcx_34 += 4
            
            int32_t rax_34
            rax_34.b = result_1 != 0
            *(arg3 + 0x33) = rax_34.b
            sub_1407e5270(arg2, &arg3[7], zmm1_1)
        
        if (arg3[6].b != 0 || *(arg3 + 0x33) == 0 || arg3[8].d != 0)
            int64_t rax_37 = (*(*arg2 + 0x28))(arg2)
            int64_t rdx_26 = *arg2
            int64_t r15_1 = rax_37
            var_108 = rax_37
            
            if ((*(rdx_26 + 0x30))(arg2, rdx_26) != 0)
            label_141da1c77:
                int64_t rcx_84 = var_118
                
                if (rcx_84 != 0)
                    sub_140a74f90(rcx_84)
                
                goto label_141da1c8e
            
            while (true)
                int64_t rax_40 = (*(*arg2 + 0x20))(arg2)
                int64_t* rdx_27 = arg2[1]
                int32_t* r8_3 = *rdx_27
                
                if (&r8_3[1] u> rdx_27[1])
                    int32_t* rdx_28 = &result_1
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg2, rdx_28, zmm1_1)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_28, 4)
                else
                    result_1 = *r8_3
                    *rdx_27 += 4
                
                int64_t rdi_2 = sx.q(arg3[0xb].d)
                int32_t rax_42 = (rdi_2 + 1).d
                arg3[0xb].d = rax_42
                
                if (rax_42 s> *(arg3 + 0x5c))
                    sub_1405a4df0(&arg3[0xa])
                
                int64_t rax_43 = arg3[0xa]
                int64_t rcx_44 = rdi_2 * 3
                *(rax_43 + (rcx_44 << 3)) = 0xffffffff
                *(rax_43 + (rcx_44 << 3) + 4) = 0
                *(rax_43 + (rcx_44 << 3) + 8) = 0
                *(rax_43 + (rcx_44 << 3) + 0x10) = 0
                int32_t* r13_1 = arg3[0xa] + (rcx_44 << 3)
                *r13_1 = result_1
                int64_t* rcx_45 = arg2[1]
                int32_t* rdx_30 = *rcx_45
                
                if (&rdx_30[1] u<= rcx_45[1])
                    r13_1[1] = *rdx_30
                    int64_t* rax_48 = arg2[1]
                    *rax_48 += 4
                else if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, &r13_1[1], zmm1_1)
                else
                    (*(*arg2 + 0x150))(arg2, &r13_1[1], 4)
                
                *(r13_1 + 8) = rax_40
                result = (*(*arg2 + 0x20))(arg2)
                int64_t rcx_48 = sx.q(r13_1[1])
                *(r13_1 + 0x10) = result
                
                if (rcx_48.d s< 0)
                    goto label_141da1a03
                
                if (rcx_48 + result s> r15_1)
                    goto label_141da1a03
                
                result = zx.q(result_1)
                
                if (result.d == 0)
                    if (arg3[9].d != 0xffffffff)
                        goto label_141da1a03
                    
                    arg3[9].d = rdi_2.d
                else if (result.d == 1)
                    int64_t r14_8 = sx.q(arg3[0x11].d)
                    int32_t rax_66 = (r14_8 + 1).d
                    arg3[0x11].d = rax_66
                    
                    if (rax_66 s> *(arg3 + 0x8c))
                        sub_1405c4ec0(&arg3[0x10])
                    
                    int64_t rax_67 = arg3[0x10]
                    int64_t rcx_70 = r14_8 * 5
                    *(rax_67 + (rcx_70 << 3)) = 0xffffffff
                    *(rax_67 + (rcx_70 << 3) + 4) = 0
                    *(rax_67 + (rcx_70 << 3) + 0xc) = 0
                    *(rax_67 + (rcx_70 << 3) + 0x18) = 0
                    *(rax_67 + (rcx_70 << 3) + 0x20) = 0
                    int64_t rax_68 = arg3[0x10]
                    *(rax_68 + (rcx_70 << 3)) = rdi_2.d
                    void* r14_9 = rax_68 + (rcx_70 << 3)
                    *(r14_9 + 0x20) = arg3[5]
                    int32_t* rdi_3
                    
                    if (result_2 u< 4)
                        rdi_3 = r14_9 + 0xc
                        *rdi_3 = r13_1[1]
                    else
                        int64_t* rcx_71 = arg2[1]
                        int32_t* r8_6 = *rcx_71
                        
                        if (&r8_6[1] u<= rcx_71[1])
                            *(r14_9 + 4) = *r8_6
                            int64_t* rax_72 = arg2[1]
                            *rax_72 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, r14_9 + 4, zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, r14_9 + 4, 4)
                        
                        int64_t* rcx_73 = arg2[1]
                        int32_t* r8_7 = *rcx_73
                        
                        if (&r8_7[1] u<= rcx_73[1])
                            *(r14_9 + 8) = *r8_7
                            int64_t* rax_76 = arg2[1]
                            *rax_76 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, r14_9 + 8, zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, r14_9 + 8, 4)
                        
                        int64_t* rcx_75 = arg2[1]
                        rdi_3 = r14_9 + 0xc
                        int32_t* rdx_43 = *rcx_75
                        
                        if (&rdx_43[1] u<= rcx_75[1])
                            *rdi_3 = *rdx_43
                            int64_t* rax_80 = arg2[1]
                            *rax_80 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, rdi_3, zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, rdi_3, 4)
                    
                    if (result_2 u>= 6)
                        int64_t* rcx_79 = arg2[1]
                        int32_t* rdx_46 = *rcx_79
                        
                        if (&rdx_46[1] u<= rcx_79[1])
                            *(r14_9 + 0x10) = *rdx_46
                            int64_t* rax_90 = arg2[1]
                            *rax_90 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, r14_9 + 0x10, zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, r14_9 + 0x10, 4)
                        
                        *(r14_9 + 0x18) = (*(*arg2 + 0x20))(arg2)
                    else
                        *(r14_9 + 0x18) = (*(*arg2 + 0x20))(arg2)
                        
                        if (*(arg3 + 0x32) == 0)
                            *(r14_9 + 0x10) = *rdi_3
                        else
                            *(r14_9 + 0x10) = (*(*arg1 + 0x1a0))(arg1, arg2)
                    
                    result = sx.q(*rdi_3)
                    
                    if (result.d s< 0)
                        goto label_141da1a03
                    
                    if (result + *(r14_9 + 0x18) s> var_108)
                        goto label_141da1a03
                    
                    result = sx.q(*(r14_9 + 0x10))
                    
                    if (result.d s< 0)
                        goto label_141da1a03
                    
                    arg3[5] += result
                    r15_1 = var_108
                else
                    int32_t* r14_5
                    
                    if (result.d == 2)
                        r14_5 = sx.q(sub_141d9b140(&arg3[0xc], 1)) * 0x50 + arg3[0xc]
                    label_141da18f5:
                        *r14_5 = rdi_2.d
                        zmm1_1 = sub_140a1d9d0(arg2, &r14_5[0xa], 
                            sub_140a1d9d0(arg2, &r14_5[6], sub_140a1d9d0(arg2, &r14_5[2], zmm1_1)))
                        int64_t* rcx_57 = arg2[1]
                        int32_t* r8_4 = *rcx_57
                        
                        if (&r8_4[1] u<= rcx_57[1])
                            r14_5[0xe] = *r8_4
                            int64_t* rax_55 = arg2[1]
                            *rax_55 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, &r14_5[0xe], zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, &r14_5[0xe], 4)
                        
                        int64_t* rcx_59 = arg2[1]
                        int32_t* r8_5 = *rcx_59
                        
                        if (&r8_5[1] u<= rcx_59[1])
                            r14_5[0xf] = *r8_5
                            int64_t* rax_59 = arg2[1]
                            *rax_59 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, &r14_5[0xf], zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, &r14_5[0xf], 4)
                        
                        int64_t* rcx_61 = arg2[1]
                        int32_t* rdx_38 = *rcx_61
                        
                        if (&rdx_38[1] u<= rcx_61[1])
                            r14_5[0x10] = *rdx_38
                            int64_t* rax_63 = arg2[1]
                            *rax_63 += 4
                        else if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, &r14_5[0x10], zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, &r14_5[0x10], 4)
                        
                        result = (*(*arg2 + 0x20))(arg2)
                        *(r14_5 + 0x48) = result
                        int64_t rcx_64 = sx.q(r14_5[0x10])
                        
                        if (rcx_64.d s< 0)
                            goto label_141da1a03
                        
                        if (rcx_64 + result s> r15_1)
                            goto label_141da1a03
                    else if (result.d == 3)
                        r14_5 = sx.q(sub_141d9b140(&arg3[0xe], (result - 2).d)) * 0x50 + arg3[0xe]
                        goto label_141da18f5
                
                if ((*(arg2 + 0x29) & 1) != 0)
                    break
                
                (*(*arg2 + 0x178))(arg2, sx.q(r13_1[1]) + *(r13_1 + 0x10))
                
                if ((*(*arg2 + 0x30))(arg2) != 0)
                    goto label_141da1c77
        else
        label_141da1a03:
            *(arg2 + 0x29) |= 1
        
        int64_t rcx_66 = var_118
        
        if (rcx_66 != 0)
            sub_140a74f90(rcx_66)
        
        result.b = 0

__security_check_cookie(rax_1 ^ &var_148)
return result
