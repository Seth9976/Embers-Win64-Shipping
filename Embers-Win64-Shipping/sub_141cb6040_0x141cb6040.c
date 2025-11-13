// 函数: sub_141cb6040
// 地址: 0x141cb6040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* var_88 = arg2
int64_t* rsi = &arg3[5]
int32_t rbx = sub_14098ef70(&arg2[5])[1].d
int64_t* rax_3 = sub_14098ef70(rsi)
int64_t r15
r15.b = rbx != rax_3[1].d
int64_t* var_78
int64_t* var_68
int32_t i_3

if (rbx == rax_3[1].d)
    i_3 = 0
    var_68 = sub_14098ef70(&var_88[5])
    var_68.o = var_68.o
    int64_t* r14_1 = var_68
    int32_t i = i_3
    
    while (i s>= 0)
        if (i s>= r14_1[1].d)
            break
        
        int64_t* rbx_2 = *(*r14_1 + sx.q(i) * 0x18)
        var_78 = rbx_2
        int64_t* rax_6 = sub_14098ef70(rsi)
        int32_t r9_1 = var_78:4.d
        int32_t r8 = 0
        int32_t j_4 = rax_6[1].d
        int32_t j = j_4
        int64_t r11_1 = *rax_6
        
        if (j_4 s> 0)
            do
                int32_t rcx_7 = j & 0x80000001
                
                if (rcx_7 s< 0)
                    rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(j)
                int32_t j_2 = (temp3_1 - temp2_1) s>> 1
                j = j_2
                int32_t rax_10 = j_2 + r8
                int64_t rcx_10 = sx.q(rax_10) * 3
                int32_t rax_12 = *(r11_1 + (rcx_10 << 3))
                int32_t rax_13 = rax_12 - rbx_2.d
                
                if (rax_12 == rbx_2.d)
                    rax_13 = *(r11_1 + (rcx_10 << 3) + 4) - r9_1
                
                if (rax_13 s< 0)
                    r8 = rax_10 + rcx_7
            while (j s> 0)
        
        if (r8 s< j_4)
            int64_t rcx_11 = sx.q(r8) * 3
            int32_t rbx_3 = rbx_2.d - *(r11_1 + (rcx_11 << 3))
            
            if (rbx_2.d == *(r11_1 + (rcx_11 << 3)))
                rbx_3 = r9_1 - *(r11_1 + (rcx_11 << 3) + 4)
            
            if (rbx_3 s>= 0 && r8 != 0xffffffff && r11_1 + ((rcx_11 + 1) << 3) != 0)
                i += 1
                rsi = &arg3[5]
                continue
        
        r15.b = 1
        break

int64_t* rdi_1 = var_88
int64_t rcx_12 = arg3[1]

if (rdi_1[1] != rcx_12 || rdi_1[3] != arg3[3])
    sub_140943590(arg1, *rdi_1)
    var_68 = arg3
    i_3.q = &var_88
    sub_140b92a80(arg1, &var_78, &var_68, nullptr)
    rcx_12 = arg3[1]
    rdi_1 = var_88

int64_t* rbx_4 = rdi_1[1]

