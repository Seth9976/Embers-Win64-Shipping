// 函数: sub_141ffbf00
// 地址: 0x141ffbf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142002340(arg1 + 0x80, 0)
int32_t rbx = (data_143f3f0a8.q).d
int64_t rdi = data_143f3f0a0
uint64_t var_1d8 = 0
int32_t var_1d0 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_1d8, rbx, 0)
    memcpy(var_1d8, rdi, rbx * 2)
else
    int32_t var_1cc_1 = 0

int64_t var_58
sub_142006bd0(arg1, &var_58, &var_1d8)
int64_t var_68 = 0
int64_t var_60 = 0
PWSTR var_1e8 = nullptr
int32_t var_1e0 = 0
sub_1405947f0(&var_1e8, 0xc)
int32_t rax = var_1e0 + 0xc
var_1e0 = rax

if (rax s> 0)
    sub_140594770(&var_1e8)

UnDecorator::getReferenceType(var_1e8, u"SessionList", 0x18)
sub_140b6c580(&data_143f3f020, &var_58, &var_1e8, &var_68)
PWSTR rcx_7 = var_1e8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* var_c8 = nullptr
int32_t var_c0 = 0
sub_140a2ccb0(&var_68, &var_c8, U",", 1)
int64_t* rdi_1 = var_c8
int64_t rbx_1 = sx.q(var_c0)
void* r14_2 = &rdi_1[rbx_1 * 2]
void* arg_10 = r14_2

