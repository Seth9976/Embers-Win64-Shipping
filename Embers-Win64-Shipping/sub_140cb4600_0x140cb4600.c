// 函数: sub_140cb4600
// 地址: 0x140cb4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
int64_t rdi = sx.q(arg2)
int32_t var_4f4 = rdi.d
int64_t result = 0
char var_4f8
char* var_3e8 = &var_4f8
int32_t var_4d8 = 0
var_4f8 = 0
void*** (* var_3f0)() = sub_140884c50
void* rax_3 = *(sub_140a756e0(&var_3f0, &data_14397f5f0) + 0x48)
int64_t rcx_1 = *(rax_3 + 0xa8)
int32_t rcx_2 = *(rax_3 + 0xa0)
*(rax_3 + 0xa8) = arg1
*(rax_3 + 0xa0) = rdi.d
void var_458
sub_140bbf860(&var_458, &data_143e1b1d0)
int64_t rbx_1 = rdi << 7
int64_t* r14_1 = *(arg1 + 0x18) + rbx_1

if (r14_1[8] != 0)
label_140cb577b:
    
    if (*(r14_1 + 0x51) == 0)
        result = r14_1[8]
else if (*(r14_1 + 0x51) == 0)
    if (*(r14_1 + 0x53) != 0 || (*(arg1 + 0x1f0) != 0 && *(r14_1 + 0x4e) != 0))
        goto label_140cb577b
    
    if (*(arg1 + 0x1f1) == 0)
        if (r14_1[2].d == 0)
            goto label_140cb577b
        
        goto label_140cb4704
    
    if (*(r14_1 + 0x4d) != 0 || r14_1[2].d == 0)
        goto label_140cb577b
    
