// 函数: sub_142a92650
// 地址: 0x142a92650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
int64_t result_1 = 0
int32_t geoData = 0
int32_t var_3b8 = 0
int16_t var_124 = 0
int16_t var_3b4 = 0
char var_3b2 = 0
DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation
memset(&timeZoneInformation, 0, 0x1b0)
char var_98[0x80]
memset(&var_98, 0, 0x80)
char var_118[0x80]
memset(&var_118, 0, 0x80)
int64_t result

if (GetDynamicTimeZoneInformation(&timeZoneInformation) != 0xffffffff)
    int32_t rax_4 = GetGeoInfoW(GetUserGeoID(GEOCLASS_NATION), GEO_ISO2, &geoData, 3, 0)
    uint16_t var_3c8_1
    var_3c8_1.d = 3
    sub_142a8e8d0(&var_3b4, 3, nullptr, &geoData, var_3c8_1, &var_3b8)
    char** rax_5 = sub_142a64160(nullptr, "windowsZones", &var_3b8)
    sub_142a625a0(rax_5, "mapTimezones", rax_5, &var_3b8)
    var_3c8_1.d = 0xffffffff
    var_22c
    sub_142a8e8d0(&var_98, 0x80, nullptr, &var_22c, var_3c8_1, &var_3b8)
    
    if (var_3b8 s<= 0)
        if (timeZoneInformation.TimeZoneKeyName[0] != 0)
            char* var_3a8
            sub_142a5f830(&var_3a8)
            sub_142a625a0(rax_5, &var_98, &var_3a8, &var_3b8)
            
            if (var_3b8 s<= 0)
                void var_3b0
                void* rax_6
                
                if (rax_4 != 0)
                    rax_6 = sub_142a63dd0(&var_3a8, &var_3b4, &var_3b0, &var_3b8)
                
                if (rax_4 == 0 || rax_6 == 0)
                    var_3b8 = 0
                    rax_6 = sub_142a63dd0(&var_3a8, "001", &var_3b0, &var_3b8)
                
                if (var_3b8 s<= 0)
                    int16_t i = *rax_6
                    int32_t r8_7 = 0
                    
                    if (i != 0)
                        char (* rdx_3)[0x80] = &var_118
                        
                        while (i != 0x20)
                            char rcx_13 = *rax_6
                            r8_7 += 1
                            rax_6 += 2
                            *rdx_3 = rcx_13
                            rdx_3 = &(*rdx_3)[1]
                            i = *rax_6
                            
                            if (i == 0)
                                break
                    
                    int64_t rax_7 = sx.q(r8_7)
                    
                    if (rax_7 u>= 0x80)
                        __report_rangecheckfailure()
                        noreturn
                    
                    var_118[rax_7] = 0
            
            sub_142a5f860(&var_3a8)
        
        if (var_118[0] != 0)
            result_1 = sub_142a86250(&var_118)
        
        if (rax_5 != 0)
            sub_142a5f860(rax_5)
        
        result = result_1
    else
        if (rax_5 != 0)
            sub_142a5f860(rax_5)
        
        result = 0
else
    result = 0

__security_check_cookie(rax_1 ^ &var_3e8)
return result
