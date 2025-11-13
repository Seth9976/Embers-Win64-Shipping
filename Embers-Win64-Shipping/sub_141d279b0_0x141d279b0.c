// 函数: sub_141d279b0
// 地址: 0x141d279b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141d28510(arg1, arg2, arg3)

if ((arg2[5].b & 1) == 0)
    return result

int32_t rax = sub_141d1f690(arg1, data_143f36fe0)
int32_t* r12_1 = nullptr

if (rax == 0)
    int64_t rdi_2 = sx.q(sub_141d1a2b0(arg1, rax + 1, data_143f36fe0)) << 5
    *(rdi_2 + arg1[0x68]) = 0
    *(rdi_2 + arg1[0x68] + 4) = 0
    *(rdi_2 + arg1[0x68] + 8) = (*(arg1[0x43] + 0x48))(&arg1[0x43])
    *(rdi_2 + arg1[0x68] + 0xc) = 0
    *(rdi_2 + arg1[0x68] + 0x10) = (*(arg1[0x2e] + 0x48))(&arg1[0x2e])

int64_t rbx_3 = sx.q(sub_141d1f690(arg1, data_143f36fc8))
int64_t rdi_3 = sx.q(sub_141d1f690(arg1, data_143f37078))
int32_t r9_1 = 0

if (rbx_3.d s> 0)
    int64_t rdx_4 = 0
    
    do
        int64_t r8_2 = sx.q(*(arg1[0x50] + (rdx_4 << 2)))
        
        if (r8_2.d s>= 0 && r8_2.d s< rdi_3.d)
            *(arg1[0x26] + (r8_2 << 2)) = r9_1
        
        r9_1 += 1
        rdx_4 += 1
    while (rdx_4 s< rbx_3)

int64_t var_c0
int64_t var_a8
int32_t arg_10

if (sub_141d1d910(arg1, data_143f36ff0, data_143f37078) == 0)
    int64_t* rax_13 = sub_140b58170(&arg_10, &data_1437020ab, 1)
    int64_t r8_4 = data_143f37078
    int64_t rdx_6 = data_143f36ff0
    var_c0 = *rax_13
    var_a8 = var_c0
    int32_t var_a0_1 = 1.d
    void* rax_15 = sub_141d16e50(arg1, rdx_6, r8_4, &var_a8)
    
    if (rdi_3.d s> 0)
        int64_t rdx_7 = 0
        
        do
            *(*(rax_15 + 8) + (rdx_7 << 2)) = 0
            rdx_7 += 1
        while (rdx_7 s< rdi_3)

void var_58
int64_t* rax_17 = sub_141d17b20(arg1, *sub_140b58170(&var_58, "BoneHierarchy", 1), data_143f37078)

