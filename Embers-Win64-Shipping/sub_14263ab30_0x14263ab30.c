// 函数: sub_14263ab30
// 地址: 0x14263ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
int64_t r15 = 0
int32_t var_3b8 = 0
uint64_t var_3e8 = arg4
int64_t var_3e0 = 0
int32_t var_3d8 = 0
sub_1405947f0(&var_3e0, 5)
int32_t rax_2 = var_3d8 + 5
var_3d8 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_3e0)

UnDecorator::getReferenceType(var_3e0, u"None", 0xa)
int64_t var_3d0
sub_140aae2f0(&var_3d0, &var_3e0)
int64_t rcx_4 = var_3e0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* r14_1

if (*arg1 != 0)
    r14_1 = arg1[1]

int64_t* var_3c8

if (*arg1 == 0 || r14_1 == 0)
    int64_t* var_360
    int64_t* rdi_7
    int32_t r14_5
    
    if (arg2 == 0)
        r14_5 = 2
        int64_t var_368 = var_3d0
        var_360 = var_3c8
        
        if (var_3c8 != 0)
            var_3c8[1].d += 1
        
        rdi_7 = &var_368
        int32_t var_3c0
        int32_t var_358_1 = var_3c0
    else
        int64_t var_338 = arg2[3]
        r14_5 = 1
        void var_1c8
        rdi_7 = sub_140aae2b0(&var_1c8, &var_338)
    
    void var_330
    sub_140b58170(&var_330, "PIE", 1)
    int64_t* rbx_21 = rdi_7[1]
    int64_t rsi_2 = *rdi_7
    
    if (rbx_21 != 0)
        rbx_21[1].d += 1
    
    int32_t rdi_8 = rdi_7[2].d
    void var_1e0
    char* var_1a0
    char** rax_133 = sub_140a96390(&var_1a0, 
        _vfprintf_p_l(&var_1e0, Tried running a gameplay task {0} while owner is None!", 
        GameplayTasksComponent"))
    int32_t var_78_1 = 4
    
    if (rbx_21 != 0)
        rbx_21[1].d += 1
    
    char var_50_1 = 1
    int32_t* var_390 = nullptr
    int32_t var_388_1 = 1
    sub_1405a4b40(&var_390, 1, 0)
    int32_t* rcx_106 = var_390
    *rcx_106 = var_78_1
    int64_t var_70
    *(rcx_106 + 8) = var_70
    *(rcx_106 + 8) = var_70
    rcx_106[2] = var_70.d
    *(rcx_106 + 8) = var_70
    rcx_106[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_106 + 0x10) = rsi_2
        *(rcx_106 + 0x18) = rbx_21
        
        if (rbx_21 != 0)
            rbx_21[1].d += 1
        
        rcx_106[8] = rdi_8
        rcx_106[0xa].b = 1
    
    char* var_298 = *rax_133
    void* rax_141 = rax_133[1]
    void* var_290_1 = rax_141
    
    if (rax_141 != 0)
        *(rax_141 + 8) += 1
    
    void var_1f8
    int64_t* rax_142 = sub_140aac870(&var_1f8, &var_298, &var_390)
    int64_t var_2f0 = *rax_142
    int64_t* rcx_109 = rax_142[1]
    
    if (rcx_109 != 0)
        rcx_109[1].d += 1
    
    int32_t var_2e0_1 = rax_142[2].d
    int64_t* var_1f0
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t rax_146 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (rax_146 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)
    
    sub_140596f50(&var_390)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rbx_21 != 0)
            rbx_21[1].d -= 1
            
            if (rbx_21[1].d == 1)
                (**rbx_21)(rbx_21)
                int32_t rax_150 = *(rbx_21 + 0xc)
                *(rbx_21 + 0xc) -= 1
                
                if (rax_150 == 1)
                    (*(*rbx_21 + 8))(rbx_21, 1)
    
    int64_t* rbx_24 = rax_133[1]
    
    if (rbx_24 != 0)
        rbx_24[1].d -= 1
        
        if (rbx_24[1].d == 1)
            (**rbx_24)(rbx_24)
            int32_t rax_154 = *(rbx_24 + 0xc)
            *(rbx_24 + 0xc) -= 1
            
            if (rax_154 == 1)
                (*(*rbx_24 + 8))(rbx_24, 1)
    
    if (rbx_21 != 0)
        rbx_21[1].d -= 1
        
        if (rbx_21[1].d == 1)
            (**rbx_21)(rbx_21)
            int32_t rax_158 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (rax_158 == 1)
                (*(*rbx_21 + 8))(rbx_21, 1)
    
    void var_278
    void var_130
    sub_140ad3d20(sub_140accdf0(&var_130, &var_330), &var_278, &var_2f0)
    int64_t* var_270
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp3_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_270 + 8))(var_270, 1)
    
    sub_140acd9c0(&var_130)
    
    if (rcx_109 != 0)
        rcx_109[1].d -= 1
        
        if (rcx_109[1].d == 1)
            (**rcx_109)(rcx_109)
            int32_t rax_165 = *(rcx_109 + 0xc)
            *(rcx_109 + 0xc) -= 1
            
            if (rax_165 == 1)
                (*(*rcx_109 + 8))(rcx_109, 1)
    
    int64_t* var_1d8
    
    if (var_1d8 != 0)
        var_1d8[1].d -= 1
        
        if (var_1d8[1].d == 1)
            (**var_1d8)(var_1d8)
            int32_t rax_169 = *(var_1d8 + 0xc)
            *(var_1d8 + 0xc) -= 1
            
            if (rax_169 == 1)
                (*(*var_1d8 + 8))(var_1d8, 1)
    
    if ((r14_5.b & 2) != 0)
        r14_5 &= 0xfffffffd
        
        if (var_360 != 0)
            var_360[1].d -= 1
            
            if (var_360[1].d == 1)
                (**var_360)(var_360)
                int32_t rax_173 = *(var_360 + 0xc)
                *(var_360 + 0xc) -= 1
                
                if (rax_173 == 1)
                    (*(*var_360 + 8))(var_360, 1)
    
    int64_t* var_1c0
    
    if ((r14_5.b & 1) != 0 && var_1c0 != 0)
        var_1c0[1].d -= 1
        
        if (var_1c0[1].d == 1)
            (**var_1c0)(var_1c0)
            int32_t rax_177 = *(var_1c0 + 0xc)
            *(var_1c0 + 0xc) -= 1
            
            if (rax_177 == 1)
                (*(*var_1c0 + 8))(var_1c0, 1)
    
    if (var_3c8 != 0)
        var_3c8[1].d -= 1
        
        if (var_3c8[1].d == 1)
            (**var_3c8)(var_3c8)
            int32_t rdi_9 = *(var_3c8 + 0xc)
            *(var_3c8 + 0xc) -= 1
            
            if (rdi_9 == 1)
                (*(*var_3c8 + 8))(var_3c8, zx.q(rdi_9))
    
    goto label_14263baf3

