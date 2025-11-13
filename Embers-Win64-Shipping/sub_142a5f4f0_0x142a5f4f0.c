// 函数: sub_142a5f4f0
// 地址: 0x142a5f4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4d8 = -2
void var_508
int64_t result = __security_cookie ^ &var_508
int64_t result_1 = result
int32_t* rsi = arg2

if (*arg2 s<= 0)
    void* rcx = *(arg1 + 0x170)
    
    if (rcx != 0)
        struct icu_64::UObject::icu_64::Locale::VTable* var_4a8
        sub_142a5d0b0(*(rcx + 8), &var_4a8)
        int64_t** r9_1 = *(arg1 + 0x170)
        uint64_t var_3c8[0x2]
        uint64_t var_1f8[0x3c]
        uint64_t* rax_3 = sub_142ab8330(
            sub_142ac1670(&var_3c8, *r9_1, r9_1[1], &r9_1[5], r9_1[0x111], rsi), &var_1f8, &var_4a8)
        sub_142ab74f0(*(*(arg1 + 0x170) + 0x10), rax_3)
        sub_142ab72b0(&var_1f8)
        struct icu_64::UObject::icu_64::Locale::VTable* var_2e8
        sub_142a45a20(&var_2e8)
        void var_320
        sub_142ab6b80(&var_320)
        void var_340
        sub_142ab74c0(&var_340)
        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3a0
        sub_142ab6080(&var_3a0)
        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3b8
        sub_142ab6080(&var_3b8)
        sub_142a5ef80(arg1)
        void* rax_4 = *(arg1 + 0x170)
        int64_t* temp0_1 = *(rax_4 + 0x18)
        *(rax_4 + 0x18) = 0
        
        if (temp0_1 != 0)
            (**temp0_1)(temp0_1, 1)
        
        void* rax_6 = *(arg1 + 0x170)
        int64_t* temp0_2 = *(rax_6 + 0x20)
        *(rax_6 + 0x20) = 0
        
        if (temp0_2 != 0)
            (**temp0_2)(temp0_2, 1)
        
        void var_4d0
        sub_142a5a120(arg1, &sub_142a5ccd0(*(*(arg1 + 0x170) + 0x888) + 8, &var_4d0, rsi)[3], rsi)
        sub_142ab6900(&var_4d0)
        sub_142a5a1d0(arg1, *(*(*(arg1 + 0x170) + 0x888) + 0x58))
        sub_142a5a250(arg1, *(*(*(arg1 + 0x170) + 0x888) + 0x6c))
        sub_142a5a190(arg1, *(*(*(arg1 + 0x170) + 0x888) + 0x54))
        sub_142a5a210(arg1, *(*(*(arg1 + 0x170) + 0x888) + 0x64))
        sub_142a5a170(arg1, *(**(arg1 + 0x170) + 0x4c))
        result = sub_142a45a20(&var_4a8)
    else
        *arg2 = 7

__security_check_cookie(result_1 ^ &var_508)
return result
