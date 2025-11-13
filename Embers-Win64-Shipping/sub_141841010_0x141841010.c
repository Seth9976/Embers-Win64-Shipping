// 函数: sub_141841010
// 地址: 0x141841010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
char var_478 = 1
int32_t var_450 = 0
sub_1418430b0(arg1 + 0x58)
void* rdi = *(arg1 + 0xc8)
void* i = sx.q(*(arg1 + 0xd0)) * 0x138 + rdi
int32_t var_488
char* var_480

if (rdi != i)
    int64_t* rdi_1 = rdi + 0x88
    
    do
        int64_t var_1c8
        __builtin_memset(&var_1c8, 0, 0x2c)
        int32_t var_19c_1 = 0x80
        int32_t var_198_1 = 0xffffffff
        int32_t var_194_1 = 0
        int64_t var_188_1 = 0
        int32_t var_180_1 = 0
        int32_t var_3d0
        sub_140598750(&var_1c8, &var_3d0)
        int64_t* var_3c8
        *var_3c8 = 0
        var_3c8[1] = 0
        var_3c8[2].d = 0xffffffff
        sub_14059a6d0(&var_1c8, &var_450, sub_1405969c0(0, &data_142d40450), var_3c8, var_3d0, 
            nullptr)
        int64_t* rcx_3 = *rdi_1
        
        if (rcx_3 == 0)
            rcx_3 = rdi_1[-2]
        
        (*(*rcx_3 + 0xa8))(rcx_3, &var_1c8)
        int32_t var_3c0
        sub_140598750(&var_1c8, &var_3c0)
        int64_t* var_3b8
        *var_3b8 = 0
        var_3b8[1] = 0
        var_3b8[2].d = 0xffffffff
        var_480 = nullptr
        void var_408
        sub_14059a6d0(&var_1c8, &var_408, sub_1405969c0(0, &data_142d40450), var_3b8, var_3c0, 
            var_480)
        int64_t var_d8
        int64_t* rax_8 = sub_141835260(&rdi_1[2], &var_d8, &var_1c8)
        int32_t rbx_4 = rax_8[1].d - *(rax_8 + 0x34)
        int32_t var_90_1 = 0
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        sub_14059ad90(&var_d8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        int64_t rcx_10 = var_d8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t var_1a8
        
        if (rbx_4 s> 0)
            int64_t* rbx_5 = *(arg1 + 0x538)
            int64_t rdi_2 = *rbx_5
            void var_1e8
            var_488.q = _vfprintf_p_l(&var_1e8, 
                This installation could not continue due to a configuration issue. Please contact "
            "support.", BuildPatchInstallError")
            (*(rdi_2 + 0x38))(rbx_5, 9, data_1439c6748, 0, var_488)
            var_478 = 0
            int32_t var_180_3 = 0
            
            if (var_188_1 != 0)
                sub_140a74f90(var_188_1)
            
            sub_14059ad90(&var_1c8, 0)
            
            if (var_1a8 != 0)
                sub_140a74f90(var_1a8)
            
            int64_t rcx_20 = var_1c8
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            break
        
        int32_t var_180_2 = 0
        
        if (var_188_1 != 0)
            sub_140a74f90(var_188_1)
        
        sub_14059ad90(&var_1c8, 0)
        
        if (var_1a8 != 0)
            sub_140a74f90(var_1a8)
        
        int64_t rcx_14 = var_1c8
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rdi_1 = &rdi_1[0x27]
    while (&rdi_1[-0x11] != i)

int64_t rax_2

if (*(arg1 + 0x50) == 0)
    rax_2.b = 0
else
    int64_t* rcx_21 = *(arg1 + 0x48)
    
    if (rcx_21 == 0)
        rax_2.b = 0
    else if ((*(*rcx_21 + 0x28))(rcx_21).b == 0)
        rax_2.b = 0
    else
        rax_2.b = 1

if (rax_2.b == 0)
    int64_t* rbx_6 = *(arg1 + 0x538)
    sub_1405d9400()
    int64_t var_390 = data_143cd6fd8
    void* rdx_7 = data_143cd6fe0
    void* var_388_1 = rdx_7
    
    if (rdx_7 != 0)
        *(rdx_7 + 8) += 1
    
    int32_t var_380_1 = data_143cd6fe8
    var_488.q = &var_390
    (*(*rbx_6 + 0x38))(rbx_6, 9, data_1439c6740, 0, var_488, var_480, var_478)
    var_478 = 0

sub_140a464c0()
int16_t* const rdx_8

if (*(arg1 + 0x70) == 0)
    rdx_8 = &data_142d40450
else
    rdx_8 = *(arg1 + 0x68)

int64_t r8_6
r8_6.b = 1
(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_8, r8_6)
sub_140a464c0()
*(arg1 + 0x70)

if ((*(data_14399ea08 + 0x50))() == 0)
    int64_t* r14_1 = *(arg1 + 0x538)
    void var_230
    int64_t* rax_17 = sub_140aae420(&var_230, arg1 + 0x68)
    void var_2c0
    char* var_240
    char** rax_19 = sub_140a96390(&var_240, 
        _vfprintf_p_l(&var_2c0, The installation directory could not be created.\n{0}", 
        BuildPatchInstallError"))
    int64_t* rcx_26 = rax_17[1]
    int64_t rax_20 = *rax_17
    int32_t var_178_1 = 4
    
    if (rcx_26 != 0)
        rcx_26[1].d += 1
    
    int32_t rax_21 = rax_17[2].d
    char var_150_1 = 1
    int32_t* var_438 = nullptr
    int32_t var_430_1 = 1
    sub_1405a4b40(&var_438, 1, 0)
    int32_t* rcx_28 = var_438
    *rcx_28 = var_178_1
    int64_t var_170
    *(rcx_28 + 8) = var_170
    *(rcx_28 + 8) = var_170
    rcx_28[2] = var_170.d
    *(rcx_28 + 8) = var_170
    rcx_28[0xa].b = 0
    
    if (var_150_1 != 0)
        *(rcx_28 + 0x10) = rax_20
        *(rcx_28 + 0x18) = rcx_26
        
        if (rcx_26 != 0)
            rcx_26[1].d += 1
        
        rcx_28[8] = rax_21
        rcx_28[0xa].b = 1
    
    char* var_3b0 = *rax_19
    void* rax_29 = rax_19[1]
    void* var_3a8_1 = rax_29
    
    if (rax_29 != 0)
        *(rax_29 + 8) += 1
    
    void var_2d8
    int64_t* rax_30 = sub_140aac870(&var_2d8, &var_3b0, &var_438)
    int64_t var_378 = *rax_30
    void* rcx_30 = rax_30[1]
    void* var_370_1 = rcx_30
    
    if (rcx_30 != 0)
        *(rcx_30 + 8) += 1
    
    int32_t var_368_1 = rax_30[2].d
    int64_t* var_2d0
    
    if (var_2d0 != 0)
        var_2d0[1].d -= 1
        
        if (var_2d0[1].d == 1)
            (**var_2d0)(var_2d0)
            int32_t rax_35 = *(var_2d0 + 0xc)
            *(var_2d0 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*var_2d0 + 8))(var_2d0, 1)
    
    sub_140596f50(&var_438)
    
    if (var_150_1 != 0)
        char var_150_2 = 0
        
        if (rcx_26 != 0)
            rcx_26[1].d -= 1
            
            if (rcx_26[1].d == 1)
                (**rcx_26)(rcx_26)
                int32_t rax_39 = *(rcx_26 + 0xc)
                *(rcx_26 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*rcx_26 + 8))(rcx_26, 1)
    
    int64_t* rbx_9 = rax_19[1]
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t rax_43 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    int64_t* rbx_10 = rax_17[1]
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t rax_47 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (rax_47 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
    
    var_488.q = &var_378
    (*(*r14_1 + 0x38))(r14_1, 9, data_1439c6738, 0, var_488, var_480, var_478)
    int64_t* var_2b8
    
    if (var_2b8 != 0)
        var_2b8[1].d -= 1
        
        if (var_2b8[1].d == 1)
            (**var_2b8)(var_2b8)
            int32_t rax_50 = *(var_2b8 + 0xc)
            *(var_2b8 + 0xc) -= 1
            
            if (rax_50 == 1)
                (*(*var_2b8 + 8))(var_2b8, 1)
    
    var_478 = 0

sub_140a464c0()
int16_t* const rdx_13

if (*(arg1 + 0x80) == 0)
    rdx_13 = &data_142d40450
else
    rdx_13 = *(arg1 + 0x78)

(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_13, 1)
sub_140a464c0()
*(arg1 + 0x80)

if ((*(data_14399ea08 + 0x50))() == 0)
    int64_t* r14_2 = *(arg1 + 0x538)
    void var_218
    int64_t* rax_56 = sub_140aae420(&var_218, arg1 + 0x78)
    void var_290
    char* var_260
    char** rax_58 = sub_140a96390(&var_260, 
        _vfprintf_p_l(&var_290, The following directory could not be created.\n{0}", 
        BuildPatchInstallError"))
    int64_t* rcx_46 = rax_56[1]
    int64_t rax_59 = *rax_56
    int32_t var_148_1 = 4
    
    if (rcx_46 != 0)
        rcx_46[1].d += 1
    
    int32_t rax_60 = rax_56[2].d
    char var_120_1 = 1
    int32_t* var_428 = nullptr
    int32_t var_420_1 = 1
    sub_1405a4b40(&var_428, 1, 0)
    int32_t* rcx_48 = var_428
    *rcx_48 = var_148_1
    int64_t var_140
    *(rcx_48 + 8) = var_140
    *(rcx_48 + 8) = var_140
    rcx_48[2] = var_140.d
    *(rcx_48 + 8) = var_140
    rcx_48[0xa].b = 0
    
    if (var_120_1 != 0)
        *(rcx_48 + 0x10) = rax_59
        *(rcx_48 + 0x18) = rcx_46
        
        if (rcx_46 != 0)
            rcx_46[1].d += 1
        
        rcx_48[8] = rax_60
        rcx_48[0xa].b = 1
    
    char* var_3a0 = *rax_58
    void* rax_68 = rax_58[1]
    void* var_398_1 = rax_68
    
    if (rax_68 != 0)
        *(rax_68 + 8) += 1
    
    void var_2a8
    int64_t* rax_69 = sub_140aac870(&var_2a8, &var_3a0, &var_428)
    int64_t var_360 = *rax_69
    void* rcx_50 = rax_69[1]
    void* var_358_1 = rcx_50
    
    if (rcx_50 != 0)
        *(rcx_50 + 8) += 1
    
    int32_t var_350_1 = rax_69[2].d
    int64_t* var_2a0
    
    if (var_2a0 != 0)
        var_2a0[1].d -= 1
        
        if (var_2a0[1].d == 1)
            (**var_2a0)(var_2a0)
            int32_t rax_74 = *(var_2a0 + 0xc)
            *(var_2a0 + 0xc) -= 1
            
            if (rax_74 == 1)
                (*(*var_2a0 + 8))(var_2a0, 1)
    
    sub_140596f50(&var_428)
    
    if (var_120_1 != 0)
        char var_120_2 = 0
        
        if (rcx_46 != 0)
            rcx_46[1].d -= 1
            
            if (rcx_46[1].d == 1)
                (**rcx_46)(rcx_46)
                int32_t rax_78 = *(rcx_46 + 0xc)
                *(rcx_46 + 0xc) -= 1
                
                if (rax_78 == 1)
                    (*(*rcx_46 + 8))(rcx_46, 1)
    
    int64_t* rbx_14 = rax_58[1]
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t rax_82 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (rax_82 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
    
    int64_t* rbx_15 = rax_56[1]
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t rax_86 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (rax_86 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)
    
    var_488.q = &var_360
    (*(*r14_2 + 0x38))(r14_2, 9, data_1439c6730, 0, var_488, var_480, var_478)
    int64_t* var_288
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t rax_89 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (rax_89 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    var_478 = 0

if (*(arg1 + 0xb8) == 3)
    void* rbx_17 = *(arg1 + 0xc8)
    void* i_1 = sx.q(*(arg1 + 0xd0)) * 0x138 + rbx_17
    
    if (rbx_17 != i_1)
        int64_t* rbx_18 = rbx_17 + 0x88
        
        do
            int64_t* rcx_63 = *rbx_18
            
            if (rcx_63 == 0)
                rcx_63 = rbx_18[-2]
            
            if (*((*(*rcx_63 + 0x40))(rcx_63) + 8) s> 1)
                goto label_141841a63
            
            rbx_18 = &rbx_18[0x27]
        while (&rbx_18[-0x11] != i_1)
    
    int64_t* rbx_19 = *(arg1 + 0x538)
    int64_t rdi_6 = *rbx_19
    void var_200
    var_488.q = _vfprintf_p_l(&var_200, 
        This installation could not continue due to a prerequisite configuration issue. Please contact "
    "support.", BuildPatchInstallError")
    (*(rdi_6 + 0x38))(rbx_19, 9, data_1439c6750, 0, var_488, var_480, var_478)
    var_478 = 0

label_141841a63:
int64_t var_88
sub_14189db00(&var_88)
int64_t rax_97 = *(arg1 + 0x5c8)
void* i_2 = *(arg1 + 0xc8)
int64_t* var_470 = nullptr
int64_t var_468 = 0
var_88 = rax_97

for (void* r13_1 = sx.q(*(arg1 + 0xd0)) * 0x138 + i_2; i_2 != r13_1; i_2 += 0x138)
    if (*(i_2 + 0x70) == 1)
        void var_310
        void*** rax_100 = sub_1418a1300(sub_141829c50(&var_310, arg1 + 0x58, i_2), &var_88)
        int32_t j_2
        int32_t j_1 = j_2
        int64_t* var_2f0
        int64_t* rbx_20 = var_2f0
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rcx_69 = *rbx_20
                
                if (rcx_69 != 0)
                    sub_140a74f90(rcx_69)
                
                rbx_20 = &rbx_20[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbx_20 = var_2f0
        
        if (rbx_20 != 0)
            sub_140a74f90(rbx_20)
        
        int64_t* var_2f8
        
        if (var_2f8 != 0)
            var_2f8[1].d -= 1
            
            if (var_2f8[1].d == 1)
                (**var_2f8)(var_2f8)
                int32_t rax_103 = *(var_2f8 + 0xc)
                *(var_2f8 + 0xc) -= 1
                
                if (rax_103 == 1)
                    (*(*var_2f8 + 8))(var_2f8, 1)
        
        int64_t* var_308
        
        if (var_308 != 0)
            var_308[1].d -= 1
            
            if (var_308[1].d == 1)
                (**var_308)(var_308)
                int32_t rax_107 = *(var_308 + 0xc)
                *(var_308 + 0xc) -= 1
                
                if (rax_107 == 1)
                    (*(*var_308 + 8))(var_308, 1)
        
        int64_t rdi_7 = sx.q(*(arg1 + 0x5e0))
        int32_t rax_109 = (rdi_7 + 1).d
        *(arg1 + 0x5e0) = rax_109
        
        if (rax_109 s> *(arg1 + 0x5e4))
            sub_1405a4d70(arg1 + 0x5d8)
        
        int64_t rbx_23 = sx.q(var_468.d)
        void*** var_410_1 = rax_100
        *(*(arg1 + 0x5d8) + (rdi_7 << 3)) = rax_100
        int32_t rax_111 = (rbx_23 + 1).d
        var_468.d = rax_111
        
        if (rax_111 s> var_468:4.d)
            sub_1405a4f90(&var_470)
        
        *(var_470 + rbx_23 * 0x10) = i_2.o

int64_t* r14_4 = var_470
void* rax_115 = &r14_4[sx.q(var_468.d) * 2]
uint64_t r13_2

if (r14_4 == rax_115)
label_141841d5d:
    r13_2 = zx.q(var_478)
else
    while (true)
        int64_t* rbx_24 = r14_4[1]
        r13_2 = *r14_4
        int64_t* rax_117 = (*(*rbx_24 + 8))(rbx_24)
        int64_t rcx_81 = sx.q((*(*rbx_24 + 0x10))(rbx_24))
        *(arg1 + 0x150)
        *(arg1 + 0x150) += rcx_81
        int32_t rax_119
        
        if (rax_117[5].b == 0 || rax_117[2].b != 0)
            rax_119.b = 0
        else
            rax_119 = 1
        
        if (rax_119.b == 0)
            int64_t* rbx_27 = *(arg1 + 0x538)
            sub_1405d9400()
            int64_t var_348 = data_143cd6fd8
            void* rcx_91 = data_143cd6fe0
            void* var_340_1 = rcx_91
            
            if (rcx_91 != 0)
                *(rcx_91 + 8) += 1
            
            int32_t var_338_1 = data_143cd6fe8
            int16_t* const r8_14
            
            if (rax_117[1].d == 0)
                r8_14 = &data_142d40450
            else
                r8_14 = *rax_117
            
            var_488.q = &var_348
            (*(*rbx_27 + 0x38))(rbx_27, 1, r8_14, 0, var_488, var_480, var_478)
            r13_2.b = 0
            break
        
        int64_t rdx_22 = rax_117[3]
        int64_t* rdi_9 = rax_117[4]
        
        if (rdi_9 != 0)
            rdi_9[1].d += 1
        
        if (*(r13_2 + 0x70) == 1)
            int64_t var_460 = rdx_22
            int64_t* rcx_83 = rdi_9
            int64_t* var_458 = rcx_83
            
            if (rdi_9 != 0)
                rdi_9[1].d += 1
                rcx_83 = var_458
            
            if (r13_2 + 0x88 != &var_460)
                *(r13_2 + 0x88) = rdx_22
                var_460 = 0
                sub_1405aeff0(r13_2 + 0x90, &var_458)
                rcx_83 = var_458
            
            if (rcx_83 != 0)
                rcx_83[1].d -= 1
                
                if (rcx_83[1].d == 1)
                    int64_t* rbx_25 = var_458
                    (**rbx_25)(rbx_25)
                    int32_t rax_123 = *(rbx_25 + 0xc)
                    *(rbx_25 + 0xc) -= 1
                    
                    if (rax_123 == 1)
                        int64_t* rcx_86 = var_458
                        (*(*rcx_86 + 8))(rcx_86, 1)
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                (**rdi_9)(rdi_9)
                int32_t rax_127 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rax_127 == 1)
                    (*(*rdi_9 + 8))(rdi_9, 1)
        
        r14_4 = &r14_4[2]
        
        if (r14_4 == rax_115)
            goto label_141841d5d

int32_t r8_13 = *(arg1 + 0xd0)
void* rdx_24 = *(arg1 + 0xc8)
int64_t var_400 = 0
sub_141817be0(&var_400, rdx_24, r8_13, 0, 0)
void*** rax_129 = j_sub_140a82f30(0x108)
void*** rbx_26

if (rax_129 == 0)
    rbx_26 = nullptr
else
    rbx_26 = sub_14181f8e0(rax_129, &var_400)

sub_141821500(&var_400)
int64_t* rcx_94 = *(arg1 + 0x5e8)

if (rcx_94 != rbx_26)
    *(arg1 + 0x5e8) = rbx_26
    
    if (rcx_94 != 0)
        (**rcx_94)(rcx_94, 1)

uint64_t rbx_28 = 0
uint64_t var_448
uint64_t var_3e0
uint64_t* rcx_95
int32_t r14_5

if (*(arg1 + 0xb8) != 0)
    r14_5 = 2
    int64_t var_3d8_1 = 0
    rcx_95 = &var_3e0
else
    int32_t rdi_10 = *(arg1 + 0xf0)
    r14_5 = 1
    int64_t rsi_3 = *(arg1 + 0xe8)
    var_448 = 0
    int32_t var_440_1 = rdi_10
    
    if (rdi_10 != 0)
        sub_1405a4c70(&var_448, rdi_10, 0)
        rbx_28 = var_448
        memcpy(rbx_28, rsi_3, rdi_10 * 2)
        rcx_95 = &var_448
    else
        rcx_95 = &var_448
        int32_t var_43c_1 = 0

int64_t rsi_4 = *(arg1 + 0x528)
*rcx_95 = 0
int64_t rdi_11 = *(arg1 + 0x5c0)
int32_t var_3e8 = rcx_95[1].d
int32_t rax_136 = *(rcx_95 + 0xc)
rcx_95[1] = 0
uint64_t var_3f0 = rbx_28
int64_t rbx_29 = *(arg1 + 0x5e8)
int32_t var_3e4 = rax_136
int32_t var_488_2
void var_250
var_488_2.q = sub_140596d10(&var_250, arg1 + 0x68)
void*** rax_138 = sub_1418a13c0(rsi_4, rdi_11, *(arg1 + 0xbc), rbx_29, var_488_2, &var_3f0)
int64_t* rcx_100 = *(arg1 + 0x5f0)

if (rcx_100 != rax_138)
    *(arg1 + 0x5f0) = rax_138
    
    if (rcx_100 != 0)
        (**rcx_100)(rcx_100, 1)

if ((r14_5.b & 2) != 0)
    uint64_t rcx_101 = var_3e0
    r14_5 &= 0xfffffffd
    
    if (rcx_101 != 0)
        sub_140a74f90(rcx_101)

if ((1 & r14_5.b) != 0)
    uint64_t rcx_102 = var_448
    
    if (rcx_102 != 0)
        sub_140a74f90(rcx_102)

EnterCriticalSection(arg1 + 0x118)
int64_t rsi_5 = sx.q(*(arg1 + 0x600))
int64_t r14_6 = *(arg1 + 0x5f0)
int32_t rax_140 = (rsi_5 + 1).d
*(arg1 + 0x600) = rax_140

if (rax_140 s> *(arg1 + 0x604))
    sub_1405a4d70(arg1 + 0x5f8)

*(*(arg1 + 0x5f8) + (rsi_5 << 3)) = r14_6

if (arg1 != -0x118)
    LeaveCriticalSection(arg1 + 0x118)

void*** var_108 = nullptr
void** const var_f8 = &data_142da2668
void* var_f0 = arg1
int64_t (* var_118)(int64_t* arg1) = sub_14182a5f0
void* var_330
void** rax_142 = sub_141819a40(&var_330, &var_118)

if (*rax_142 != 0)
    while (true)
        void* rcx_107 = *rax_142
        
        if (rcx_107 != 0)
            int64_t* rcx_108 = *(rcx_107 + 0x70)
            
            if ((*(*rcx_108 + 0x20))(rcx_108, 0xffffffff, 0) != 0)
                break

sub_1405ec6a0(&var_330)

if (var_118 != 0)
    void** const* rcx_110 = &var_f8
    
    if (var_108 != 0)
        rcx_110 = var_108
    
    (*rcx_110)[2](rcx_110)

EnterCriticalSection(arg1 + 0x118)
int64_t* rcx_112 = *(arg1 + 0x5e8)
int32_t rax_148 = (*(*rcx_112 + 0x40))(rcx_112)
int64_t* rcx_113 = *(arg1 + 0x538)
*(arg1 + 0x158) = rax_148
*(arg1 + 0x22c) = r13_2.b
int64_t var_320
sub_140597da0(arg1 + 0x248, (*(*rcx_113 + 0x28))(rcx_113, &var_320))
int64_t rcx_115 = var_320

if (rcx_115 != 0)
    sub_140a74f90(rcx_115)

int64_t* rcx_116 = *(arg1 + 0x538)
void var_278
int64_t* rax_152 = (*(*rcx_116 + 0x30))(rcx_116, &var_278)
int64_t rcx_117 = *(arg1 + 0x268)
*(arg1 + 0x268) = *rax_152
*rax_152 = rcx_117
int64_t rcx_118 = *(arg1 + 0x270)
*(arg1 + 0x270) = rax_152[1]
rax_152[1] = rcx_118
*(arg1 + 0x278) = rax_152[2].d
sub_1405970a0(&var_278)
int64_t* rcx_120 = *(arg1 + 0x538)
*(arg1 + 0x234) = (*(*rcx_120 + 0x20))(rcx_120)

if (arg1 != -0x118)
    LeaveCriticalSection(arg1 + 0x118)

*(arg1 + 0x148)
*(arg1 + 0x148) = 1
int64_t* rcx_122 = var_470

if (rcx_122 != 0)
    sub_140a74f90(rcx_122)

int64_t var_78

if (var_78 != 0)
    void var_58
    void* rcx_123 = &var_58
    void* var_68
    
    if (var_68 != 0)
        rcx_123 = var_68
    
    int64_t rdx_37 = *rcx_123
    (*(rdx_37 + 0x10))(rcx_123, rdx_37)

__security_check_cookie(rax_1 ^ &var_4a8)
return zx.q(r13_2.b)
