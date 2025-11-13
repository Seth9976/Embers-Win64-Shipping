// 函数: sub_142b32a70
// 地址: 0x142b32a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int16_t rax = *(arg2 + 8)
uint64_t result

if (rax s< 0)
    result = zx.q(*(arg2 + 0xc))
else
    result = zx.q(sx.d(rax) s>> 5)

if (result.d != 0)
    int64_t* rcx = *(arg1 + 0x60)
    
    if ((*(*rcx + 0xc0))(rcx).b != 0)
        result = sub_142aaef10(*(arg1 + 0x60))
        
        if (result != 0)
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** rax_4 =
                (*(*result + 0x138))(result, arg2)
            struct icu_64::UObject::icu_64::CollationElementIterator::VTable** arg_20 = rax_4
            int32_t* rdi
            
            if (rax_4 != 0)
                int32_t arg_10 = 0
                int32_t rax_5 = sub_142b183c0(rax_4, &arg_10)
                bool cond:0_1 = rax_5 == 0xffffffff
                
                if (rax_5 != 0xffffffff)
                    while ((rax_5 & 0xffff0000) == 0)
                        rax_5 = sub_142b183c0(rax_4, &arg_10)
                        
                        if (rax_5 == 0xffffffff)
                            break
                    
                    cond:0_1 = rax_5 == 0xffffffff
                
                rdi.b = cond:0_1
            else
                *arg3 = 7
                rdi.b = 0
            
            if (rax_4 != 0)
                sub_142b17fc0(rax_4)
                sub_142a47920(rax_4)
            
            return zx.q(rdi.b)
        
        *arg3 = 7
    
    result.b = 0
else
    result.b = 1

return result
