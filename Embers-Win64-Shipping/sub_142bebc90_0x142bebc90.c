// 函数: sub_142bebc90
// 地址: 0x142bebc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rcx = *(arg1 + 0x10)
int32_t r14 = 0
int32_t result_1 = 0
int32_t r15 = 0
int64_t* r13 = arg2
int64_t var_e0 = rcx
int32_t result_2

if (arg2[0xc].d == *(arg1 + 0x20))
    if (arg3 != arg5)
        result_2 = 0x13
        result_1 = 0x13
        goto label_142bec12e
    
    if ((*(arg2[0x1e] + 8) & 1) != 0)
        sub_142b99980(rcx, arg2[0xf])
        arg2[0xf] = 0
        void* rax_5 = r13[0x1e]
        *(rax_5 + 8) &= 0xfffffffe
    
    rcx = var_e0
    
    if (sub_142b98f20(r13, arg3, arg4) != 0)
        result_2 = 0x62
        result_1 = 0x62
        goto label_142bec12e
    
    int64_t rax_7 = sub_142b99a90(rcx, arg2[0xe].d, 0, arg2[0xd].d, 0, &result_1)
    result_2 = result_1
    arg2[0xf] = rax_7
    
    if (result_2 != 0)
    label_142bec122:
        rcx = var_e0
        goto label_142bec12e
    
    void* rax_8 = r13[0x1e]
    *(rax_8 + 8) |= 1
    r14 = neg.d(r13[0x12].d) << 6
    int32_t rdx_4
    
    if (*(arg2 + 0x82) != 6)
        rdx_4 = arg2[0xd].d << 6
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x55555556, arg2[0xd].d << 6)
        rdx_4 = temp0_1 + (temp0_1 u>> 0x1f)
    
    r15 = (neg.d(*(r13 + 0x94)) << 6) + rdx_4
    
    if (arg4 != 0)
        r14 += *arg4
        r15 += arg4[1]
    
    if (r14 != 0 || r15 != 0)
        sub_142b95270(&r13[0x13], r14, r15)
    
    int32_t* var_a8 = &arg2[0xd]
    void* var_a0_1 = &r13[0x13]
    int32_t var_98_1 = 1
    
    if (arg3 == 3)
        int32_t rax_11 = arg2[0xd].d
        int32_t* r12_2 = *r13 + 0x158
        uint32_t count_2 = arg2[0xe].d
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = mulu.dp.d(0xaaaaaaab, *(arg2 + 0x6c))
        uint32_t j_3 = temp2_1 u>> 1
        sub_142b95270(&r13[0x13], neg.d(*r12_2), neg.d(r12_2[1]))
        int32_t result_3 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        result_1 = result_3
        result_2 = result_3
        
        if (result_3 != 0)
            goto label_142bec122
        
        arg2[0xf] += zx.q(j_3)
        sub_142b95270(&r13[0x13], *r12_2 - r12_2[2], r12_2[1] - r12_2[3])
        int32_t result_4 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        result_2 = result_4
        result_1 = result_4
        arg2[0xf] -= zx.q(j_3)
        
        if (result_2 != 0)
            goto label_142bec122
        
        uint64_t rbx_2 = zx.q(j_3 * 2)
        arg2[0xf] += rbx_2
        sub_142b95270(&r13[0x13], r12_2[2] - r12_2[4], r12_2[3] - r12_2[5])
        int32_t result_5 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        arg2[0xf] -= rbx_2
        result_2 = result_5
        rcx = var_e0
        result_1 = result_5
        
        if (result_5 != 0)
            goto label_142bec12e
        
        r14 -= r12_2[4]
        r15 -= r12_2[5]
        uint32_t count_1 = count_2
        void* rax_15 = sub_142b99860(rcx, count_1, &result_1)
        result_2 = result_1
        
        if (result_2 != 0)
            goto label_142bec122
        
        uint64_t rcx_11 = zx.q(rax_11)
        
        if (rcx_11.d != 0)
            uint64_t j_2 = zx.q(j_3)
            int32_t r12_3 = 0
            int32_t var_d0_1
            var_d0_1.q = rcx_11
            uint32_t count = count_1
            int64_t i
            
            do
                char* r10_2 = zx.q(r12_3) + arg2[0xf]
                
                if (j_2.d != 0)
                    uint64_t r9_1 = zx.q((j_2 * 2).d)
                    void* r8_12 = rax_15 + 2
                    char* r11_1 = r10_2
                    uint64_t j_1 = j_2
                    uint64_t j
                    
                    do
                        char rax_16 = *r11_1
                        r11_1 = &r11_1[1]
                        *(r8_12 - 2) = rax_16
                        r8_12 += 3
                        *(r8_12 - 4) = r10_2[zx.q(r9_1.d + neg.d(j_2.d))]
                        char rdx_18 = r10_2[r9_1]
                        r9_1 = zx.q((r9_1 + 1).d)
                        *(r8_12 - 3) = rdx_18
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    count_1 = count_2
                
                memcpy(r10_2, rax_15, count)
                r12_3 += count_1
                i = var_d0_1.q
                var_d0_1.q -= 1
            while (i != 1)
            r13 = arg2
        
        sub_142b99980(var_e0, rax_15)
        result_2 = result_1
        goto label_142bec113
    
    if (arg3 != 4)
        int32_t result_9 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        result_2 = result_9
        result_1 = result_9
    label_142bec113:
        
        if (result_2 != 0)
            goto label_142bec122
        
        __builtin_strncpy(&r13[0xc], "stib", 4)
    else
        int64_t rbx_3 = sx.q(arg2[0xe].d)
        int32_t* r12_5 = *r13 + 0x158
        arg2[0xe].d = (rbx_3 * 3).d
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = mulu.dp.d(0xaaaaaaab, arg2[0xd].d)
        arg2[0xd].d = temp4_1 u>> 1
        sub_142b95270(&r13[0x13], neg.d(r12_5[1]), *r12_5)
        int32_t result_6 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        result_1 = result_6
        result_2 = result_6
        
        if (result_6 != 0)
            goto label_142bec122
        
        arg2[0xf] += rbx_3
        sub_142b95270(&r13[0x13], r12_5[1] - r12_5[3], r12_5[2] - *r12_5)
        int32_t result_7 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        arg2[0xf] -= rbx_3
        result_2 = result_7
        int64_t rcx_17 = arg2[0xf]
        result_1 = result_7
        
        if (result_7 != 0)
            goto label_142bec122
        
        int64_t rbx_4 = sx.q(rbx_3.d * 2)
        arg2[0xf] = rcx_17 + rbx_4
        sub_142b95270(&r13[0x13], r12_5[3] - r12_5[5], r12_5[4] - r12_5[2])
        int32_t result_8 = (*(arg1 + 0x68))(*(arg1 + 0x60), &var_a8)
        arg2[0xf] -= rbx_4
        result_2 = result_8
        result_1 = result_8
        
        if (result_8 != 0)
            goto label_142bec122
        
        r14 -= r12_5[5]
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = muls.dp.d(0x55555556, arg2[0xe].d)
        r15 += r12_5[4]
        arg2[0xe].d = temp6_1 + (temp6_1 u>> 0x1f)
        arg2[0xd].d *= 3
        __builtin_strncpy(&r13[0xc], "stib", 4)
else
    result_2 = 6
    result_1 = 6
label_142bec12e:
    
    if ((*(r13[0x1e] + 8) & 1) != 0)
        sub_142b99980(rcx, arg2[0xf], result_2)
        arg2[0xf] = 0
        void* rax_28 = r13[0x1e]
        *(rax_28 + 8) &= 0xfffffffe
        result_2 = result_1

uint64_t result

if (r14 != 0 || r15 != 0)
    sub_142b95270(&arg2[0x13], neg.d(r14), neg.d(r15))
    result = zx.q(result_1)
else
    result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_118)
return result