if (rax_17 != 0)
    int64_t rdx_9 = *rax_17
    int32_t rsi_1 = 0
    arg_10 = 0
    
    if ((*(rdx_9 + 0x48))(rax_17, rdx_9) s> 0)
        int32_t* rdi_4 = nullptr
        int32_t* var_b0_1 = nullptr
        void* r15_1 = &arg1[1]
        int32_t rax_47
        
        do
            void var_50
            
            if (sub_141d1d910(arg1, *sub_140b58170(&var_50, "Level", 1), data_143f37078) == 0)
                void var_48
                int64_t* rax_21 = sub_140b58170(&var_48, &data_1437020ab, 1)
                int64_t rbx_4 = data_143f37078
                int64_t rdi_5 = *rax_21
                int64_t rsi_2 = *sub_140b58170(&var_a8, "Level", 1)
                
                if (sub_141d1d910(arg1, rsi_2, rbx_4) == 0)
                    if (arg1[0xc].d == *(arg1 + 0x8c))
                    label_141d27cb4:
                        sub_141d1a650(arg1, rbx_4)
                    else
                        int32_t rax_26 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                        void* r8_8 = &arg1[0x12]
                        void* rcx_21 = *(r8_8 + 8)
                        
                        if (rcx_21 != 0)
                            r8_8 = rcx_21
                        
                        int32_t rax_28 = *(r8_8 + (((sx.q(arg1[0x14].d) - 1) & sx.q(rax_26)) << 2))
                        
                        if (rax_28 == 0xffffffff)
                        label_141d27cb4_1:
                            sub_141d1a650(arg1, rbx_4)
                        else
                            int64_t r8_9 = arg1[0xb]
                            
                            while (true)
                                int64_t rdx_15 = sx.q(rax_28) * 5
                                
                                if (*(r8_9 + (rdx_15 << 2)) == rbx_4)
                                    break
                                
                                rax_28 = *(r8_9 + (rdx_15 << 2) + 0xc)
                                
                                if (rax_28 == 0xffffffff)
                                    goto label_141d27cb4_2
                            
                            if (rax_28 == 0xffffffff)
                            label_141d27cb4_2:
                                sub_141d1a650(arg1, rbx_4)
                    
                    int64_t* rax_29 = j_sub_140a82f30(0x18)
                    int64_t* r15_2 = rax_29
                    
                    if (rax_29 == 0)
                        r15_2 = nullptr
                    else
                        r15_2[1] = 0
                        r15_2[2] = 0
                        *r15_2 = &data_14321e6d8
                    
                    char var_d8 = 5
                    int64_t var_d4
                    sub_140b58170(&var_d4, &data_1437020ab, 1)
                    int16_t var_cc_1 = 0
                    (**r15_2)(r15_2, zx.q(sub_141d1f690(arg1, rbx_4)))
                    var_cc_1.b = 1
                    
                    if (sub_141d1e020(arg1, rbx_4, rdi_5) != 0)
                        int64_t var_90
                        sub_140b58170(&var_90, &data_1437020ab, 1)
                        var_d4 = var_90
                    else
                        var_d4 = rdi_5
                    
                    r15_1 = &arg1[1]
                    int64_t var_88 = rsi_2
                    int64_t var_80_1 = rbx_4
                    sub_141d17830(r15_1, &var_88, &var_d8)
                    
                    if (r15_2 != 0 && var_cc_1:1.b == 0)
                        (*(*r15_2 + 0x28))(r15_2, 1)
                
                int64_t var_78 = rsi_2
                int64_t var_70_1 = rbx_4
                void arg_20
                sub_141d1ca50(r15_1, &arg_20, &var_78)
                rdi_4 = var_b0_1
                rsi_1 = arg_10
            
            int64_t var_60_1 = data_143f37078
            int64_t var_68 = *sub_140b58170(&var_c0, "Level", 1)
            int32_t arg_18
            sub_141d1ca50(&arg1[1], &arg_18, &var_68)
            int64_t rax_35 = sx.q(arg_18)
            void* const rax_38
            
            if (rax_35.d == 0xffffffff)
                rax_38 = nullptr
            else
                rax_38 = rax_35 * 0x30 + arg1[1]
            
            *(r12_1 + *(*(rax_38 + 0x20) + 8)) = *(rdi_4 + rax_17[1])
            *(r12_1 + arg1[0x29]) = 1
            *(r12_1 + arg1[0x2c]) = 0
            int64_t rax_43 = rax_17[1]
            
            if ((*(rdi_4 + rax_43 + 0x58) & 2) != 0)
                *(r12_1 + arg1[0x29]) = 2
                rax_43 = rax_17[1]
            
            if ((*(rdi_4 + rax_43 + 0x58) & 4) != 0)
                int32_t* rax_45 = arg1[0x2c]
                *(rax_45 + r12_1) |= 4
            
            int64_t rax_46 = *rax_17
            rsi_1 += 1
            rdi_4 = &rdi_4[0x18]
            arg_10 = rsi_1
            var_b0_1 = rdi_4
            r12_1 = &r12_1[1]
            rax_47 = (*(rax_46 + 0x48))(rax_17)
            r15_1 = &arg1[1]
        while (rsi_1 s< rax_47)

sub_141d20d80(arg1, *sub_140b58170(&arg_10, "ExplodedTransform", 1), data_143f37078)
return sub_141d20d80(arg1, *sub_140b58170(&arg_10, "ExplodedVector", 1), data_143f37078)
