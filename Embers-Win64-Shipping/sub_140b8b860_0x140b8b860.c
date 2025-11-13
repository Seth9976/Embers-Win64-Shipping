// 函数: sub_140b8b860
// 地址: 0x140b8b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
int64_t var_268
__builtin_memset(&var_268, 0, 0x2c)
int32_t var_23c = 0x80
int32_t var_238 = 0xffffffff
int32_t var_234 = 0
int64_t var_228 = 0
int32_t var_220 = 0
sub_140b7fce0(arg2, arg1 + 0x100, &var_268)
int64_t var_648
sub_140a96170(&var_648)
int64_t var_258
int64_t* var_5e0 = &var_258
int32_t rcx_2 = 0
int32_t var_5e8 = 0
int32_t r8_1 = 0
int32_t var_5e4 = 1
int32_t var_5d8 = 0xffffffff
int64_t var_5d4 = 0
int32_t var_240

if (var_240 != 0)
    int64_t* r9_1 = &var_258
    int64_t* var_248
    
    if (var_248 != 0)
        r9_1 = var_248
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_240 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140b8b998:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_5e4_1 = rax_10
        int32_t var_508_1 = temp0_1
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        int32_t rax_12 = r8_1 - rax_11 + 0x1f
        
        if (rax_12 s> var_240)
            rax_12 = var_240
        
        var_5d4.d = rax_12
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8_1 += 0x20
            rcx_2 += 1
            var_5d4:4.d = r8_1
            var_5e8 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_5d4.d = var_240
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_5d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b8b998

int64_t* var_420 = &var_268
double var_418[0x2] = var_5e8.o
int128_t var_408 = 0xffffffff
double var_530[0x2] = var_420.o
int64_t var_510 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint64_t i_7

