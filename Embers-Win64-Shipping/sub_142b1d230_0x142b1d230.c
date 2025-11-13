// 函数: sub_142b1d230
// 地址: 0x142b1d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
struct icu_64::UObject::icu_64::UVector::VTable** result = j_sub_142a7dd00(0x38)
int64_t** result_2 = result
struct icu_64::UObject::icu_64::UVector::VTable** result_1 = result

if (result == 0)
    result_2 = nullptr
else
    *result_2 = sub_142b73f20(0, 0, arg2)
    result_2[1] = 0
    result = sub_142ae6e40(&result_2[2], sub_140a4f210, 0, arg2)

*(arg1 + 0x48) = result_2

if (result_2 != 0)
    if (*arg2 s> 0)
        goto label_142b1d383
    
    int32_t rbp_1 = 0
    int32_t i_2 = sub_142b6a550(*(arg1 + 0x20), 0, 1, 1, 0, 0, &result_1)
    int32_t i_1 = i_2
    
    if (i_2 s>= 0)
        int32_t i
        
        do
            int32_t r8_2 = result_1.d
            
            if (r8_2 != 1)
                sub_142b1ec40(arg1, rbp_1, i_1, r8_2.w, *(arg1 + 0x48), arg2)
            
            rbp_1 = i_1 + 1
            i = sub_142b6a550(*(arg1 + 0x20), rbp_1, 1, 1, 0, 0, &result_1)
            i_1 = i
        while (i s>= 0)
    
    *(*(arg1 + 0x48) + 8) = sub_142b73e90(**(arg1 + 0x48), 1, 1, arg2)
    sub_142b73ea0(**(arg1 + 0x48))
    result = *(arg1 + 0x48)
    *result = nullptr
    
    if (*arg2 s> 0)
        goto label_142b1d383
else
    *arg2 = 7
label_142b1d383:
    int64_t* rdi = *(arg1 + 0x48)
    
    if (rdi != 0)
        sub_142b73ea0(*rdi)
        j_sub_142a7dcd0(rdi[1])
        sub_142ae6f60(&rdi[2])
        result = sub_142a47920(rdi)
    
    *(arg1 + 0x48) = 0

return result