label_140cb4704:
    char var_4f7 = 0
    char* var_3d8_1 = &var_4f7
    void*** (* var_3e0)() = sub_140884c50
    void* rax_4
    int512_t zmm0_1
    int512_t zmm1_1
    rax_4, zmm0_1, zmm1_1 = sub_140a756e0(&var_3e0, &data_14397f5f0)
    void* r12_1 = *(rax_4 + 0x48)
    
    if (*(r14_1 + 0x52) != 1)
        void* rbx_3 = rbx_1 + *(arg1 + 0x18)
        int32_t rdx_6 = *(rbx_3 + 0xc)
        
        if (rdx_6 s< 0 && (*(arg1 + 0x290) & 0x100000) == 0)
            arg3 = sub_140cd0ad0(arg1, not.d(rdx_6), zmm0_1, zmm1_1)
        
        int64_t* rax_11
        double zmm2[0x2]
        rax_11, zmm2 = sub_140cc12f0(arg1, *(rbx_3 + 0xc), arg3)
        int64_t* r12_2 = rax_11
        int64_t* rbx_4
        
        if (rax_11 == 0 && *(r14_1 + 0xc) != 0)
            int32_t r8_4 = r14_1[1].d
            *(r14_1 + 0x51) = 1
            int64_t var_478
            int64_t var_3b0
            int64_t* rax_12
            int32_t rdi_1
            
            if (r8_4 != 0)
                rdi_1 = 2
                
                if (r8_4 s< 0)
                    sub_140cbc5d0(arg1, &var_478, not.d(r8_4))
                else if (r8_4 s<= 0)
                    var_478 = 0
                    int64_t var_470_1 = 0
                else
                    sub_140cbb960(arg1, &var_478, r8_4 - 1, 0, 0)
                
                rax_12 = &var_478
            else
                rdi_1 = (rax_11 + 1).d
                rax_12 = sub_140d21830(*(arg1 + 0xa0), &var_3b0, 0, 0)
            
            rbx_4 = *rax_12
            *rax_12 = 0
            rax_12[1] = 0
            
            if ((rdi_1.b & 2) != 0)
                int64_t rcx_16 = var_478
                rdi_1 &= 0xfffffffd
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
            
            if ((rdi_1.b & 1) != 0)
                int64_t rcx_17 = var_3b0
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
            
            goto label_140cb48e9
        
        if (*(r14_1 + 0x52) != 2)
            if (r12_2 != 0)
            label_140cb4955:
                void* rax_15 = sub_140cdddf0()
                void* rdx_12 = r12_2[2]
                int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                
                if (rax_16.d s> *(rdx_12 + 0x38)
                        || *(*(rdx_12 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                    goto label_140cb4a40
                
                int32_t r8_8 = r14_1[1].d
                *(r14_1 + 0x51) = 1
                int64_t var_468
                int64_t var_3a0
                int64_t* rax_18
                int32_t r13_1
                
                if (r8_8 != 0)
                    r13_1 = 8
                    
                    if (r8_8 s< 0)
                        sub_140cbc5d0(arg1, &var_468, not.d(r8_8))
                    else if (r8_8 s<= 0)
                        var_468 = 0
                        int64_t var_460_1 = 0
                    else
                        sub_140cbb960(arg1, &var_468, r8_8 - 1, 0, 0)
                    
                    rax_18 = &var_468
                else
                    r13_1 = r8_8 + 4
                    rax_18 = sub_140d21830(*(arg1 + 0xa0), &var_3a0, 0, 0)
                
                int64_t rbx_5 = *rax_18
                *rax_18 = 0
                rax_18[1] = 0
                
                if ((r13_1.b & 8) != 0)
                    int64_t rcx_24 = var_468
                    r13_1 &= 0xfffffff7
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                
                if ((r13_1.b & 4) != 0)
                    int64_t rcx_25 = var_3a0
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                
                if (rbx_5 != 0)
                    sub_140a74f90(rbx_5)
            else
                int64_t* rax_14
                rax_14, zmm2 = sub_140bdf2e0()
                r12_2 = rax_14
                
                if (rax_14 != 0)
                    goto label_140cb4955
                
            label_140cb4a40:
                
                if (*(r14_1 + 0x14) == 0)
                label_140cb4bb6:
                    
                    if ((*(r14_1 + 0x1c) & 4) != 0)
                        void* rax_39
                        rax_39, zmm2 = sub_140bdf8f0()
                        int64_t rax_40
                        
                        if (rax_39 != 0)
                            rax_40 = sx.q(*(rax_39 + 0x38))
                        
                        if (rax_39 == 0 || rax_40.d s> r12_2[7].d
                                || *(r12_2[6] + (rax_40 << 3)) != rax_39 + 0x30)
                            *(r14_1 + 0x1c) &= 0xfffffffb
                    
                    void* r13_2 = nullptr
                    void* const var_4e8_1 = nullptr
                    int32_t var_4f0
                    uint64_t var_450
                    
                    if (r14_1[1].d != 0)
                        void* rax_42
                        rax_42, zmm2 = sub_140cc12f0(arg1, r14_1[1].d, zmm2)
                        r13_2 = rax_42
                        var_4e8_1 = rax_42
                    else if (*(r14_1 + 0x4c) == 0)
                        r13_2 = *(arg1 + 0xa0)
                        var_4e8_1 = r13_2
                    else
                        int64_t var_380
                        int64_t* rax_43 = sub_140b63b70(r14_1, &var_380)
                        int16_t* rdx_29
                        
                        if (rax_43[1].d == 0)
                            rdx_29 = &data_142d40450
                        else
                            rdx_29 = *rax_43
                        
                        void* rax_44
                        rax_44, zmm2 = sub_140d1dfb0(nullptr, rdx_29)
                        int64_t rcx_44 = var_380
                        r14_1[8] = rax_44
                        
                        if (rcx_44 != 0)
                            sub_140a74f90(rcx_44)
                        
                        var_450 = arg1
                        *(r12_1 + 8) += 1
                        void* rax_46 = sub_140cdbb20()
                        EnterCriticalSection(rax_46 + 0x148)
                        sub_140ca9be0(rax_46 + 0xf8, &var_4f0, &var_450, nullptr)
                        
                        if (rax_46 != -0x148)
                            LeaveCriticalSection(rax_46 + 0x148)
                        
                        rdi = zx.q(var_4f4)
                    
                    if (((*(r12_2 + 0xcc) u>> 0x1c).b & 1) == 0)
                    label_140cb4cea:
                        
                        if (((r12_2[1].d u>> 0xa).b & 1) != 0)
                            zmm2 = sub_140cc45a0(arg1 + 0x200, r12_2)
                        label_140cb4d65:
                            
                            if (*(r12_2 + 0xcc) s>= 0)
                                goto label_140cb4db9
                            
                            int32_t rax_60 = *(r14_1 + 0xc)
                            
                            if (rax_60 s< 0)
                                *(sx.q(not.d(rax_60)) * 0x38 + *(arg1 + 8) + 0x20) = 0
                            
                            r12_2 = sub_140cc12f0(arg1, *(r14_1 + 0xc), zmm2)
                            goto label_140cb4db9
                        
                        void* rbx_8 = r14_1[8]
                        
                        if (rbx_8 != 0)
                        label_140cb4d3e:
                            void* rax_57 = sub_140cddbd0()
                            void* rdx_34 = *(rbx_8 + 0x10)
                            int64_t rax_58 = sx.q(*(rax_57 + 0x38))
                            
                            if (rax_58.d s> *(rdx_34 + 0x38)
                                    || *(*(rdx_34 + 0x30) + (rax_58 << 3)) != rax_57 + 0x30)
                                goto label_140cb4d65
                            
                            result = r14_1[8]
                        else
                            if ((not.b((*(r14_1 + 0x1c) u>> 4).b) & 1) == 0)
                                if (rbx_8 == 0)
                                    goto label_140cb4d65
                                
                                goto label_140cb4d3e
                            
                            char rax_56
                            rax_56, zmm2 = sub_140ba0430(arg1, rdi.d, r13_2)
                            
                            if (rax_56 == 0)
                                goto label_140cb4d65
                            
                            result = r14_1[8]
                    else
                        if (r13_2 != 0)
                            void* rax_49 = sub_140cddbd0()
                            void* rdx_31 = *(r13_2 + 0x10)
                            int64_t rax_50 = sx.q(*(rax_49 + 0x38))
                            
                            if (rax_50.d s> *(rdx_31 + 0x38)
                                    || *(*(rdx_31 + 0x30) + (rax_50 << 3)) != rax_49 + 0x30)
                                goto label_140cb4db9
                            
                            goto label_140cb4cea
                        
                    label_140cb4db9:
                        
                        if ((1 & (*(r12_2 + 0xcc) u>> 3).b) != 0 && (*(r14_1 + 0x1c) & 0x30) == 0)
                            int64_t var_1d8
                            __builtin_memset(&var_1d8, 0, 0x2c)
                            int32_t var_1ac_1 = 0x80
                            int32_t var_1a8_1 = 0xffffffff
                            int32_t var_1a4_1 = 0
                            int64_t var_198_1 = 0
                            int32_t var_190_1 = 0
                            void var_310
                            int64_t* rax_67 = sub_140aae420(&var_310, arg1 + 0x1e0)
                            int32_t var_138 = 4
                            int64_t var_128_1 = *rax_67
                            void* rcx_56 = rax_67[1]
                            void* var_120_1 = rcx_56
                            
                            if (rcx_56 != 0)
                                *(rcx_56 + 8) += 1
                            
                            int32_t var_118_1 = rax_67[2].d
                            char var_110_1 = 1
                            int64_t var_4d0 = 0
                            int32_t var_4c8_1 = 0
                            sub_1405947f0(&var_4d0, 0xc)
                            int32_t rax_69 = var_4c8_1 + 0xc
                            var_4c8_1 = rax_69
                            
                            if (rax_69 s> 0)
                                sub_140594770(&var_4d0)
                            
                            UnDecorator::getReferenceType(var_4d0, u"PackageName", 0x18)
                            sub_140acb5e0(&var_1d8, &var_4d0, &var_138)
                            int64_t rcx_61 = var_4d0
                            
                            if (rcx_61 != 0)
                                sub_140a74f90(rcx_61)
                            
                            sub_140597690(&var_138)
                            sub_1405970a0(&var_310)
                            void var_2f8
                            int64_t* rax_70 = sub_140aae2b0(&var_2f8, r14_1)
                            int32_t var_108 = 4
                            int64_t var_f8_1 = *rax_70
                            void* rcx_66 = rax_70[1]
                            void* var_f0_1 = rcx_66
                            
                            if (rcx_66 != 0)
                                *(rcx_66 + 8) += 1
                            
                            int32_t var_e8_1 = rax_70[2].d
                            char var_e0_1 = 1
                            int64_t var_4c0 = 0
                            int32_t var_4b8_1 = 0
                            sub_1405947f0(&var_4c0, 0xb)
                            int32_t rax_72 = var_4b8_1 + 0xb
                            var_4b8_1 = rax_72
                            
                            if (rax_72 s> 0)
                                sub_140594770(&var_4c0)
                            
                            UnDecorator::getReferenceType(var_4c0, u"ObjectName", 0x16)
                            sub_140acb5e0(&var_1d8, &var_4c0, &var_108)
                            int64_t rcx_71 = var_4c0
                            
                            if (rcx_71 != 0)
                                sub_140a74f90(rcx_71)
                            
                            sub_140597690(&var_108)
                            sub_1405970a0(&var_2f8)
                            int64_t var_370
                            void var_2e0
                            int64_t* rax_74 =
                                sub_140aae2f0(&var_2e0, sub_140d21e10(r12_2, &var_370, 0))
                            int32_t var_d8 = 4
                            int64_t var_c8_1 = *rax_74
                            void* rcx_77 = rax_74[1]
                            void* var_c0_1 = rcx_77
                            
                            if (rcx_77 != 0)
                                *(rcx_77 + 8) += 1
                            
                            int32_t var_b8_1 = rax_74[2].d
                            char var_b0_1 = 1
                            int64_t var_4b0 = 0
                            int32_t var_4a8_1 = 0
                            sub_1405947f0(&var_4b0, 0xa)
                            int32_t rax_76 = var_4a8_1 + 0xa
                            var_4a8_1 = rax_76
                            
                            if (rax_76 s> 0)
                                sub_140594770(&var_4b0)
                            
                            UnDecorator::getReferenceType(var_4b0, u"ClassName", 0x14)
                            sub_140acb5e0(&var_1d8, &var_4b0, &var_d8)
                            int64_t rcx_82 = var_4b0
                            
                            if (rcx_82 != 0)
                                sub_140a74f90(rcx_82)
                            
                            sub_140597690(&var_d8)
                            sub_1405970a0(&var_2e0)
                            int64_t rcx_85 = var_370
                            
                            if (rcx_85 != 0)
                                sub_140a74f90(rcx_85)
                            
                            void var_360
                            void var_2c8
                            void var_2b0
                            char* var_208
                            sub_140bd1fe0(&var_458, &var_360, 
                                sub_140aaca20(&var_2c8, 
                                    sub_140a96390(&var_208, 
                                        _vfprintf_p_l(&var_2b0, 
                                            Attempting to load an instance of a transient class from disk - Package:"
                            "'{PackageName}'  Object:'{ObjectName}' ", 
                                        LinkerLoad")), &var_1d8))
                            int64_t* var_358
                            
                            if (var_358 != 0)
                                var_358[1].d -= 1
                                
                                if (var_358[1].d == 1)
                                    (**var_358)(var_358)
                                    int32_t temp5_1 = *(var_358 + 0xc)
                                    *(var_358 + 0xc) -= 1
                                    
                                    if (temp5_1 == 1)
                                        (*(*var_358 + 8))(var_358, 1)
                            
                            sub_1405970a0(&var_2c8)
                            sub_1405970a0(&var_2b0)
                            int32_t var_190_2 = 0
                            
                            if (var_198_1 != 0)
                                sub_140a74f90(var_198_1)
                            
                            sub_140acd610(&var_1d8)
                        
                        int64_t result_1 = r14_1[8]
                        
                        if (result_1 == 0)
                            int64_t rax_82 = sx.q(r14_1[1].d)
                            
                            if (rax_82.d s<= 0)
                                void* const rax_85
                                
                                if (var_4e8_1 == 0)
                                label_140cb5197:
                                    rax_85 = nullptr
                                else
                                label_140cb5190:
                                    rax_85 = var_4e8_1
                                    
                                    if (sub_140cab370(var_4e8_1) == 0)
                                        goto label_140cb5197
                                
                                if (var_4e8_1 == 0 || rax_85 != 0)
                                    *(r14_1 + 0x51) = 1
                                    int64_t var_350
                                    int64_t var_340
                                    int64_t* rax_154
                                    int32_t rbx_20
                                    
                                    if (r14_1[1].d != 0)
                                        rbx_20 = 0x20
                                        rax_154 = sub_140cbc2f0(arg1, &var_350, r14_1[1].d)
                                    else
                                        rbx_20 = 0x10
                                        rax_154 = sub_140d21830(*(arg1 + 0xa0), &var_340, 0, 0)
                                    
                                    int64_t var_430 = *rax_154
                                    *rax_154 = 0
                                    int32_t var_428_1 = rax_154[1].d
                                    int32_t var_424_1 = *(rax_154 + 0xc)
                                    rax_154[1] = 0
                                    
                                    if ((rbx_20.b & 0x20) != 0)
                                        int64_t rcx_165 = var_350
                                        rbx_20 &= 0xffffffdf
                                        
                                        if (rcx_165 != 0)
                                            sub_140a74f90(rcx_165)
                                    
                                    if ((rbx_20.b & 0x10) != 0)
                                        int64_t rcx_166 = var_340
                                        
                                        if (rcx_166 != 0)
                                            sub_140a74f90(rcx_166)
                                    
                                    int64_t var_188
                                    __builtin_memset(&var_188, 0, 0x2c)
                                    int32_t var_15c_1 = 0x80
                                    int32_t var_158_1 = 0xffffffff
                                    int32_t var_154_1 = 0
                                    int64_t var_148_1 = 0
                                    int32_t var_140_1 = 0
                                    void var_298
                                    int64_t* rax_158 = sub_140aae2b0(&var_298, r14_1)
                                    int32_t var_a8 = 4
                                    int64_t var_98_1 = *rax_158
                                    void* rcx_169 = rax_158[1]
                                    void* var_90_1 = rcx_169
                                    
                                    if (rcx_169 != 0)
                                        *(rcx_169 + 8) += 1
                                    
                                    int32_t var_88_1 = rax_158[2].d
                                    char var_80_1 = 1
                                    int64_t var_4a0 = 0
                                    int32_t var_498_1 = 0
                                    sub_1405947f0(&var_4a0, 0xb)
                                    int32_t rax_160 = var_498_1 + 0xb
                                    var_498_1 = rax_160
                                    
                                    if (rax_160 s> 0)
                                        sub_140594770(&var_4a0)
                                    
                                    UnDecorator::getReferenceType(var_4a0, u"ObjectName", 0x16)
                                    sub_140acb5e0(&var_188, &var_4a0, &var_a8)
                                    int64_t rcx_174 = var_4a0
                                    
                                    if (rcx_174 != 0)
                                        sub_140a74f90(rcx_174)
                                    
                                    sub_140597690(&var_a8)
                                    sub_1405970a0(&var_298)
                                    void var_280
                                    int64_t* rax_161 = sub_140aae420(&var_280, &var_430)
                                    int32_t var_78 = 4
                                    int64_t var_68_1 = *rax_161
                                    void* rcx_179 = rax_161[1]
                                    void* var_60_1 = rcx_179
                                    
                                    if (rcx_179 != 0)
                                        *(rcx_179 + 8) += 1
                                    
                                    int32_t var_58_1 = rax_161[2].d
                                    char var_50_1 = 1
                                    int64_t var_490 = 0
                                    int32_t var_488_1 = 0
                                    sub_1405947f0(&var_490, 0xa)
                                    int32_t rax_163 = var_488_1 + 0xa
                                    var_488_1 = rax_163
                                    
                                    if (rax_163 s> 0)
                                        sub_140594770(&var_490)
                                    
                                    UnDecorator::getReferenceType(var_490, u"OuterName", 0x14)
                                    sub_140acb5e0(&var_188, &var_490, &var_78)
                                    int64_t rcx_184 = var_490
                                    
                                    if (rcx_184 != 0)
                                        sub_140a74f90(rcx_184)
                                    
                                    sub_140597690(&var_78)
                                    sub_1405970a0(&var_280)
                                    void* rcx_194
                                    
                                    if (rax_85 == 0)
                                        void var_320
                                        void var_238
                                        void var_220
                                        char* var_1e8
                                        sub_140bd1fe0(&var_458, &var_320, 
                                            sub_140aaca20(&var_238, 
                                                sub_140a96390(&var_1e8, 
                                                    _vfprintf_p_l(&var_220, 
                                                        CreateExport: Failed to load Outer for resource "
                                        "'{ObjectName}': {OuterName}", 
                                                    LinkerLoad")), &var_188))
                                        sub_140597060(&var_320)
                                        sub_1405970a0(&var_238)
                                        rcx_194 = &var_220
                                    else
                                        void var_330
                                        void var_268
                                        void var_250
                                        char* var_1f8
                                        sub_140bd1fe0(&var_458, &var_330, 
                                            sub_140aaca20(&var_268, 
                                                sub_140a96390(&var_1f8, 
                                                    _vfprintf_p_l(&var_250, 
                                                        CreateExport: Failed to load Outer for resource because it "
                                        "is a redirector '{ObjectName}': {OuterName}", 
                                                    LinkerLoad")), &var_188))
                                        int64_t* var_328
                                        
                                        if (var_328 != 0)
                                            var_328[1].d -= 1
                                            
                                            if (var_328[1].d == 1)
                                                (**var_328)(var_328)
                                                int32_t temp11_1 = *(var_328 + 0xc)
                                                *(var_328 + 0xc) -= 1
                                                
                                                if (temp11_1 == 1)
                                                    (*(*var_328 + 8))(var_328, 1)
                                        
                                        sub_1405970a0(&var_268)
                                        rcx_194 = &var_250
                                    
                                    sub_1405970a0(rcx_194)
                                    int32_t var_140_2 = 0
                                    
                                    if (var_148_1 != 0)
                                        sub_140a74f90(var_148_1)
                                    
                                    sub_140acd610(&var_188)
                                    int64_t rcx_203 = var_430
                                    
                                    if (rcx_203 != 0)
                                        sub_140a74f90(rcx_203)
                                else
                                    void* rax_86 =
                                        _ultow_s(r12_2, var_4e8_1, *r14_1, *(r14_1 + 0x1c))
                                    sub_140cd8660(rax_86, 0)
                                    void* rax_87 =
                                        sub_140d3f470(nullptr, var_4e8_1, *r14_1, 1, 0, 0, 0)
                                    
                                    if (rax_87 != 0 && *(rax_87 + 0x10) == r12_2)
                                        r14_1[8] = rax_87
                                    
                                    void* rcx_101 = r14_1[8]
                                    
                                    if (rcx_101 == 0)
                                        char rax_94
                                        
                                        if (rax_87 != 0)
                                            rax_94 = sub_140cc16d0(*(rax_87 + 0x10), r12_2)
                                        
                                        if (rax_87 == 0 || rax_94 != 0)
                                            bool cond:4_1 = data_143de5421 == 0
                                            int32_t r13_3 = *(r14_1 + 0x1c)
                                            var_4f0 = r13_3
                                            
                                            if (cond:4_1 || (r13_3.b & 0x10) != 0
                                                    || (1 & (*(*(arg1 + 0xa0) + 0x50) u>> 0x15).b)
                                                    != 0)
                                                r13_3 |= 0x83400
                                                var_4f0 = r13_3
                                            else if (sub_140d23dc0(var_4e8_1, 0x10) != 0)
                                                r13_3 |= 0x83400
                                                var_4f0 = r13_3
                                            else if (sub_140cc16d0(r12_2, sub_140bdf8f0()) != 0)
                                                r13_3 |= 0x83400
                                                var_4f0 = r13_3
                                            else if (sub_140cc16d0(r12_2, sub_140cdddf0()) != 0)
                                                r13_3 |= 0x83400
                                                var_4f0 = r13_3
                                            
                                            uint64_t rdi_4 = *r14_1
                                            var_450 = rdi_4
                                            char var_528_5
                                            
                                            if ((r13_3.b & 0x10) == 0)
                                            label_140cb54a3:
                                                
                                                if (r12_2[0x23] == 0)
                                                    (*(*r12_2 + 0x390))(r12_2)
                                                
                                                int32_t var_518_1
                                                var_518_1.b = 0
                                                int32_t var_520_1
                                                var_520_1.q = rax_86
                                                var_528_5.d = 0
                                                void* rax_125 = sub_140d2dfc0(r12_2, var_4e8_1, 
                                                    rdi_4, r13_3, var_528_5, var_520_1, 
                                                    var_518_1.b, 0, 0)
                                                r14_1[8] = rax_125
                                                
                                                if (data_14399fa4c != 0 || data_143e1d99c != 0)
                                                    int32_t rax_126 = *(rax_125 + 0xc)
                                                    void* const rax_133
                                                    
                                                    if (rax_126 s>= data_143e1d9b4)
                                                        rax_133 = nullptr
                                                    else
                                                        int16_t temp8_1
                                                        int32_t temp9_1
                                                        temp8_1:temp9_1 = sx.q(rax_126)
                                                        uint32_t rdx_66 = zx.d(temp8_1)
                                                        int32_t rax_128 = temp9_1 + rdx_66
                                                        rax_133 = *(data_143e1d9a0
                                                            + (sx.q(rax_128 s>> 0x10) << 3))
                                                            + sx.q(zx.d(rax_128.w) - rdx_66) * 0x18
                                                    
                                                    *(rax_133 + 8) |= 0x40000000
                                                
                                                uint64_t rax_137 = r14_1[8]
                                                uint64_t rbx_13 = *r14_1
                                                uint64_t r13_5 = *(rax_137 + 0x10)
                                                
                                                if (rdi_4 != rbx_13)
                                                    void* rdi_6 = *(rax_137 + 0x20)
                                                    uint32_t rcx_137
                                                    rcx_137.b = (rbx_13 u>> 0x20).d == 0
                                                    
                                                    if ((rcx_137.b & sub_140b5b8a0(rbx_13.d, 0))
                                                            != 0)
                                                        sub_140d19010(rdi_6, 
                                                            NewObject with empty name can't be used to "
                                                        "create default subobjects (inside of "
                                                        "UObject derived class constructor) as it "
                                                        "produces incon")
                                                    
                                                    var_518_1.b = 0
                                                    var_520_1.q = 0
                                                    var_528_5.d = 0
                                                    void* rax_136 = sub_140d2dfc0(sub_140cdddf0(), 
                                                        rdi_6, rbx_13, 3, var_528_5, var_520_1, 
                                                        var_518_1.b, 0, 0)
                                                    *(rax_136 + 0x28) = r14_1[8]
                                                    rax_137 = r14_1[8]
                                                
                                                void* r12_3
                                                
                                                if (rax_137 == 0)
                                                label_140cb5660:
                                                    r12_3 = r12_1
                                                label_140cb5665:
                                                    int64_t* rdi_7 = r14_1[8]
                                                    
                                                    if (rdi_7 != 0)
                                                        char rax_145
                                                        double zmm2_2[0x2]
                                                        rax_145, zmm2_2 = sub_140cab3b0(rdi_7)
                                                        
                                                        if (rax_145 != 0)
                                                            if (*(r14_1 + 0x14) != 0)
                                                                void* rax_146
                                                                double zmm2_3[0x2]
                                                                rax_146, zmm2_3 = sub_140cc12f0(arg1, 
                                                                    *(r14_1 + 0x14), zmm2_2)
                                                                char rax_147
                                                                
                                                                if (rax_146 != 0)
                                                                    rax_147 = sub_140cab330(rax_146)
                                                                
                                                                if (rax_146 == 0 || rax_147 == 0)
                                                                    (*(*rdi_7 + 0x2c8))(rdi_7, 
                                                                        sub_140cc12f0(arg1, *(r14_1 + 0x14), 
                                                                            zmm2_3))
                                                                else
                                                                    int64_t* var_410 = rdi_7
                                                                    void var_41c
                                                                    sub_140812a70(rax_146 + 0x248, 
                                                                        &var_41c, &var_410, nullptr)
                                                            
                                                            int64_t* rbx_18 = r14_1[8]
                                                            
                                                            if (rbx_18 != 0
                                                                    && sub_140cab2f0(rbx_18) != 0)
                                                                (*(*rbx_18 + 0x268))(rbx_18)
                                                        
                                                        if (*(r14_1 + 0x4c) != 0)
                                                            *(r12_3 + 8) += 1
                                                            void* var_408 = arg1
                                                            void* rax_151 = sub_140cdbb20()
                                                            EnterCriticalSection(rax_151 + 0x148)
                                                            void var_418
                                                            sub_140ca9be0(rax_151 + 0xf8, &var_418, 
                                                                &var_408, nullptr)
                                                            
                                                            if (rax_151 != -0x148)
                                                                LeaveCriticalSection(rax_151 + 0x148)
                                                    
                                                    goto label_140cb577b
                                                
                                                if ((*(r14_1 + 0x1c) & 0x10) == 0
                                                        || ((*(r13_5 + 0xcc) u>> 0x12).b & 1) == 0)
                                                    rax_137.b = 0
                                                label_140cb55fe:
                                                    void* rax_139
                                                    int64_t rax_140
                                                    
                                                    if (*(r13_5 + 0xc8) s>= 0 && rax_137.b != 0)
                                                        rax_139 = sub_140d21d80(r13_5)
                                                        rax_140 = sub_140cde0b0()
                                                    
                                                    if (*(r13_5 + 0xc8) s< 0 || rax_137.b == 0
                                                            || rax_139 == rax_140)
                                                        sub_140d3e8d0(r14_1[8], arg1, var_4f4, 1)
                                                        r12_3 = r12_1
                                                        sub_140d3a600(r12_3, r14_1[8])
                                                        goto label_140cb5665
                                                    
                                                    void* rcx_142 = r14_1[8]
                                                    int32_t rbx_15 = *(rcx_142 + 8)
                                                    *(rcx_142 + 8) = rbx_15 & 0xffffcbff
                                                    sub_140d3e8d0(r14_1[8], arg1, var_4f4, 0)
                                                    void* rax_143 = r14_1[8]
                                                    *(rax_143 + 8) |= rbx_15
                                                    
                                                    if (sub_140bb44b0(arg1, r13_5, r14_1[8]) == 0)
                                                        goto label_140cb5660
                                                    
                                                    result = r14_1[8]
                                                else
                                                    rax_137.b = 1
                                                    
                                                    if ((*(arg1 + 0x290) & 0x100000) == 0)
                                                        goto label_140cb55fe
                                                    
                                                    *(arg1 + 0x34c) = var_4f4
                                                    result = r14_1[8]
                                            else
                                                int64_t* rbx_12 = r12_2[8]
                                                
                                                if (rbx_12 == 0)
                                                    goto label_140cb54a3
                                                
                                                int32_t rax_101 = *(rbx_12 + 0xc)
                                                void* const rax_108
                                                
                                                if (rax_101 s>= data_143e1d9b4)
                                                    rax_108 = nullptr
                                                else
                                                    int16_t temp6_1
                                                    int32_t temp7_1
                                                    temp6_1:temp7_1 = sx.q(rax_101)
                                                    uint32_t rdx_60 = zx.d(temp6_1)
                                                    int32_t rax_103 = temp7_1 + rdx_60
                                                    rax_108 = *(data_143e1d9a0
                                                        + (sx.q(rax_103 s>> 0x10) << 3))
                                                        + sx.q(zx.d(rax_103.w) - rdx_60) * 0x18
                                                
                                                if (((*(rax_108 + 8) u>> 0x19).b & 1) != 0)
                                                    goto label_140cb54a3
                                                
                                                uint64_t rcx_122 = rbx_12[0x23]
                                                
                                                if (rcx_122 == 0)
                                                    (*(*rbx_12 + 0x390))(rbx_12)
                                                    rcx_122 = rbx_12[0x23]
                                                
                                                int64_t* var_440 = nullptr
                                                int32_t var_438_1 = 0
                                                var_528_5.d = 0x2000000
                                                sub_140d3ccc0(rcx_122, &var_440, 0, 0, var_528_5)
                                                rbx_4 = var_440
                                                int64_t r13_4 = 0
                                                void* rcx_124 = &rbx_4[sx.q(var_438_1)]
                                                uint64_t rax_116 = (rcx_124 - rbx_4 + 7) u>> 3
                                                
                                                if (rbx_4 u> rcx_124)
                                                    rax_116 = 0
                                                
                                                if (rax_116 != 0)
                                                    do
                                                        uint64_t rdx_63 = *rbx_4
                                                        int32_t rcx_125 = *(rdx_63 + 8)
                                                        
                                                        if (((rcx_125 u>> 0x13).b & 1) != 0 && (
                                                                ((rcx_125 u>> 0xa).b & 1) != 0
                                                                || ((rcx_125 u>> 0x15).b & 1) == 0))
                                                            *(rdx_63 + 8) = rcx_125 | 0x400
                                                            sub_140cc45a0(arg1 + 0x200, rdx_63)
                                                        
                                                        rbx_4 = &rbx_4[1]
                                                        r13_4 += 1
                                                    while (r13_4 != rax_116)
                                                    
                                                    rbx_4 = var_440
                                                    rdi_4 = var_450
                                                
                                                int64_t result_2 = r14_1[8]
                                                
                                                if (result_2 == 0)
                                                    if (rbx_4 != 0)
                                                        sub_140a74f90(rbx_4)
                                                    
                                                    r13_3 = var_4f0
                                                    goto label_140cb54a3
                                                
                                                result = result_2
                                            label_140cb48e9:
                                                
                                                if (rbx_4 != 0)
                                                    sub_140a74f90(rbx_4)
                                    else
                                        if (*(r14_1 + 0x4c) == 0)
                                            sub_140d3e8d0(rcx_101, arg1, var_4f4, 1)
                                            int32_t rdx_54 = sub_140d3a600(r12_1, r14_1[8])
                                            
                                            if ((1 & (*(r14_1[8] + 8) u>> 0x15).b) == 0
                                                    && sub_140ce0e10(*(arg1 + 0xa0), rdx_54) == 0)
                                                void* rdx_55 = r14_1[8]
                                                int32_t rcx_109 = *(rdx_55 + 8)
                                                
                                                if ((1 & (rcx_109 u>> 4).b) == 0)
                                                    *(rdx_55 + 8) = rcx_109 | 0x83400
                                                else
                                                    *(rdx_55 + 8) = rcx_109 | 0x81400
                                        else
                                            void* var_448 = arg1
                                            *(r12_1 + 8) += 1
                                            void* rax_89 = sub_140cdbb20()
                                            EnterCriticalSection(rax_89 + 0x148)
                                            void var_420
                                            sub_140ca9be0(rax_89 + 0xf8, &var_420, &var_448, 
                                                nullptr)
                                            
                                            if (rax_89 != -0x148)
                                                LeaveCriticalSection(rax_89 + 0x148)
                                        
                                        result = r14_1[8]
                            else
                                if (var_4e8_1 != 0)
                                    goto label_140cb5190
                                
                                if (*((rax_82 << 7) + *(arg1 + 0x18) - 0x2d) == 0)
                                    goto label_140cb5197
                                
                                *(r14_1 + 0x53) = 1
                        else
                            result = result_1
                else
                    uint64_t rax_19
                    rax_19, zmm2 = sub_140cc12f0(arg1, *(r14_1 + 0x14), zmm2)
                    
                    if (rax_19 != 0)
                        if ((*(rax_19 + 8) & 0x4200000) == 0)
                            int32_t rax_26 = *(rax_19 + 0xc)
                            void* const rax_32
                            
                            if (rax_26 s>= data_143e1d9b4)
                                rax_32 = nullptr
                            else
                                int16_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_26)
                                uint32_t rdx_22 = zx.d(temp2_1)
                                int32_t rax_28 = temp3_1 + rdx_22
                                rax_32 = *(data_143e1d9a0 + (sx.q(rax_28 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_28.w) - rdx_22) * 0x18
                            
                            if (((*(rax_32 + 8) u>> 0x19).b & 1) == 0 && sub_140d3cb50(rax_19) != 0
                                    && *(r14_1 + 0x14) s< 0)
                                void* rax_36
                                rax_36, zmm2 = sub_140bdf2e0()
                                void* rdx_24 = *(rax_19 + 0x10)
                                int64_t rax_37 = sx.q(*(rax_36 + 0x38))
                                
                                if (rax_37.d s<= *(rdx_24 + 0x38)
                                        && *(*(rdx_24 + 0x30) + (rax_37 << 3)) == rax_36 + 0x30
                                        && *(rax_19 + 0x118) == 0)
                                    *(rax_19 + 8) |= 0x400
                                    zmm2 = sub_140cc45a0(arg1 + 0x200, rax_19)
                        
                        goto label_140cb4bb6
                    
                    void* rax_20
                    double zmm2_1[0x2]
                    rax_20, zmm2_1 = sub_140bdfab0()
                    int64_t rax_21
                    
                    if (rax_20 != 0)
                        rax_21 = sx.q(*(rax_20 + 0x38))
                    
                    if (rax_20 != 0 && rax_21.d s<= r12_2[7].d
                            && *(r12_2[6] + (rax_21 << 3)) == rax_20 + 0x30)
                        int64_t rax_23
                        rax_23, zmm2 = sub_140cc12f0(arg1, r14_1[1].d, zmm2_1)
                        
                        if (rax_23 != 0 && *(r14_1 + 0x51) == 0)
                            zmm2 = sub_140bdf2e0()
                        
                        *(r14_1 + 0x14) = 0
                        goto label_140cb4bb6
                    
                    uint64_t var_390[0x2]
                    uint64_t* rax_24 = sub_140cbb960(arg1, &var_390, rdi.d, 0, 0)
                    uint64_t rdx_20
                    
                    if (rax_24[1].d == 0)
                        rdx_20 = &data_142d40450
                    else
                        rdx_20 = *rax_24
                    
                    void var_3c8
                    *sub_140b58260(&var_3c8, rdx_20, 1)
                    sub_140cc1810()
                    uint64_t rcx_33 = var_390[0]
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
        else if (r12_2 != 0)
            sub_140bdf670()
            result = r12_2[0x23]
            
            if (result == 0)
                (*(*r12_2 + 0x390))(r12_2)
                result = r12_2[0x23]
            
            r14_1[8] = result
    else
        uint64_t var_3c0[0x2]
        uint64_t* rax_5 = sub_140cbbb90(arg1, &var_3c0, rdi.d, 0, 0)
        uint64_t rdx_1
        
        if (rax_5[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rax_5
        
        void var_3d0
        void* rax_7 = sub_140d1aab0(*sub_140b58260(&var_3d0, rdx_1, 1), 1)
        uint64_t rcx_8 = var_3c0[0]
        r14_1[8] = rax_7
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        void* rcx_9 = r14_1[8]
        
        if (rcx_9 != 0)
            sub_140d3e8d0(rcx_9, arg1, rdi.d, 1)
            void* rbx_2 = r14_1[8]
            
            if (rbx_2 != 0)
                void* rax_8 = sub_140bdf670()
                void* r8_3 = *(rbx_2 + 0x10)
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s<= *(r8_3 + 0x38) && *(*(r8_3 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30
                        && *(rbx_2 + 0x118) == 0)
                    sub_140d3a600(r12_1, r14_1[8])
        
        result = r14_1[8]

*(rax_3 + 0xa8) = rcx_1
*(rax_3 + 0xa0) = rcx_2
__security_check_cookie(rax_1 ^ &var_548)
return result
