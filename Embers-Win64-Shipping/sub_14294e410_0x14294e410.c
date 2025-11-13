// 函数: sub_14294e410
// 地址: 0x14294e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r12 = 0
int32_t var_bc = 0
void** var_90 = nullptr
int32_t r14 = 0
int32_t* r15 = nullptr
int64_t* rbp = nullptr

if (arg2 s>= 0x200)
    int32_t rax_2
    
    if (arg3 s>= 2)
        rax_2 = sub_1428d8900(arg2)
    
    if (arg3 s< 2 || arg3 s> rax_2)
        sub_1428a5670(4, 0x81, 0xa5, "crypto\rsa\rsa_gen.c", 0x54)
    else
        int64_t* rax_3 = sub_1428d8d60()
        rbp = rax_3
        
        if (rax_3 == 0)
        labelid_17:
            sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
        else
            sub_1428d8e50(rax_3)
            int64_t* rax_4 = sub_1428d8ba0(rbp)
            int64_t* rax_5 = sub_1428d8ba0(rbp)
            int64_t* rax_6 = sub_1428d8ba0(rbp)
            int64_t* r13_1 = rax_6
            
            if (rax_6 == 0)
            labelid_17:
                sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
            else
                int32_t i = 0
                int64_t rbx_1 = sx.q(arg3)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(arg2)
                int32_t temp0_1 = divs.dp.d(temp2_1:temp3_1, rbx_1.d)
                int64_t r11_1 = sx.q(mods.dp.d(temp2_1:temp3_1, rbx_1.d))
                uint128_t zmm2 = _mm_shuffle_epi32(zx.o(temp0_1), 0)
                uint128_t zmm4_1 = _mm_shuffle_epi32(zx.o(r11_1.d), 0)
                
                if (rbx_1.d u>= 0x10)
                    int32_t zmm5_1[0x4] = data_142e11d00
                    int32_t rax_11 = rbx_1.d & 0x8000000f
                    
                    if (rax_11 s< 0)
                        rax_11 = ((rax_11 - 1) | 0xfffffff0) + 1
                    
                    void var_50
                    void* r9 = &var_50
                    int32_t zmm3[0x4] = _mm_add_epi32(data_142d3f5b0, zmm2)
                    int32_t r10_1 = 8
                    
                    do
                        r9 += 0x40
                        uint128_t zmm1_1 = _mm_cmpgt_epi32(zmm4_1, 
                            _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm5_1))
                        i += 0x10
                        *(r9 - 0x60) = (zmm3 & zmm1_1) | (zmm1_1 & not.o(zmm2))
                        int32_t rax_15 = r10_1 + 4
                        zmm1_1 = _mm_cmpgt_epi32(zmm4_1, 
                            _mm_add_epi32(_mm_shuffle_epi32(zx.o(r10_1 - 4), 0), zmm5_1))
                        *(r9 - 0x50) = (zmm3 & zmm1_1) | (zmm1_1 & not.o(zmm2))
                        int32_t zmm0_1[0x4] = zx.o(r10_1)
                        r10_1 += 0x10
                        zmm1_1 = _mm_cmpgt_epi32(zmm4_1, 
                            _mm_add_epi32(_mm_shuffle_epi32(zmm0_1, 0), zmm5_1))
                        *(r9 - 0x40) = (zmm3 & zmm1_1) | (zmm1_1 & not.o(zmm2))
                        zmm1_1 = _mm_cmpgt_epi32(zmm4_1, 
                            _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_15), 0), zmm5_1))
                        *(r9 - 0x30) = (zmm3 & zmm1_1) | (zmm1_1 & not.o(zmm2))
                    while (i s< rbx_1.d - rax_11)
                
                int32_t var_70[0x6]
                
                for (int64_t i_1 = sx.q(i); i_1 s< rbx_1; i_1 += 1)
                    int32_t rax_16 = temp0_1 + 1
                    
                    if (i_1 s>= r11_1)
                        rax_16 = temp0_1
                    
                    var_70[i_1] = rax_16
                
                void* rax_17
                
                if (*(arg1 + 0x18) == 0)
                    rax_17 = sub_142890500()
                    *(arg1 + 0x18) = rax_17
                
                if (*(arg1 + 0x18) == 0 && rax_17 == 0)
                labelid_17:
                    sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                else
                    void* rax_18
                    
                    if (*(arg1 + 0x28) == 0)
                        rax_18 = sub_142890740()
                        *(arg1 + 0x28) = rax_18
                    
                    if (*(arg1 + 0x28) == 0 && rax_18 == 0)
                    labelid_17:
                        sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                    else
                        void* rax_19
                        
                        if (*(arg1 + 0x20) == 0)
                            rax_19 = sub_142890500()
                            *(arg1 + 0x20) = rax_19
                        
                        if (*(arg1 + 0x20) == 0 && rax_19 == 0)
                        labelid_17:
                            sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                        else
                            void* rax_20
                            
                            if (*(arg1 + 0x30) == 0)
                                rax_20 = sub_142890740()
                                *(arg1 + 0x30) = rax_20
                            
                            if (*(arg1 + 0x30) == 0 && rax_20 == 0)
                            labelid_17:
                                sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                            else
                                void* rax_21
                                
                                if (*(arg1 + 0x38) == 0)
                                    rax_21 = sub_142890740()
                                    *(arg1 + 0x38) = rax_21
                                
                                if (*(arg1 + 0x38) == 0 && rax_21 == 0)
                                labelid_17:
                                    sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                                else
                                    void* rax_22
                                    
                                    if (*(arg1 + 0x40) == 0)
                                        rax_22 = sub_142890740()
                                        *(arg1 + 0x40) = rax_22
                                    
                                    if (*(arg1 + 0x40) == 0 && rax_22 == 0)
                                    labelid_17:
                                        sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                                    else
                                        void* rax_23
                                        
                                        if (*(arg1 + 0x48) == 0)
                                            rax_23 = sub_142890740()
                                            *(arg1 + 0x48) = rax_23
                                        
                                        if (*(arg1 + 0x48) == 0 && rax_23 == 0)
                                        labelid_17:
                                            sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 0x183)
                                        else
                                            void* rax_24
                                            
                                            if (*(arg1 + 0x50) == 0)
                                                rax_24 = sub_142890740()
                                                *(arg1 + 0x50) = rax_24
                                            
                                            if (*(arg1 + 0x50) == 0 && rax_24 == 0)
                                            labelid_17:
                                                sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 
                                                    0x183)
                                            else if (rbx_1.d s<= 2)
                                            label_14294e783:
                                                
                                                if (sub_142890040(*(arg1 + 0x20), arg4) == 0)
                                                labelid_17:
                                                    sub_1428a5670(4, 0x81, 3, 
                                                        "crypto\rsa\rsa_gen.c", 0x183)
                                                else
                                                    int32_t rbp_1 = 0
                                                    int32_t var_d8
                                                    
                                                    if (rbx_1 s<= 0)
                                                    label_14294eaa4:
                                                        
                                                        if (sub_14288fc80(*(arg1 + 0x30), 
                                                                *(arg1 + 0x38)) s< 0)
                                                            int64_t rcx_30 = *(arg1 + 0x30)
                                                            *(arg1 + 0x30) = *(arg1 + 0x38)
                                                            *(arg1 + 0x38) = rcx_30
                                                        
                                                        if (sub_1428d9010(rax_5, *(arg1 + 0x30), 
                                                            &data_1434e8ea8) == 0)
                                                        label_14294e9e5:
                                                            rbp = rax_3
                                                        labelid_17:
                                                            sub_1428a5670(4, 0x81, 3, 
                                                                "crypto\rsa\rsa_gen.c", 0x183)
                                                        else
                                                            rbp = rax_3
                                                            
                                                            if (sub_1428d9010(r13_1, 
                                                                *(arg1 + 0x38), &data_1434e8ea8) == 0)
                                                            labelid_17:
                                                                sub_1428a5670(4, 0x81, 3, 
                                                                    "crypto\rsa\rsa_gen.c", 0x183)
                                                            else if (
                                                                sub_1428d9290(rax_4, rax_5, r13_1, rbp)
                                                                == 0)
                                                            labelid_17:
                                                                sub_1428a5670(4, 0x81, 3, 
                                                                    "crypto\rsa\rsa_gen.c", 0x183)
                                                            else
                                                                int32_t rbx_13 = 2
                                                                
                                                                if (arg3 s> 2)
                                                                    do
                                                                        int64_t* rax_53 =
                                                                            sub_142898ea0(r15, rbx_13 - 2)
                                                                        
                                                                        if (sub_1428d9010(rax_53[1], *rax_53, 
                                                                                &data_1434e8ea8) == 0)
                                                                            goto label_14294ea05_2
                                                                        
                                                                        if (sub_1428d9290(rax_4, rax_4, 
                                                                                rax_53[1], rbp) == 0)
                                                                            goto label_14294ea05_2
                                                                        
                                                                        rbx_13 += 1
                                                                    while (rbx_13 s< arg3)
                                                                
                                                                int64_t* rax_56 = sub_142890500()
                                                                
                                                                if (rax_56 == 0)
                                                                labelid_17:
                                                                    sub_1428a5670(4, 0x81, 3, 
                                                                        "crypto\rsa\rsa_gen.c", 0x183)
                                                                else
                                                                    sub_142890a00(rax_56, rax_4, 4)
                                                                    int64_t* rax_57 = sub_1428da4f0(
                                                                        *(arg1 + 0x28), *(arg1 + 0x20), rax_56, 
                                                                        rbp)
                                                                    sub_1428901a0(rax_56)
                                                                    
                                                                    if (rax_57 == 0)
                                                                    labelid_17:
                                                                        sub_1428a5670(4, 0x81, 3, 
                                                                            "crypto\rsa\rsa_gen.c", 0x183)
                                                                    else
                                                                        int64_t* rax_58 = sub_142890500()
                                                                        int64_t* rsi_4 = rax_58
                                                                        
                                                                        if (rax_58 == 0)
                                                                        labelid_17:
                                                                            sub_1428a5670(4, 0x81, 3, 
                                                                                "crypto\rsa\rsa_gen.c", 0x183)
                                                                        else
                                                                            sub_142890a00(rax_58, *(arg1 + 0x28), 4)
                                                                            var_d8.q = rbp
                                                                            
                                                                            if (sub_14291a950(nullptr, 
                                                                                *(arg1 + 0x40), rsi_4, rax_5, var_d8)
                                                                                == 0)
                                                                            label_14294ed06:
                                                                                sub_1428901a0(rsi_4)
                                                                            label_14294ea05:
                                                                                sub_1428a5670(4, 0x81, 3, 
                                                                                    "crypto\rsa\rsa_gen.c", 0x183)
                                                                            else
                                                                                var_d8.q = rbp
                                                                                
                                                                                if (sub_14291a950(nullptr, 
                                                                                        *(arg1 + 0x48), rsi_4, r13_1, var_d8)
                                                                                        == 0)
                                                                                    goto label_14294ed06
                                                                                
                                                                                int32_t r14_4 = 2
                                                                                int32_t rbx_15 = 2
                                                                                
                                                                                if (arg3 s> 2)
                                                                                    do
                                                                                        var_d8.q = rbp
                                                                                        int64_t* rdx_30 =
                                                                                            *(sub_142898ea0(r15, rbx_15 - 2) + 8)
                                                                                        
                                                                                        if (sub_14291a950(nullptr, rdx_30, 
                                                                                                rsi_4, rdx_30, var_d8) == 0)
                                                                                            goto label_14294ed06
                                                                                        
                                                                                        rbx_15 += 1
                                                                                    while (rbx_15 s< arg3)
                                                                                
                                                                                sub_1428901a0(rsi_4)
                                                                                int64_t* rax_63 = sub_142890500()
                                                                                rsi_4 = rax_63
                                                                                
                                                                                if (rax_63 == 0)
                                                                                label_14294ea05_1:
                                                                                    sub_1428a5670(4, 0x81, 3, 
                                                                                        "crypto\rsa\rsa_gen.c", 0x183)
                                                                                else
                                                                                    sub_142890a00(rax_63, *(arg1 + 0x30), 4)
                                                                                    
                                                                                    if (sub_1428da4f0(*(arg1 + 0x50), 
                                                                                            *(arg1 + 0x38), rsi_4, rbp) == 0)
                                                                                        goto label_14294ed06
                                                                                    
                                                                                    if (arg3 s> 2)
                                                                                        do
                                                                                            int64_t** rax_65 =
                                                                                                sub_142898ea0(r15, r14_4 - 2)
                                                                                            sub_142890a00(rsi_4, *rax_65, 4)
                                                                                            
                                                                                            if (sub_1428da4f0(rax_65[2], rax_65[3], 
                                                                                                    rsi_4, rbp) == 0)
                                                                                                goto label_14294ed06
                                                                                            
                                                                                            r14_4 += 1
                                                                                        while (r14_4 s< arg3)
                                                                                    
                                                                                    sub_1428901a0(rsi_4)
                                                                                    r12 = 1
                                                    else
                                                        int64_t rbx_3 = 0
                                                        int64_t var_a0_1 = 0
                                                        
                                                        while (true)
                                                            int32_t var_94_1 = r14
                                                            int32_t var_b8_1 = 0
                                                            int64_t* rsi_1
                                                            
                                                            if (rbp_1 == 0)
                                                                rsi_1 = *(arg1 + 0x30)
                                                            else if (rbp_1 != 1)
                                                                void** rax_28 =
                                                                    sub_142898ea0(r15, rbp_1 - 2)
                                                                var_90 = rax_28
                                                                rsi_1 = *rax_28
                                                            else
                                                                rsi_1 = *(arg1 + 0x38)
                                                            
                                                            sub_1428908d0(rsi_1, 4)
                                                            int32_t rax_29 = var_70[rbx_3]
                                                            int32_t r13_2 = rax_29
                                                            int32_t* r14_1 = arg5
                                                            
                                                            while (true)
                                                            label_14294e81b:
                                                                var_d8.q = 0
                                                                
                                                                if (sub_14291af90(rsi_1, r13_2, 0, 
                                                                        nullptr, var_d8, r14_1) == 0)
                                                                    goto label_14294e9e5
                                                                
                                                                for (int32_t i_2 = 0; i_2 s< rbp_1; 
                                                                        i_2 += 1)
                                                                    int64_t* rdx_9
                                                                    
                                                                    if (i_2 == 0)
                                                                        rdx_9 = *(arg1 + 0x30)
                                                                    else if (i_2 != 1)
                                                                        rdx_9 = *sub_142898ea0(r15, i_2 - 2)
                                                                    else
                                                                        rdx_9 = *(arg1 + 0x38)
                                                                    
                                                                    if (sub_14288fc80(rsi_1, rdx_9) == 0)
                                                                        goto label_14294e81b
                                                                
                                                                if (sub_1428d9010(rax_6, rsi_1, 
                                                                        &data_1434e8ea8) == 0)
                                                                    goto label_14294e9e5
                                                                
                                                                sub_1428a57b0()
                                                                sub_1428908d0(rax_6, 4)
                                                                
                                                                if (sub_1428da4f0(rax_5, rax_6, 
                                                                        *(arg1 + 0x20), rax_3) != 0)
                                                                    r14 = var_94_1 + rax_29
                                                                    int64_t rbx_12
                                                                    int64_t* rdx_13
                                                                    int64_t* r8_3
                                                                    
                                                                    if (var_a0_1 != 1)
                                                                        if (var_a0_1 != 0)
                                                                            rdx_13 = *(arg1 + 0x18)
                                                                            r8_3 = rsi_1
                                                                            goto label_14294e8fa
                                                                        
                                                                    label_14294ea6d:
                                                                        
                                                                        if (sub_14291af30(arg5, 3, zx.q(rbp_1))
                                                                                == 0)
                                                                            goto label_14294e9e5
                                                                        
                                                                        rbx_12 = var_a0_1
                                                                    else
                                                                        r8_3 = *(arg1 + 0x38)
                                                                        rdx_13 = *(arg1 + 0x30)
                                                                    label_14294e8fa:
                                                                        
                                                                        if (sub_1428d9290(rax_5, rdx_13, r8_3, 
                                                                                rax_3) == 0)
                                                                            goto label_14294e9e5
                                                                        
                                                                        if (sub_1428f5760(rax_6, rax_5, r14 - 4)
                                                                                == 0)
                                                                            goto label_14294e9e5
                                                                        
                                                                        int64_t rax_38 = sub_142890220(rax_6)
                                                                        
                                                                        if (rax_38 - 9 u<= 6)
                                                                            if (rbp_1 s> 1 &&
                                                                                    sub_142890040(var_90[3], *(arg1 + 0x18))
                                                                                    == 0)
                                                                                goto label_14294e9e5
                                                                            
                                                                            if (sub_142890040(*(arg1 + 0x18), rax_5)
                                                                                    == 0)
                                                                                goto label_14294e9e5
                                                                            
                                                                            goto label_14294ea6d
                                                                        
                                                                        r14_1 = arg5
                                                                        int32_t rax_39 =
                                                                            sub_14291af30(r14_1, 2, zx.q(var_bc))
                                                                        var_bc += 1
                                                                        
                                                                        if (rax_39 == 0)
                                                                            goto label_14294e9e5
                                                                        
                                                                        if (rbx_1 s> 4)
                                                                            int32_t rax_40 = -1
                                                                            
                                                                            if (rax_38 u< 9)
                                                                                rax_40 = 1
                                                                            
                                                                            r13_2 += rax_40
                                                                            var_b8_1 += 1
                                                                            continue
                                                                        else if (var_b8_1 == 4)
                                                                            rbp_1 = -1
                                                                            rbx_12 = -1
                                                                            r14 = 0
                                                                        else
                                                                            var_b8_1 += 1
                                                                            continue
                                                                    rbx_3 = rbx_12 + 1
                                                                    rbp_1 += 1
                                                                    var_a0_1 = rbx_3
                                                                    
                                                                    if (rbx_3 s< rbx_1)
                                                                        break
                                                                    
                                                                    r13_1 = rax_6
                                                                    goto label_14294eaa4
                                                                
                                                                int32_t rax_41 = sub_1428a5510()
                                                                
                                                                if ((rax_41 & 0xff000000) != 0x3000000)
                                                                    goto label_14294e9e5
                                                                
                                                                if ((rax_41 & 0xfff) != 0x6c)
                                                                    goto label_14294e9e5
                                                                
                                                                sub_1428a5550()
                                                                int32_t rax_43 =
                                                                    sub_14291af30(r14_1, 2, zx.q(var_bc))
                                                                var_bc += 1
                                                                
                                                                if (rax_43 == 0)
                                                                    goto label_14294e9e5
                                            else
                                                *(arg1 + 4) = 1
                                                int32_t* rax_25 = sub_142898be0(0, (rbx_1 - 2).d)
                                                r15 = rax_25
                                                
                                                if (rax_25 != 0)
                                                    int32_t* rcx_6 = *(arg1 + 0x58)
                                                    
                                                    if (rcx_6 != 0)
                                                        sub_142898cb0(rcx_6, sub_1428d8930)
                                                    
                                                    int32_t rbx_2 = 2
                                                    *(arg1 + 0x58) = r15
                                                    
                                                    if (arg3 s> 2)
                                                        do
                                                            void** rax_26 = sub_1428d8980()
                                                            var_90 = rax_26
                                                            
                                                            if (rax_26 == 0)
                                                                goto label_14294ea05_2
                                                            
                                                            sub_142898d50(r15, rax_26)
                                                            rbx_2 += 1
                                                        while (rbx_2 s< arg3)
                                                    
                                                    goto label_14294e783
                                                
                                            label_14294ea05_2:
                                                sub_1428a5670(4, 0x81, 3, "crypto\rsa\rsa_gen.c", 
                                                    0x183)
        
        if (rbp != 0)
            sub_1428d8a60(rbp)
else
    sub_1428a5670(4, 0x81, 0x78, "crypto\rsa\rsa_gen.c", 0x4e)

sub_1428d8ae0(rbp)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(r12)
