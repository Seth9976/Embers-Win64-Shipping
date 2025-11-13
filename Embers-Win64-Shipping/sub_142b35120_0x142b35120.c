// 函数: sub_142b35120
// 地址: 0x142b35120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int16_t rax = *(arg3 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg3 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (rax_2 != 0)
    int64_t* rcx = *(arg1 + 0x60)
    
    if ((*(*rcx + 0xc0))(rcx) == 0)
        if (sub_142ab0e60(arg2, arg3) != 0)
            int16_t rax_17 = *(arg3 + 8)
            
            if (rax_17 s< 0)
                return zx.q(*(arg3 + 0xc))
            
            return zx.q(sx.d(rax_17) s>> 5)
    else
        int64_t* rax_5 = sub_142aaef10(*(arg1 + 0x60))
        
        if (rax_5 != 0)
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** rax_7 =
                (*(*rax_5 + 0x138))(rax_5, arg2)
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** var_30_1 = rax_7
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** rax_9 =
                (*(*rax_5 + 0x138))(rax_5, arg3)
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** var_28_1 = rax_9
            int32_t r15_1 = 0
            
            if (rax_7 == 0 || rax_9 == 0)
                *arg4 = 7
            else
                int32_t arg_18 = 0
                int32_t i = sub_142b183c0(rax_7, &arg_18)
                int32_t rax_11 = sub_142b183c0(rax_9, &arg_18)
                int32_t rsi_2 = rax_11
                
                if (rax_11 == 0xffffffff)
                label_142b3529e:
                    r15_1 = sub_142b18250(rax_7)
                    
                    if (i != 0xffffffff)
                        r15_1 -= 1
                else
                    while (true)
                        if ((i & 0xffff0000) == 0)
                            while (i != 0xffffffff)
                                int32_t i_1 = sub_142b183c0(rax_7, &arg_18)
                                i = i_1
                                
                                if ((i_1 & 0xffff0000) != 0)
                                    break
                        
                        if ((rsi_2 & 0xffff0000) == 0)
                            int32_t rax_12
                            
                            do
                                if (rsi_2 == 0xffffffff)
                                    goto label_142b3529e
                                
                                rax_12 = sub_142b183c0(rax_9, &arg_18)
                                rsi_2 = rax_12
                            while ((rax_12 & 0xffff0000) == 0)
                        
                        if (rsi_2 == 0xffffffff)
                            goto label_142b3529e
                        
                        if (i == 0xffffffff)
                            break
                        
                        if (((rsi_2 ^ i) s>> 0x10).w != 0)
                            break
                        
                        i = sub_142b183c0(rax_7, &arg_18)
                        int32_t rax_14 = sub_142b183c0(rax_9, &arg_18)
                        rsi_2 = rax_14
                        
                        if (rax_14 == 0xffffffff)
                            goto label_142b3529e
            
            if (rax_9 != 0)
                sub_142b17fc0(rax_9)
                sub_142a47920(rax_9)
            
            if (rax_7 != 0)
                sub_142b17fc0(rax_7)
                sub_142a47920(rax_7)
            
            return zx.q(r15_1)
        
        *arg4 = 7

return 0
