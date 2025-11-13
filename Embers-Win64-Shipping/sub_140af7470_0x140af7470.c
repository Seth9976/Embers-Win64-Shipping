// 函数: sub_140af7470
// 地址: 0x140af7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
bool cond:0 = data_143dbb3e1 != 0
int16_t* var_298 = nullptr
int32_t var_290 = 0

if (not(cond:0))
    sub_140af98a0("Unknown", 0x22, 
        Attempting to get the command line but it hasn't been initialized yet.", arg4)
    
    if (data_143de542b == 0)
        int64_t* rcx = data_143de5de8
        data_143de5498 = 1
        sub_140b1f700(rcx, u"%s", &data_143ddb420)

arg4.b = 1
char rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b2acc0(&data_143dbb3f0, u"IniBootstrap=", &var_298, arg4.b)
int16_t* const rdi = &data_142d40450
void** result

if (rax_2 == 0)
label_140af76b0:
    sub_140b028e0()
    void*** rax_8 = j_sub_140a82f30(0x60)
    void*** rdx_3 = rax_8
    
    if (rax_8 == 0)
        rdx_3 = nullptr
    else
        rax_8[1] = 0
        void* rcx_12 = &rax_8[3]
        rax_8[2] = 0
        *(rcx_12 + 0x10) = 0
        *(rcx_12 + 0x18) = 0
        *(rcx_12 + 0x1c) = 0x80
        void* rax_9 = *(rcx_12 + 0x10)
        
        if (rax_9 != 0)
            rcx_12 = rax_9
        
        *rcx_12 = 0
        *(rcx_12 + 8) = 0
        rdx_3[7].d = 0xffffffff
        *(rdx_3 + 0x3c) = 0
        rdx_3[9] = 0
        rdx_3[0xa].d = 0
        *rdx_3 = &data_142e6e248
        rdx_3[0xb].w = 0
        *(rdx_3 + 0x5a) = 0
    
    data_143ddb400 = rdx_3
    int32_t rax_10
    
    if ((*u"Embers")[0] != 0)
        rax_10 = sub_140a54510(u"Embers", u"None")
    
    int64_t rsi
    int64_t r14
    
    if ((*u"Embers")[0] == 0 || rax_10 == 0)
        rsi.b = 1
        r14.b = 0
    else
        rsi.b = 0
        
        if (data_143cefff1 != 0 || (*u"Embers")[0] == 0)
            r14.b = 1
        else
            r14.b = 0
    
    int64_t var_228
    int64_t* rax_11 = sub_140b17c60(&var_228)
    int16_t* const rcx_14
    
    if (rax_11[1].d == 0)
        rcx_14 = &data_142d40450
    else
        rcx_14 = *rax_11
    
    int16_t* const var_2a8_1 = rcx_14
    char rax_12 = sub_140af8e00(&data_143de5780, u"Engine", nullptr, r14.b, 0, 1)
    int64_t rcx_15 = var_228
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (rsi.b == 0 && data_143cefff1 != 0 && rax_12 == 0)
        sub_140a464c0()
        int64_t var_208
        int64_t* rax_13 = sub_140b1a780(&var_208, &data_143de5780)
        int16_t* const r8_2
        
        if (rax_13[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_13
        
        int64_t var_250
        int64_t var_218
        sub_140aae2f0(&var_250, (*(data_14399ea08 + 0xf8))(&data_14399ea08, &var_218, r8_2))
        int64_t rcx_18 = var_218
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t rcx_19 = var_208
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        int64_t r14_2 = var_250
        int64_t* var_248
        
        if (var_248 != 0)
            var_248[1].d += 1
        
        void var_140
        char* var_78
        char** rax_17 = sub_140a96390(&var_78, 
            _vfprintf_p_l(&var_140, '{0}' must exist and contain a DefaultEngine.ini.", Core"))
        int32_t var_68_1 = 4
        
        if (var_248 != 0)
            var_248[1].d += 1
        
        char var_40_1 = 1
        int32_t* var_278 = nullptr
        int32_t var_270_1 = 1
        sub_1405a4b40(&var_278, 1, 0)
        int32_t* rcx_23 = var_278
        *rcx_23 = var_68_1
        int64_t var_60
        *(rcx_23 + 8) = var_60
        *(rcx_23 + 8) = var_60
        rcx_23[2] = var_60.d
        *(rcx_23 + 8) = var_60
        rcx_23[0xa].b = 0
        
        if (var_40_1 != 0)
            *(rcx_23 + 0x10) = r14_2
            *(rcx_23 + 0x18) = var_248
            
            if (var_248 != 0)
                var_248[1].d += 1
            
            int32_t var_240
            rcx_23[8] = var_240
            rcx_23[0xa].b = 1
        
        char* var_238 = *rax_17
        void* rax_25 = rax_17[1]
        void* var_230_1 = rax_25
        
        if (rax_25 != 0)
            *(rax_25 + 8) += 1
        
        void var_158
        int64_t* rax_26 = sub_140aac870(&var_158, &var_238, &var_278)
        int64_t var_268 = *rax_26
        int64_t* rcx_26 = rax_26[1]
        
        if (rcx_26 != 0)
            rcx_26[1].d += 1
        
        int32_t var_258_1 = rax_26[2].d
        int64_t* var_150
        
        if (var_150 != 0)
            var_150[1].d -= 1
            
            if (var_150[1].d == 1)
                (**var_150)(var_150)
                int32_t rax_30 = *(var_150 + 0xc)
                *(var_150 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*var_150 + 8))(var_150, 1)
        
        sub_140596f50(&var_278)
        
        if (var_40_1 != 0)
            char var_40_2 = 0
            
            if (var_248 != 0)
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t rax_34 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (rax_34 == 1)
                        (*(*var_248 + 8))(var_248, 1)
        
        int64_t* r14_5 = rax_17[1]
        
        if (r14_5 != 0)
            r14_5[1].d -= 1
            
            if (r14_5[1].d == 1)
                (**r14_5)(r14_5)
                int32_t rax_38 = *(r14_5 + 0xc)
                *(r14_5 + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*r14_5 + 8))(r14_5, 1)
        
        if (var_248 != 0)
            var_248[1].d -= 1
            
            if (var_248[1].d == 1)
                (**var_248)(var_248)
                int32_t rax_42 = *(var_248 + 0xc)
                *(var_248 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*var_248 + 8))(var_248, 1)
        
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t rax_46 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        if (data_143de542e == 0)
            sub_140b21610(0, &var_268, nullptr)
        
        wcsncpy(u"Embers", &data_142d40450, 0x3f)
        bool cond:3_1 = data_143de542e != 0
        data_14399e17e = 0
        
        if (not(cond:3_1))
            exit(1)
            noreturn
        
        int64_t* rax_48 = sub_140ac6680(&var_268)
        int16_t* const r9_2
        
        if (rax_48[1].d == 0)
            r9_2 = &data_142d40450
        else
            r9_2 = *rax_48
        
        sub_140af98a0("Unknown", 0xf10, u"%s", r9_2)
        sub_140afbb40()
        
        if (rcx_26 != 0)
            rcx_26[1].d -= 1
            
            if (rcx_26[1].d == 1)
                (**rcx_26)(rcx_26)
                int32_t rax_51 = *(rcx_26 + 0xc)
                *(rcx_26 + 0xc) -= 1
                
                if (rax_51 == 1)
                    (*(*rcx_26 + 8))(rcx_26, 1)
        
        if (var_248 != 0)
            var_248[1].d -= 1
            
            if (var_248[1].d == 1)
                (**var_248)(var_248)
                int32_t rbx_1 = *(var_248 + 0xc)
                *(var_248 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_248 + 8))(var_248, zx.q(rbx_1))
    
    int64_t var_1f8
    int64_t* rax_56 = sub_140b17c60(&var_1f8)
    int16_t* const rcx_44
    
    if (rax_56[1].d == 0)
        rcx_44 = &data_142d40450
    else
        rcx_44 = *rax_56
    
    int16_t* const var_2a8_2 = rcx_44
    sub_140af8e00(&data_143de5830, u"Game", nullptr, 0, 0, 1)
    int64_t rcx_45 = var_1f8
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    int64_t var_1e8
    int64_t* rax_57 = sub_140b17c60(&var_1e8)
    int16_t* const rcx_47
    
    if (rax_57[1].d == 0)
        rcx_47 = &data_142d40450
    else
        rcx_47 = *rax_57
    
    int16_t* const var_2a8_3 = rcx_47
    sub_140af8e00(&data_143de5820, u"Input", nullptr, 0, 0, 1)
    int64_t rcx_48 = var_1e8
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    int64_t var_1d8
    int64_t* rax_58 = sub_140b17c60(&var_1d8)
    int16_t* const rcx_50
    
    if (rax_58[1].d == 0)
        rcx_50 = &data_142d40450
    else
        rcx_50 = *rax_58
    
    int16_t* const var_2a8_4 = rcx_50
    sub_140af8e00(&data_143de57e0, u"Compat", nullptr, 0, 0, 1)
    int64_t rcx_51 = var_1d8
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    int64_t var_1c8
    int64_t* rax_59 = sub_140b17c60(&var_1c8)
    int16_t* const rcx_53
    
    if (rax_59[1].d == 0)
        rcx_53 = &data_142d40450
    else
        rcx_53 = *rax_59
    
    int16_t* const var_2a8_5 = rcx_53
    sub_140af8e00(&data_143de57f0, u"Lightmass", nullptr, 0, 0, 1)
    int64_t rcx_54 = var_1c8
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    int64_t var_1b8
    int64_t* rax_60 = sub_140b17c60(&var_1b8)
    int16_t* const rcx_56
    
    if (rax_60[1].d == 0)
        rcx_56 = &data_142d40450
    else
        rcx_56 = *rax_60
    
    int16_t* const var_2a8_6 = rcx_56
    sub_140af8e00(&data_143de5800, u"Scalability", nullptr, 0, 0, 1)
    int64_t rcx_57 = var_1b8
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    int64_t var_1a8
    int64_t* rax_61 = sub_140b17c60(&var_1a8)
    int16_t* const rcx_59
    
    if (rax_61[1].d == 0)
        rcx_59 = &data_142d40450
    else
        rcx_59 = *rax_61
    
    int16_t* const var_2a8_7 = rcx_59
    sub_140af8e00(&data_143de5810, u"Hardware", nullptr, 0, 0, 1)
    int64_t rcx_60 = var_1a8
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    int64_t var_198
    int64_t* rax_62 = sub_140b17c60(&var_198)
    int16_t* const rcx_62
    
    if (rax_62[1].d == 0)
        rcx_62 = &data_142d40450
    else
        rcx_62 = *rax_62
    
    int16_t* const var_2a8_8 = rcx_62
    sub_140af8e00(&data_143de5850, u"RuntimeOptions", nullptr, 0, 0, 1)
    int64_t rcx_63 = var_198
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    int64_t var_188
    int64_t* rax_63 = sub_140b17c60(&var_188)
    int16_t* const rcx_65
    
    if (rax_63[1].d == 0)
        rcx_65 = &data_142d40450
    else
        rcx_65 = *rax_63
    
    int16_t* const var_2a8_9 = rcx_65
    sub_140af8e00(&data_143de5860, u"InstallBundle", nullptr, 0, 0, 1)
    int64_t rcx_66 = var_188
    
    if (rcx_66 != 0)
        sub_140a74f90(rcx_66)
    
    int64_t var_178
    int64_t* rax_64 = sub_140b17c60(&var_178)
    int16_t* const rcx_68
    
    if (rax_64[1].d == 0)
        rcx_68 = &data_142d40450
    else
        rcx_68 = *rax_64
    
    int16_t* const var_2a8_10 = rcx_68
    sub_140af8e00(&data_143de5870, u"DeviceProfiles", nullptr, 0, 0, 1)
    int64_t rcx_69 = var_178
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t var_168
    int16_t** rax_65 = sub_140b17c60(&var_168)
    
    if (rax_65[1].d != 0)
        rdi = *rax_65
    
    int16_t* const var_2a8_11 = rdi
    sub_140af8e00(&data_143de5840, u"GameUserSettings", nullptr, 0, 0, 1)
    int64_t rcx_71 = var_168
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    *(data_143ddb400 + 0x59) = 1
    result = sub_140599090(&data_1439a02e8)
    int16_t* rcx_72 = var_298
    
    if (rcx_72 != 0)
        result = sub_140a74f90(rcx_72)
