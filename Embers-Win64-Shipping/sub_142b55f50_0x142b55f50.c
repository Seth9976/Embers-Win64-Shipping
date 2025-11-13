// 函数: sub_142b55f50
// 地址: 0x142b55f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg2 != 0)
    int32_t i = 0
    int32_t arg_10 = 0
    int32_t rbp_1 = *(arg2 + 8)
    struct icu_64::UObject::icu_64::UVector::VTable** rax_1 = j_sub_142a7dd00(0x28)
    struct icu_64::UObject::icu_64::UVector::VTable** arg_18 = rax_1
    struct icu_64::UObject::icu_64::UVector::VTable** result
    
    if (rax_1 == 0)
        result = nullptr
    else
        result = sub_142ae6da0(rax_1, rbp_1, &arg_10)
    
    if (arg_10 s<= 0)
        int32_t rdi_1 = 0
        
        if (rbp_1 s<= 0)
            return result
        
        while (true)
            int64_t* rax_3 = sub_142ae72d0(arg2, rdi_1)
            int64_t rdx_2 = *rax_3
            sub_142ae7110(result, (*(rdx_2 + 0x10))(rax_3, rdx_2), &arg_10)
            
            if (arg_10 s> 0)
                break
            
            rdi_1 += 1
            
            if (rdi_1 s>= rbp_1)
                return result
        
        if (result[1].d s> 0)
            do
                int64_t* rax_5 = sub_142ae7500(result, i)
                
                if (rax_5 != 0)
                    int64_t r8_3 = *rax_5
                    (*r8_3)(rax_5, 1, r8_3)
                
                i += 1
            while (i s< result[1].d)
        
        (*result)->__offset(0x0).q(result, 1)

return nullptr