if (rbx_4 != rcx_12)
    int32_t rax_19 = arg1[0xb].d
    var_78 = rbx_4
    int64_t* rdi_4
    
    if (rax_19 == *(arg1 + 0x84))
    label_141cb624e:
        rdi_4 = nullptr
    else
        int32_t rax_21 = sub_140b5ead0(rbx_4.d) + var_78:4.d
        void* r8_2 = &arg1[0x11]
        void* rcx_16 = *(r8_2 + 8)
        
        if (rcx_16 != 0)
            r8_2 = rcx_16
        
        int32_t rax_23 = *(r8_2 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_21)) << 2))
        
        if (rax_23 == 0xffffffff)
        label_141cb624e_1:
            rdi_4 = nullptr
        else
            while (true)
                rdi_4 = (sx.q(rax_23) << 5) + arg1[0xa]
                
                if (*rdi_4 == rbx_4)
                    break
                
                rax_23 = rdi_4[3].d
                
                if (rax_23 == 0xffffffff)
                    goto label_141cb624e_2
            
            if (rax_23 == 0xffffffff)
            label_141cb624e_2:
                rdi_4 = nullptr
    
    int64_t* rax_24 = arg3[1]
    var_78 = rax_24
    void* rax_27 = sub_141c904b0(&arg1[0xa], sub_140b5ead0(rax_24.d) + var_78:4.d, &arg3[1])
    void* rcx_19 = &rdi_4[1]
    
    if (rdi_4 == 0)
        rcx_19 = nullptr
    
    sub_1409d7d20(rcx_19, &var_88)
    int64_t rdi_5 = sx.q(*(rax_27 + 8))
    int32_t rcx_20 = (rdi_5 + 1).d
    *(rax_27 + 8) = rcx_20
    
    if (rcx_20 s> *(rax_27 + 0xc))
        sub_1405a4d70(rax_27)
    
    *(*rax_27 + (rdi_5 << 3)) = var_88
    rdi_1 = var_88

int64_t* rbx_6 = rdi_1[2]
int64_t* r14_2 = &arg3[2]
var_68 = r14_2

if (rbx_6 != *r14_2)
    var_78 = rbx_6
    int64_t* rdi_8
    
    if (arg1[0x15].d == *(arg1 + 0xd4))
    label_141cb6331:
        rdi_8 = nullptr
    else
        int32_t rax_31 = sub_140b5ead0(rbx_6.d) + var_78:4.d
        void* r8_4 = &arg1[0x1b]
        void* rcx_24 = *(r8_4 + 8)
        
        if (rcx_24 != 0)
            r8_4 = rcx_24
        
        int32_t rax_33 = *(r8_4 + (((sx.q(arg1[0x1d].d) - 1) & sx.q(rax_31)) << 2))
        
        if (rax_33 == 0xffffffff)
        label_141cb6331_1:
            rdi_8 = nullptr
        else
            while (true)
                rdi_8 = (sx.q(rax_33) << 5) + arg1[0x14]
                
                if (*rdi_8 == rbx_6)
                    break
                
                rax_33 = rdi_8[3].d
                
                if (rax_33 == 0xffffffff)
                    goto label_141cb6331_2
            
            if (rax_33 == 0xffffffff)
            label_141cb6331_2:
                rdi_8 = nullptr
    
    int64_t* rax_34 = *r14_2
    var_78 = rax_34
    void* rax_37 = sub_141c904b0(&arg1[0x14], sub_140b5ead0(rax_34.d) + var_78:4.d, r14_2)
    void* rcx_27 = &rdi_8[1]
    
    if (rdi_8 == 0)
        rcx_27 = nullptr
    
    sub_1409d7d20(rcx_27, &var_88)
    int64_t rdi_9 = sx.q(*(rax_37 + 8))
    int32_t rcx_28 = (rdi_9 + 1).d
    *(rax_37 + 8) = rcx_28
    
    if (rcx_28 s> *(rax_37 + 0xc))
        sub_1405a4d70(rax_37)
    
    *(*rax_37 + (rdi_9 << 3)) = var_88
    rdi_1 = var_88

int64_t* rbx_8 = rdi_1[4]
void* r12_1 = &arg3[4]

