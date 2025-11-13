// 函数: sub_142a6c280
// 地址: 0x142a6c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_3e8 = -2
void var_438
int64_t result = __security_cookie ^ &var_438
int64_t result_1 = result

if (*arg4 s<= 0)
    *(arg1 + 0x100) = 1
    *(arg1 + 0x104) = 1
    *(arg1 + 0x108) = 7
    *(arg1 + 0x110) = 1
    *(arg1 + 0x114) = 0x5265c00
    int32_t var_408 = 0
    struct icu_64::UObject::icu_64::Locale::VTable* var_218
    sub_142a456d0(&var_218, arg2)
    sub_142a46b60(&var_218, &var_408)
    struct icu_64::UObject::icu_64::Locale::VTable* var_2f8
    sub_142a459c0(&var_2f8)
    int64_t rax_1 = -1
    int64_t rcx_3 = -1
    
    do
        rcx_3 += 1
    while (*(rcx_3 + arg2 + 0x1a) != 0)
    
    int64_t rcx_4
    
    if (rcx_3 != 0)
        rcx_4 = -1
        
        do
            rcx_4 += 1
        while (*(rcx_4 + arg2 + 0x14) != 0)
        
        char var_204[0xcc]
        
        if (rcx_4 != 0)
            do
                rax_1 += 1
            while (var_204[rax_1] != 0)
    
    if (rcx_3 == 0 || (rcx_4 != 0 && rax_1 == 0))
        var_408 = 0
        struct icu_64::UObject::icu_64::Locale::VTable* var_3d8
        sub_142a456d0(&var_3d8, arg2)
        sub_142a45ec0(&var_3d8, &var_408)
        char var_3d0[0x12]
        char var_3be[0x86]
        struct icu_64::UObject::icu_64::Locale::VTable* var_138
        sub_142a45b10(&var_2f8, sub_142a45710(&var_138, &var_3d0, &var_3be, nullptr, nullptr))
        sub_142a45a20(&var_138)
        sub_142a45a20(&var_3d8)
    else
        sub_142a45c20(&var_2f8, arg2)
    
    char** rax_4 = sub_142a641c0(nullptr, sub_141a50850(&var_2f8), arg4)
    char** var_3e0_1 = rax_4
    sub_142a625a0(rax_4, "calendar", rax_4, arg4)
    char** rbx_1 = nullptr
    char** var_400
    
    if (arg3 == 0 || *arg3 == 0)
    label_142a6c493:
        *arg4 = 0
        char** rax_7 = sub_142a62230(rax_4, "gregorian", rbx_1, arg4)
        rbx_1 = rax_7
        var_400 = rax_7
        sub_142a62230(rax_7, "monthNames", rax_7, arg4)
    else
        char* rax_5 = arg3
        uint32_t i
        uint32_t r8_3
        
        do
            r8_3 = zx.d(*rax_5)
            i = zx.d(rax_5["gregorian" - arg3])
            
            if (r8_3 != i)
                break
            
            rax_5 = &rax_5[1]
        while (i != 0)
        
        if (r8_3 - i == 0)
            goto label_142a6c493
        
        char** rax_6 = sub_142a62230(rax_4, arg3, nullptr, arg4)
        rbx_1 = rax_6
        var_400 = rax_6
        sub_142a62230(rax_6, "monthNames", rax_6, arg4)
        
        if (rbx_1 == 0 || *arg4 == 2)
            goto label_142a6c493
    
    if (*arg4 s> 0)
        *arg4 = 0xffffff80
    else
        void* var_3f8 = arg1 + 0x128
        void* var_3f0_1 = arg1 + 0x1c5
        char* rax_10 = sub_142a637a0(rbx_1, 0, arg4)
        sub_142a9ba50(&var_3f8, sub_142a637a0(rbx_1, 1, arg4), rax_10)
        void var_404
        sub_142a4ff80(*(arg2 + 0x28), 1, &var_404, 4, arg4)
        char** rax_12 = sub_142a64160(nullptr, "supplementalData", arg4)
        sub_142a625a0(rax_12, "weekData", rax_12, arg4)
        char** r12_1 = sub_142a625a0(rax_12, &var_404, nullptr, arg4)
        
        if (*arg4 == 2 && rax_12 != 0)
            *arg4 = 0
            r12_1 = sub_142a625a0(rax_12, "001", nullptr, arg4)
        
        if (*arg4 s<= 0)
            void* rax_15 = sub_142a63700(r12_1, &var_400, arg4)
            int32_t r8_15
            
            if (*arg4 s<= 0 && var_400.d == 6)
                r8_15 = *rax_15
            
            if (*arg4 s> 0 || var_400.d != 6 || r8_15 - 1 u> 6 || *(rax_15 + 4) - 1 u> 6
                    || *(rax_15 + 8) - 1 u> 6 || *(rax_15 + 0x10) - 1 u> 6)
                *arg4 = 3
            else
                *(arg1 + 0x100) = r8_15
                *(arg1 + 0x104) = *(rax_15 + 4)
                *(arg1 + 0x108) = *(rax_15 + 8)
                *(arg1 + 0x10c) = *(rax_15 + 0xc)
                *(arg1 + 0x110) = *(rax_15 + 0x10)
                *(arg1 + 0x114) = *(rax_15 + 0x14)
        else
            *arg4 = 0xffffff80
        
        sub_142a5f860(r12_1)
        sub_142a5f860(rax_12)
    
    if (rbx_1 != 0)
        sub_142a5f860(rbx_1)
    
    if (rax_4 != 0)
        sub_142a5f860(rax_4)
    
    sub_142a45a20(&var_2f8)
    result = sub_142a45a20(&var_218)

__security_check_cookie(result_1 ^ &var_438)
return result
