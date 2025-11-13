// 函数: sub_1406c6640
// 地址: 0x1406c6640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
int16_t* var_410
int64_t* var_3b8 = &var_410
*var_3b8 = 0
var_3b8[1].d = 0
*(var_3b8 + 0xc) = 0
void var_388
void* var_3b0 = &var_388
*var_3b0 = 0
*(var_3b0 + 8) = 0
*(var_3b0 + 0xc) = 0
void* const var_3e8 = &data_142d62df8
int64_t var_340
int64_t* var_3a8 = &var_340
int64_t* var_240 = var_3a8
*var_240 = 0
var_3a8[1].d = 0
*(var_3a8 + 0xc) = 0

if (var_3e8 != 0 && zx.d(*var_3e8) != 0)
    int64_t var_3e0_1 = -1
    
    do
        var_3e0_1 += 1
    while (*(var_3e8 + (var_3e0_1 << 1)) != 0)
    
    int64_t* var_378_1 = &var_340
    
    if (var_3e0_1.d + 1 s> *(var_378_1 + 0xc))
        sub_1405947f0(var_378_1, var_3e0_1.d + 1)
    
    int64_t* var_418_1 = &var_340
    int32_t var_3d0_1 = var_418_1[1].d
    int32_t rax_27 = var_418_1[1].d + var_3e0_1.d + 1
    var_418_1[1].d = rax_27
    
    if (rax_27 s> *(var_418_1 + 0xc))
        sub_140594770(var_418_1)
    
    if (var_3e0_1.d + 1 s>= var_3e0_1.d + 1)
        UnDecorator::getReferenceType(var_340, var_3e8, (var_3e0_1.d + 1) << 1)

char var_444

if (zx.d(sub_14060a620(arg2, &var_340, &var_410, &var_388, 0, 0)) != 0)
    var_444 = 0
else
    var_444 = 1

sub_1405e8840(&var_340)
uint64_t result

