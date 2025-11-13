// 函数: sub_141ca5b90
// 地址: 0x141ca5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140aefc40(data_143ddb400, &data_143de5780)
sub_140af3040(rax, u"AssetRegistry", u"bSerializeAssetRegistry", arg2)
sub_140af3040(rax, u"AssetRegistry", u"bSerializeDependencies", &arg2[1])
sub_140af3040(rax, u"AssetRegistry", u"bSerializeNameDependencies", &arg2[2])
sub_140af3040(rax, u"AssetRegistry", u"bSerializeManageDependencies", &arg2[3])
sub_140af3040(rax, u"AssetRegistry", u"bSerializePackageData", &arg2[4])
sub_140af3040(rax, u"AssetRegistry", u"bUseAssetRegistryTagsWhitelistInsteadOfBlacklist", &arg2[5])
sub_140af3040(rax, u"AssetRegistry", u"bFilterAssetDataWithNoTags", &arg2[6])
sub_140af3040(rax, u"AssetRegistry", u"bFilterDependenciesWithNoTags", &arg2[7])
sub_140af3040(rax, u"AssetRegistry", u"bFilterSearchableNames", &arg2[8])
bool cond:0 = arg2[5] == 0
wchar16 const* const r8 = u"CookedTagsWhitelist"
int64_t* var_f8 = nullptr

if (cond:0)
    r8 = u"CookedTagsBlacklist"

int32_t var_f0 = 0
sub_140af2e70(rax, u"AssetRegistry", r8, &var_f8)
int64_t* var_1a0 = nullptr
int64_t var_198 = 0
sub_140af2e70(rax, u"AssetRegistry", u"CookedTagsAsFName", &var_1a0)
int64_t* var_190 = nullptr
int32_t i_9 = 0
sub_140af2e70(rax, u"AssetRegistry", u"CookedTagsAsPathName", &var_190)
int64_t* var_180 = nullptr
int32_t i_10 = 0
sub_140af2e70(rax, u"AssetRegistry", u"CookedTagsAsLocText", &var_180)
int32_t i_5 = i_10
int64_t* rbx = var_180

