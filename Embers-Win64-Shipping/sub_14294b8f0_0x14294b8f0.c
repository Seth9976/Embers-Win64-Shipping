// 函数: sub_14294b8f0
// 地址: 0x14294b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x158)
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r15 = arg6
int64_t rdi = 0
int32_t r13 = 0
uint64_t r12_1 = arg3 u>> 3
int64_t* r14 = nullptr
int64_t var_110 = 0
int32_t var_150 = 0
void* const var_148 = arg4
int64_t var_138 = r15
int32_t var_168 = 0xffffffff
uint64_t var_b8 = r12_1
int64_t* rax_5 = sub_142891ee0()
uint64_t var_118 = 2
int32_t* rbp_1
int32_t r15_1

if (rax_5 == 0)
    rbp_1 = nullptr
else
    void* const rbx_1
    
    if (arg4 != 0)
        rbx_1 = arg4
    else if (arg3 == 0xa0)
        rbx_1 = &data_1434e9110
        var_148 = &data_1434e9110
    else if (arg3 != 0xe0)
        rbx_1 = &data_1434e91b0
        var_148 = &data_1434e91b0
    else
        rbx_1 = &data_1434e9160
        var_148 = &data_1434e9160
    
    int64_t rsi_1 = sx.q(sub_1428916c0(rbx_1))
    int32_t var_14c_1 = rsi_1.d
    
    if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 0 || arg7 s>= 0)
        if (r15 == 0)
            r15 = rsi_1
            var_138 = rsi_1
        
        rdi = sub_1428a6730(r15)
        int64_t rax_9 = arg8
        
        if (rax_9 == 0)
            rax_9 = sub_1428a6730(r15)
        
        var_110 = rax_9
        
        if (rdi != 0 && rax_9 != 0)
            if (arg5 != 0)
                memcpy(rdi, arg5, r15.d)
            
            goto label_14294bac4
        
        rbp_1 = nullptr
    else
    label_14294bac4:
        int64_t* rax_10 = sub_1428d8d60()
        r14 = rax_10
        
        if (rax_10 == 0)
            rbp_1 = nullptr
        else
            int32_t* rax_11 = sub_1428cc660()
            rbp_1 = rax_11
            
            if (rax_11 != 0)
                sub_1428d8e50(r14)
                int64_t* rax_12 = sub_1428d8ba0(r14)
                int64_t* rax_13 = sub_1428d8ba0(r14)
                int64_t* rax_14 = sub_1428d8ba0(r14)
                int64_t* r14_1 = rax_14
                int64_t* rax_15 = sub_1428d8ba0(rax_10)
                int64_t* rax_16 = sub_1428d8ba0(rax_10)
                int64_t* rax_17 = sub_1428d8ba0(rax_10)
                
                if (rax_17 == 0)
                label_14294c35c:
                    r14 = rax_10
                    rbp_1 = rax_11
                else
                    int64_t* rax_18 = *(arg1 + 8)
                    int64_t* var_140_1 = rax_18
                    int64_t* var_130_1
                    int64_t* rax_19
                    
                    if (rax_18 != 0)
                        rax_19 = *(arg1 + 0x10)
                        var_130_1 = rax_19
                    
                    char var_98
                    
                    if (rax_18 == 0 || rax_19 == 0)
                        var_140_1 = sub_1428d8ba0(rax_10)
                        int64_t* rax_21 = sub_1428d8ba0(rax_10)
                        var_130_1 = rax_21
                        
                        if (rax_21 == 0)
                            goto label_14294c35c
                        
                        if (sub_1428f5510(rax_17, &data_1434e8ea8, arg2.d - 1) == 0)
                            goto label_14294c35c
                        
                        int64_t r13_1 = arg5
                        int64_t rax_23 = sx.q(r12_1.d)
                    label_14294bc20:
                        int32_t* rbx_3 = arg11
                        
                        while (true)
                            int32_t rax_24 = sub_14291af30(rbx_3, 0, zx.q(var_150))
                            var_150 += 1
                            
                            if (rax_24 == 0)
                                goto label_14294c35c
                            
                            if (r13_1 == 0 && sub_142897af0(rdi, zx.q(r15.d)) s<= 0)
                                goto label_14294c35c
                            
                            if (sub_142891710(rdi, r15, &var_98, nullptr, var_148, nullptr) == 0)
                                goto label_14294c35c
                            
                            int64_t rcx_20 = sx.q(rsi_1.d)
                            char* rbx_4 = &var_98
                            bool cond:0_1 = rsi_1.d s>= r12_1.d
                            
                            if (rsi_1.d s> r12_1.d)
                                rbx_4 = &(&var_98)[rcx_20 - rax_23]
                                cond:0_1 = rsi_1.d s>= r12_1.d
                            
                            if (not(cond:0_1))
                                memset(&(&var_98)[rcx_20], 0, sx.q(r12_1.d - rsi_1.d))
                            
                            *rbx_4 |= 0x80
                            rbx_4[rax_23 - 1] |= 1
                            
                            if (sub_14288fa60(rbx_4, r12_1.d, var_130_1) == 0)
                                goto label_14294c35c
                            
                            rbx_3 = arg11
                            int32_t r9
                            r9.b = r13_1 != 0
                            int32_t rax_34 = sub_14291b540(var_130_1, 0x40, rax_10, r9, rbx_3)
                            
                            if (rax_34 s> 0)
                                if (arg8 != 0)
                                    memcpy(arg8, rdi, r15.d)
                                
                                if (sub_14291af30(rbx_3, 2, 0) == 0)
                                    goto label_14294c35c
                                
                                if (sub_14291af30(rbx_3, 3, 0) == 0)
                                    goto label_14294c35c
                                
                                int32_t r12_2 = (rsi_1 << 3).d
                                r13 = 0
                                uint32_t temp0_1 = (divu.dp.q(0:(arg2 - 1), sx.q(r12_2))).d
                                
                                while (true)
                                    if (r13 != 0 && sub_14291af30(rbx_3, 0, zx.q(r13)) == 0)
                                        goto label_14294c35c
                                    
                                    sub_142890900(r14_1, 0)
                                    int32_t rsi_2 = 0
                                    
                                    if (temp0_1 s>= 0)
                                        int64_t rcx_30 = var_138
                                        int32_t rbx_5 = 0
                                        int64_t r14_2 = sx.q((rcx_30 - 1).d)
                                        
                                        while (true)
                                            if (r14_2 s>= 0)
                                                char* rax_43 = r14_2 + rdi
                                                
                                                do
                                                    char temp4_1 = *rax_43
                                                    *rax_43 += 1
                                                    
                                                    if (temp4_1 != 0xff)
                                                        break
                                                    
                                                    rax_43 -= 1
                                                while (rax_43 - rdi s>= 0)
                                                
                                                rcx_30 = var_138
                                            
                                            if (sub_142891710(rdi, rcx_30, &var_98, nullptr, 
                                                    var_148, nullptr) == 0)
                                                goto label_14294c35c
                                            
                                            if (sub_14288fa60(&var_98, var_14c_1, rax_12) == 0)
                                                goto label_14294c35c
                                            
                                            if (sub_1428f5510(rax_12, rax_12, rbx_5) == 0)
                                                goto label_14294c35c
                                            
                                            if (sub_1428d8f70(rax_14, rax_14, rax_12) == 0)
                                                goto label_14294c35c
                                            
                                            rcx_30 = var_138
                                            rsi_2 += 1
                                            rbx_5 += r12_2
                                            
                                            if (rsi_2 s> temp0_1)
                                                r14_1 = rax_14
                                                break
                                    
                                    if (sub_142890460(r14_1, arg2.d - 1) == 0)
                                        goto label_14294c35c
                                    
                                    if (sub_142890040(rax_15, r14_1) == 0)
                                        goto label_14294c35c
                                    
                                    if (sub_1428d8f70(rax_15, rax_15, rax_17) == 0)
                                        goto label_14294c35c
                                    
                                    if (sub_1428f56a0(rax_12, var_130_1) == 0)
                                        goto label_14294c35c
                                    
                                    if (sub_14291a950(nullptr, rax_16, rax_15, rax_12, rax_10) != 0
                                            && sub_1428d9010(rax_12, rax_16, &data_1434e8ea8) != 0
                                            && sub_1428d9010(var_140_1, rax_15, rax_12) != 0)
                                        rbx_3 = arg11
                                        
                                        if (sub_14288fc80(var_140_1, rax_17) s< 0)
                                        label_14294bfdb:
                                            r13 += 1
                                            
                                            if (r13 s< (arg2 << 2).d)
                                                continue
                                            
                                            r13_1 = arg5
                                            
                                            if (r13_1 == 0)
                                                rsi_1 = zx.q(var_14c_1)
                                                r15 = var_138
                                                r12_1 = var_b8
                                                goto label_14294bc20
                                            
                                            r15_1 = 0
                                            int32_t* var_178_4
                                            var_178_4.d = 0x208
                                            sub_1428a5670(0xa, 0x7e, 0x70, "crypto\dsa\dsa_gen.c", 
                                                var_178_4.d)
                                            rbp_1 = rax_11
                                            r14 = rax_10
                                            goto label_14294c385
                                        else
                                            int32_t rax_57 =
                                                sub_14291b540(var_140_1, 0x40, rax_10, 1, rbx_3)
                                            
                                            if (rax_57 s> 0)
                                                if (sub_14291af30(rbx_3, 2, 1) != 0)
                                                    rsi_1 = zx.q(var_14c_1)
                                                    r15 = var_138
                                                    rbx_1 = var_148
                                                    goto label_14294c054
                                            else if (rax_57 == 0)
                                                goto label_14294bfdb
                                    
                                    r14 = rax_10
                                    break
                                
                                break
                            
                            if (rax_34 != 0)
                                goto label_14294c35c
                            
                            if (r13_1 != 0)
                                r15_1 = 0
                                int32_t* var_178_2
                                var_178_2.d = 0x1af
                                sub_1428a5670(0xa, 0x7e, 0x71, "crypto\dsa\dsa_gen.c", var_178_2.d)
                                r14 = rax_10
                                rbp_1 = rax_11
                                goto label_14294c385
                        
                    label_14294c355:
                        rbp_1 = rax_11
                    else
                        if (arg7 s>= 0)
                            memcpy(var_110, rdi, r15.d)
                        
                    label_14294c054:
                        r14 = rax_10
                        
                        if (sub_1428d9010(rax_17, var_140_1, &data_1434e8ea8) != 0
                                && sub_14291a950(rax_12, nullptr, rax_17, var_130_1, r14) != 0)
                            if (arg7 s>= 0)
                                var_118.d = 1
                            label_14294c0be:
                                
                                if (sub_1428cc700(rax_11, var_140_1, r14) != 0)
                                    uint64_t rcx_48 = var_118
                                    int32_t rax_65 = arg7
                                    
                                    while (true)
                                        if (rax_65 s>= 0)
                                            var_98 = rax_65.b
                                            char var_96_1 = rcx_48.b
                                            uint8_t var_97_1 = (rcx_48.d u>> 8).b
                                            
                                            if (sub_1428919c0(rax_5, rbx_1, nullptr) == 0)
                                                break
                                            
                                            if (sub_142891c10(rax_5, var_110, r15) == 0)
                                                break
                                            
                                            if (sub_142891c10(rax_5, "ggencrypto\dsa\dsa_gen.c", 4)
                                                    == 0)
                                                break
                                            
                                            if (sub_142891c10(rax_5, &var_98, 3) == 0)
                                                break
                                            
                                            if (sub_1428918e0(rax_5, &var_98, nullptr) == 0)
                                                break
                                            
                                            if (sub_14288fa60(&var_98, rsi_1.d, rax_17) == 0)
                                                break
                                        
                                        while (true)
                                            if (sub_1429060f0(rax_13, rax_17, rax_12, var_140_1, 
                                                    r14, rax_11) == 0)
                                                goto label_14294c355_1
                                            
                                            if (sub_1428902b0(rax_13) == 0)
                                                if (sub_14291af30(arg11, 3, 1) == 0)
                                                    goto label_14294c355_1
                                                
                                                r15_1 = 1
                                                int64_t* rcx_60 = *(arg1 + 8)
                                                
                                                if (var_140_1 != rcx_60)
                                                    sub_1428901a0(rcx_60)
                                                    *(arg1 + 8) = sub_1428900c0(var_140_1)
                                                
                                                int64_t* rcx_62 = *(arg1 + 0x10)
                                                
                                                if (var_130_1 != rcx_62)
                                                    sub_1428901a0(rcx_62)
                                                    *(arg1 + 0x10) = sub_1428900c0(var_130_1)
                                                
                                                sub_1428901a0(*(arg1 + 0x18))
                                                int64_t* rax_81 = sub_1428900c0(rax_13)
                                                bool cond:3_1 = *(arg1 + 8) == 0
                                                *(arg1 + 0x18) = rax_81
                                                
                                                if (cond:3_1 || *(arg1 + 0x10) == 0 || rax_81 == 0)
                                                    rbp_1 = rax_11
                                                    r15_1 = -1
                                                else
                                                    if (arg9 != 0)
                                                        *arg9 = r13
                                                    
                                                    rbp_1 = rax_11
                                                    
                                                    if (arg10 != 0)
                                                        *arg10 = var_118.d
                                                
                                                goto label_14294c385
                                            
                                            rax_65 = arg7
                                            
                                            if (rax_65 s< 0)
                                                if (sub_1428d8f70(rax_17, rax_17, &data_1434e8ea8)
                                                        == 0)
                                                    goto label_14294c355_1
                                                
                                                rax_65 = arg7
                                            
                                            rcx_48 = zx.q(var_118.d + 1)
                                            var_118 = rcx_48
                                            
                                            if (rax_65 s>= 0)
                                                if (rcx_48.d u<= 0xffff)
                                                    break
                                                
                                                rbp_1 = rax_11
                                                goto label_14294c370
                            else if (sub_142890900(rax_17, 2) != 0)
                                goto label_14294c0be
                        
                    label_14294c355_1:
                        rbp_1 = rax_11

label_14294c370:
r15_1 = var_168
label_14294c385:
sub_1428a6780(rdi)

if (arg8 != var_110)
    sub_1428a6780(var_110)

if (r14 != 0)
    sub_1428d8a60(r14)

sub_1428d8ae0(r14)
sub_1428cc600(rbp_1)
sub_142891ea0(rax_5)
__security_check_cookie(rax_1 ^ &var_198)
return zx.q(r15_1)