if (zx.d(var_444) == 0)
    if (zx.d(sub_1405a71a0(arg1 + 0x30, &var_410)) != 0)
        int32_t var_408
        int16_t* const var_360_1
        
        var_360_1 = var_408 == 0 ? &data_142d40450 : var_410
        
        char var_430_1
        
        if (sub_140a54510(var_360_1, u"file") != 0)
            var_430_1 = 0
        else
            var_430_1 = 1
        
        if (zx.d(var_430_1) == 0)
            goto label_1406c71e7
        
        void var_330
        sub_140b19c30(&var_330, &var_388, 0)
        
        if (zx.d(sub_1405a71a0(arg1 + 0x10, &var_330)) != 0)
            sub_1405e8840(&var_330)
        label_1406c71e7:
            
            if (arg4 != 0 && arg3 != 0)
                void var_278
                sub_140b58170(&var_278, "PrecacheFile", 1)
                
                if (zx.d((*(*arg3 + 0x28))(arg3, &var_278, 0)) != 0)
                    int16_t* const var_348_1
                    
                    var_348_1 = var_408 == 0 ? &data_142d40450 : var_410
                    
                    char var_424_1
                    
                    if (sub_140a54510(var_348_1, u"file") == 0)
                        var_424_1 = 0
                    else
                        var_424_1 = 1
                    
                    if (zx.d(var_424_1) != 0)
                        void var_120
                        int64_t* rax_144 =
                            _vfprintf_p_l(&var_120, Precaching is supported for local files only", 
                            FMPEGMediaFactoryModule")
                        int32_t rax_146 = arg4[1].d
                        int32_t rax_149 = arg4[1].d + 1
                        arg4[1].d = rax_149
                        
                        if (rax_149 s> *(arg4 + 0xc))
                            sub_1405a4df0(arg4)
                        
                        _CopyMan(*arg4 + sx.q(rax_146) * 0x18, rax_144)
                        sub_1405970a0(&var_120)
            
            char result_4 = 1
            sub_1405e8840(&var_388)
            sub_1405e8840(&var_410)
            result = zx.q(result_4)
        else
            if (arg5 != 0)
                void var_e8
                void* var_2b0_1 = &var_e8
                void var_b0
                int64_t* rax_101 = sub_140aae420(&var_b0, &var_330)
                void var_138
                char** rax_103 = sub_140a96390(var_2b0_1, 
                    _vfprintf_p_l(&var_138, The file extension '{0}' is not supported", 
                    FMPEGMediaFactoryModule"))
                int64_t* (* var_298_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140aac870
                int32_t var_60 = 4
                void var_50
                sub_1406c5e00(&var_50, rax_101)
                void var_d8
                void* var_2a8_1 = &var_d8
                int32_t* var_220 = &var_60
                void var_30
                void* var_218 = &var_30
                void var_1e8
                __builtin_memcpy(&var_1e8, &var_220, 0x10)
                void var_1d8
                int64_t* rax_104 = sub_1405d4de0(&var_1d8, &var_1e8)
                void var_1b0
                void var_150
                _CopyMan(&var_1b0, var_298_1(&var_150, sub_1406c60b0(var_2a8_1, rax_103), rax_104))
                sub_1405970a0(&var_150)
                sub_140596f50(&var_1d8)
                int64_t var_3f0_1 = 1
                void* var_400_2 = &(&var_60)[0xc]
                
                while (true)
                    int64_t var_290_1 = var_3f0_1
                    var_3f0_1 -= 1
                    
                    if (var_290_1 u<= 0)
                        break
                    
                    var_400_2 -= 0x30
                    
                    if (zx.d(*(var_400_2 + 0x28)) != 0)
                        *(var_400_2 + 0x28) = 0
                        sub_1405970a0(var_400_2 + 0x10)
                
                sub_1406c61c0(rax_103)
                sub_1405970a0(rax_101)
                int32_t rax_122 = arg5[1].d
                int32_t rax_125 = arg5[1].d + 1
                arg5[1].d = rax_125
                
                if (rax_125 s> *(arg5 + 0xc))
                    sub_1405a4df0(arg5)
                
                _CopyMan(*arg5 + sx.q(rax_122) * 0x18, &var_1b0)
                sub_1405970a0(&var_1b0)
                sub_1405970a0(&var_138)
            
            char result_3 = 0
            sub_1405e8840(&var_330)
            sub_1405e8840(&var_388)
            sub_1405e8840(&var_410)
            result = zx.q(result_3)
    else
        if (arg5 != 0)
            void var_108
            void* var_2f8_1 = &var_108
            void var_c8
            int64_t* rax_58 = sub_140aae420(&var_c8, &var_410)
            void var_168
            char** rax_60 = sub_140a96390(var_2f8_1, 
                _vfprintf_p_l(&var_168, The URI scheme '{0}' is not supported", 
                FMPEGMediaFactoryModule"))
            int64_t* (* var_2e0_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140aac870
            int32_t var_98 = 4
            void var_88
            sub_1406c5e00(&var_88, rax_58)
            void var_f8
            void* var_2f0_1 = &var_f8
            int32_t* var_230 = &var_98
            void var_68
            void* var_228_1 = &var_68
            void var_208
            __builtin_memcpy(&var_208, &var_230, 0x10)
            void var_1f8
            int64_t* rax_61 = sub_1405d4de0(&var_1f8, &var_208)
            void var_1c8
            void var_180
            _CopyMan(&var_1c8, var_2e0_1(&var_180, sub_1406c60b0(var_2f0_1, rax_60), rax_61))
            sub_1405970a0(&var_180)
            sub_140596f50(&var_1f8)
            int64_t var_3d8_1 = 1
            void* var_3f8_2 = &(&var_98)[0xc]
            
            while (true)
                int64_t var_2d8_1 = var_3d8_1
                var_3d8_1 -= 1
                
                if (var_2d8_1 u<= 0)
                    break
                
                var_3f8_2 -= 0x30
                
                if (zx.d(*(var_3f8_2 + 0x28)) != 0)
                    *(var_3f8_2 + 0x28) = 0
                    sub_1405970a0(var_3f8_2 + 0x10)
            
            sub_1406c61c0(rax_60)
            sub_1405970a0(rax_58)
            int32_t rax_79 = arg5[1].d
            int32_t rax_82 = arg5[1].d + 1
            arg5[1].d = rax_82
            
            if (rax_82 s> *(arg5 + 0xc))
                sub_1405a4df0(arg5)
            
            _CopyMan(*arg5 + sx.q(rax_79) * 0x18, &var_1c8)
            sub_1405970a0(&var_1c8)
            sub_1405970a0(&var_168)
        
        char result_2 = 0
        sub_1405e8840(&var_388)
        sub_1405e8840(&var_410)
        result = zx.q(result_2)
else
    if (arg5 != 0)
        void var_198
        int64_t* rax_39 = _vfprintf_p_l(&var_198, No URI scheme found", FMPEGMediaFactoryModule")
        int32_t rax_41 = arg5[1].d
        int32_t rax_44 = arg5[1].d + 1
        arg5[1].d = rax_44
        
        if (rax_44 s> *(arg5 + 0xc))
            sub_1405a4df0(arg5)
        
        _CopyMan(*arg5 + sx.q(rax_41) * 0x18, rax_39)
        sub_1405970a0(&var_198)
    
    char result_1 = 0
    sub_1405e8840(&var_388)
    sub_1405e8840(&var_410)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_488)
return result
