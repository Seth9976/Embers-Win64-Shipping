// 函数: sub_142a96740
// 地址: 0x142a96740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t arg_8 = 0
struct icu_64::UObject::icu_64::UVector::VTable** arg_18

if (*(arg1 + 0x1f8) != 0)
label_142a967cb:
    int32_t rdi_1 = *(*(arg1 + 0x1f8) + 8)
    int32_t rdi_2 = rdi_1 - 1
    int64_t* result
    
    if (rdi_1 - 1 s>= 0)
        int32_t temp2_1
        
        do
            int64_t* result_1 = sub_142ae72d0(*(arg1 + 0x1f8), rdi_2)
            result = result_1
            int64_t r8_1 = *result_1
            
            if ((*(r8_1 + 8))(result_1, zx.q(arg2), r8_1) != 0)
            label_142a9688d:
                return result
            
            temp2_1 = rdi_2
            rdi_2 -= 1
        while (temp2_1 - 1 s>= 0)
    
    if (data_144015ca0 != 2 && sub_142a85f00(&data_144015ca0) != 0)
        sub_142a97360()
        sub_142a85e80(&data_144015ca0)
    
    void* rcx_4 = data_144015c90
    
    if (rcx_4 != 0)
        int32_t rdi_3 = *(rcx_4 + 8)
        int32_t rdi_4 = rdi_3 - 1
        
        if (rdi_3 - 1 s>= 0)
            while (true)
                int64_t* rax_8 = sub_142ae72d0(rcx_4, rdi_4)
                int64_t r8_2 = *rax_8
                int64_t* result_2 = (*(r8_2 + 8))(rax_8, zx.q(arg2), r8_2)
                result = result_2
                
                if (result_2 != 0)
                    sub_142ae7110(*(arg1 + 0x1f8), result, &arg_8)
                    goto label_142a9688d
                
                int32_t temp3_1 = rdi_4
                rdi_4 -= 1
                
                if (temp3_1 - 1 s< 0)
                    break
                
                rcx_4 = data_144015c90
    
    if (*(arg1 + 0x200) != 0)
    label_142a9691b:
        int64_t* rcx_10 = *(arg1 + 0x200)
        (*(*rcx_10 + 0x18))(rcx_10, zx.q(arg2))
        return *(arg1 + 0x200)
    
    struct icu_64::UObject::icu_64::UVector::VTable** rax_9 = j_sub_142a7dd00(0x10)
    arg_18 = rax_9
    
    if (rax_9 != 0)
        rax_9 = sub_142b0e190(rax_9)
    
    *(arg1 + 0x200) = rax_9
    
    if (arg_8 s> 0 || rax_9 != 0)
        sub_142ae7480(*(arg1 + 0x1f8), rax_9, 0, &arg_8)
        
        if (arg_8 s<= 0)
            goto label_142a9691b
        
        int64_t* rcx_9 = *(arg1 + 0x200)
        
        if (rcx_9 != 0)
            (**rcx_9)(rcx_9, 1)
        
        *(arg1 + 0x200) = 0
else
    struct icu_64::UObject::icu_64::UVector::VTable** rax_1 = j_sub_142a7dd00(0x28)
    arg_18 = rax_1
    struct icu_64::UVector::icu_64::UStack::VTable** rcx_1
    
    if (rax_1 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = sub_142b10200(rax_1, &arg_8)
    
    *(arg1 + 0x1f8) = rcx_1
    
    if (rcx_1 == 0)
        *(arg1 + 0x1f8) = 0
    else
        if (arg_8 s<= 0)
            goto label_142a967cb
        
        (*rcx_1)->__offset(0x0).q(rcx_1, 1)
        *(arg1 + 0x1f8) = 0
return nullptr