int64_t rcx_136

if (arg2 == 0)
    void var_350
    sub_140b58170(&var_350, "PIE", (arg2 + 1).d)
    void* rbx_1 = nullptr
    
    if (r14_1 != 0)
        void* rax_4 = (*(*r14_1 + 8))(r14_1)
        void* rax_5 = sub_140d41340()
        void* rcx_7 = *(rax_4 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_5 + 0x38))
        
        if (rdx_2.d s<= *(rcx_7 + 0x38) && *(*(rcx_7 + 0x30) + (rdx_2 << 3)) == rax_5 + 0x30)
            rbx_1 = rax_4
    
    var_3b8.q = *(rbx_1 + 0x18)
    int64_t var_2c8
    sub_140b63b70(&var_3b8, &var_2c8)
    void var_108
    int64_t* rax_8 = sub_140aae2f0(&var_108, &var_2c8)
    void var_240
    char* var_1b0
    char** rax_10 = sub_140a96390(&var_1b0, 
        _vfprintf_p_l(&var_240, Tried running a None task for {0}", GameplayTasksComponent"))
    int64_t rcx_13 = *rax_8
    int64_t* rcx_14 = rax_8[1]
    int32_t var_d8_1 = 4
    
    if (rcx_14 != 0)
        rcx_14[1].d += 1
    
    int32_t rax_11 = rax_8[2].d
    char var_b0_1 = 1
    int32_t* var_3a0 = nullptr
    int32_t var_398_1 = 1
    sub_1405a4b40(&var_3a0, 1, 0)
    int32_t* rcx_16 = var_3a0
    *rcx_16 = var_d8_1
    int64_t var_d0
    *(rcx_16 + 8) = var_d0
    *(rcx_16 + 8) = var_d0
    rcx_16[2] = var_d0.d
    *(rcx_16 + 8) = var_d0
    rcx_16[0xa].b = 0
    
    if (var_b0_1 != 0)
        *(rcx_16 + 0x10) = rcx_13
        *(rcx_16 + 0x18) = rcx_14
        
        if (rcx_14 != 0)
            rcx_14[1].d += 1
        
        rcx_16[8] = rax_11
        rcx_16[0xa].b = 1
    
    char* var_2d8 = *rax_10
    void* rax_19 = rax_10[1]
    void* var_2d0_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    void var_258
    int64_t* rax_20 = sub_140aac870(&var_258, &var_2d8, &var_3a0)
    int64_t var_308 = *rax_20
    int64_t* rcx_19 = rax_20[1]
    
    if (rcx_19 != 0)
        rcx_19[1].d += 1
    
    int32_t var_2f8_1 = rax_20[2].d
    int64_t* var_250
    
    if (var_250 != 0)
        var_250[1].d -= 1
        
        if (var_250[1].d == 1)
            (**var_250)(var_250)
            int32_t rax_24 = *(var_250 + 0xc)
            *(var_250 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*var_250 + 8))(var_250, 1)
    
    sub_140596f50(&var_3a0)
    
    if (var_b0_1 != 0)
        char var_b0_2 = 0
        
        if (rcx_14 != 0)
            rcx_14[1].d -= 1
            
            if (rcx_14[1].d == 1)
                (**rcx_14)(rcx_14)
                int32_t rax_28 = *(rcx_14 + 0xc)
                *(rcx_14 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rcx_14 + 8))(rcx_14, 1)
    
    int64_t* rbx_4 = rax_10[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_32 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rbx_5 = rax_8[1]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_36 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    void var_268
    void var_180
    sub_140ad3d20(sub_140accdf0(&var_180, &var_350), &var_268, &var_308)
    int64_t* var_260
    
    if (var_260 != 0)
        var_260[1].d -= 1
        
        if (var_260[1].d == 1)
            (**var_260)(var_260)
            int32_t temp6_1 = *(var_260 + 0xc)
            *(var_260 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_260 + 8))(var_260, 1)
    
    sub_140acd9c0(&var_180)
    
    if (rcx_19 != 0)
        rcx_19[1].d -= 1
        
        if (rcx_19[1].d == 1)
            (**rcx_19)(rcx_19)
            int32_t rax_43 = *(rcx_19 + 0xc)
            *(rcx_19 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rcx_19 + 8))(rcx_19, 1)
    
    int64_t* var_238
    
    if (var_238 != 0)
        var_238[1].d -= 1
        
        if (var_238[1].d == 1)
            (**var_238)(var_238)
            int32_t rax_47 = *(var_238 + 0xc)
            *(var_238 + 0xc) -= 1
            
            if (rax_47 == 1)
                (*(*var_238 + 8))(var_238, 1)
    
    int64_t rcx_38 = var_2c8
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    if (var_3c8 != 0)
        var_3c8[1].d -= 1
        
        if (var_3c8[1].d == 1)
            (**var_3c8)(var_3c8)
            int32_t rdi_2 = *(var_3c8 + 0xc)
            *(var_3c8 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_3c8 + 8))(var_3c8, zx.q(rdi_2))
    
    rcx_136 = *arg4
    goto label_14263baf9