if (0 s< var_240)
    i_7 = zx.q(var_418[1]:4.d)
    
    do
        int64_t* r14_1 = var_530[0]
        int32_t rsi_1 = *(*r14_1 + sx.q(i_7.d) * 0x14 + 8)
        
        if (rsi_1 != 0)
            int64_t var_600
            sub_140aae420(&var_600, arg1 + 8)
            int64_t var_618
            sub_140aae2b0(&var_618, *r14_1 + sx.q(i_7.d) * 0x14)
            int64_t* var_640
            int64_t* var_610
            int32_t var_608
            int64_t* var_5f8
            int32_t var_5f0
            int32_t var_f8
            int64_t var_e8
            char var_70
            
            if (rsi_1 != 1)
                if (rsi_1 == 2)
                    int64_t rbx_3 = var_618
                    
                    if (var_610 != 0)
                        var_610[1].d += 1
                    
                    int64_t r14_4 = var_600
                    
                    if (var_5f8 != 0)
                        var_5f8[1].d += 1
                    
                    void var_350
                    char* var_290
                    char** rax_62 = sub_140a96390(&var_290, 
                        _vfprintf_p_l(&var_350, 
                            Plugin '{0}' failed to load because module '{1}' does not appear to be "
                    "compatible with the current version of the engine.  The plugin may need to be "
                    "re", 
                        PluginManager"))
                    int32_t var_98_1 = 4
                    int64_t var_88_1 = r14_4
                    int64_t* var_80_1 = var_5f8
                    
                    if (var_5f8 != 0)
                        var_5f8[1].d += 1
                    
                    int32_t var_78_1 = var_5f0
                    var_70 = 1
                    int32_t var_68_1 = 4
                    int64_t var_58_1 = rbx_3
                    int64_t* var_50_1 = var_610
                    
                    if (var_610 != 0)
                        var_610[1].d += 1
                    
                    int64_t i_1 = 2
                    int32_t var_48_1 = var_608
                    char var_40_1 = 1
                    void* var_5b8 = nullptr
                    int32_t var_5b0_1 = 2
                    sub_1405a4b40(&var_5b8, 2, 0)
                    void var_90
                    void* rdx_11 = &var_90
                    int64_t* rcx_35 = var_5b8 + 8
                    int32_t i_9 = 2
                    int32_t i
                    
                    do
                        rcx_35[-1].d = *(rdx_11 - 8)
                        *rcx_35 = *rdx_11
                        *rcx_35 = *rdx_11
                        *rcx_35 = *rdx_11
                        *rcx_35 = *rdx_11
                        rcx_35[4].b = 0
                        
                        if (*(rdx_11 + 0x20) != 0)
                            rcx_35[1] = *(rdx_11 + 8)
                            void* rax_69 = *(rdx_11 + 0x10)
                            rcx_35[2] = rax_69
                            
                            if (rax_69 != 0)
                                *(rax_69 + 8) += 1
                            
                            rcx_35[3].d = *(rdx_11 + 0x18)
                            rcx_35[4].b = 1
                        
                        rcx_35 = &rcx_35[6]
                        rdx_11 += 0x30
                        i = i_9
                        i_9 -= 1
                    while (i != 1)
                    char* var_460 = *rax_62
                    void* rax_72 = rax_62[1]
                    void* var_458_1 = rax_72
                    
                    if (rax_72 != 0)
                        *(rax_72 + 8) += 1
                    
                    void var_368
                    int64_t* rax_73 = sub_140aac870(&var_368, &var_460, &var_5b8)
                    int64_t rcx_37 = *rax_73
                    void* rcx_38 = rax_73[1]
                    
                    if (rcx_38 != 0)
                        *(rcx_38 + 8) += 1
                    
                    int32_t rax_74 = rax_73[2].d
                    int64_t* var_360
                    
                    if (var_360 != 0)
                        var_360[1].d -= 1
                        
                        if (var_360[1].d == 1)
                            (**var_360)(var_360)
                            int32_t rax_77 = *(var_360 + 0xc)
                            *(var_360 + 0xc) -= 1
                            
                            if (rax_77 == 1)
                                (*(*var_360 + 8))(var_360, 1)
                    
                    sub_140596f50(&var_5b8)
                    int64_t __saved_rbx
                    int64_t* r14_5 = &__saved_rbx
                    
                    do
                        i_1 -= 1
                        r14_5 = &r14_5[-6]
                        
                        if (*r14_5 != 0)
                            *r14_5 = 0
                            int64_t* rsi_7 = r14_5[-2]
                            
                            if (rsi_7 != 0)
                                rsi_7[1].d -= 1
                                
                                if (rsi_7[1].d == 1)
                                    (**rsi_7)(rsi_7)
                                    int32_t rax_81 = *(rsi_7 + 0xc)
                                    *(rsi_7 + 0xc) -= 1
                                    
                                    if (rax_81 == 1)
                                        (*(*rsi_7 + 8))(rsi_7, 1)
                    while (i_1 != 0)
                    
                    int64_t* rbx_4 = rax_62[1]
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t rax_85 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (rax_85 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    if (var_5f8 != 0)
                        var_5f8[1].d -= 1
                        
                        if (var_5f8[1].d == 1)
                            (**var_5f8)(var_5f8)
                            int32_t rax_89 = *(var_5f8 + 0xc)
                            *(var_5f8 + 0xc) -= 1
                            
                            if (rax_89 == 1)
                                (*(*var_5f8 + 8))(var_5f8, 1)
                    
                    if (var_610 != 0)
                        var_610[1].d -= 1
                        
                        if (var_610[1].d == 1)
                            (**var_610)(var_610)
                            int32_t rax_93 = *(var_610 + 0xc)
                            *(var_610 + 0xc) -= 1
                            
                            if (rax_93 == 1)
                                (*(*var_610 + 8))(var_610, 1)
                    
                    int64_t rcx_50 = var_648
                    var_648 = rcx_37
                    void* var_640_2 = rcx_38
                    int32_t var_638_2 = rax_74
                    int64_t var_548_2 = rcx_50
                    int64_t* var_540_2 = var_640
                    
                    if (var_640 != 0)
                        var_640[1].d -= 1
                        
                        if (var_640[1].d == 1)
                            (**var_640)(var_640)
                            int32_t rax_100 = *(var_640 + 0xc)
                            *(var_640 + 0xc) -= 1
                            
                            if (rax_100 == 1)
                                (*(*var_640 + 8))(var_640, 1)
                    
                    uint64_t i_11
                    i_7 = i_11
                    goto label_140b8c167
                
                int64_t r14_6 = var_618
                int32_t var_1b8
                int64_t var_1a8
                
                if (rsi_1 == 3)
                    int64_t var_4a0 = r14_6
                    int64_t* var_498_1 = var_610
                    
                    if (var_610 != 0)
                        var_610[1].d += 1
                    
                    int64_t r12_3 = var_600
                    int64_t var_488 = r12_3
                    int64_t* var_480_1 = var_5f8
                    
                    if (var_5f8 != 0)
                        var_5f8[1].d += 1
                    
                    void var_2d8
                    char* var_2a0
                    char** rax_107 = sub_140a96390(&var_2a0, 
                        _vfprintf_p_l(&var_2d8, 
                            Plugin '{0}' failed to load because module '{1}' could not be loaded.  There may "
                    "be an ", 
                        PluginManager"))
                    int32_t var_218 = 4
                    int64_t var_208_1 = r12_3
                    int64_t* var_200_1 = var_5f8
                    
                    if (var_5f8 != 0)
                        var_5f8[1].d += 1
                    
                    int32_t var_1f8_1 = var_5f0
                    char var_1f0_1 = 1
                    int32_t var_1e8_1 = 4
                    int64_t var_1d8_1 = r14_6
                    int64_t* var_1d0_1 = var_610
                    
                    if (var_610 != 0)
                        var_610[1].d += 1
                    
                    int32_t var_1c8_1 = var_608
                    int32_t* var_620_1 = &var_1b8
                    char* var_430 = *rax_107
                    void* rax_110 = rax_107[1]
                    char var_1c0_1 = 1
                    int128_t var_3f8 = (&var_218).o
                    void* var_428_1 = rax_110
                    
                    if (rax_110 != 0)
                        *(rax_110 + 8) += 1
                    
                    void var_3e8
                    void var_338
                    int64_t* rax_112 =
                        sub_140aac870(&var_338, &var_430, sub_1405d4de0(&var_3e8, &var_3f8))
                    int64_t var_5a8 = *rax_112
                    void* rcx_60 = rax_112[1]
                    
                    if (rcx_60 != 0)
                        *(rcx_60 + 8) += 1
                    
                    int32_t rax_113 = rax_112[2].d
                    sub_1405970a0(&var_338)
                    sub_140596f50(&var_3e8)
                    i_7 = 2
                    int64_t* rdi_3 = &var_1a8
                    uint64_t i_2
                    
                    do
                        rdi_3 -= 0x30
                        sub_1405d57e0(rdi_3)
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                    sub_1405970a0(rax_107)
                    sub_1405970a0(&var_488)
                    sub_1405970a0(&var_4a0)
                    int64_t rcx_67 = var_648
                    var_648 = var_5a8
                    var_5a8 = rcx_67
                    void* var_640_3 = rcx_60
                    int64_t* var_5a0_2 = var_640
                    int32_t var_638_3 = rax_113
                    sub_1405970a0(&var_5a8)
                    sub_1405970a0(&var_2d8)
                else
                    int32_t var_158
                    int64_t var_148
                    
                    if (rsi_1 != 4)
                        int64_t var_500 = r14_6
                        int64_t* var_4f8_1 = var_610
                        
                        if (var_610 != 0)
                            var_610[1].d += 1
                        
                        int64_t r12_5 = var_600
                        int64_t var_4e8 = r12_5
                        int64_t* var_4e0_1 = var_5f8
                        
                        if (var_5f8 != 0)
                            var_5f8[1].d += 1
                        
                        char* var_2c0
                        char** rax_131 = sub_140a96390(&var_2c0, 
                            _vfprintf_p_l(&var_420, 
                                Plugin '{0}' failed to load because module '{1}' could not be loaded for an "
                        "unspecified reason.  This plugin's functionality will not be available.  "
                        "Pl", 
                            PluginManager"))
                        var_158 = 4
                        var_148 = r12_5
                        int64_t* var_140_1 = var_5f8
                        
                        if (var_5f8 != 0)
                            var_5f8[1].d += 1
                        
                        int32_t var_138_1 = var_5f0
                        char var_130_1 = 1
                        int32_t var_128_1 = 4
                        int64_t var_118_1 = r14_6
                        int64_t* var_110_1 = var_610
                        
                        if (var_610 != 0)
                            var_610[1].d += 1
                        
                        int32_t var_108_1 = var_608
                        int32_t* var_620_3 = &var_f8
                        char* var_440 = *rax_131
                        void* rax_134 = rax_131[1]
                        char var_100_1 = 1
                        int128_t var_3c8 = (&var_158).o
                        void* var_438_1 = rax_134
                        
                        if (rax_134 != 0)
                            *(rax_134 + 8) += 1
                        
                        void var_3d8
                        void var_2f0
                        int64_t* rax_136 =
                            sub_140aac870(&var_2f0, &var_440, sub_1405d4de0(&var_3d8, &var_3c8))
                        int64_t var_578 = *rax_136
                        void* rcx_92 = rax_136[1]
                        
                        if (rcx_92 != 0)
                            *(rcx_92 + 8) += 1
                        
                        int32_t rax_137 = rax_136[2].d
                        sub_1405970a0(&var_2f0)
                        sub_140596f50(&var_3d8)
                        i_7 = 2
                        int64_t* rdi_7 = &var_e8
                        uint64_t i_3
                        
                        do
                            rdi_7 -= 0x30
                            sub_1405d57e0(rdi_7)
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                        sub_1405970a0(rax_131)
                        sub_1405970a0(&var_4e8)
                        sub_1405970a0(&var_500)
                        int64_t rcx_99 = var_648
                        var_648 = var_578
                        var_578 = rcx_99
                        void* var_640_5 = rcx_92
                        int64_t* var_570_2 = var_640
                        int32_t var_638_5 = rax_137
                        sub_1405970a0(&var_578)
                        sub_1405970a0(&var_420)
                    else
                        int64_t var_4d0 = r14_6
                        int64_t* var_4c8_1 = var_610
                        
                        if (var_610 != 0)
                            var_610[1].d += 1
                        
                        int64_t r12_4 = var_600
                        int64_t var_4b8 = r12_4
                        int64_t* var_4b0_1 = var_5f8
                        
                        if (var_5f8 != 0)
                            var_5f8[1].d += 1
                        
                        void var_308
                        char* var_2b0
                        char** rax_119 = sub_140a96390(&var_2b0, 
                            _vfprintf_p_l(&var_308, 
                                Plugin '{0}' failed to load because module '{1}' could not be initialized "
                        "successfully after it was loaded.", 
                            PluginManager"))
                        var_1b8 = 4
                        var_1a8 = r12_4
                        int64_t* var_1a0_1 = var_5f8
                        
                        if (var_5f8 != 0)
                            var_5f8[1].d += 1
                        
                        int32_t var_198_1 = var_5f0
                        char var_190_1 = 1
                        int32_t var_188_1 = 4
                        int64_t var_178_1 = r14_6
                        int64_t* var_170_1 = var_610
                        
                        if (var_610 != 0)
                            var_610[1].d += 1
                        
                        int32_t var_168_1 = var_608
                        int32_t* var_620_2 = &var_158
                        char* var_450 = *rax_119
                        void* rax_122 = rax_119[1]
                        char var_160_1 = 1
                        int128_t var_3a8 = (&var_1b8).o
                        void* var_448_1 = rax_122
                        
                        if (rax_122 != 0)
                            *(rax_122 + 8) += 1
                        
                        void var_3b8
                        void var_320
                        int64_t* rax_124 =
                            sub_140aac870(&var_320, &var_450, sub_1405d4de0(&var_3b8, &var_3a8))
                        int64_t var_590 = *rax_124
                        void* rcx_76 = rax_124[1]
                        
                        if (rcx_76 != 0)
                            *(rcx_76 + 8) += 1
                        
                        int32_t rax_125 = rax_124[2].d
                        sub_1405970a0(&var_320)
                        sub_140596f50(&var_3b8)
                        i_7 = 2
                        int64_t* rdi_5 = &var_148
                        uint64_t i_4
                        
                        do
                            rdi_5 -= 0x30
                            sub_1405d57e0(rdi_5)
                            i_4 = i_7
                            i_7 -= 1
                        while (i_4 != 1)
                        sub_1405970a0(rax_119)
                        sub_1405970a0(&var_4b8)
                        sub_1405970a0(&var_4d0)
                        int64_t rcx_83 = var_648
                        var_648 = var_590
                        var_590 = rcx_83
                        void* var_640_4 = rcx_76
                        int64_t* var_588_2 = var_640
                        int32_t var_638_4 = rax_125
                        sub_1405970a0(&var_590)
                        sub_1405970a0(&var_308)
            else
                int64_t rbx = var_618
                
                if (var_610 != 0)
                    var_610[1].d += 1
                
                int64_t r14_2 = var_600
                
                if (var_5f8 != 0)
                    var_5f8[1].d += 1
                
                void var_380
                char* var_280
                char** rax_21 = sub_140a96390(&var_280, 
                    _vfprintf_p_l(&var_380, 
                        Plugin '{0}' failed to load because module '{1}' could not be found.  Please ensure "
                "the plugin is prope", 
                    PluginManager"))
                var_f8 = 4
                var_e8 = r14_2
                int64_t* var_e0_1 = var_5f8
                
                if (var_5f8 != 0)
                    var_5f8[1].d += 1
                
                int32_t var_d8_1 = var_5f0
                char var_d0_1 = 1
                int32_t var_c8_1 = 4
                int64_t var_b8_1 = rbx
                int64_t* var_b0_1 = var_610
                
                if (var_610 != 0)
                    var_610[1].d += 1
                
                int64_t i_6 = 2
                int32_t var_a8_1 = var_608
                char var_a0_1 = 1
                void* var_5c8 = nullptr
                int32_t var_5c0_1 = 2
                sub_1405a4b40(&var_5c8, 2, 0)
                void var_f0
                void* rdx_8 = &var_f0
                int64_t* rcx_13 = var_5c8 + 8
                int32_t i_8 = 2
                int32_t i_5
                
                do
                    rcx_13[-1].d = *(rdx_8 - 8)
                    *rcx_13 = *rdx_8
                    *rcx_13 = *rdx_8
                    *rcx_13 = *rdx_8
                    *rcx_13 = *rdx_8
                    rcx_13[4].b = 0
                    
                    if (*(rdx_8 + 0x20) != 0)
                        rcx_13[1] = *(rdx_8 + 8)
                        void* rax_28 = *(rdx_8 + 0x10)
                        rcx_13[2] = rax_28
                        
                        if (rax_28 != 0)
                            *(rax_28 + 8) += 1
                        
                        rcx_13[3].d = *(rdx_8 + 0x18)
                        rcx_13[4].b = 1
                    
                    rcx_13 = &rcx_13[6]
                    rdx_8 += 0x30
                    i_5 = i_8
                    i_8 -= 1
                while (i_5 != 1)
                char* var_470 = *rax_21
                void* rax_31 = rax_21[1]
                void* var_468_1 = rax_31
                
                if (rax_31 != 0)
                    *(rax_31 + 8) += 1
                
                void var_398
                int64_t* rax_32 = sub_140aac870(&var_398, &var_470, &var_5c8)
                int64_t rcx_15 = *rax_32
                void* rcx_16 = rax_32[1]
                
                if (rcx_16 != 0)
                    *(rcx_16 + 8) += 1
                
                int32_t rax_33 = rax_32[2].d
                int64_t* var_390
                
                if (var_390 != 0)
                    var_390[1].d -= 1
                    
                    if (var_390[1].d == 1)
                        (**var_390)(var_390)
                        int32_t rax_36 = *(var_390 + 0xc)
                        *(var_390 + 0xc) -= 1
                        
                        if (rax_36 == 1)
                            (*(*var_390 + 8))(var_390, 1)
                
                sub_140596f50(&var_5c8)
                char* r14_3 = &var_70
                
                do
                    i_6 -= 1
                    r14_3 = &r14_3[-0x30]
                    
                    if (*r14_3 != 0)
                        *r14_3 = 0
                        int64_t* rsi_4 = *(r14_3 - 0x10)
                        
                        if (rsi_4 != 0)
                            rsi_4[1].d -= 1
                            
                            if (rsi_4[1].d == 1)
                                (**rsi_4)(rsi_4)
                                int32_t rax_40 = *(rsi_4 + 0xc)
                                *(rsi_4 + 0xc) -= 1
                                
                                if (rax_40 == 1)
                                    (*(*rsi_4 + 8))(rsi_4, 1)
                while (i_6 != 0)
                
                int64_t* rbx_1 = rax_21[1]
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_44 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_44 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (var_5f8 != 0)
                    var_5f8[1].d -= 1
                    
                    if (var_5f8[1].d == 1)
                        (**var_5f8)(var_5f8)
                        int32_t rax_48 = *(var_5f8 + 0xc)
                        *(var_5f8 + 0xc) -= 1
                        
                        if (rax_48 == 1)
                            (*(*var_5f8 + 8))(var_5f8, 1)
                
                if (var_610 != 0)
                    var_610[1].d -= 1
                    
                    if (var_610[1].d == 1)
                        (**var_610)(var_610)
                        int32_t rax_52 = *(var_610 + 0xc)
                        *(var_610 + 0xc) -= 1
                        
                        if (rax_52 == 1)
                            (*(*var_610 + 8))(var_610, 1)
                
                int64_t rcx_28 = var_648
                var_648 = rcx_15
                void* var_640_1 = rcx_16
                int32_t var_638_1 = rax_33
                int64_t var_560_2 = rcx_28
                int64_t* var_558_2 = var_640
                
                if (var_640 != 0)
                    var_640[1].d -= 1
                    
                    if (var_640[1].d == 1)
                        (**var_640)(var_640)
                        int32_t rax_59 = *(var_640 + 0xc)
                        *(var_640 + 0xc) -= 1
                        
                        if (rax_59 == 1)
                            (*(*var_640 + 8))(var_640, 1)
                
                uint64_t i_10
                i_7 = i_10
            label_140b8c167:
                
                if (i_7 != 0)
                    int32_t rax_102 = *(i_7 + 8)
                    *(i_7 + 8) -= 1
                    
                    if (rax_102 == 1)
                        (**i_7)(i_7)
                        int32_t rdi_1 = *(i_7 + 0xc)
                        *(i_7 + 0xc) -= 1
                        
                        if (rdi_1 == 1)
                            (*(*i_7 + 8))(i_7, zx.q(rdi_1))
            sub_1405970a0(&var_618)
            sub_1405970a0(&var_600)
            break
        
        var_418[1].d &= not.d(var_530[1]:4.d)
        sub_14059bdd0(&var_530[1])
        i_7 = zx.q(var_418[1]:4.d)
    while (i_7.d s< *(var_418[0] i+ 0x18))

if (sub_140ab3dc0(&var_648) != 0)
    i_7.b = 1
else
    sub_140b21610(0, &var_648, nullptr)
    i_7.b = 0

sub_1405970a0(&var_648)
sub_1405ae200(&var_268)
__security_check_cookie(rax_1 ^ &var_668)
return zx.q(i_7.b)
