// 函数: sub_1425bf990
// 地址: 0x1425bf990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* result_1 = arg2
uint64_t var_c8 = 0
int64_t* result = arg2
int32_t rdx = 0
int32_t var_c0 = 0
int32_t rcx = 0
int32_t var_bc = 0
int64_t rdi = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_c8, rbx_1.d + 1)
        rcx = var_bc
        rdx = var_c0
    
    int32_t rax_2 = rbx_1.d + 1 + rdx
    var_c0 = rax_2
    
    if (rax_2 s> rcx)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, arg3, (rbx_1.d + 1) * 2)

sub_140b20c40(&var_c8)

if (*(arg1 + 0x91) != 1)
label_1425c0043:
    *result = var_c8
    result[1].d = var_c0
    *(result + 0xc) = var_bc
else
    int32_t rax_3 = *(arg1 + 0x18)
    
    if (rax_3 == 0 || rax_3 - 1 s<= 0)
        goto label_1425c0043
    
    int16_t* var_78
    sub_140b11c80(&var_78, &var_c8)
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    uint64_t var_68 = 0
    uint64_t var_b8
    int16_t* const var_58
    int64_t* rax_6 = sub_140b11a30(&var_b8, sub_140b251a0(&var_58))
    
    if (&var_88 != rax_6)
        int64_t rcx_8 = var_88
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        var_88 = *rax_6
        *rax_6 = 0
        var_80_1 = rax_6[1].d
        var_80_1 = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    uint64_t rcx_9 = var_b8
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int16_t* const rcx_10 = var_58
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int16_t* const r14_1 = &data_142d40450
    int16_t* rax_10
    
    if (*(arg1 + 0x18) == 0)
        rax_10 = &data_142d40450
    else
        rax_10 = *(arg1 + 0x10)
    
    var_58 = rax_10
    var_b8 = 0
    wchar16* var_50_1 = u"Embers"
    int64_t var_b0_1 = 0
    sub_140b0f5f0(&var_b8, &var_58, 2)
    uint64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    var_68 = var_b8
    int32_t var_60_1 = var_b0_1.d
    int32_t var_5c_1 = var_b0_1:4.d
    
    if (sub_140a32a50(&var_78, &var_68, 1) == 0)
        int32_t var_70
        int64_t* rdx_9
        int32_t r8_2
        
        if (sub_140a32a50(&var_78, &var_88, 1) == 0)
            int16_t* rdx_10
            
            if (*(arg1 + 0x48) == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *(arg1 + 0x40)
            
            if (sub_140a32ae0(&var_78, rdx_10, 1) != 0)
                int16_t* rdx_11 = &data_142d40450
                int32_t rax_23 = *(arg1 + 0x48)
                
                if (var_70 != 0)
                    rdx_11 = var_78
                
                int32_t rcx_21 = rax_23 - 1
                
                if (rax_23 == 0)
                    rcx_21 = 0
                
                if (*(arg1 + 0x18) != 0)
                    r14_1 = *(arg1 + 0x10)
                
                void* var_50_3 = &rdx_11[sx.q(rcx_21)]
                rdx_9 = &var_58
                r8_2 = 2
                goto label_1425bfc6f
            
            int32_t var_d8_2 = 0xffffffff
            int32_t r12_1 = sub_140a23cf0(&var_c8, &data_142d5a024, 0, 0, 0xffffffff)
            int32_t rax_29 = sub_140a23cf0(&var_c8, &(*U"{}[\nt")[3], 0, 0, var_d8_2)
            
            if (r12_1 s< 0)
                r12_1 = rax_29
            else if (rax_29 s>= 0 && rax_29 s< r12_1)
                r12_1 = rax_29
            
            uint64_t r10_1 = var_c8
            uint64_t rdx_12 = 0
            int32_t r13_1 = var_c0
            var_b8 = 0
            var_b0_1.d = r13_1
            
            if (r13_1 != 0)
                sub_1405a4c70(&var_b8, r13_1, 0)
                memcpy(var_b8, r10_1, r13_1 * 2)
                r10_1 = var_c8
                rdx_12 = var_b8
                r13_1 = var_c0
            else
                var_b0_1:4.d = 0
            
            if (r12_1 != 0xffffffff)
                int32_t var_a8_1 = 0
                int16_t* const rbx_4 = nullptr
                int32_t r15 = 0
                
                if (r12_1 s>= 0)
                    if (r13_1 != 0)
                        rbx_4 = zx.q(r13_1 - 1)
                    
                    int64_t r8_5 = sx.q(r12_1)
                    int32_t rcx_29 = rbx_4.d
                    
                    if (rbx_4.d s> 0)
                        rcx_29 = 0
                    
                    int64_t r9_1 = sx.q(rcx_29)
                    
                    if (r8_5 s< r9_1)
                        rbx_4 = zx.q(rcx_29)
                    else if (r8_5 s< sx.q(rbx_4.d))
                        rbx_4 = zx.q(r12_1)
                    
                    var_50_1.d = 0
                    uint64_t rax_31 = &data_142d40450
                    
                    if (r13_1 != 0)
                        rax_31 = r10_1
                    
                    int32_t rbx_5 = rbx_4.d - rcx_29
                    int32_t rcx_30 = 0
                    var_a8_1 = 0
                    var_50_1:4.d = 0
                    int64_t r12_2 = rax_31 + (r9_1 << 1)
                    int16_t* const rax_32 = nullptr
                    int16_t* const var_a0_2 = nullptr
                    var_58 = nullptr
                    
                    if (r12_2 == 0 || *r12_2 == 0 || rbx_5 s<= 0)
                        rbx_4 = nullptr
                    else
                        if (rbx_5 + 1 s> 0)
                            sub_1405947f0(&var_58, rbx_5 + 1)
                            rax_32 = var_58
                            rcx_30 = var_50_1:4.d
                            r15 = var_50_1.d
                            var_a0_2 = rax_32
                            var_a8_1 = rcx_30
                        
                        r15 = r15 + 1 + rbx_5
                        var_50_1.d = r15
                        
                        if (r15 s> rcx_30)
                            sub_140594770(&var_58)
                            r15 = var_50_1.d
                            var_a8_1 = var_50_1:4.d
                            rax_32 = var_58
                            var_a0_2 = rax_32
                        
                        UnDecorator::getReferenceType(rax_32, r12_2, rbx_5 * 2)
                        rbx_4 = var_a0_2
                        rbx_4[sx.q(r15) - 1] = 0
                        rdx_12 = var_b8
                
                if (rdx_12 != 0)
                    sub_140a74f90(rdx_12)
                
                var_b0_1.d = r15
                result = result_1
                var_b0_1:4.d = var_a8_1
                var_b8 = rbx_4
            
            if (sub_140b1c8b0(&var_b8) == 0)
                sub_140b65060()
                result_1 = nullptr
                int32_t rdx_18 = 0
                int32_t var_90_1 = 0
                int32_t rcx_36 = 0
                int32_t var_8c_1 = 0
                
                if (data_143e189c0 != 0)
                    do
                        rdi += 1
                    while ((&data_143e189c0)[rdi] != 0)
                    
                    if (rdi.d + 1 s> 0)
                        sub_1405947f0(&result_1, rdi.d + 1)
                        rcx_36 = var_8c_1
                        rdx_18 = var_90_1
                    
                    int32_t rax_37 = rdx_18 + rdi.d + 1
                    var_90_1 = rax_37
                    
                    if (rax_37 s> rcx_36)
                        sub_140594770(&result_1)
                    
                    UnDecorator::getReferenceType(result_1, &data_143e189c0, (rdi.d + 1) * 2)
                
                sub_140b20c40(&result_1)
                int32_t rdi_3
                
                if (var_c0 == 0)
                    rdi_3 = 0
                else
                    rdi_3 = var_c0 - 1
                
                int32_t rax_39
                
                if (var_90_1 == 0)
                    rax_39 = var_90_1 + 2
                
                if (var_90_1 != 0 || rdi_3 == 0xffffffff)
                    rax_39 = 1
                
                int64_t* result_3 = result_1
                int32_t rax_40 = rax_39 + rdi_3
                var_58 = nullptr
                var_50_1.d = var_90_1
                
                if (var_90_1 != 0 || rax_40 != 0)
                    sub_1405a4c70(&var_58, rax_40 + var_90_1, 0)
                    memcpy(var_58, result_3, var_90_1 * 2)
                else
                    var_50_1:4.d = 0
                
                sub_140a2cf70(&var_58, var_c8, rdi_3)
                uint64_t rcx_44 = var_c8
                
                if (rcx_44 != 0)
                    sub_140a74f90(rcx_44)
                
                bool cond:6_1 = *(arg1 + 0x18) == 0
                var_c8 = var_58
                var_c0 = var_50_1.d
                var_bc = var_50_1:4.d
                int16_t* const r9_2
                
                if (cond:6_1)
                    r9_2 = &data_142d40450
                else
                    r9_2 = *(arg1 + 0x10)
                
                if (*(arg1 + 0x38) != 0)
                    r14_1 = *(arg1 + 0x30)
                
                int64_t* rax_44 = sub_140a300d0(&var_c8, &var_58, r14_1, r9_2, 1)
                
                if (&var_c8 != rax_44)
                    uint64_t rcx_46 = var_c8
                    
                    if (rcx_46 != 0)
                        sub_140a74f90(rcx_46)
                    
                    var_c8 = *rax_44
                    *rax_44 = 0
                    var_c0 = rax_44[1].d
                    var_bc = *(rax_44 + 0xc)
                    rax_44[1] = 0
                
                int16_t* const rcx_48 = var_58
                
                if (rcx_48 != 0)
                    sub_140a74f90(rcx_48)
                
                int64_t* result_2 = result_1
                
                if (result_2 != 0)
                    sub_140a74f90(result_2)
            
            uint64_t rcx_49 = var_b8
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
        else
            int16_t* const rcx_19 = &data_142d40450
            
            if (var_70 != 0)
                rcx_19 = var_78
            
            int32_t rax_20
            
            if (var_80_1 == 0)
                rax_20 = 0
            else
                rax_20 = var_80_1 - 1
            
            if (*(arg1 + 0x18) != 0)
                r14_1 = *(arg1 + 0x10)
            
            void* var_48_1 = &rcx_19[sx.q(rax_20)]
            r8_2 = 3
            rdx_9 = &var_58
            wchar16* var_50_2 = u"Embers"
        label_1425bfc6f:
            int64_t var_b0_2 = 0
            var_b8 = 0
            var_58 = r14_1
            sub_140b0f5f0(&var_b8, rdx_9, r8_2)
            uint64_t rcx_24 = var_c8
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            var_c8 = var_b8
            var_c0 = var_b0_2.d
            var_bc = var_b0_2:4.d
        uint64_t rcx_50 = var_68
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        int64_t rcx_51 = var_88
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
        
        int16_t* rcx_52 = var_78
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        goto label_1425c0043
    
    uint64_t rcx_14 = var_68
    *result = var_c8
    result[1].d = var_c0
    *(result + 0xc) = var_bc
    var_c0.q = 0
    var_c8 = 0
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_88
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int16_t* rcx_16 = var_78
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    uint64_t rcx_17 = var_c8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_f8)
return result