if (i_5 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rbx
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rbx = &rbx[2]
        i = i_5
        i_5 -= 1
    while (i != 1)
    rbx = var_180

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_6 = i_9
int64_t* rbx_1 = var_190

if (i_6 != 0)
    int32_t i_1
    
    do
        int64_t rcx_16 = *rbx_1
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    rbx_1 = var_190

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_7 = var_198.d
int64_t* rbx_2 = var_1a0

if (i_7 != 0)
    int32_t i_2
    
    do
        int64_t rcx_18 = *rbx_2
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
    rbx_2 = var_1a0

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t* rdi_1 = var_f8
int64_t rbx_3 = sx.q(var_f0)
int64_t* var_c0 = rdi_1
void* result = &rdi_1[rbx_3 * 2]
void* result_3 = result

if (rdi_1 != result)
    do
        int32_t rbx_4 = rdi_1[1].d
        int64_t rdi_2 = *rdi_1
        int16_t* var_1b0 = nullptr
        int32_t var_1a8_1 = rbx_4
        
        if (rbx_4 != 0)
            sub_1405a4c70(&var_1b0, rbx_4, 0)
            memcpy(var_1b0, rdi_2, rbx_4 * 2)
        else
            int32_t var_1a4_1 = 0
        
        _DeleteExceptionPtr(&var_1b0)
        int32_t rbx_6
        int16_t* r14_1
        
        if (var_1a8_1 == 0)
            r14_1 = &data_142d40450
            rbx_6 = 0
        else
            r14_1 = var_1b0
            rbx_6 = var_1a8_1 - 1
        
        int16_t* var_108 = nullptr
        int32_t rdx_2 = 0
        int32_t rax_3 = 0
        
        if (rbx_6 s> 1)
            rbx_6 = 1
        
        int32_t var_100_1 = 0
        int32_t var_fc_1 = 0
        int16_t* rdi_3 = nullptr
        int16_t* const rcx_27
        int32_t rsi_2
        
        if (r14_1 != 0 && *r14_1 != 0 && rbx_6 s> 0)
            if (rbx_6 + 1 s> 0)
                sub_1405947f0(&var_108, rbx_6 + 1)
                rax_3 = var_fc_1
                rdx_2 = var_100_1
                rdi_3 = var_108
            
            rsi_2 = rbx_6 + 1 + rdx_2
            
            if (rsi_2 s> rax_3)
                sub_140594770(&var_108)
                rdi_3 = var_108
            
            UnDecorator::getReferenceType(rdi_3, r14_1, rbx_6 * 2)
            rcx_27 = rdi_3
            rdi_3[sx.q(rsi_2) - 1] = 0
        
        if (r14_1 == 0 || *r14_1 == 0 || rbx_6 s<= 0 || rsi_2 == 0)
            rcx_27 = &data_142d40450
        
        rbx_6.b = sub_140a54510(rcx_27, &data_142dc30a4) == 0
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        int32_t rax_7 = var_1a8_1
        
        if (rbx_6.b != 0)
            rbx_6 = rax_7 - 1
            
            if (rax_7 == 0)
                rbx_6 = 0
            
            if (rbx_6 s> 1)
                rbx_6 = 1
            
            if (rbx_6 != 0)
                if (rax_7 != rbx_6)
                    int16_t* rcx_31 = var_1b0
                    memmove(rcx_31, &rcx_31[sx.q(rbx_6)], (rax_7 - rbx_6) * 2)
                    rax_7 = var_1a8_1
                
                rax_7 -= rbx_6
                var_1a8_1 = rax_7
        
        int32_t rcx_32
        int16_t* rdx_6
        
        if (rax_7 == 0)
            rcx_32 = 0
            rdx_6 = &data_142d40450
        else
            rdx_6 = var_1b0
            rcx_32 = rax_7 - 1
        
        var_1a0 = nullptr
        int32_t rax_8 = rcx_32
        int64_t* rsi_3 = nullptr
        
        if (rcx_32 s> 1)
            rax_8 = 1
        
        int32_t rax_10 = 0
        var_198:4.d = 0
        void* rdi_4 = &rdx_6[sx.q(rcx_32) - sx.q(rax_8)]
        int32_t rdx_7 = 0
        var_198.d = 0
        int64_t* rcx_38
        int32_t r14_2
        
        if (rdi_4 != 0 && *rdi_4 != 0)
            int64_t rbx_7 = -1
            
            do
                rbx_7 += 1
            while (*(rdi_4 + (rbx_7 << 1)) != 0)
            
            if (rbx_7.d + 1 s> 0)
                sub_1405947f0(&var_1a0, rbx_7.d + 1)
                rax_10 = var_198:4.d
                rdx_7 = var_198.d
                rsi_3 = var_1a0
            
            r14_2 = rdx_7 + rbx_7.d + 1
            var_198.d = r14_2
            
            if (r14_2 s> rax_10)
                sub_140594770(&var_1a0)
                r14_2 = var_198.d
                rsi_3 = var_1a0
            
            UnDecorator::getReferenceType(rsi_3, rdi_4, (rbx_7.d + 1) * 2)
            rcx_38 = rsi_3
        
        if (rdi_4 == 0 || *rdi_4 == 0 || r14_2 == 0)
            rcx_38 = &data_142d40450
        
        rbx_6.b = sub_140a54510(rcx_38, &data_142da76f4) == 0
        
        if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
        
        if (rbx_6.b != 0)
            int32_t rax_12 = var_1a8_1
            int32_t r10_1 = rax_12 - 1
            
            if (rax_12 == 0)
                r10_1 = 0
            
            if (r10_1 - 1 s< 0)
                r10_1 = 0
            else if (r10_1 - 1 s< r10_1)
                r10_1 -= 1
            
            int32_t rbx_8 = rax_12 - 1
            
            if (rax_12 == 0)
                rbx_8 = 0
            
            int32_t rbx_9 = rbx_8 - r10_1
            
            if (rbx_9 s> 1)
                rbx_9 = 1
            
            if (rbx_9 != 0)
                int32_t rcx_42 = rax_12 - rbx_9
                
                if (rcx_42 != r10_1)
                    int16_t* r9_14 = var_1b0
                    memmove(&r9_14[sx.q(r10_1)], &r9_14[sx.q(rbx_9 + r10_1)], (rcx_42 - r10_1) * 2)
                    rax_12 = var_1a8_1
                
                int32_t var_1a8_2 = rax_12 - rbx_9
        
        var_180 = nullptr
        int32_t i_11 = 0
        sub_140a2ccb0(&var_1b0, &var_180, U",", 1)
        int64_t* rbx_10 = var_180
        int32_t rdi_5 = 0
        result = &rbx_10[sx.q(i_11) * 2]
        uint64_t var_138 = 0
        int32_t arg_20 = 0
        int32_t var_12c_1 = 0
        uint64_t var_148 = 0
        int32_t var_170_1 = 0
        int32_t r15_1 = 0
        int32_t var_13c_1 = 0
        void* result_1 = result
        
        if (rbx_10 != result)
            void* r14_3 = &rbx_10[1]
            void* var_e0_1 = r14_3
            uint64_t r12_3
            int16_t* r13_2
            
            do
                int16_t* var_118 = nullptr
                int32_t var_110_1 = 0
                uint64_t var_128 = 0
                int32_t var_120_1 = 0
                var_190 = nullptr
                int32_t var_188 = 0
                sub_1405947f0(&var_190, 2)
                int32_t rsi_4 = var_188 + 2
                
                if (rsi_4 s> 0)
                    sub_140594770(&var_190)
                
                int64_t* r12_1 = var_190
                UnDecorator::getReferenceType(r12_1, &data_142e1462c, 4)
                int64_t* rdx_13 = &data_142d40450
                
                if (rsi_4 != 0)
                    rdx_13 = r12_1
                
                int32_t rax_18 = sub_140a23cf0(r14_3 - 8, rdx_13, 1, 0, 0xffffffff)
                int64_t* rbx_11
                
                if (rax_18 s>= 0)
                    int32_t rdi_6 = *r14_3
                    int16_t* r12_2
                    
                    if (rdi_6 == 0)
                        r12_2 = &data_142d40450
                    else
                        r12_2 = *(r14_3 - 8)
                    
                    int32_t rdi_7
                    
                    if (rdi_6 == 0)
                        rdi_7 = 0
                    else
                        rdi_7 = rdi_6 - 1
                    
                    int16_t* var_168 = nullptr
                    int16_t* r14_4 = nullptr
                    int64_t var_160_1 = 0
                    
                    if (rax_18 s< rdi_7)
                        rdi_7 = rax_18
                    
                    int32_t rbx_12 = 0
                    int32_t r15_2 = 0
                    
                    if (r12_2 != 0 && *r12_2 != 0 && rdi_7 s> 0)
                        if (rdi_7 + 1 s> 0)
                            sub_1405947f0(&var_168, rdi_7 + 1)
                            r15_2 = var_160_1:4.d
                            rbx_12 = var_160_1.d
                            r14_4 = var_168
                        
                        rbx_12 += rdi_7 + 1
                        var_160_1.d = rbx_12
                        
                        if (rbx_12 s> r15_2)
                            sub_140594770(&var_168)
                            r15_2 = var_160_1:4.d
                            rbx_12 = var_160_1.d
                            r14_4 = var_168
                        
                        UnDecorator::getReferenceType(r14_4, r12_2, rdi_7 * 2)
                        r14_4[sx.q(rbx_12) - 1] = 0
                    
                    int16_t* rcx_54 = var_118
                    
                    if (rcx_54 != 0)
                        sub_140a74f90(rcx_54)
                    
                    var_118 = r14_4
                    var_168 = nullptr
                    var_110_1 = rbx_12
                    var_110_1 = r15_2
                    int64_t var_160_2 = 0
                    int32_t rsi_5
                    
                    if (rsi_4 == 0)
                        rsi_5 = 0
                    else
                        rsi_5 = rsi_4 - 1
                    
                    int32_t rcx_55 = rsi_5 + rax_18
                    int32_t rdx_17 = *var_e0_1
                    int32_t rbx_14 = rdx_17 - 1
                    
                    if (rdx_17 == 0)
                        rbx_14 = 0
                    
                    int32_t rax_21
                    
                    if (rcx_55 s>= 0)
                        rax_21 = rbx_14
                        
                        if (rcx_55 s< rbx_14)
                            rax_21 = rcx_55
                    else
                        rax_21 = 0
                    
                    int64_t r8_13 = sx.q(rax_21)
                    
                    if (sx.q(rcx_55) + 0x7fffffff s< r8_13)
                        rbx_14 = rax_21
                    else if (sx.q(rcx_55) + 0x7fffffff s< sx.q(rbx_14))
                        rbx_14 = rcx_55 + 0x7fffffff
                    
                    int16_t* const rcx_59
                    
                    if (rdx_17 == 0)
                        rcx_59 = &data_142d40450
                    else
                        rcx_59 = *(r14_3 - 8)
                    
                    int16_t* r15_3 = &rcx_59[r8_13]
                    uint64_t var_158 = 0
                    rbx_11 = zx.q(rbx_14 - rax_21)
                    int64_t var_150_1 = 0
                    uint64_t rsi_6 = 0
                    int32_t rdi_8 = 0
                    int32_t r14_5 = 0
                    
                    if (r15_3 != 0 && *r15_3 != 0 && rbx_11.d s> 0)
                        int32_t rdx_18 = (rbx_11 + 1).d
                        
                        if (rdx_18 s> 0)
                            sub_1405947f0(&var_158, rdx_18)
                            r14_5 = var_150_1:4.d
                            rdi_8 = var_150_1.d
                            rsi_6 = var_158
                        
                        rdi_8 += (rbx_11 + 1).d
                        var_150_1.d = rdi_8
                        
                        if (rdi_8 s> r14_5)
                            sub_140594770(&var_158)
                            r14_5 = var_150_1:4.d
                            rdi_8 = var_150_1.d
                            rsi_6 = var_158
                        
                        UnDecorator::getReferenceType(rsi_6, r15_3, rbx_11.d * 2)
                        *(rsi_6 + (sx.q(rdi_8) << 1) - 2) = 0
                    
                    uint64_t rcx_63 = var_128
                    var_158 = 0
                    int64_t var_150_2 = 0
                    
                    if (rcx_63 != 0)
                        sub_140a74f90(rcx_63)
                    
                    r15_1 = var_170_1
                    rbx_11.b = 1
                    r12_1 = var_190
                    var_120_1 = rdi_8
                    rdi_5 = arg_20
                    var_120_1 = r14_5
                    r14_3 = var_e0_1
                    var_128 = rsi_6
                else
                    rbx_11.b = 0
                
                if (r12_1 != 0)
                    sub_140a74f90(r12_1)
                
                if (rbx_11.b == 0)
                    r13_2 = var_138
                    r12_3 = var_148
                else
                    _DeleteExceptionPtr(&var_118)
                    _DeleteExceptionPtr(&var_128)
                    int16_t* const rcx_67 = &data_142d40450
                    
                    if (var_110_1 != 0)
                        rcx_67 = var_118
                    
                    if (sub_140a54510(rcx_67, u"Class") != 0)
                        int16_t* rcx_79 = &data_142d40450
                        
                        if (var_110_1 != 0)
                            rcx_79 = var_118
                        
                        if (sub_140a54510(rcx_79, &data_143211100) != 0)
                            r13_2 = var_138
                            r12_3 = var_148
                        else
                            r15_1 = var_120_1
                            uint64_t rbx_17 = var_128
                            var_170_1 = r15_1
                            
                            if (r15_1 != 0 || var_13c_1 != 0)
                                sub_1405a4c70(&var_148, r15_1, var_13c_1)
                                r12_3 = var_148
                                memcpy(r12_3, rbx_17, r15_1 * 2)
                                r13_2 = var_138
                                var_170_1 = r15_1
                            else
                                r13_2 = var_138
                                r12_3 = var_148
                    else
                        rdi_5 = var_120_1
                        uint64_t rbx_15 = var_128
                        arg_20 = rdi_5
                        
                        if (rdi_5 != 0 || var_12c_1 != 0)
                            sub_1405a4c70(&var_138, rdi_5, var_12c_1)
                            r13_2 = var_138
                            memcpy(r13_2, rbx_15, rdi_5 * 2)
                            arg_20 = rdi_5
                            r12_3 = var_148
                        else
                            r13_2 = var_138
                            r12_3 = var_148
                
                uint64_t rcx_68 = var_128
                
                if (rcx_68 != 0)
                    sub_140a74f90(rcx_68)
                
                int16_t* rcx_69 = var_118
                
                if (rcx_69 != 0)
                    sub_140a74f90(rcx_69)
                
                r14_3 += 0x10
                var_e0_1 = r14_3
                result = r14_3 - 8
            while (result != result_1)
            
            if (rdi_5 s> 1 && r15_1 s> 1)
                uint64_t rdx_21 = &data_142d40450
                
                if (r15_1 != 0)
                    rdx_21 = r12_3
                
                int64_t var_d8
                sub_140b58260(&var_d8, rdx_21, 1)
                int16_t* rbx_16 = &data_142d40450
                
                if (rdi_5 != 0)
                    rbx_16 = r13_2
                
                void* rax_25 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rbx_16, 0)
                void* rax_26
                void* rcx_72
                int64_t rdx_22
                
                if (rax_25 != 0)
                    rax_26 = sub_140bdf2e0()
                    rcx_72 = *(rax_25 + 0x10)
                    rdx_22 = sx.q(*(rax_26 + 0x38))
                
                if (rax_25 == 0 || rdx_22.d s> *(rcx_72 + 0x38)
                        || *(*(rcx_72 + 0x30) + (rdx_22 << 3)) != rax_26 + 0x30)
                    int16_t* rdx_51 = &data_142d40450
                    
                    if (rdi_5 != 0)
                        rdx_51 = r13_2
                    
                    void var_48
                    int64_t* rax_48 = sub_140b58260(&var_48, rdx_51, 1)
                    int64_t rbx_24 = *rax_48
                    int32_t rdi_17 = (rbx_24 u>> 0x20).d + sub_140b5ead0(rbx_24.d)
                    int64_t* rax_50 = sub_141c90430(&arg2[0x10], rdi_17, rax_48)
                    void* rsi_14
                    
                    if (rax_50 == 0)
                        rsi_14 = sub_141c903a0(&arg2[0x10], rdi_17, rax_48)
                    else
                        rsi_14 = &rax_50[1]
                    
                    int32_t var_58
                    sub_14090a150(rsi_14, &var_58)
                    int64_t rcx_111 = var_d8
                    int64_t* var_50
                    *var_50 = rcx_111
                    var_50[1].d = 0xffffffff
                    void var_b0
                    result = sub_1407ec830(rsi_14, &var_b0, 
                        (rcx_111 u>> 0x20).d + sub_140b5ead0(rcx_111.d), var_50, var_58, nullptr)
                else
                    void* result_4 = *(rax_25 + 0x18)
                    arg_20.q = result_4
                    result_1 = result_4
                    int32_t rdi_11 = sub_140b5ead0(result_4.d) + result_1:4.d
                    int64_t* rsi_9
                    
                    if (*(arg2 + 0x18) == *(arg2 + 0x44))
                    label_141ca6689:
                        result_1 = &arg_20
                        int32_t var_98
                        sub_1413ce8c0(&arg2[0x10], &var_98)
                        int64_t* var_90
                        sub_141c8ec70(&result_1, var_90)
                        var_90[0xb].d = 0xffffffff
                        int32_t var_e8
                        sub_141c9baf0(&arg2[0x10], &var_e8, rdi_11, var_90, var_98, nullptr)
                        rsi_9 = sx.q(var_e8) * 0x60 + *(arg2 + 0x10)
                    else
                        void* rcx_75 = *(arg2 + 0x50)
                        void* r8_18 = &arg2[0x48]
                        
                        if (rcx_75 != 0)
                            r8_18 = rcx_75
                        
                        int32_t rax_31 =
                            *(r8_18 + (((sx.q(*(arg2 + 0x58)) - 1) & sx.q(rdi_11)) << 2))
                        
                        if (rax_31 == 0xffffffff)
                            goto label_141ca6689
                        
                        while (true)
                            rsi_9 = sx.q(rax_31) * 0x60 + *(arg2 + 0x10)
                            
                            if (*rsi_9 == arg_20.q)
                                break
                            
                            rax_31 = rsi_9[0xb].d
                            
                            if (rax_31 == 0xffffffff)
                                goto label_141ca6689
                        
                        if (rax_31 == 0xffffffff || rsi_9 == 0)
                            goto label_141ca6689
                    
                    int32_t var_88
                    sub_14090a150(&rsi_9[1], &var_88)
                    int64_t rax_35 = var_d8
                    int64_t* var_80
                    *var_80 = rax_35
                    var_80[1].d = 0xffffffff
                    void var_b8
                    sub_1407ec830(&rsi_9[1], &var_b8, 
                        (rax_35 u>> 0x20).d + sub_140b5ead0(rax_35.d), var_80, var_88, nullptr)
                    void** var_d0 = nullptr
                    int32_t result_2 = 0
                    sub_140d3c7c0(rax_25, &var_d0, 1)
                    void** r15_5 = var_d0
                    result = sx.q(result_2)
                    void* r12_4 = &r15_5[result]
                    
                    if (r15_5 != r12_4)
                        do
                            void* result_5 = *(*r15_5 + 0x18)
                            arg_20.q = result_5
                            result_1 = result_5
                            int32_t rdi_14 = sub_140b5ead0(result_5.d) + result_1:4.d
                            int64_t* rdx_43
                            
                            if (*(arg2 + 0x18) == *(arg2 + 0x44))
                            label_141ca67f5:
                                result_1 = &arg_20
                                int32_t var_78
                                sub_1413ce8c0(&arg2[0x10], &var_78)
                                int64_t* var_70
                                sub_141c8ec70(&result_1, var_70)
                                var_70[0xb].d = 0xffffffff
                                int32_t var_e4
                                sub_141c9baf0(&arg2[0x10], &var_e4, rdi_14, var_70, var_78, nullptr)
                                rdx_43 = sx.q(var_e4) * 0x60 + *(arg2 + 0x10)
                            else
                                void* rcx_90 = *(arg2 + 0x50)
                                void* r8_27 = &arg2[0x48]
                                
                                if (rcx_90 != 0)
                                    r8_27 = rcx_90
                                
                                int32_t rax_42 =
                                    *(r8_27 + (((sx.q(*(arg2 + 0x58)) - 1) & sx.q(rdi_14)) << 2))
                                
                                if (rax_42 == 0xffffffff)
                                    goto label_141ca67f5
                                
                                while (true)
                                    rdx_43 = sx.q(rax_42) * 0x60 + *(arg2 + 0x10)
                                    
                                    if (*rdx_43 == arg_20.q)
                                        break
                                    
                                    rax_42 = rdx_43[0xb].d
                                    
                                    if (rax_42 == 0xffffffff)
                                        goto label_141ca67f5
                                
                                if (rax_42 == 0xffffffff || rdx_43 == 0)
                                    goto label_141ca67f5
                            
                            int32_t var_68
                            sub_14090a150(&rdx_43[1], &var_68)
                            int64_t rax_45 = var_d8
                            int64_t* var_60
                            *var_60 = rax_45
                            var_60[1].d = 0xffffffff
                            void var_b4
                            result = sub_1407ec830(&rdx_43[1], &var_b4, 
                                (rax_45 u>> 0x20).d + sub_140b5ead0(rax_45.d), var_60, var_68, 
                                nullptr)
                            r15_5 = &r15_5[1]
                        while (r15_5 != r12_4)
                        
                        r15_5 = var_d0
                    
                    if (r15_5 != 0)
                        result = sub_140a74f90(r15_5)
            
            uint64_t rcx_99 = var_148
            
            if (rcx_99 != 0)
                result = sub_140a74f90(rcx_99)
            
            if (r13_2 != 0)
                result = sub_140a74f90(r13_2)
            
            rbx_10 = var_180
        
        int32_t i_8 = i_11
        
        if (i_8 != 0)
            int32_t i_3
            
            do
                int64_t rcx_101 = *rbx_10
                
                if (rcx_101 != 0)
                    result = sub_140a74f90(rcx_101)
                
                rbx_10 = &rbx_10[2]
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
            rbx_10 = var_180
        
        if (rbx_10 != 0)
            result = sub_140a74f90(rbx_10)
        
        int16_t* rcx_103 = var_1b0
        
        if (rcx_103 != 0)
            result = sub_140a74f90(rcx_103)
        
        rdi_1 = &var_c0[2]
        var_c0 = rdi_1
    while (rdi_1 != result_3)
    
    rbx_3 = zx.q(var_f0)
    rdi_1 = var_f8

if (rbx_3.d != 0)
    int32_t i_4
    
    do
        int64_t rcx_104 = *rdi_1
        
        if (rcx_104 != 0)
            result = sub_140a74f90(rcx_104)
        
        rdi_1 = &rdi_1[2]
        i_4 = rbx_3.d
        rbx_3 = zx.q(rbx_3.d - 1)
    while (i_4 != 1)
    rdi_1 = var_f8

if (rdi_1 == 0)
    return result

return sub_140a74f90(rdi_1)