char rax_52 = *(arg2 + 0x39)
uint64_t result

if (rax_52 == 2 || rax_52 == 3)
    void var_340
    sub_140b58170(&var_340, "PIE", 1)
    void* rbx_12 = nullptr
    
    if (r14_1 != 0)
        void* rax_77 = (*(*r14_1 + 8))(r14_1)
        void* rax_78 = sub_140d41340()
        void* rcx_62 = *(rax_77 + 0x10)
        int64_t rdx_17 = sx.q(*(rax_78 + 0x38))
        
        if (rdx_17.d s<= *(rcx_62 + 0x38) && *(*(rcx_62 + 0x30) + (rdx_17 << 3)) == rax_78 + 0x30)
            rbx_12 = rax_77
    
    int64_t var_348 = *(rbx_12 + 0x18)
    int64_t var_2a8
    sub_140b63b70(&var_348, &var_2a8)
    void var_f0
    int64_t* rax_81 = sub_140aae2f0(&var_f0, &var_2a8)
    void var_210
    char* var_190
    char** rax_83 = sub_140a96390(&var_190, 
        _vfprintf_p_l(&var_210, Tried running a None task for {0}", GameplayTasksComponent"))
    int64_t rcx_68 = *rax_81
    int64_t* rcx_69 = rax_81[1]
    int32_t var_a8_1 = 4
    
    if (rcx_69 != 0)
        rcx_69[1].d += 1
    
    int32_t rax_84 = rax_81[2].d
    char var_80_1 = 1
    int32_t* var_3b0 = nullptr
    int32_t var_3a8_1 = 1
    sub_1405a4b40(&var_3b0, 1, 0)
    int32_t* rcx_71 = var_3b0
    *rcx_71 = var_a8_1
    int64_t var_a0
    *(rcx_71 + 8) = var_a0
    *(rcx_71 + 8) = var_a0
    rcx_71[2] = var_a0.d
    *(rcx_71 + 8) = var_a0
    rcx_71[0xa].b = 0
    
    if (var_80_1 != 0)
        *(rcx_71 + 0x10) = rcx_68
        *(rcx_71 + 0x18) = rcx_69
        
        if (rcx_69 != 0)
            rcx_69[1].d += 1
        
        rcx_71[8] = rax_84
        rcx_71[0xa].b = 1
    
    char* var_2b8 = *rax_83
    void* rax_92 = rax_83[1]
    void* var_2b0_1 = rax_92
    
    if (rax_92 != 0)
        *(rax_92 + 8) += 1
    
    void var_228
    int64_t* rax_93 = sub_140aac870(&var_228, &var_2b8, &var_3b0)
    int64_t var_320 = *rax_93
    int64_t* rcx_74 = rax_93[1]
    
    if (rcx_74 != 0)
        rcx_74[1].d += 1
    
    int32_t var_310_1 = rax_93[2].d
    int64_t* var_220
    
    if (var_220 != 0)
        var_220[1].d -= 1
        
        if (var_220[1].d == 1)
            (**var_220)(var_220)
            int32_t rax_97 = *(var_220 + 0xc)
            *(var_220 + 0xc) -= 1
            
            if (rax_97 == 1)
                (*(*var_220 + 8))(var_220, 1)
    
    sub_140596f50(&var_3b0)
    
    if (var_80_1 != 0)
        char var_80_2 = 0
        
        if (rcx_69 != 0)
            rcx_69[1].d -= 1
            
            if (rcx_69[1].d == 1)
                (**rcx_69)(rcx_69)
                int32_t rax_101 = *(rcx_69 + 0xc)
                *(rcx_69 + 0xc) -= 1
                
                if (rax_101 == 1)
                    (*(*rcx_69 + 8))(rcx_69, 1)
    
    int64_t* rbx_15 = rax_83[1]
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t rax_105 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (rax_105 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)
    
    int64_t* rbx_16 = rax_81[1]
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t rax_109 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (rax_109 == 1)
                (*(*rbx_16 + 8))(rbx_16, 1)
    
    void var_288
    void var_158
    sub_140ae44d0(sub_140accdf0(&var_158, &var_340), &var_288, &var_320)
    int64_t* var_280
    
    if (var_280 != 0)
        var_280[1].d -= 1
        
        if (var_280[1].d == 1)
            (**var_280)(var_280)
            int32_t temp8_1 = *(var_280 + 0xc)
            *(var_280 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_280 + 8))(var_280, 1)
    
    sub_140acd9c0(&var_158)
    
    if (rcx_74 != 0)
        rcx_74[1].d -= 1
        
        if (rcx_74[1].d == 1)
            (**rcx_74)(rcx_74)
            int32_t rax_117 = *(rcx_74 + 0xc)
            *(rcx_74 + 0xc) -= 1
            
            if (rax_117 == 1)
                (*(*rcx_74 + 8))(rcx_74, 1)
    
    int64_t* var_208
    
    if (var_208 != 0)
        var_208[1].d -= 1
        
        if (var_208[1].d == 1)
            (**var_208)(var_208)
            int32_t rax_121 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (rax_121 == 1)
                (*(*var_208 + 8))(var_208, 1)
    
    int64_t rcx_93 = var_2a8
    
    if (rcx_93 != 0)
        sub_140a74f90(rcx_93)
    
    char rax_114
    
    if (arg2[0xa] != 0)
        rax_114 = sub_140d3e110(&arg2[9])
    
    if (arg2[0xa] == 0 || rax_114 == 0)
        rax_114 = 0
    else
        rax_114 = 1
    
    if (rax_114 != 0)
        r15 = arg2[0xa]
    
    int64_t* rsi
    
    if (r15 != r14_1)
        rsi.b = 0
    else
        rsi.b = *(arg2 + 0x39) != 2
        rsi.b += 2
    
    if (var_3c8 != 0)
        var_3c8[1].d -= 1
        
        if (var_3c8[1].d == 1)
            (**var_3c8)(var_3c8)
            int32_t rdi_6 = *(var_3c8 + 0xc)
            *(var_3c8 + 0xc) -= 1
            
            if (rdi_6 == 1)
                (*(*var_3c8 + 8))(var_3c8, zx.q(rdi_6))
    
    int64_t rcx_97 = *var_3e8
    
    if (rcx_97 != 0)
        sub_140a74f90(rcx_97)
    
    int64_t rcx_99 = *arg5
    
    if (rcx_99 != 0)
        sub_140a74f90(rcx_99)
    
    result = zx.q(rsi.b)
