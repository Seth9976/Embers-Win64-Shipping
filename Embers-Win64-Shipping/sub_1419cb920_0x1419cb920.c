// 函数: sub_1419cb920
// 地址: 0x1419cb920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg3
void* r15 = arg1
int16_t* result_1 = nullptr
int64_t var_108 = 0
sub_1405947f0(&result_1, 6)
int32_t rax = var_108.d + 6
var_108.d = rax

if (rax s> 0)
    sub_140594770(&result_1)

int64_t r9 = UnDecorator::getReferenceType(result_1, u"float", 0xc)
int32_t rax_1 = *(r15 + 0x70)
int32_t rdi = 0
int32_t var_118 = 0
int16_t* var_f0
int32_t var_e8
int16_t* var_e0
int32_t var_d8
int16_t* var_c8
int32_t var_c0
int16_t* var_b0
int32_t var_a8
int64_t var_a0
int32_t var_98
int64_t var_90
int32_t var_88
int64_t var_80
int32_t var_78
int64_t var_70
int32_t var_68

if (rax_1 s> 0)
    int64_t rbx_1 = 0
    int64_t var_f8_1 = 0
    
    do
        int64_t* rsi_3 = rbx_1 * 0x30 + *(r15 + 0x68)
        int16_t* r15_1 = nullptr
        int16_t* var_d0_1 = nullptr
        int32_t var_114_1 = 0
        uint64_t r8 = zx.q(*(rsi_3 + 0x24))
        
        if (r8.d != 0)
            int16_t* var_60
            r9 = sub_140a2e390(&var_60, u"[%u]", r8)
            r15_1 = var_60
            var_d0_1 = r15_1
            int32_t var_58
            var_114_1 = var_58
            var_58.q = 0
            var_60 = nullptr
        
        char rcx_4 = *(rsi_3 + 0x14)
        int16_t* const var_130
        int16_t* rcx_13
        
        if (rcx_4 == 0x11)
            sub_140a20ba0(&arg4[4], u"struct {\r\n", 0xa)
            sub_140a20ba0(&arg4[6], U"{}[\nt", 1)
            int32_t r14_1 = rsi_3[2].d
            int16_t* const r8_1
            
            if (arg2[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg2
            
            *rsi_3
            int64_t var_48
            sub_140a2e390(&var_48, u"%s%s_", r8_1)
            sub_1419cb920(rsi_3[5], &var_48, zx.q(arg3 + r14_1), arg4, arg5, var_130)
            int64_t rcx_9 = var_48
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            sub_140a20ba0(&arg4[6], &data_14300f1c8, 2)
            sub_140a2e390(&var_b0, u"} %s%s;\r\n", *rsi_3)
            int32_t r8_6
            
            if (var_a8 == 0)
                r8_6 = 0
            else
                r8_6 = var_a8 - 1
            
            r9 = sub_140a20ba0(&arg4[4], var_b0, r8_6)
            rcx_13 = var_b0
            
            if (rcx_13 == 0)
                goto label_1419cc069
            
            goto label_1419cc064
        
        if (rcx_4 != 0x12)
            if (rcx_4 - 5 u> 0xb && rcx_4 - 0x13 u> 1)
                int16_t* rdi_1 = nullptr
                uint32_t rcx_15 = zx.d(rcx_4)
                int32_t rbx_2 = 0
                int16_t* var_128 = nullptr
                int32_t var_120_1 = 0
                
                if (rcx_15 == 2)
                    sub_1405947f0(&var_128, 4)
                    rbx_2 = var_120_1 + 4
                    
                    if (rbx_2 s> 0)
                        sub_140594770(&var_128)
                    
                    rdi_1 = var_128
                    *rdi_1 = 0x74006e0069
                else if (rcx_15 == 3)
                    sub_1405947f0(&var_128, 5)
                    rbx_2 = var_120_1 + 5
                    
                    if (rbx_2 s> 0)
                        sub_140594770(&var_128)
                    
                    rdi_1 = var_128
                    __builtin_wcscpy(rdi_1, u"uint")
                else if (rcx_15 == 4)
                    int32_t rax_7 = rsi_3[3].d
                    
                    if (rax_7 == 0)
                        sub_1405947f0(&var_128, rax_7 + 6)
                        rbx_2 = var_120_1 + 6
                        
                        if (rbx_2 s> 0)
                            sub_140594770(&var_128)
                        
                        rdi_1 = var_128
                        *rdi_1 = 0x61006f006c0066
                        *(rdi_1 + 8) = 0x74
                    else if (rax_7 == 1)
                        sub_1405947f0(&var_128, rax_7 + 4)
                        rbx_2 = var_120_1 + 5
                        
                        if (rbx_2 s> 0)
                            sub_140594770(&var_128)
                        
                        rdi_1 = var_128
                        __builtin_wcscpy(rdi_1, u"half")
                    else if (rax_7 == 2)
                        sub_1405947f0(&var_128, rax_7 + 4)
                        rbx_2 = var_120_1 + 6
                        
                        if (rbx_2 s> 0)
                            sub_140594770(&var_128)
                        
                        rdi_1 = var_128
                        *rdi_1 = 0x65007800690066
                        *(rdi_1 + 8) = 0x64
                else
                    sub_140af98a0("Unknown", 0xbc, 
                        Unrecognized uniform buffer struct member base type.", r9)
                    sub_140afbb40()
                
                int32_t rax_8 = *(rsi_3 + 0x1c)
                int32_t r15_2 = 4
                uint64_t r8_9 = zx.q(rsi_3[4].d)
                int16_t* var_b8_1 = nullptr
                int32_t var_100_1 = 0
                
                if (rax_8 u> 1)
                    sub_140a2e390(&var_c8, u"%ux%u", zx.q(rax_8))
                    uint64_t rcx_29 = zx.q(*(rsi_3 + 0x1c))
                    var_b8_1 = var_c8
                    int32_t rax_10 = rsi_3[4].d
                    var_c8 = nullptr
                    var_100_1 = var_c0
                    var_c0.q = 0
                    r15_2 = ((zx.q(rax_10 + (rcx_29 << 2).d) << 2) + -0xfffffffffffffff0).d
                else if (r8_9.d u> 1)
                    sub_140a2e390(&var_f0, u"%u", r8_9)
                    int32_t r15_3 = rsi_3[4].d
                    var_b8_1 = var_f0
                    var_100_1 = var_e8
                    var_e8.q = 0
                    var_f0 = nullptr
                    r15_2 = r15_3 << 2
                
                int32_t rax_13 = *(rsi_3 + 0x24)
                
                if (rax_13 != 0)
                    r15_2 += ((r15_2 + 0xf) & 0xfffffff0) * (rax_13 - 1)
                
                int32_t r14_2 = r14 + rsi_3[2].d
                int32_t rax_16 = *arg5
                int32_t* var_138
                
                if (rax_16 u< r14_2)
                    int16_t* result_2 = result_1
                    
                    do
                        if (arg2[1].d != 0)
                            *arg2
                        
                        var_138.d = rax_16
                        int16_t* const result_3 = &data_142d40450
                        
                        if (var_108.d != 0)
                            result_3 = result_2
                        
                        sub_140a2e390(&var_a0, u"\t%s PrePadding_%s%u;\r\n", result_3)
                        int32_t r8_12
                        
                        if (var_98 == 0)
                            r8_12 = 0
                        else
                            r8_12 = var_98 - 1
                        
                        sub_140a20ba0(arg4, var_a0, r8_12)
                        int64_t rcx_37 = var_a0
                        
                        if (rcx_37 != 0)
                            sub_140a74f90(rcx_37)
                        
                        rax_16 = *arg5 + 4
                        *arg5 = rax_16
                    while (rax_16 u< r14_2)
                    
                    rdi_1 = var_128
                
                int32_t rax_18 = var_108:4.d
                var_108.d = rbx_2
                
                if (rbx_2 != 0 || rax_18 != 0)
                    sub_1405a4c70(&result_1, rbx_2, rax_18)
                    memcpy(result_1, rdi_1, rbx_2 * 2)
                else
                    var_108:4.d = rax_18
                
                *arg5 = r14_2 + r15_2
                int16_t* const r8_16
                
                if (arg2[1].d == 0)
                    r8_16 = &data_142d40450
                else
                    r8_16 = *arg2
                
                *rsi_3
                sub_140a2e390(&var_e0, u"%s%s", r8_16)
                int16_t* const rcx_43 = &data_142d40450
                int16_t* rax_20 = &data_142d40450
                
                if (var_114_1 != 0)
                    rcx_43 = var_d0_1
                
                int16_t* const r8_17 = &data_142d40450
                
                if (var_d8 != 0)
                    rax_20 = var_e0
                
                int16_t* const var_130_1 = rcx_43
                int16_t* var_138_1 = rax_20
                
                if (rbx_2 != 0)
                    r8_17 = rdi_1
                
                sub_140a2e390(&var_90, u"\t%s%s %s%s;\r\n", r8_17)
                int32_t r8_19
                
                if (var_88 == 0)
                    r8_19 = 0
                else
                    r8_19 = var_88 - 1
                
                sub_140a20ba0(arg4, var_90, r8_19)
                int64_t rcx_46 = var_90
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                int16_t* const rcx_47 = &data_142d40450
                
                if (var_114_1 != 0)
                    rcx_47 = var_d0_1
                
                int16_t* r8_20 = &data_142d40450
                var_130 = rcx_47
                var_138 = *rsi_3
                
                if (rbx_2 != 0)
                    r8_20 = rdi_1
                
                sub_140a2e390(&var_80, u"\t%s%s %s%s;\r\n", r8_20)
                int32_t r8_22
                
                if (var_78 == 0)
                    r8_22 = 0
                else
                    r8_22 = var_78 - 1
                
                sub_140a20ba0(&arg4[4], var_80, r8_22)
                int64_t rcx_50 = var_80
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
                
                int16_t* r8_23 = &data_142d40450
                
                if (var_d8 != 0)
                    r8_23 = var_e0
                
                sub_140a2e390(&var_70, u"%s,", r8_23)
                int32_t r8_25
                
                if (var_68 == 0)
                    r8_25 = 0
                else
                    r8_25 = var_68 - 1
                
                r9 = sub_140a20ba0(&arg4[6], var_70, r8_25)
                int64_t rcx_53 = var_70
                
                if (rcx_53 != 0)
                    r9 = sub_140a74f90(rcx_53)
                
                int16_t* rcx_54 = var_e0
                
                if (rcx_54 != 0)
                    r9 = sub_140a74f90(rcx_54)
                
                if (var_b8_1 != 0)
                    r9 = sub_140a74f90(var_b8_1)
                
                if (rdi_1 == 0)
                    goto label_1419cc069
                
                rcx_13 = rdi_1
            label_1419cc064:
                r9 = sub_140a74f90(rcx_13)
            label_1419cc069:
                r14 = arg3
                rdi = var_118
                rbx_1 = var_f8_1
                goto label_1419cc07a
            
            if (r15_1 != 0)
                r9 = sub_140a74f90(r15_1)
        else
            r9 = sub_1419cb920(rsi_3[5], arg2, zx.q(rsi_3[2].d + r14), arg4, arg5, var_130)
        label_1419cc07a:
            
            if (var_d0_1 != 0)
                r9 = sub_140a74f90(var_d0_1)
        
        r15 = arg1
        rdi += 1
        rbx_1 += 1
        var_118 = rdi
        var_f8_1 = rbx_1
        rax_1 = *(r15 + 0x70)
    while (rdi s< rax_1)

int32_t i = 0

if (rax_1 s> 0)
    int64_t rsi_4 = 0
    
    do
        int64_t* rbx_4 = *(r15 + 0x68) + rsi_4
        char rcx_57 = *(rbx_4 + 0x14)
        
        if (rcx_57 - 5 u<= 0xb || rcx_57 - 0x13 u<= 1)
            *rbx_4
            int32_t rax_25 = arg2[1].d
            int16_t* rcx_78
            
            if (rcx_57 != 6)
                int16_t* const r8_36
                
                if (rax_25 == 0)
                    r8_36 = &data_142d40450
                else
                    r8_36 = *arg2
                
                sub_140a2e390(&var_f0, u"%s%s", r8_36)
                sub_140a2e390(&var_a0, u"%s %s;\r\n", rbx_4[1])
                int32_t r8_39
                
                if (var_98 == 0)
                    r8_39 = 0
                else
                    r8_39 = var_98 - 1
                
                sub_140a20ba0(&arg4[2], var_a0, r8_39)
                int64_t rcx_71 = var_a0
                
                if (rcx_71 != 0)
                    sub_140a74f90(rcx_71)
                
                *rbx_4
                sub_140a2e390(&var_b0, u"\t%s %s;\r\n", rbx_4[1])
                int32_t r8_42
                
                if (var_a8 == 0)
                    r8_42 = 0
                else
                    r8_42 = var_a8 - 1
                
                sub_140a20ba0(&arg4[4], var_b0, r8_42)
                int16_t* rcx_74 = var_b0
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                int16_t* r8_43 = &data_142d40450
                
                if (var_e8 != 0)
                    r8_43 = var_f0
                
                sub_140a2e390(&var_c8, u"%s,", r8_43)
                int32_t r8_45
                
                if (var_c0 == 0)
                    r8_45 = 0
                else
                    r8_45 = var_c0 - 1
                
                sub_140a20ba0(&arg4[6], var_c8, r8_45)
                int16_t* rcx_77 = var_c8
                
                if (rcx_77 != 0)
                    sub_140a74f90(rcx_77)
                
                rcx_78 = var_f0
            else
                int16_t* const r8_26
                
                if (rax_25 == 0)
                    r8_26 = &data_142d40450
                else
                    r8_26 = *arg2
                
                sub_140a2e390(&var_e0, u"%s%s", r8_26)
                sub_140a2e390(&var_70, u"PLATFORM_SUPPORTS_SRV_UB_MACRO( %s %s; ) \r\n", rbx_4[1])
                int32_t r8_29
                
                if (var_68 == 0)
                    r8_29 = 0
                else
                    r8_29 = var_68 - 1
                
                sub_140a20ba0(&arg4[2], var_70, r8_29)
                int64_t rcx_61 = var_70
                
                if (rcx_61 != 0)
                    sub_140a74f90(rcx_61)
                
                *rbx_4
                sub_140a2e390(&var_80, u"\tPLATFORM_SUPPORTS_SRV_UB_MACRO( %s %s; ) \r\n", rbx_4[1])
                int32_t r8_32
                
                if (var_78 == 0)
                    r8_32 = 0
                else
                    r8_32 = var_78 - 1
                
                sub_140a20ba0(&arg4[4], var_80, r8_32)
                int64_t rcx_64 = var_80
                
                if (rcx_64 != 0)
                    sub_140a74f90(rcx_64)
                
                int16_t* const r8_33 = &data_142d40450
                
                if (var_d8 != 0)
                    r8_33 = var_e0
                
                sub_140a2e390(&var_90, u" PLATFORM_SUPPORTS_SRV_UB_MACRO( %s, ) ", r8_33)
                int32_t r8_35
                
                if (var_88 == 0)
                    r8_35 = 0
                else
                    r8_35 = var_88 - 1
                
                sub_140a20ba0(&arg4[6], var_90, r8_35)
                int64_t rcx_67 = var_90
                
                if (rcx_67 != 0)
                    sub_140a74f90(rcx_67)
                
                rcx_78 = var_e0
            
            if (rcx_78 != 0)
                sub_140a74f90(rcx_78)
        
        i += 1
        rsi_4 += 0x30
    while (i s< *(r15 + 0x70))

int16_t* result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
