// 函数: sub_1429db550
// 地址: 0x1429db550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* result

if (*(arg1 + 0x1b8) != 0 && *(arg1 + 0x1d8) s> 0 && *(arg1 + 0x1a4) == 0)
    result = nullptr
else if (*(arg1 + 0x548) s> 0)
    sub_1429dc720(arg1)
    int64_t r8_1 = sx.q(*(arg1 + 0x544))
    int64_t rcx_1 = r8_1 * 0x12
    bool cond:2_1 = *(arg1 + 0x54c) != 0
    *(arg1 + 0x1ac) = *(arg1 + (rcx_1 << 3) + 0x1e0)
    
    if (cond:2_1)
        result = nullptr
    else
        result = arg1 + 0x1e8 + (rcx_1 << 3)
        *(arg1 + 0x548) -= 1
        *(arg1 + 0x544) = (r8_1.d + 1) s% 6
else if (*arg2 != 0 || *(arg1 + 0x1c0) == 0)
label_1429db7a5:
    result = nullptr
else
    while (true)
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int64_t rax_3 = sx.q(*(arg1 + 0x1d4))
        void* rcx_8 = rax_3 * 0x30 + *(arg1 + 0x1c0)
        *(arg1 + 0x1c8)
        int32_t temp1_1 = mods.dp.d(sx.q(rax_3.d + 1), *(arg1 + 0x1c8))
        bool cond:4_1 = (*(arg1 + 8) & 0x10000) == 0
        int64_t* rsi_1 = *(rcx_8 + 0x18)
        *(arg1 + 0x1d4) = temp1_1
        
        if (not(cond:4_1))
            var_38_1.d = *(arg1 + 0xf8)
            var_38_1:4.d = *(arg1 + 0xfc)
            int32_t var_30_2 = *(arg1 + 0x100)
        
        if (data_143cc7028(rcx_8, temp1_1, &data_143cc7018) == 0)
            rsi_1[6].d = 0
            *(arg1 + 0x1d8) += 1
            bool cond:3_1 = *(arg1 + 0x1a4) != 1
            *(arg1 + 0x54c) = 1
            
            if (cond:3_1)
                goto label_1429db7a5
        else
            if (rsi_1[6].d == 1)
                *(arg1 + 0x1d8) += 1
                void* rax_11 = *rsi_1
                rsi_1[6].d = 0
                
                if (*(arg1 + 0x54c) == 1 && *(rax_11 + 0x4ec0) == 0
                        && (*(rax_11 + 0x5b8) != 0 || *(rax_11 + 0x5a8) == 0))
                    *(arg1 + 0x54c) = 0
            
            void var_c8
            
            if (sub_1429e7c60(*rsi_1, &var_c8) == 0)
                void* rbp_1 = *rsi_1
                int64_t r14_1 = *(rbp_1 + 0x47e8)
                int32_t r9_3 = sub_1429dc720(arg1)
                *(arg1 + 0x1ac) = *(*rsi_1 + 0x5a0)
                
                if (*(arg1 + 0x54c) == 0)
                    sub_1429dc940(arg1 + 0x118, &var_c8, rsi_1[4], r9_3)
                    result = arg1 + 0x118
                    *(arg1 + 0x198) = *(sx.q(*(rbp_1 + 0x5a0)) * 0xd0 + r14_1 + 0x68)
                else
                    result = nullptr
                
                break
        
        if (*(arg1 + 0x1d4) == *(arg1 + 0x1cc))
            goto label_1429db7a5

__security_check_cookie(rax_1 ^ &var_e8)
return result
