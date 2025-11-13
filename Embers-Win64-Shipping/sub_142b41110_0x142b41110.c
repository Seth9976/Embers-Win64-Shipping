// 函数: sub_142b41110
// 地址: 0x142b41110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_3f0 = -2
void var_438
int64_t rax_1 = __security_cookie ^ &var_438
int32_t var_404 = 0

if (arg3 != 0)
    *arg3 = 0
    arg3[1] = 0xffffffff
    arg3[2].w = 0
    arg3[0xa].w = 0

if (*arg4 s<= 0)
    char rax_3
    
    if (data_144016b70 != 2)
        rax_3 = sub_142a85f00(&data_144016b70)
    
    if (data_144016b70 == 2 || rax_3 == 0)
        int32_t rax_5 = data_144016b74
        
        if (rax_5 s> 0)
            *arg4 = rax_5
    else
        sub_142b41ef0(arg4)
        data_144016b74 = *arg4
        sub_142a85e80(&data_144016b70)

if (*arg4 s> 0 || *arg4 s> 0)
    memset(arg1, 0, 0x1c8)
    sub_142a5b060(arg1)
else
    int32_t var_408
    void var_3e8
    sub_142b43ec0(&var_3e8, arg2, &var_408, arg4)
    
    if (*arg4 s> 0)
        if (arg3 != 0)
            int32_t r13_1 = var_408
            arg3[1] = r13_1
            int32_t rax_7 = sub_142a92b60(0, r13_1 - 0xf)
            int16_t rcx_14 = *(arg2 + 8)
            int32_t rcx_16
            
            if (rcx_14 s< 0)
                rcx_16 = *(arg2 + 0xc)
            else
                rcx_16 = sx.d(rcx_14) s>> 5
            
            int32_t rax_8 = sub_142a92b70(rcx_16, r13_1 + 0xf)
            int32_t rbx_2 = r13_1 - rax_7
            sub_142a49120(arg2, rax_7, rbx_2, &arg3[2], 0)
            *(arg3 + (sx.q(rbx_2) << 1) + 8) = 0
            int32_t rdi_2 = rax_8 - r13_1
            sub_142a49120(arg2, r13_1, rdi_2, &arg3[0xa], 0)
            *(arg3 + (sx.q(rdi_2) << 1) + 0x28) = 0
        
        memset(arg1, 0, 0x1c8)
        sub_142a5b060(arg1)
    else
        void var_228
        sub_142ab8410(sub_142ab8620(&var_228), arg1, &var_3e8)
        struct icu_64::UObject::icu_64::Locale::VTable* var_148
        sub_142a45a20(&var_148)
        void var_180
        sub_142ab6b80(&var_180)
        void var_1a0
        sub_142ab74c0(&var_1a0)
        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_200
        sub_142ab6080(&var_200)
        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_218
        sub_142ab6080(&var_218)
    
    struct icu_64::UObject::icu_64::Locale::VTable* var_308
    sub_142a45a20(&var_308)
    void var_340
    sub_142ab6b80(&var_340)
    void var_360
    sub_142ab74c0(&var_360)
    struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3c0
    sub_142ab6080(&var_3c0)
    struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3d8
    sub_142ab6080(&var_3d8)

__security_check_cookie(rax_1 ^ &var_438)
return arg1