if (rbx_8 != *r12_1)
    var_78 = rbx_8
    int64_t* rdi_12
    
    if (arg1[0x1f].d == *(arg1 + 0x124))
    label_141cb6410:
        rdi_12 = nullptr
    else
        int32_t rax_41 = sub_140b5ead0(rbx_8.d) + var_78:4.d
        void* r8_6 = &arg1[0x25]
        void* rcx_32 = *(r8_6 + 8)
        
        if (rcx_32 != 0)
            r8_6 = rcx_32
        
        int32_t rax_43 = *(r8_6 + (((sx.q(arg1[0x27].d) - 1) & sx.q(rax_41)) << 2))
        
        if (rax_43 == 0xffffffff)
        label_141cb6410_1:
            rdi_12 = nullptr
        else
            while (true)
                rdi_12 = (sx.q(rax_43) << 5) + arg1[0x1e]
                
                if (*rdi_12 == rbx_8)
                    break
                
                rax_43 = rdi_12[3].d
                
                if (rax_43 == 0xffffffff)
                    goto label_141cb6410_2
            
            if (rax_43 == 0xffffffff)
            label_141cb6410_2:
                rdi_12 = nullptr
    
    int64_t* rax_44 = *r12_1
    var_78 = rax_44
    void* rax_47 = sub_141c904b0(&arg1[0x1e], sub_140b5ead0(rax_44.d) + var_78:4.d, r12_1)
    void* rcx_35 = &rdi_12[1]
    
    if (rdi_12 == 0)
        rcx_35 = nullptr
    
    sub_1409d7d20(rcx_35, &var_88)
    int64_t rdi_13 = sx.q(*(rax_47 + 8))
    int32_t rcx_36 = (rdi_13 + 1).d
    *(rax_47 + 8) = rcx_36
    
    if (rcx_36 s> *(rax_47 + 0xc))
        sub_1405a4d70(rax_47)
    
    *(*rax_47 + (rdi_13 << 3)) = var_88
    rdi_1 = var_88

if (r15.b != 0)
    int32_t var_70_1 = 0
    var_78 = sub_14098ef70(&rdi_1[5])
    var_78.o = var_78.o
    int64_t* r14_3 = var_78
    int32_t rsi_3 = var_70_1
