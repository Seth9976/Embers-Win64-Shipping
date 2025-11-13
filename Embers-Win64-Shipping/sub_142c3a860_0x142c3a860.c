// 函数: sub_142c3a860
// 地址: 0x142c3a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
uint64_t result = __security_cookie ^ &var_308
uint64_t result_1 = result
int64_t r13 = *(arg2 + 0x70)
int32_t r15 = arg4
int64_t var_2e0 = r13
int32_t r12 = arg3
void* r10 = arg2
int32_t result_2 = arg3

for (int32_t i = 0xdc; i u<= 0xe6; i += 0xa)
    bool cond:0_1 = result_2 == r15
    
    if (result_2 u< r15)
        result = zx.q(result_2)
        void* r9_1 = result * 0x14 + 0x10 + r13
        
        do
            uint32_t r8 = zx.d(*r9_1)
            uint32_t r8_1
            
            if ((1 << (r8.b & 0x1f) & 0x1c00) == 0)
                r8_1 = 0
            else
                r8_1 = r8 u>> 8
            
            if (r8_1 u>= i)
                break
            
            result_2 += 1
            r9_1 += 0x14
        while (result_2 u< r15)
        
        cond:0_1 = result_2 == r15
    
    if (cond:0_1)
        break
    
    result = zx.q(result_2)
    void* r14_2 = result * 0x14 + r13
    uint32_t r8_2 = zx.d(*(r14_2 + 0x10))
    
    if ((1 << (r8_2.b & 0x1f) & 0x1c00) == 0 || r8_2 u>> 8 u<= i)
        int32_t result_3 = result_2
        
        if (result_2 u< r15)
            void* r9_2 = r14_2 + 0x10
        label_142c3a970:
            uint32_t r8_4 = zx.d(*r9_2)
            uint32_t r8_5
            
            if ((1 << (r8_4.b & 0x1f) & 0x1c00) == 0)
                r8_5 = 0
            else
                r8_5 = r8_4 u>> 8
            
            if (r8_5 == i)
                int32_t j = 0
                result = &data_143ccb820
                
                do
                    if (*(r9_2 - 0x10) == *result)
                        result_3 += 1
                        r9_2 += 0x14
                        
                        if (result_3 u< r15)
                            goto label_142c3a970
                        
                        goto label_142c3a9bc
                    
                    j += 1
                    result += 4
                while (j u< 9)
            
        label_142c3a9bc:
            
            if (result_2 != result_3)
                if (result_3 - r12 u>= 2)
                    sub_142bf5140(r10, r12, result_3)
                
                uint32_t count = (result_3 - result_2) * 0x14
                void var_2c8
                memmove(&var_2c8, r14_2, count)
                uint64_t r14_5 = zx.q(r12 - result_2 + result_3)
                void* r13_1 = r13 + zx.q(r12) * 0x14
                memmove(var_2e0 + r14_5 * 0x14, r13_1, (result_2 - r12) * 0x14)
                result = memmove(r13_1, &var_2c8, count)
                int16_t r11_1
                r11_1.b = i != 0xdc
                
                if (r12 u< r14_5.d)
                    int32_t j_3 = r14_5.d - r12
                    int16_t* r9_3 = r13_1 + 0x10
                    uint64_t j_2 = zx.q(j_3)
                    r12 += j_3
                    uint64_t j_1
                    
                    do
                        int16_t r8_11 = *r9_3
                        
                        if ((1 << (r8_11.b & 0x1f) & 0x1c00) != 0)
                            result.w = (r11_1 + 0x19) << 8
                            *r9_3 = (r8_11 & 0xff) | result.w
                        
                        r9_3 = &r9_3[0xa]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    r15 = arg4
                
                r13 = var_2e0
                r10 = arg2
                result_2 = result_3

__security_check_cookie(result_1 ^ &var_308)
return result