else
    if (rax_52 == 0)
        sub_14263aa00(arg2, r14_1, arg3)
    
    int64_t* rdi_3 = *arg4
    int64_t r14_3 = 0
    uint64_t r12_2 = sx.q(arg4[1].d) << 3 u>> 3
    
    if (rdi_3 u> &rdi_3[arg4[1]])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* rbx_10 = *rdi_3
            
            if (rbx_10 != 0)
                void* rax_55 = sub_14263d1a0()
                
                if (rax_55 != 0)
                    int64_t rax_56 = sx.q(*(rax_55 + 0x38))
                    
                    if (rax_56.d s<= rbx_10[7].d && *(rbx_10[6] + (rax_56 << 3)) == rax_55 + 0x30)
                        void* rax_58 = sub_14263d1a0()
                        int64_t rax_59
                        
                        if (rax_58 != 0)
                            rax_59 = sx.q(*(rax_58 + 0x38))
                        
                        if (rax_58 == 0 || rax_59.d s> rbx_10[7].d
                                || *(rbx_10[6] + (rax_59 << 3)) != rax_58 + 0x30)
                            rbx_10 = nullptr
                        
                        void* rax_62 = rbx_10[0x23]
                        
                        if (rax_62 == 0)
                            (*(*rbx_10 + 0x390))(rbx_10)
                            rax_62 = rbx_10[0x23]
                        
                        char rdx_13
                        
                        if ((*(rax_62 + 0x30) & 1) != 0 || *(rax_62 + 0x28) != 0xffffffff)
                            rdx_13 = *(rax_62 + 0x28)
                        else
                            rdx_13 = *(rax_62 + 0x2c)
                        
                        arg2[8].w |= (1 << (zx.d(rdx_13) u% 0x20)).w
            
            rdi_3 = &rdi_3[1]
            r14_3 += 1
        while (r14_3 != r12_2)
    
    int64_t r14_4 = 0
    int64_t* rdi_4 = *arg5
    uint64_t r12_4 = sx.q(arg5[1].d) << 3 u>> 3
    
    if (rdi_4 u> &rdi_4[arg5[1]])
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            int64_t* rbx_11 = *rdi_4
            
            if (rbx_11 != 0)
                void* rax_66 = sub_14263d1a0()
                
                if (rax_66 != 0)
                    int64_t rax_67 = sx.q(*(rax_66 + 0x38))
                    
                    if (rax_67.d s<= rbx_11[7].d && *(rbx_11[6] + (rax_67 << 3)) == rax_66 + 0x30)
                        void* rax_69 = sub_14263d1a0()
                        int64_t rax_70
                        
                        if (rax_69 != 0)
                            rax_70 = sx.q(*(rax_69 + 0x38))
                        
                        if (rax_69 == 0 || rax_70.d s> rbx_11[7].d
                                || *(rbx_11[6] + (rax_70 << 3)) != rax_69 + 0x30)
                            rbx_11 = nullptr
                        
                        void* rax_73 = rbx_11[0x23]
                        
                        if (rax_73 == 0)
                            (*(*rbx_11 + 0x390))(rbx_11)
                            rax_73 = rbx_11[0x23]
                        
                        char rdx_16
                        
                        if ((*(rax_73 + 0x30) & 1) != 0 || *(rax_73 + 0x28) != 0xffffffff)
                            rdx_16 = (*(rax_73 + 0x28)).b
                        else
                            rdx_16 = *(rax_73 + 0x2c)
                        
                        *(arg2 + 0x42) |= (1 << (zx.d(rdx_16) u% 0x20)).w
            
            rdi_4 = &rdi_4[1]
            r14_4 += 1
        while (r14_4 != r12_4)
    
    sub_14263c6d0(arg2)
    char rax_75 = *(arg2 + 0x39)
    
    if (rax_75 == 0)
    label_14263b250:
        sub_1405970a0(&var_3d0)
    label_14263baf3:
        rcx_136 = *var_3e8
    label_14263baf9:
        
        if (rcx_136 != 0)
            sub_140a74f90(rcx_136)
        
        int64_t rcx_137 = *arg5
        
        if (rcx_137 != 0)
            sub_140a74f90(rcx_137)
        
        result.b = 0
    else if (rax_75 u<= 2)
        sub_1405970a0(&var_3d0)
        int64_t rcx_57 = *var_3e8
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        int64_t rcx_58 = *arg5
        
        if (rcx_58 != 0)
            sub_140a74f90(rcx_58)
        
        result.b = 2
    else
        if (rax_75 != 3 && rax_75 != 4)
            goto label_14263b250
        
        sub_1405970a0(&var_3d0)
        int64_t rcx_54 = *var_3e8
        
        if (rcx_54 != 0)
            sub_140a74f90(rcx_54)
        
        int64_t rcx_55 = *arg5
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
        result.b = 3

__security_check_cookie(rax_1 ^ &var_408)
return result