label_141cb64a8:
    
    if (rsi_3 s>= 0 && rsi_3 s< r14_3[1].d)
        int64_t* rbx_11 = *(*r14_3 + sx.q(rsi_3) * 0x18)
        var_78 = rbx_11
        int64_t* rax_51 = sub_14098ef70(&arg3[5])
        int32_t r8_8 = 0
        int32_t rdi_14 = var_78:4.d
        int32_t i_5 = rax_51[1].d
        int32_t i_1 = i_5
        int64_t r10_2 = *rax_51
        
        if (i_5 s> 0)
            do
                int32_t rcx_43 = i_1 & 0x80000001
                
                if (rcx_43 s< 0)
                    rcx_43 = ((rcx_43 - 1) | 0xfffffffe) + 1
                
                int32_t temp9_1
                int32_t temp10_1
                temp9_1:temp10_1 = sx.q(i_1)
                int32_t i_4 = (temp10_1 - temp9_1) s>> 1
                i_1 = i_4
                int32_t rax_55 = i_4 + r8_8
                int64_t rcx_46 = sx.q(rax_55) * 3
                int32_t rax_57 = *(r10_2 + (rcx_46 << 3))
                int32_t rax_58 = rax_57 - rbx_11.d
                
                if (rax_57 == rbx_11.d)
                    rax_58 = *(r10_2 + (rcx_46 << 3) + 4) - rdi_14
                
                if (rax_58 s< 0)
                    r8_8 = rax_55 + rcx_43
            while (i_1 s> 0)
        
        int32_t rax_62
        int64_t rcx_47
        
        if (r8_8 s< i_5)
            rcx_47 = sx.q(r8_8) * 3
            int32_t rax_61 = rbx_11.d
            rax_62 = rax_61 - *(r10_2 + (rcx_47 << 3))
            
            if (rax_61 == *(r10_2 + (rcx_47 << 3)))
                rax_62 = rdi_14 - *(r10_2 + (rcx_47 << 3) + 4)
        
        if (r8_8 s>= i_5 || rax_62 s< 0 || r8_8 == 0xffffffff || r10_2 + 8 + (rcx_47 << 3) == 0)
            int64_t* rdx_30
            
            if (arg1[0x29].d == *(arg1 + 0x174))
            label_141cb65c9:
                rdx_30 = nullptr
            else
                int32_t rax_67 = sub_140b5ead0(rbx_11.d)
                void* r8_9 = &arg1[0x2f]
                void* rcx_49 = *(r8_9 + 8)
                
                if (rcx_49 != 0)
                    r8_9 = rcx_49
                
                int32_t rax_70 = *(r8_9 + (((sx.q(arg1[0x31].d) - 1) & sx.q(rax_67 + rdi_14)) << 2))
                
                if (rax_70 == 0xffffffff)
                label_141cb65c9_1:
                    rdx_30 = nullptr
                else
                    while (true)
                        rdx_30 = (sx.q(rax_70) << 5) + arg1[0x28]
                        
                        if (*rdx_30 == rbx_11)
                            break
                        
                        rax_70 = rdx_30[3].d
                        
                        if (rax_70 == 0xffffffff)
                            goto label_141cb65c9_2
                    
                    if (rax_70 == 0xffffffff)
                    label_141cb65c9_2:
                        rdx_30 = nullptr
            
            int64_t** rbx_12 = &rdx_30[1]
            
            if (rdx_30 == 0)
                rbx_12 = nullptr
            
            int64_t* r10_3 = *rbx_12
            uint64_t r9_4 = sx.q(rbx_12[1].d)
            int64_t* rcx_50 = r10_3
            void* rdx_31 = &r10_3[r9_4]
            
            if (r10_3 == rdx_31)
            label_141cb6665:
            else
                do
                    if (*rcx_50 == var_88)
                        int32_t rcx_52 = ((rcx_50 - r10_3) s>> 3).d
                        
                        if (rcx_52 == 0xffffffff)
                            goto label_141cb6665_1
                        
                        int32_t rax_74 = r9_4.d - rcx_52 - 1
                        
                        if (rax_74 s>= 1)
                            rax_74 = 1
                        
                        if (rax_74 != 0)
                            memcpy(&r10_3[sx.q(rcx_52)], &r10_3[sx.q(r9_4.d - rax_74)], rax_74 << 3)
                            r9_4 = zx.q(rbx_12[1].d)
                        
                        rbx_12[1].d = (r9_4 - 1).d
                        sub_1405c53d0(rbx_12)
                        rsi_3 += 1
                        goto label_141cb64a8
                    
                    rcx_50 = &rcx_50[1]
                while (rcx_50 != rdx_31)
        else
        label_141cb6665_1:
    
    var_78 = sub_14098ef70(&arg3[5])
    var_78.o = var_78.o
    int64_t* r15_2 = var_78
    
    for (int32_t i_2 = 0; i_2 s>= 0; i_2 += 1)
        if (i_2 s>= r15_2[1].d)
            break
        
        int64_t* rbx_14 = *(*r15_2 + sx.q(i_2) * 0x18)
        var_78 = rbx_14
        int64_t* rax_80 = sub_14098ef70(&var_88[5])
        int32_t rsi_4 = var_78:4.d
        int32_t r8_13 = 0
        int32_t j_5 = rax_80[1].d
        int32_t j_1 = j_5
        int64_t r10_4 = *rax_80
        
        if (j_5 s> 0)
            do
                int32_t rcx_60 = j_1 & 0x80000001
                
                if (rcx_60 s< 0)
                    rcx_60 = ((rcx_60 - 1) | 0xfffffffe) + 1
                
                int32_t temp14_1
                int32_t temp15_1
                temp14_1:temp15_1 = sx.q(j_1)
                int32_t j_3 = (temp15_1 - temp14_1) s>> 1
                j_1 = j_3
                int32_t rax_84 = j_3 + r8_13
                int64_t rcx_63 = sx.q(rax_84) * 3
                int32_t rax_86 = *(r10_4 + (rcx_63 << 3))
                int32_t rax_87 = rax_86 - rbx_14.d
                
                if (rax_86 == rbx_14.d)
                    rax_87 = *(r10_4 + (rcx_63 << 3) + 4) - rsi_4
                
                if (rax_87 s< 0)
                    r8_13 = rax_84 + rcx_60
            while (j_1 s> 0)
        
        int32_t rax_91
        int64_t rcx_64
        
        if (r8_13 s< j_5)
            rcx_64 = sx.q(r8_13) * 3
            int32_t rax_90 = rbx_14.d
            rax_91 = rax_90 - *(r10_4 + (rcx_64 << 3))
            
            if (rax_90 == *(r10_4 + (rcx_64 << 3)))
                rax_91 = rsi_4 - *(r10_4 + (rcx_64 << 3) + 4)
        
        if (r8_13 s>= j_5 || rax_91 s< 0 || r8_13 == 0xffffffff || r10_4 + 8 + (rcx_64 << 3) == 0)
            int32_t r9_7 = rsi_4 + sub_140b5ead0(rbx_14.d)
            void* rbx_15
            
            if (arg1[0x29].d == *(arg1 + 0x174))
            label_141cb67c6:
                rbx_15 = sub_141c901d0(&arg1[0x28], r9_7, &var_78)
            else
                void* rcx_66 = arg1[0x30]
                void* r8_14 = &arg1[0x2f]
                
                if (rcx_66 != 0)
                    r8_14 = rcx_66
                
                int32_t rax_98 = *(r8_14 + (((sx.q(arg1[0x31].d) - 1) & sx.q(r9_7)) << 2))
                
                if (rax_98 == 0xffffffff)
                label_141cb67c6_1:
                    rbx_15 = sub_141c901d0(&arg1[0x28], r9_7, &var_78)
                else
                    int64_t* rdx_39
                    
                    while (true)
                        rdx_39 = (sx.q(rax_98) << 5) + arg1[0x28]
                        
                        if (*rdx_39 == rbx_14)
                            break
                        
                        rax_98 = rdx_39[3].d
                        
                        if (rax_98 == 0xffffffff)
                            goto label_141cb67c6_2
                    
                    if (rax_98 == 0xffffffff || rdx_39 == 0)
                    label_141cb67c6_2:
                        rbx_15 = sub_141c901d0(&arg1[0x28], r9_7, &var_78)
                    else
                        rbx_15 = &rdx_39[1]
            
            int64_t rdi_16 = sx.q(*(rbx_15 + 8))
            int32_t rcx_68 = (rdi_16 + 1).d
            *(rbx_15 + 8) = rcx_68
            
            if (rcx_68 s> *(rbx_15 + 0xc))
                sub_1405a4d70(rbx_15)
            
            *(*rbx_15 + (rdi_16 << 3)) = var_88
    
    rdi_1 = var_88
    r14_2 = var_68

*rdi_1 = *arg3
rdi_1[1] = arg3[1]
rdi_1[2] = *r14_2
rdi_1[3] = arg3[3]
rdi_1[4] = *r12_1
int64_t* rbx_16 = arg3[6]
var_68 = arg3[5]
i_3.q = rbx_16

if (rbx_16 != 0)
    rbx_16[1].d += 1

if (&var_68 != &rdi_1[5])
    var_68.o = *(rdi_1 + 0x28)
    rbx_16 = i_3.q
    *(rdi_1 + 0x28) = var_68.o

if (rbx_16 != 0)
    rbx_16[1].d -= 1
    
    if (rbx_16[1].d == 1)
        (**rbx_16)(rbx_16)
        int32_t temp6_1 = *(rbx_16 + 0xc)
        *(rbx_16 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_16 + 8))(rbx_16, 1)

sub_14090a0d0(&rdi_1[7], &arg3[7])
int32_t result = arg3[9].d
rdi_1[9].d = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
