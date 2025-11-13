// 函数: sub_142c3a350
// 地址: 0x142c3a350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* r10 = *(arg2 + 0x40)
uint64_t r14 = zx.q(arg5) * 0x14
int64_t var_38 = 0
int64_t var_30 = 0
uint64_t result =
    (*(r10 + 0x188))(arg2, *(arg2 + 0x48), zx.q(*(r14 + *(arg3 + 0x70))), &var_38, *(r10 + 0x78))

if (result.d != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(arg2 + 0x24))
    void* r8_2 = *(arg3 + 0x80) + r14
    uint64_t r11_2 = zx.q(arg6 - 0xc8)
    *(r8_2 + 8) = 0
    int32_t r10_2 = ((temp0_1 & 0xf) + temp1_1) s>> 4
    
    if (r11_2.d u> 0x22)
    label_142c3a46f:
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(arg4[2] - var_30.d)
        result = zx.q(((temp3_1 - temp2_1) s>> 1) - var_38.d + *arg4)
        *(r8_2 + 8) = result.d
    else
        switch (r11_2)
            case 0, 0x12, 0x1c
                result = zx.q(*arg4 - var_38.d)
                *(r8_2 + 8) = result.d
            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x13, 0x14, 0x15, 
                    0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1d, 0x1e, 0x1f
                goto label_142c3a46f
            case 0x10, 0x16, 0x20
                result = zx.q(arg4[2] - var_38.d - var_30.d + *arg4)
                *(r8_2 + 8) = result.d
            case 0x21, 0x22
                int32_t rax_7 = *(arg3 + 0x38)
                
                if (rax_7 != 4)
                    if (rax_7 != 5)
                        goto label_142c3a46f
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(var_30.d)
                    result = zx.q((temp7_1 - temp6_1) s>> 1)
                    *(r8_2 + 8) = *arg4 - result.d - var_38.d
                else
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(var_30.d)
                    result = zx.q((temp5_1 - temp4_1) s>> 1)
                    *(r8_2 + 8) = arg4[2] - result.d - var_38.d + *arg4
    
    if (r11_2.d u<= 0x22)
        result = zx.q(lookup_table_142c3a57c[r11_2])
        
        switch (result)
            case 0
                goto label_142c3a4ae
            case 1
                goto label_142c3a4e3
            case 2
                arg4[3] -= r10_2
            label_142c3a4ae:
                int32_t rdx_8 = arg4[1] - var_38:4.d + arg4[3]
                *(r8_2 + 0xc) = rdx_8
                int32_t rcx_14
                rcx_14.b = rdx_8 s> 0
                int32_t rax_23
                rax_23.b = r10_2 s> 0
                
                if (rax_23 == rcx_14)
                    arg4[3] -= rdx_8
                    *(r8_2 + 0xc) = 0
                
                result = zx.q(var_30:4.d)
                arg4[3] += result.d
            case 3
                arg4[1] += r10_2
                arg4[3] -= r10_2
            label_142c3a4e3:
                int32_t rax_26 = arg4[1] - var_30:4.d - var_38:4.d
                *(r8_2 + 0xc) = rax_26
                int32_t rcx_15
                rcx_15.b = rax_26 s> 0
                int32_t r9_1
                r9_1.b = r10_2 s> 0
                
                if (r9_1 != rcx_15)
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(rax_26)
                    int32_t rax_30 = neg.d((temp9_1 - temp8_1) s>> 1)
                    arg4[1] += rax_30
                    arg4[3] -= rax_30
                    *(r8_2 + 0xc) += rax_30
                
                result = zx.q(var_30:4.d)
                arg4[1] -= result.d
                arg4[3] += result.d

__security_check_cookie(rax_1 ^ &var_68)
return result