if (rdi_1 != r14_2)
    do
        int32_t rbx_2 = rdi_1[1].d
        int64_t rsi_1 = *rdi_1
        int64_t var_88 = 0
        int32_t var_80_1 = rbx_2
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_88, rbx_2, 0)
            memcpy(var_88, rsi_1, rbx_2 * 2)
        else
            int32_t var_7c_1 = 0
        
        sub_142006bd0(arg1, &var_1e8, &var_88)
        var_1d8 = 0
        var_1d0.q = 0
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        int64_t var_a8 = 0
        int32_t var_a0_1 = 0
        int16_t* var_168 = nullptr
        int32_t var_160_1 = 0
        
        if (sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f130, &var_1d8) == 0)
            sub_142001640(arg1, &var_1e8)
        else if (sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f190, &var_98) == 0)
            sub_142001640(arg1, &var_1e8)
        else if (sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f1a0, &var_a8) == 0)
            sub_142001640(arg1, &var_1e8)
        else if (sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f1e0, &var_168) == 0)
            sub_142001640(arg1, &var_1e8)
        else
            int16_t* _String_1 = nullptr
            int32_t var_b0_1 = 0
            
            if (sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f180, &_String_1) == 0)
            label_141ffc234:
                int16_t* rsi_2 = var_168
                int16_t* var_d8 = nullptr
                
                if (var_160_1 != 0)
                    sub_1405a4c70(&var_d8, var_160_1, 0)
                    memcpy(var_d8, rsi_2, var_160_1 * 2)
                else
                    int32_t var_cc_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f1f0, &var_d8)
                int32_t rbx_5 = data_143f3f258
                int64_t rsi_3 = data_143f3f250
                int16_t* var_e8 = nullptr
                
                if (rbx_5 != 0)
                    sub_1405a4c70(&var_e8, rbx_5, 0)
                    memcpy(var_e8, rsi_3, rbx_5 * 2)
                else
                    int32_t var_dc_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f100, &var_e8)
                int32_t rbx_6 = data_143f3f278
                int64_t rsi_4 = data_143f3f270
                int64_t var_f8 = 0
                
                if (rbx_6 != 0)
                    sub_1405a4c70(&var_f8, rbx_6, 0)
                    memcpy(var_f8, rsi_4, rbx_6 * 2)
                else
                    int32_t var_ec_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f110, &var_f8)
                int32_t rbx_7 = data_143f3f238
                int64_t rsi_5 = data_143f3f230
                int16_t* var_108 = nullptr
                
                if (rbx_7 != 0)
                    sub_1405a4c70(&var_108, rbx_7, 0)
                    memcpy(var_108, rsi_5, rbx_7 * 2)
                else
                    int32_t var_fc_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f150, &var_108)
                int32_t rbx_8 = data_143f3f238
                int64_t rsi_6 = data_143f3f230
                int16_t* var_118 = nullptr
                
                if (rbx_8 != 0)
                    sub_1405a4c70(&var_118, rbx_8, 0)
                    memcpy(var_118, rsi_6, rbx_8 * 2)
                else
                    int32_t var_10c_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f160, &var_118)
                int32_t rbx_9 = data_143f3f018
                int64_t rsi_7 = data_143f3f010
                int64_t var_128 = 0
                
                if (rbx_9 != 0)
                    sub_1405a4c70(&var_128, rbx_9, 0)
                    memcpy(var_128, rsi_7, rbx_9 * 2)
                else
                    int32_t var_11c_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f200, &var_128)
                int32_t rbx_10 = data_143f3f238
                int64_t rsi_8 = data_143f3f230
                int16_t* var_138 = nullptr
                
                if (rbx_10 != 0)
                    sub_1405a4c70(&var_138, rbx_10, 0)
                    memcpy(var_138, rsi_8, rbx_10 * 2)
                else
                    int32_t var_12c_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f210, &var_138)
                int32_t rbx_11 = data_143f3f238
                int64_t rsi_9 = data_143f3f230
                int16_t* var_148 = nullptr
                
                if (rbx_11 != 0)
                    sub_1405a4c70(&var_148, rbx_11, 0)
                    memcpy(var_148, rsi_9, rbx_11 * 2)
                else
                    int32_t var_13c_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f140, &var_148)
                int32_t rbx_12 = data_143f3f238
                int64_t rsi_10 = data_143f3f230
                int16_t* var_158 = nullptr
                
                if (rbx_12 != 0)
                    sub_1405a4c70(&var_158, rbx_12, 0)
                    memcpy(var_158, rsi_10, rbx_12 * 2)
                else
                    int32_t var_14c_1 = 0
                
                sub_140b6c580(&data_143f3f020, &var_1e8, &data_143f3f170, &var_158)
                int64_t var_1c8 = 0
                int64_t var_1c0_1 = 0
                int32_t rbx_13 = 0
                int64_t var_1b0
                __builtin_memset(&var_1b0, 0, 0x20)
                int32_t r14_3 = 0
                int64_t var_180 = 0
                int64_t var_178_1 = 0
                int64_t var_1a8_1
                int32_t var_194_1
                
                if (&var_1c8 != rdi_1)
                    int32_t rsi_11 = rdi_1[1].d
                    int64_t r15_1 = *rdi_1
                    var_1c0_1.d = rsi_11
                    
                    if (rsi_11 != 0)
                        sub_1405a4c70(&var_1c8, rsi_11, 0)
                        memcpy(var_1c8, r15_1, rsi_11 * 2)
                        rbx_13 = var_194_1
                        r14_3 = var_1a8_1:4.d
                
                int16_t* const rdx_45 = &data_142d40450
                int16_t* const rcx_35 = &data_142d40450
                
                if (data_143f3f258 != 0)
                    rdx_45 = data_143f3f250
                
                if (rbx_5 != 0)
                    rcx_35 = var_e8
                
                int32_t rax_9 = sub_140a54510(rcx_35, rdx_45)
                int64_t r15_2 = var_f8
                var_1a8_1.d = rbx_6
                int32_t rcx_36
                rcx_36.b = rax_9 != 0
                
                if (rbx_6 != 0 || r14_3 != 0)
                    sub_1405a4c70(&var_1b0, rbx_6, r14_3)
                    memcpy(var_1b0, r15_2, rbx_6 * 2)
                    rbx_13 = var_194_1
                else
                    var_1a8_1:4.d = 0
                
                int64_t r14_4 = var_98
                int32_t var_198_1 = var_90_1
                int64_t var_1a0
                
                if (var_90_1 != 0 || rbx_13 != 0)
                    sub_1405a4c70(&var_1a0, var_90_1, rbx_13)
                    memcpy(var_1a0, r14_4, var_90_1 * 2)
                else
                    int32_t var_194_2 = 0
                
                int16_t* rbx_14 = nullptr
                int64_t r14_5 = var_a8
                uint64_t var_78 = 0
                
                if (var_a0_1 != 0)
                    sub_1405a4c70(&var_78, var_a0_1, 0)
                    rbx_14 = var_78
                    memcpy(rbx_14, r14_5, var_a0_1 * 2)
                else
                    int32_t var_6c_1 = 0
                
                int16_t* const rdx_52 = &data_142d40450
                
                if (var_a0_1 != 0)
                    rdx_52 = rbx_14
                
                int64_t arg_18
                int64_t rsi_16
                
                if (sub_141ff2200(&arg_18, rdx_52) == 0)
                    if (rbx_14 != 0)
                        sub_140a74f90(rbx_14)
                    
                    rsi_16 = 0
                else
                    void arg_20
                    int64_t* rax_11 = sub_140b0a2c0(&arg_20, 0x7b2, 1, 1, 0, 0, 0, 0)
                    rsi_16 = arg_18 * 0x989680 + *rax_11
                    
                    if (rbx_14 != 0)
                        sub_140a74f90(rbx_14)
                
                int16_t* rdx_53 = &data_142d40450
                uint64_t rcx_47 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_53 = data_143f3f240
                
                if (var_1d0 != 0)
                    rcx_47 = var_1d8
                
                bool cond:5_1 = sub_140a54510(rcx_47, rdx_53) == 0
                int16_t* const rdx_54 = &data_142d40450
                int16_t* const rcx_48 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_54 = data_143f3f240
                
                if (rbx_11 != 0)
                    rcx_48 = var_148
                
                bool cond:6_1 = sub_140a54510(rcx_48, rdx_54) == 0
                int16_t* const rdx_55 = &data_142d40450
                int16_t* const rcx_49 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_55 = data_143f3f240
                
                if (var_160_1 != 0)
                    rcx_49 = var_168
                
                bool cond:7_1 = sub_140a54510(rcx_49, rdx_55) == 0
                int16_t* const rdx_56 = &data_142d40450
                int16_t* const rcx_50 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_56 = data_143f3f240
                
                if (var_160_1 != 0)
                    rcx_50 = var_d8
                
                bool cond:8_1 = sub_140a54510(rcx_50, rdx_56) == 0
                int16_t* const rdx_57 = &data_142d40450
                int16_t* const rcx_51 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_57 = data_143f3f240
                
                if (rbx_7 != 0)
                    rcx_51 = var_108
                
                bool cond:9_1 = sub_140a54510(rcx_51, rdx_57) == 0
                int16_t* const rdx_58 = &data_142d40450
                int16_t* const rcx_52 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_58 = data_143f3f240
                
                if (rbx_8 != 0)
                    rcx_52 = var_118
                
                bool cond:10_1 = sub_140a54510(rcx_52, rdx_58) == 0
                int64_t rsi_17 = var_128
                var_178_1.d = rbx_9
                
                if (rbx_9 != 0 || 0 != rbx_9)
                    sub_1405a4c70(&var_180, rbx_9, 0)
                    memcpy(var_180, rsi_17, rbx_9 * 2)
                else
                    var_178_1:4.d = 0
                
                int16_t* const rdx_61 = &data_142d40450
                int16_t* const rcx_55 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_61 = data_143f3f240
                
                if (rbx_10 != 0)
                    rcx_55 = var_138
                
                bool cond:12_1 = sub_140a54510(rcx_55, rdx_61) == 0
                int16_t* const rdx_62 = &data_142d40450
                int16_t* const rcx_56 = &data_142d40450
                
                if (data_143f3f248 != 0)
                    rdx_62 = data_143f3f240
                
                if (rbx_12 != 0)
                    rcx_56 = var_158
                
                int32_t rax_19 = sub_140a54510(rcx_56, rdx_62)
                int64_t rbx_16 = sx.q(*(arg1 + 0x88))
                bool var_16f_1 = rax_19 == 0
                int32_t rax_20 = (rbx_16 + 1).d
                *(arg1 + 0x88) = rax_20
                
                if (rax_20 s> *(arg1 + 0x8c))
                    sub_14090a6a0(arg1 + 0x80)
                
                int64_t* rbx_19 = rbx_16 * 0x60 + *(arg1 + 0x80)
                sub_140596d10(rbx_19, &var_1c8)
                rbx_19[2].d = rcx_36
                sub_140596d10(&rbx_19[3], &var_1b0)
                sub_140596d10(&rbx_19[5], &var_1a0)
                rbx_19[7] = rsi_16
                rbx_19[8].b = cond:5_1
                *(rbx_19 + 0x41) = cond:6_1
                *(rbx_19 + 0x42) = cond:7_1
                *(rbx_19 + 0x43) = cond:8_1
                *(rbx_19 + 0x44) = cond:9_1
                *(rbx_19 + 0x45) = cond:10_1
                sub_140596d10(&rbx_19[9], &var_180)
                int64_t rcx_62 = var_180
                rbx_19[0xb].b = cond:12_1
                *(rbx_19 + 0x59) = var_16f_1
                
                if (rcx_62 != 0)
                    sub_140a74f90(rcx_62)
                
                int64_t rcx_63 = var_1a0
                
                if (rcx_63 != 0)
                    sub_140a74f90(rcx_63)
                
                int64_t rcx_64 = var_1b0
                
                if (rcx_64 != 0)
                    sub_140a74f90(rcx_64)
                
                int64_t rcx_65 = var_1c8
                
                if (rcx_65 != 0)
                    sub_140a74f90(rcx_65)
                
                int16_t* rcx_66 = var_158
                
                if (rcx_66 != 0)
                    sub_140a74f90(rcx_66)
                
                int16_t* rcx_67 = var_148
                
                if (rcx_67 != 0)
                    sub_140a74f90(rcx_67)
                
                int16_t* rcx_68 = var_138
                
                if (rcx_68 != 0)
                    sub_140a74f90(rcx_68)
                
                int64_t rcx_69 = var_128
                
                if (rcx_69 != 0)
                    sub_140a74f90(rcx_69)
                
                int16_t* rcx_70 = var_118
                
                if (rcx_70 != 0)
                    sub_140a74f90(rcx_70)
                
                int16_t* rcx_71 = var_108
                
                if (rcx_71 != 0)
                    sub_140a74f90(rcx_71)
                
                int64_t rcx_72 = var_f8
                
                if (rcx_72 != 0)
                    sub_140a74f90(rcx_72)
                
                int16_t* rcx_73 = var_e8
                
                if (rcx_73 != 0)
                    sub_140a74f90(rcx_73)
                
                int16_t* rcx_74 = var_d8
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                int16_t* _String_3 = _String_1
                
                if (_String_3 != 0)
                    sub_140a74f90(_String_3)
                
                r14_2 = arg_10
            else
                int16_t* const _String = &data_142d40450
                
                if (var_b0_1 != 0)
                    _String = _String_1
                
                void* arg_8
                sub_140b71010(&arg_8, _wtoi(_String))
                
                if (arg_8 == 0)
                    goto label_141ffc234
                
                char rax_8 = sub_140b6e7e0(&arg_8)
                sub_140b65ad0(&arg_8)
                
                if (rax_8 == 0)
                    goto label_141ffc234
                
                int16_t* _String_2 = _String_1
                
                if (_String_2 != 0)
                    sub_140a74f90(_String_2)
        
        int16_t* rcx_75 = var_168
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
        
        int64_t rcx_76 = var_a8
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
        
        int64_t rcx_77 = var_98
        
        if (rcx_77 != 0)
            sub_140a74f90(rcx_77)
        
        uint64_t rcx_78 = var_1d8
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
        
        PWSTR rcx_79 = var_1e8
        
        if (rcx_79 != 0)
            sub_140a74f90(rcx_79)
        
        rdi_1 = &rdi_1[2]
    while (rdi_1 != r14_2)
    
    rbx_1 = zx.q(var_c0)
    rdi_1 = var_c8

if (rbx_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_80 = *rdi_1
        
        if (rcx_80 != 0)
            sub_140a74f90(rcx_80)
        
        rdi_1 = &rdi_1[2]
        i = rbx_1.d
        rbx_1 = zx.q(rbx_1.d - 1)
    while (i != 1)
    rdi_1 = var_c8

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t rcx_82 = var_68

if (rcx_82 != 0)
    sub_140a74f90(rcx_82)

int64_t rcx_83 = var_58

if (rcx_83 != 0)
    sub_140a74f90(rcx_83)

return true
