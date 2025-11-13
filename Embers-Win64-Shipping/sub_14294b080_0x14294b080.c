// 函数: sub_14294b080
// 地址: 0x14294b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x168)
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t result_1 = 0
int32_t* r12 = arg10
int64_t* rdi = nullptr
uint64_t r14_1 = arg3 u>> 3
void* const r15 = arg4
int64_t var_e0 = arg7
void* const var_158 = arg4
int64_t var_120 = arg5
int32_t* var_140 = r12
int32_t result_2 = 0
int32_t var_168 = 0
int32_t var_108 = 2
uint64_t result

if (((r14_1 - 0x14).d & 0xfffffff3) != 0 || r14_1.d == 0x18)
    result = 0
else
    if (arg4 != 0)
        r14_1 = zx.q(sub_1428916c0(arg4))
    else if (r14_1.d == 0x14)
        r15 = &data_1434e9110
        var_158 = &data_1434e9110
    else if (r14_1.d != 0x1c)
        r15 = &data_1434e91b0
        var_158 = &data_1434e91b0
    else
        r15 = &data_1434e9160
        var_158 = &data_1434e9160
    
    int64_t rax_6 = 0x200
    
    if (arg2 u>= 0x200)
        rax_6 = arg2
    
    int64_t rax_8 = (rax_6 + 0x3f) & 0xffffffffffffffc0
    void var_78
    
    if (arg5 == 0)
    label_14294b1f2:
        int32_t* rax_10 = sub_1428cc660()
        int32_t* rbx_1 = rax_10
        
        if (rax_10 != 0)
            int64_t* rax_11 = sub_1428d8d60()
            rdi = rax_11
            
            if (rax_11 != 0)
                sub_1428d8e50(rax_11)
                int64_t* rax_12 = sub_1428d8ba0(rdi)
                int64_t* r13 = rax_11
                int64_t* rax_13 = sub_1428d8ba0(r13)
                int64_t* rax_14 = sub_1428d8ba0(r13)
                int64_t* rax_15 = sub_1428d8ba0(r13)
                int64_t* rax_16 = sub_1428d8ba0(r13)
                int64_t* rax_17 = sub_1428d8ba0(r13)
                int64_t* rax_18 = sub_1428d8ba0(r13)
                int64_t* rax_19 = sub_1428d8ba0(r13)
                
                if (rax_19 != 0)
                    int64_t rsi_1 = sx.q(r14_1.d)
                    
                    if (sub_1428f5510(rax_19, &data_1434e8ea8, rax_8.d - 1) != 0)
                        while (true)
                            int32_t rbx_3
                            rbx_3.b = var_120 == 0
                            int32_t rax_21 = sub_14291af30(r12, 0, zx.q(var_168))
                            var_168 += 1
                            
                            if (rax_21 == 0)
                                break
                            
                            if (var_120 != 0)
                                var_120 = 0
                            else if (sub_142897af0(&var_78, zx.q(r14_1.d)) s<= 0)
                                break
                            
                            char var_98[0x10]
                            memcpy(&var_98, &var_78, rsi_1.d)
                            char var_b8[0x10]
                            memcpy(&var_b8, &var_78, rsi_1.d)
                            int64_t rax_23 = rsi_1 - 1
                            
                            if (rax_23 s>= 0)
                                int64_t temp1_1
                                
                                do
                                    char temp0_1 = var_98[rax_23]
                                    var_98[rax_23] += 1
                                    
                                    if (temp0_1 != 0xff)
                                        break
                                    
                                    temp1_1 = rax_23
                                    rax_23 -= 1
                                while (temp1_1 - 1 s>= 0)
                            
                            int32_t var_188
                            var_188.q = r15
                            char var_d8[0x10]
                            
                            if (sub_142891710(&var_78, rsi_1, &var_d8, nullptr, var_188, nullptr)
                                    == 0)
                                break
                            
                            var_188.q = r15
                            
                            if (sub_142891710(&var_98, rsi_1, &var_b8, nullptr, var_188, nullptr)
                                    == 0)
                                break
                            
                            int64_t i = 0
                            
                            if (r14_1.d s> 0 && r14_1.d u>= 0x40)
                                int32_t rdx_7 = r14_1.d & 0x8000003f
                                
                                if (rdx_7 s< 0)
                                    rdx_7 = ((rdx_7 - 1) | 0xffffffc0) + 1
                                
                                do
                                    *(&var_d8 + i) ^= *(&var_b8 + i)
                                    void var_c8
                                    void var_a8
                                    *(&var_c8 + i) ^= *(&var_a8 + i)
                                    *(&var_b8 + i) ^= *(&var_98 + i)
                                    void var_88
                                    *(&var_a8 + i) ^= *(&var_88 + i)
                                    i += 0x40
                                while (i s< sx.q(r14_1.d - rdx_7))
                            
                            for (; i s< rsi_1; i += 1)
                                var_d8[i] ^= var_b8[i]
                            
                            var_d8[0] |= 0x80
                            *(&var_e0:7 + rsi_1) |= 1
                            
                            if (sub_14288fa60(&var_d8, r14_1.d, rax_15) == 0)
                                break
                            
                            var_188.q = r12
                            int32_t rax_30 = sub_14291b540(rax_15, 0x40, r13, rbx_3, var_188)
                            
                            if (rax_30 s> 0)
                                if (sub_14291af30(r12, 2, 0) == 0)
                                    break
                                
                                if (sub_14291af30(r12, 3, 0) == 0)
                                    break
                                
                                int64_t* rbx_4 = rax_14
                                int32_t r13_1 = 0
                                uint32_t r12_2 = ((rax_8 - 1) u/ 0xa0).d
                                
                                while (true)
                                    if (r13_1 != 0 && sub_14291af30(var_140, 0, zx.q(r13_1)) == 0)
                                        goto label_14294b2f7
                                    
                                    sub_142890900(rbx_4, 0)
                                    int32_t rbx_5 = 0
                                    
                                    if (r12_2 s>= 0)
                                        do
                                            int64_t rax_35 = rsi_1 - 1
                                            
                                            if (rsi_1 - 1 s>= 0)
                                                int64_t temp4_1
                                                
                                                do
                                                    char temp3_1 = var_98[rax_35]
                                                    var_98[rax_35] += 1
                                                    
                                                    if (temp3_1 != 0xff)
                                                        break
                                                    
                                                    temp4_1 = rax_35
                                                    rax_35 -= 1
                                                while (temp4_1 - 1 s>= 0)
                                            
                                            var_188.q = var_158
                                            
                                            if (sub_142891710(&var_98, rsi_1, &var_d8, nullptr, 
                                                    var_188, nullptr) == 0)
                                                goto label_14294b2f7
                                            
                                            if (sub_14288fa60(&var_d8, r14_1.d, rax_12) == 0)
                                                goto label_14294b2f7
                                            
                                            if (sub_1428f5510(rax_12, rax_12, 
                                                    (r14_1 << 3).d * rbx_5) == 0)
                                                goto label_14294b2f7
                                            
                                            if (sub_1428d8f70(rax_14, rax_14, rax_12) == 0)
                                                goto label_14294b2f7
                                            
                                            rbx_5 += 1
                                        while (rbx_5 s<= r12_2)
                                    
                                    rbx_4 = rax_14
                                    
                                    if (sub_142890460(rbx_4, rax_8.d - 1) == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_142890040(rax_16, rbx_4) == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_1428d8f70(rax_16, rax_16, rax_19) == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_1428f56a0(rax_12, rax_15) == 0)
                                        goto label_14294b2f7
                                    
                                    var_188.q = rax_11
                                    
                                    if (sub_14291a950(nullptr, rax_17, rax_16, rax_12, var_188)
                                            == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_1428d9010(rax_12, rax_17, &data_1434e8ea8) == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_1428d9010(rax_18, rax_16, rax_12) == 0)
                                        goto label_14294b2f7
                                    
                                    if (sub_14288fc80(rax_18, rax_19) s>= 0)
                                        var_188.q = var_140
                                        int32_t rax_51 =
                                            sub_14291b540(rax_18, 0x40, rax_11, 1, var_188)
                                        
                                        if (rax_51 s> 0)
                                            if (sub_14291af30(var_140, 2, 1) != 0 &&
                                                    sub_1428d9010(rax_19, rax_18, &data_1434e8ea8) != 0)
                                                var_188.q = rax_11
                                                
                                                if (sub_14291a950(rax_12, nullptr, rax_19, rax_15, 
                                                        var_188) != 0 && sub_142890900(rax_19, 2) != 0
                                                        && sub_1428cc700(rax_10, rax_18, rax_11)
                                                        != 0)
                                                    var_188.q = rax_11
                                                    
                                                    if (sub_1429060f0(rax_13, rax_19, rax_12, 
                                                            rax_18, var_188, rax_10) != 0)
                                                        while (true)
                                                            if (sub_1428902b0(rax_13) == 0)
                                                                if (sub_14291af30(var_140, 3, 1) == 0)
                                                                    break
                                                                
                                                                result_2 = 1
                                                                sub_1428901a0(*(arg1 + 8))
                                                                sub_1428901a0(*(arg1 + 0x10))
                                                                sub_1428901a0(*(arg1 + 0x18))
                                                                *(arg1 + 8) = sub_1428900c0(rax_18)
                                                                *(arg1 + 0x10) = sub_1428900c0(rax_15)
                                                                int64_t* rax_66 = sub_1428900c0(rax_13)
                                                                bool cond:4_1 = *(arg1 + 8) == 0
                                                                *(arg1 + 0x18) = rax_66
                                                                
                                                                if (cond:4_1 || *(arg1 + 0x10) == 0
                                                                        || rax_66 == 0)
                                                                    rbx_1 = rax_10
                                                                    result_1 = 0
                                                                    goto label_14294b301
                                                                
                                                                if (arg8 != 0)
                                                                    *arg8 = r13_1
                                                                
                                                                if (arg9 != 0)
                                                                    *arg9 = var_108
                                                                
                                                                int64_t rax_69 = var_e0
                                                                
                                                                if (rax_69 != 0)
                                                                    memcpy(rax_69, &var_78, rsi_1.d)
                                                                
                                                                break
                                                            
                                                            if (sub_1428d8f70(rax_19, rax_19, 
                                                                    &data_1434e8ea8) == 0)
                                                                goto label_14294b2f7
                                                            
                                                            var_108 += 1
                                                            var_188.q = rax_11
                                                            
                                                            if (sub_1429060f0(rax_13, rax_19, 
                                                                    rax_12, rax_18, var_188, rax_10) == 0)
                                                                goto label_14294b2f7
                                            
                                            goto label_14294b2f7
                                        
                                        if (rax_51 != 0)
                                            goto label_14294b2f7
                                    
                                    r13_1 += 1
                                    
                                    if (r13_1 s>= 0x1000)
                                        r15 = var_158
                                        r12 = var_140
                                        r13 = rax_11
                                        break
                            else
                                if (rax_30 != 0)
                                    break
                    
                label_14294b2f7:
                    rbx_1 = rax_10
                
                result_1 = result_2
            label_14294b301:
                rdi = rax_11
                sub_1428d8a60(rdi)
        
        sub_1428d8ae0(rdi)
        sub_1428cc600(rbx_1)
        result = zx.q(result_1)
    else
        int64_t r8 = arg6
        int64_t rax_9 = sx.q(r14_1.d)
        
        if (r8 u>= rax_9)
            if (r8 u> rax_9)
                r8 = rax_9
            
            memcpy(&var_78, arg5, r8.d)
            goto label_14294b1f2
        
        sub_1428a5670(0xa, 0x7d, 0x6e, "crypto\dsa\dsa_gen.c", 0x55)
        result = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
