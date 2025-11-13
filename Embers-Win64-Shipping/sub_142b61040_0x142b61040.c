// 函数: sub_142b61040
// 地址: 0x142b61040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (*arg2 s<= 0)
    struct icu_64::UObject::icu_64::UVector::VTable** result_2 = j_sub_142a7dd00(0x28)
    struct icu_64::StringEnumeration::icu_64::FormatNameEnumeration::VTable** result_1 = result_2
    struct icu_64::UObject::icu_64::UVector::VTable** r14_1
    
    if (result_2 == 0)
        r14_1 = nullptr
    else
        r14_1 = sub_142ae6d20(result_2, arg2)
    
    if (*arg2 s<= 0)
        sub_142a87050(r14_1, sub_140a4f210)
        int32_t rdi_1 = 0
        
        while (true)
            int32_t rbx_1 = rdi_1
            
            if (rdi_1 != 0)
                int64_t rcx_3 = sx.q(rdi_1) * 2
                int64_t rax_2 = *(arg1 + 0x280)
                
                if (*(rax_2 + (rcx_3 << 3) + 0xc) s>= rdi_1)
                    rbx_1 = *(rax_2 + (rcx_3 << 3) + 0xc)
            
            int32_t rbx_2 = rbx_1 + 1
            int64_t rdx_1 = *(arg1 + 0x280)
            int64_t rax_4 = sx.q(rbx_2) << 4
            int32_t i = *(rax_4 + rdx_1)
            
            if (i != 5)
                while (i != 1)
                    rbx_2 += 1
                    rax_4 += 0x10
                    i = *(rax_4 + rdx_1)
                    
                    if (i == 5)
                        goto label_142b610f8
                
                break
            
        label_142b610f8:
            rdi_1 = rbx_2
            
            if (rbx_2 s< 0)
                break
            
            struct icu_64::StringEnumeration::icu_64::FormatNameEnumeration::VTable** result_3 =
                j_sub_142a7dd00(0x40)
            result_1 = result_3
            
            if (result_3 != 0)
                result_3 = sub_142b60d30(arg1, result_3, rbx_2 + 1)
            
            sub_142ae7110(r14_1, result_3, arg2)
        
        struct icu_64::StringEnumeration::icu_64::FormatNameEnumeration::VTable** result =
            j_sub_142a7dd00(0x88)
        result_1 = result
        
        if (result == 0)
            return nullptr
        
        sub_142a85450(result)
        *result = &icu_64::FormatNameEnumeration::`vftable'{for `icu_64::StringEnumeration'}
        result[0xf].d = 0
        result[0x10] = r14_1
        return result
    
    *arg2 = 7

return nullptr
