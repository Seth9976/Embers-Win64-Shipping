// 函数: sub_142ad08a0
// 地址: 0x142ad08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
sub_142aa75d0(0x11, sub_142ad0de0)
int32_t i = 0
int64_t* result = sub_142a86f30(sub_142a4b0a0, sub_142a4b070, 0, &i)
data_144016630 = result

if (i s> 0 || result == 0)
    data_144016630 = 0
else
    std::ios_base::precision(result, sub_140a4f210)
    struct icu_64::UObject::icu_64::UVector::VTable** rax_2 = j_sub_142a7dd00(0x28)
    struct icu_64::UObject::icu_64::UVector::VTable** var_110_1 = rax_2
    struct icu_64::UObject::icu_64::UVector::VTable** rax_3
    
    if (rax_2 == 0)
        rax_3 = nullptr
    else
        rax_3 = sub_142ae6e40(rax_2, 0, sub_142a86ba0, &i)
    
    data_144016628 = rax_3
    
    if (i s> 0 || rax_3 == 0)
        data_144016628 = 0
        result = sub_142a869e0(data_144016630)
        data_144016630 = 0
    else
        sub_142a87050(rax_3, sub_142a7dcd0)
        char** rax_4 = sub_142a64160(nullptr, "metaZones", &i)
        char** rax_5 = sub_142a625a0(rax_4, "mapTimezones", nullptr, &i)
        void var_f8
        sub_142a5f830(&var_f8)
        
        while (i s<= 0)
            if (sub_142a63fa0(rax_5) == 0)
                break
            
            sub_142a63800(rax_5, &var_f8, &i)
            
            if (i s> 0)
                break
            
            char* rax_7 = sub_142a63790(&var_f8)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rax_7[rbx_1] != 0)
            
            void* rax_9 = sub_142a7dd00(sx.q((rbx_1 + 1).d) * 2)
            
            if (rax_9 == 0)
                i = 7
                break
            
            sub_142a8d750(rax_7, rax_9, rbx_1.d)
            *(rax_9 + (sx.q(rbx_1.d) << 1)) = 0
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                j_sub_142a7dd00(0x40)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_110_2 = rax_10
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_2
            
            if (rax_10 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = Concurrency::agent::agent(rax_10, rax_9)
            
            if (sub_142a86c30(data_144016630, rbx_2) != 0)
                sub_142a7dcd0(rax_9)
                
                if (rbx_2 != 0)
                    (*rbx_2)->__offset(0x0).q(rbx_2, 1)
            else
                sub_142ae7110(data_144016628, rax_9, &i)
                sub_142a86f50(data_144016630, rbx_2, rax_9, &i)
        
        sub_142a5f860(rax_5)
        sub_142a5f860(rax_4)
        
        if (i s> 0)
            sub_142a869e0(data_144016630)
            int64_t* rcx_22 = data_144016628
            
            if (rcx_22 != 0)
                (**rcx_22)(rcx_22, 1)
            
            data_144016630 = 0
            data_144016628 = 0
        
        result = sub_142a5f860(&var_f8)

__security_check_cookie(rax_1 ^ &var_138)
return result
