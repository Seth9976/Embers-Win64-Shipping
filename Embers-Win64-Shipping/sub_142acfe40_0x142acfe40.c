// 函数: sub_142acfe40
// 地址: 0x142acfe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8

if (arg3 != 0)
    *arg3 = 0

void* rax_2 = sub_142a65de0(arg1)
int32_t rax_3

if (rax_2 != 0)
    rax_3 = sub_142a8c280(&data_143656880, rax_2)

if (rax_2 == 0 || rax_3 == 0)
    sub_142a4ab40(arg2)
else
    sub_142a4afe0(arg2)
    int16_t rax_4 = *(arg2 + 8)
    int32_t r8_1
    
    if (rax_4 s< 0)
        r8_1 = *(arg2 + 0xc)
    else
        r8_1 = sx.d(rax_4) s>> 5
    
    sub_142a49390(arg2, 0, r8_1, rax_2, 0, 0xffffffff)
    
    if (arg3 != 0)
        int16_t var_b4 = 0
        char var_b2_1 = 0
        int32_t var_b8 = 0
        char rax_6
        
        if (data_144016650 != 2)
            rax_6 = sub_142a85f00(&data_144016650)
        
        int32_t rax_8
        
        if (data_144016650 == 2 || rax_6 == 0)
            rax_8 = var_b8
            int32_t rcx_3 = data_144016654
            
            if (rcx_3 s> 0)
                rax_8 = rcx_3
            
            var_b8 = rax_8
        else
            sub_142acf050(&var_b8)
            data_144016654 = var_b8
            sub_142a85e80(&data_144016650)
            rax_8 = var_b8
        
        if (rax_8 s<= 0)
            sub_142acf850()
            sub_142a860a0(&data_1440165b0)
            int64_t r15
            r15.b = sub_142ae7470(data_144016640, rax_2, 0) s>= 0
            char r14_1 = r15.b
            
            if (r15.b == 0)
                r15.b = sub_142ae7470(data_144016648, rax_2, 0) s>= 0
            
            sub_142acf850()
            sub_142a860d0(&data_1440165b0)
            
            if (r15.b == 0)
                sub_142a8d6e0(rax_2, &var_b4, 2)
                struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** rax_11 =
                    j_sub_142a64700(2, &var_b4, nullptr, &var_b8)
                struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable* r8_2 = *rax_11
                int32_t rax_12 = r8_2->__offset(0x18).q(rax_11, &var_b8, r8_2)
                
                if (var_b8 s<= 0 && rax_12 == 1)
                    r14_1 = 1
                
                (*rax_11)->__offset(0x0).q(rax_11, 1)
                sub_142acf850()
                sub_142a860a0(&data_1440165b0)
                int32_t var_ac = 0
                
                if (r14_1 == 0)
                    if (sub_142ae7470(data_144016648, rax_2, 0) s< 0)
                        sub_142ae7110(data_144016648, rax_2, &var_ac)
                else if (sub_142ae7470(data_144016640, rax_2, 0) s< 0)
                    sub_142ae7110(data_144016640, rax_2, &var_ac)
                
                sub_142acf850()
                sub_142a860d0(&data_1440165b0)
            
            if (r14_1 == 0)
                int32_t var_b0 = 0
                
                if (var_b4.b == 0)
                    sub_142a8d6e0(rax_2, &var_b4, 2)
                
                char** rax_16 = sub_142a64160(nullptr, "metaZones", &var_b8)
                sub_142a625a0(rax_16, "primaryZones", rax_16, &var_b8)
                void* rax_17 = sub_142a63dd0(rax_16, &var_b4, &var_b0, &var_b8)
                
                if (var_b8 s<= 0)
                    if (sub_142a6f4f0(arg1, rax_17, var_b0) != 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_80_1 = 2
                        sub_142a656e0(arg1, &var_88, &var_b8)
                        
                        if (var_b8 s<= 0)
                            int32_t r8_10
                            int32_t var_7c
                            
                            if (var_80_1 s< 0)
                                r8_10 = var_7c
                            else
                                r8_10 = sx.d(var_80_1) s>> 5
                            
                            if (sub_142a48fb0(&var_88, 0, r8_10, rax_17, 0, var_b0) == 0)
                                *arg3 = 1
                        
                        sub_142a47ff0(&var_88)
                    else
                        *arg3 = 1
                
                sub_142a5f860(rax_16)
            else
                *arg3 = 1

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