else
    int16_t* const rdx = &data_142d40450
    int64_t var_288 = 0
    
    if (var_290 != 0)
        rdx = var_298
    
    int64_t var_280_1 = 0
    
    if (sub_140b1ef70(&var_288, rdx, 2) == 0)
        int64_t rcx_11 = var_288
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        goto label_140af76b0
    
    void** const var_128
    memset(&var_128, 0, 0x90)
    sub_140b4c2a0(&var_128)
    int64_t var_98_1 = 0
    var_128 = &data_142d6b230
    int64_t* var_90_1 = &var_288
    int64_t var_88_1 = 0x7fffffffffffffff
    sub_140b55290(&var_128, 1)
    var_128[0x1b](&var_128, 1)
    void*** rax_5 = j_sub_140a82f30(0x60)
    void*** r8_1 = rax_5
    
    if (rax_5 == 0)
        r8_1 = nullptr
    else
        rax_5[1] = 0
        void* rcx_6 = &rax_5[3]
        rax_5[2] = 0
        *(rcx_6 + 0x10) = 0
        *(rcx_6 + 0x18) = 0
        *(rcx_6 + 0x1c) = 0x80
        void* rax_6 = *(rcx_6 + 0x10)
        
        if (rax_6 != 0)
            rcx_6 = rax_6
        
        *rcx_6 = 0
        *(rcx_6 + 8) = 0
        r8_1[7].d = 0xffffffff
        *(r8_1 + 0x3c) = 0
        r8_1[9] = 0
        r8_1[0xa].d = 0
        *r8_1 = &data_142e6e248
        r8_1[0xb].w = 0
        *(r8_1 + 0x5a) = 1
    
    data_143ddb400 = r8_1
    sub_140affc60(r8_1, &var_128, zmm1)
    *(data_143ddb400 + 0x59) = 1
    sub_140599090(&data_1439a02e8)
    result = sub_140b4cb40(&var_128)
    int64_t rcx_9 = var_288
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)
    
    int16_t* rcx_10 = var_298
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
