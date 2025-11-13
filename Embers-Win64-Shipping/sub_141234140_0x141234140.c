// 函数: sub_141234140
// 地址: 0x141234140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b635c == 0 || (*(arg1 + 0x3c) & 0x1020) != 0x1020)
    return 

void* rdx_1 = *(arg1 + 8) + 0xee8
uint64_t arg_8 = 0
int64_t* arg_18 = nullptr
int64_t* var_60
sub_1407453e0(&var_60, rdx_1)
int32_t i_1
int32_t i = i_1
uint64_t var_50

if (i s< *(var_50 + 0x18))
    uint64_t rbx
    uint64_t arg_10 = rbx
    
    do
        int64_t* r13_1 = *(*var_60 + sx.q(i) * 0x30 + 0x20)
        
        if ((*(r13_1 + 0x64) & 4) != 0)
            rbx.b = 0
            int32_t j = 0
            
            if (*(arg1 + 0xa8) s> 0)
                do
                    rbx = zx.q(rbx.b)
                    
                    if (sub_14123dcc0(sx.q(j) * 0x5240 + *(arg1 + 0xa0), r13_1) != 0)
                        rbx = 1
                    
                    j += 1
                while (j s< *(arg1 + 0xa8))
                
                if (rbx.b != 0)
                    sub_14121cb90(arg2, &arg_8, u"LightShafts0")
                    sub_14121cb90(arg2, &arg_18, u"LightShafts1")
                    int32_t j_1 = 0
                    
                    if (*(arg1 + 0xa8) s> 0)
                        int64_t rsi_1 = 0
                        int64_t var_68 = 0
                        
                        do
                            rbx = zx.q(*(arg2 + 0x8c))
                            int64_t* r14_2 = *(arg1 + 0xa0) + rsi_1
                            int32_t rax_6 = r14_2[0x15b].d
                            
                            if (rbx.d != rax_6)
                                bool cond:2_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rax_6
                                
                                if (cond:2_1)
                                    void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_7 = &rdx_9[3]
                                    
                                    if (rax_7 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_7 = &rdx_9[3]
                                    
                                    *(arg2 + 0x30) = rax_7
                                    int64_t* rax_8 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    rsi_1 = var_68
                                    *rax_8 = rdx_9
                                    int32_t rax_9 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_9[1]
                                    rdx_9[1] = 0
                                    *rdx_9 = &data_142f11588
                                    rdx_9[2].d = rax_9
                                else
                                    *(arg2 + 0x90) = rax_6
                            
                            if (sub_14123dcc0(r14_2, r13_1) != 0)
                                sub_141212c90(arg2, r14_2, r13_1, &arg_8, &arg_18)
                                void* r10_1 = r14_2[1]
                                int64_t* rax_11 = nullptr
                                
                                if (r10_1 != 0)
                                    int64_t r9_2 = *(r13_1[4] + 0x10)
                                    var_68 = r9_2
                                    uint32_t rcx_11 = (r9_2 u>> 4).d
                                    int32_t rdx_15 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
                                    int32_t r11_3 = neg.d(rcx_11 + rdx_15) ^ rdx_15 u>> 0xd
                                    int32_t rcx_14 = (rcx_11 - rdx_15 - r11_3) ^ r11_3 u>> 0xc
                                    int32_t rdx_18 = (rdx_15 - rcx_14 - r11_3) ^ rcx_14 << 0x10
                                    int32_t r11_6 = (r11_3 - rdx_18 - rcx_14) ^ rdx_18 u>> 5
                                    int32_t rcx_17 = (rcx_14 - rdx_18 - r11_6) ^ r11_6 u>> 3
                                    int32_t rdx_21 = (rdx_18 - rcx_17 - r11_6) ^ rcx_17 << 0xa
                                    int32_t r11_9 = (r11_6 - rdx_21 - rcx_17) ^ rdx_21 u>> 0xf
                                    
                                    if (*(r10_1 + 0xb48) == *(r10_1 + 0xb74))
                                    label_141234435:
                                        rax_11 = sub_141213b90(r10_1 + 0xb40, r11_9, &var_68)
                                    else
                                        void* rcx_18 = *(r10_1 + 0xb80)
                                        void* r8_2 = r10_1 + 0xb78
                                        
                                        if (rcx_18 != 0)
                                            r8_2 = rcx_18
                                        
                                        int32_t rax_29 = *(r8_2
                                            + (((sx.q(*(r10_1 + 0xb88)) - 1) & sx.q(r11_9)) << 2))
                                        
                                        if (rax_29 == 0xffffffff)
                                        label_141234435_1:
                                            rax_11 = sub_141213b90(r10_1 + 0xb40, r11_9, &var_68)
                                        else
                                            int64_t* rcx_21
                                            
                                            while (true)
                                                rcx_21 = sx.q(rax_29) * 0x38 + *(r10_1 + 0xb40)
                                                
                                                if (*rcx_21 == r9_2)
                                                    break
                                                
                                                rax_29 = rcx_21[6].d
                                                
                                                if (rax_29 == 0xffffffff)
                                                    goto label_141234435_2
                                            
                                            if (rax_29 == 0xffffffff || rcx_21 == 0)
                                            label_141234435_2:
                                                rax_11 =
                                                    sub_141213b90(r10_1 + 0xb40, r11_9, &var_68)
                                            else
                                                rax_11 = &rcx_21[1]
                                
                                int64_t* arg_20 = nullptr
                                int64_t* var_70_2 = &arg_18
                                uint64_t* var_78_4 = &arg_8
                                sub_14121cf50(arg2, r14_2, arg1, 
                                    sub_14121d400(arg2, r14_2, r13_1, 
                                        sub_14121dfa0(arg2, r14_2, LSBloomHistory", rax_11, &arg_8, 
                                        &arg_20), 
                                    &arg_8), r13_1)
                                int64_t* rcx_26 = arg_20
                                
                                if (rcx_26 != 0)
                                    (*(*rcx_26 + 0x38))(rcx_26)
                            
                            if (*(arg2 + 0x8c) != rbx.d)
                                bool cond:3_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rbx.d
                                
                                if (cond:3_1)
                                    void*** rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_31 = &rdx_32[3]
                                    
                                    if (rax_31 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_31 = &rdx_32[3]
                                    
                                    *(arg2 + 0x30) = rax_31
                                    int64_t* rax_32 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_32 = rdx_32
                                    int32_t rax_33 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_32[1]
                                    rdx_32[1] = 0
                                    *rdx_32 = &data_142f11588
                                    rdx_32[2].d = rax_33
                                else
                                    *(arg2 + 0x90) = rbx.d
                            
                            rsi_1 += 0x5240
                            j_1 += 1
                            var_68 = rsi_1
                        while (j_1 s< *(arg1 + 0xa8))
        
        int32_t var_54
        int32_t var_48 = var_48 & not.d(var_54)
        void var_58
        sub_14059bdd0(&var_58)
        i = i_1
    while (i s< *(var_50 + 0x18))

int64_t* rcx_30 = arg_18

if (rcx_30 != 0)
    (*(*rcx_30 + 0x38))(rcx_30)

uint64_t rcx_31 = arg_8

if (rcx_31 != 0)
    (*(*rcx_31 + 0x38))(rcx_31)
