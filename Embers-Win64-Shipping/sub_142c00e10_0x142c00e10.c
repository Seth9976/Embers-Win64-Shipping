// 函数: sub_142c00e10
// 地址: 0x142c00e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x11].d = 0
void* r14 = &arg1[0x21]
__builtin_memset(&arg1[0x12], 0, 0x18)
int32_t* r15 = &arg1[1]
__builtin_memset(&arg1[0x15], 0xff, 0x2c)
arg1[0x1b].d = 0
*(arg1 + 0xdc) = 0x2210
__builtin_memset(arg1 + 0xe4, 0, 0x14)
__builtin_memset(&arg1[0x1f], 0, 0x20)

if (r15[0xd].b == 0)
    r15[0xc] = sub_142bfb130(arg2)
    r15[0xd].b = 1

int32_t* rax_3 = sub_142bfc120(r15, sub_142bfb150(arg2, 0x43464620))
*arg1 = rax_3
int32_t* rax_4 = sub_142bf2890(rax_3)
*(r15 + 0x28) = rax_4
uint32_t rcx_4 = 0x4000
r15[7].b = 0
int64_t rdx_1 = *(rax_4 + 0x10)
*(r15 + 8) = rdx_1
int64_t r9_1 = zx.q(rax_4[6]) + rdx_1
r15[8] = 0
*(r15 + 0x10) = r9_1
uint64_t r8_1 = zx.q(r9_1.d - rdx_1.d)
*r15 = 0
int32_t var_e0 = r8_1.d
int64_t var_e8 = r9_1
int64_t var_f0 = rdx_1
uint32_t rax_5 = (r8_1 << 3).d

if (rax_5 u> 0x4000)
    rcx_4 = rax_5

char const* const var_f8 = "start [%p..%p] (%lu bytes)"
r15[6] = rcx_4
int32_t var_100 = 1
int64_t var_108 = 0
int32_t* r13 = *arg1

if (r13[6] u>= 4)
    void* r13_1 = *(r13 + 0x10)
    
    if (r13_1 != &data_14369a5d0)
        char rax_6 = *(r13_1 + 2)
        int128_t* const rcx_6
        
        if (rax_6 != 0)
            rcx_6 = zx.q(rax_6) + r13_1
        else
            rcx_6 = &data_14369a5d0
        
        arg1[9] = rcx_6
        
        if (rcx_6 != &data_14369a5d0 && sub_142c04850(rcx_6, r15) != 0)
            char* rcx_10 = zx.q(sub_142bff5e0(arg1[9])) + arg1[9]
            arg1[0xa] = rcx_10
            
            if (rcx_10 != &data_14369a5d0 && sub_142c04850(rcx_10, r15) != 0)
                char* rcx_11 = arg1[0xa]
                
                if (zx.w(*rcx_11) * 0x100 != neg.w(zx.w(rcx_11[1])))
                    void var_88
                    sub_142bfcb90(rcx_11, &var_88, 0)
                    int64_t var_80
                    int32_t var_78
                    
                    if (var_78 u< 0xffffffff && sub_142bf7510(r15, var_80, var_78) != 0)
                        int64_t var_d0_1 = var_80
                        int64_t var_c0_1 = 0
                        int64_t var_c8_1 = 0
                        int32_t r12_2 = 0
                        var_c8_1.d = var_78
                        var_c0_1.d = 0
                        var_c0_1:4.b = 0
                        int64_t var_d8 = 0
                        int64_t var_b8
                        __builtin_memset(&var_b8, 0, 0x28)
                        sub_142c01bd0(&var_b8)
                        arg1[0x11].d = 0
                        __builtin_memset(&arg1[0x12], 0, 0x18)
                        __builtin_memset(&arg1[0x15], 0xff, 0x2c)
                        arg1[0x1b].d = 0
                        *(arg1 + 0xdc) = 0x2210
                        __builtin_memset(arg1 + 0xe4, 0, 0x14)
                        int64_t var_a0
                        var_a0.b = 0
                        int64_t var_a8
                        int32_t* result
                        
                        if (sub_142c027e0(&var_d8, &arg1[0x11]) == 0)
                        label_142c010e8:
                            result = sub_142bfdba0(arg1)
                        label_142c010f1:
                            
                            if (var_a8 == 0)
                                return result
                            
                            return j_sub_140a74f90(var_a8)
                        
                        if (var_a8 != 0)
                            j_sub_140a74f90(var_a8)
                        
                        uint64_t rax_13 = zx.q(*(arg1 + 0xe4))
                        
                        if (rax_13.d u> 2)
                            void* rcx_18 = rax_13 + r13_1
                            
                            if (rax_13.d == 0)
                                rcx_18 = &data_14369a5d0
                            
                            arg1[8] = rcx_18
                            
                            if (rcx_18 != &data_14369a5d0 && sub_142c059a0(rcx_18, r15) != 0)
                                goto label_142c01152
                        else
                            arg1[8] = &data_14369a5d0
                        label_142c01152:
                            arg1[0x10].d = 1
                            
                            if (*(arg1 + 0xcc) == 0xffffffff)
                                arg1[0xe] = &data_14369a5d0
                                arg1[0xf] = &data_14369a5d0
                            label_142c0120f:
                                char* rcx_25 = zx.q(sub_142bff5e0(arg1[0xa])) + arg1[0xa]
                                arg1[0xb] = rcx_25
                                
                                if (rcx_25 != &data_14369a5d0 && sub_142c04850(rcx_25, r15) != 0)
                                    char* rcx_28 = zx.q(sub_142bff5e0(arg1[0xb])) + arg1[0xb]
                                    arg1[0xc] = rcx_28
                                    char rax_26
                                    
                                    if (rcx_28 != &data_14369a5d0)
                                        rax_26 = sub_142c04850(rcx_28, r15)
                                    
                                    if (rcx_28 == &data_14369a5d0 || rax_26 != 0)
                                        uint64_t rax_27 = zx.q(arg1[0x14].d)
                                        void* rcx_29 = rax_27 + r13_1
                                        
                                        if (rax_27.d == 0)
                                            rcx_29 = &data_14369a5d0
                                        
                                        arg1[0xd] = rcx_29
                                        
                                        if (rcx_29 != &data_14369a5d0
                                                && sub_142c04850(rcx_29, r15) != 0)
                                            char* rax_29 = arg1[0xd]
                                            uint32_t rcx_32 = (zx.d(*rax_29) << 8) + zx.d(rax_29[1])
                                            arg1[0x23].d = rcx_32
                                            
                                            if (rcx_32 == arg1[7].d)
                                                result = sub_142c04410(r14, arg1[0x10].d)
                                                int32_t i = 0
                                                
                                                if (arg1[0x10].d u> 0)
                                                    do
                                                        result = sub_142bfcd90(r14, i)
                                                        i += 1
                                                        *result = 0
                                                        __builtin_memset(&result[2], 0, 0x14)
                                                        *(result + 0x20) = &data_14369a5d0
                                                    while (i u< arg1[0x10].d)
                                                    
                                                    r15 = &arg1[1]
                                                
                                                if (*(arg1 + 0xcc) != 0xffffffff)
                                                    if (arg1[0x10].d u<= 0)
                                                        return result
                                                    
                                                    while (true)
                                                        sub_142bfcb90(arg1[0xe], &var_88, r12_2)
                                                        
                                                        if (var_78 u>= 0xffffffff)
                                                            return sub_142bfdba0(arg1)
                                                        
                                                        if (sub_142bf7510(r15, var_80, var_78) == 0)
                                                            return sub_142bfdba0(arg1)
                                                        
                                                        int64_t var_d0_2 = var_80
                                                        int64_t var_b0_1 = 0
                                                        var_c0_1.d = 0
                                                        var_a8 = 0
                                                        var_c8_1.d = var_78
                                                        var_c0_1:4.b = 0
                                                        sub_142c01bd0(&var_b8)
                                                        var_a0.b = 0
                                                        int32_t* rax_32 = sub_142c04170(&arg1[0x1f])
                                                        int128_t zmm1_1 = data_14369a5e0.o
                                                        data_144017550 = data_14369a5d0
                                                        data_144017570 = 0
                                                        data_144017560.o = zmm1_1
                                                        
                                                        if (rax_32 == &data_144017550)
                                                            goto label_142c010e8
                                                        
                                                        *rax_32 = 0
                                                        __builtin_memset(&rax_32[2], 0, 0x1c)
                                                        rax_32[9] = 0xffffffff
                                                        
                                                        if (sub_142c025a0(&var_d8, rax_32) == 0)
                                                            goto label_142c010e8
                                                        
                                                        int32_t* rax_34 = sub_142bfcd90(r14, r12_2)
                                                        int32_t rdi_4 = rax_32[7]
                                                        void* r14_2 = zx.q(rax_32[6]) + r13_1
                                                        
                                                        if (rdi_4 u>= 0xffffffff)
                                                            goto label_142c010e8
                                                        
                                                        if (sub_142bf7510(r15, r14_2, rdi_4) == 0)
                                                            goto label_142c010e8
                                                        
                                                        int32_t var_58_1 = rdi_4
                                                        int64_t var_40_1 = 0
                                                        int32_t var_50_1 = 0
                                                        int64_t var_38_1 = 0
                                                        void* var_60_1 = r14_2
                                                        char var_4c_1 = 0
                                                        void var_48
                                                        sub_142c01bd0(&var_48)
                                                        *rax_34 = 0
                                                        __builtin_memset(&rax_34[2], 0, 0x14)
                                                        char var_30_1 = 0
                                                        *(rax_34 + 0x20) = &data_14369a5d0
                                                        void var_68
                                                        
                                                        if (sub_142c026c0(&var_68, rax_34) != 0)
                                                            result = zx.q(rax_34[6])
                                                            char* rcx_44 = r14_2 + result
                                                            
                                                            if (result.d == 0)
                                                                rcx_44 = &data_14369a5d0
                                                            
                                                            *(rax_34 + 0x20) = rcx_44
                                                            
                                                            if (rcx_44 != &data_14369a5d0)
                                                                result = sub_142c04850(rcx_44, r15)
                                                            
                                                            if (rcx_44 == &data_14369a5d0
                                                                    || result.b != 0)
                                                                if (var_38_1 != 0)
                                                                    result = j_sub_140a74f90(var_38_1)
                                                                
                                                                if (var_a8 != 0)
                                                                    result = j_sub_140a74f90(var_a8)
                                                                
                                                                r12_2 += 1
                                                                
                                                                if (r12_2 u>= arg1[0x10].d)
                                                                    return result
                                                                
                                                                r14 = &arg1[0x21]
                                                                continue
                                                        
                                                        result = sub_142bfdba0(arg1)
                                                        
                                                        if (var_38_1 != 0)
                                                            result = j_sub_140a74f90(var_38_1)
                                                        
                                                        break
                                                    
                                                    goto label_142c010f1
                                                
                                                int32_t* rax_37 = sub_142bfcd90(r14, 0)
                                                int32_t rsi_3 = arg1[0x1e].d
                                                void* r14_4 = zx.q(*(arg1 + 0xec)) + r13_1
                                                
                                                if (rsi_3 u< 0xffffffff
                                                        && sub_142bf7510(r15, r14_4, rsi_3) != 0)
                                                    int64_t var_b0_2 = 0
                                                    var_a8 = 0
                                                    void* var_d0_3 = r14_4
                                                    var_c8_1.d = rsi_3
                                                    var_c0_1.d = 0
                                                    var_c0_1:4.b = 0
                                                    sub_142c01bd0(&var_b8)
                                                    *rax_37 = 0
                                                    __builtin_memset(&rax_37[2], 0, 0x14)
                                                    *(rax_37 + 0x20) = &data_14369a5d0
                                                    var_a0.b = 0
                                                    
                                                    if (sub_142c026c0(&var_d8, rax_37) == 0)
                                                        goto label_142c010e8
                                                    
                                                    result = zx.q(rax_37[6])
                                                    char* rcx_53 = r14_4 + result
                                                    
                                                    if (result.d == 0)
                                                        rcx_53 = &data_14369a5d0
                                                    
                                                    *(rax_37 + 0x20) = rcx_53
                                                    
                                                    if (rcx_53 == &data_14369a5d0)
                                                        goto label_142c010f1
                                                    
                                                    result = sub_142c04850(rcx_53, r15)
                                                    
                                                    if (result.b != 0)
                                                        goto label_142c010f1
                                                    
                                                    goto label_142c010e8
                            else
                                uint64_t rax_15 = zx.q(*(arg1 + 0xa4))
                                void* rcx_19 = rax_15 + r13_1
                                
                                if (rax_15.d == 0)
                                    rcx_19 = &data_14369a5d0
                                
                                uint64_t rax_16 = zx.q(arg1[0x1d].d)
                                arg1[0xe] = rcx_19
                                void* rax_17
                                
                                if (rax_16.d == 0)
                                    rax_17 = &data_14369a5d0
                                else
                                    rax_17 = rax_16 + r13_1
                                
                                arg1[0xf] = rax_17
                                
                                if (rcx_19 != &data_14369a5d0 && sub_142c04850(rcx_19, r15) != 0)
                                    char* rcx_20 = arg1[0xf]
                                    
                                    if (rcx_20 != &data_14369a5d0)
                                        char* rax_19 = arg1[0xe]
                                        
                                        if (sub_142c05c00(rcx_20, r15, 
                                                (zx.d(*rax_19) << 8) + zx.d(rax_19[1])) != 0)
                                            char* rax_22 = arg1[0xe]
                                            arg1[0x10].d = zx.d(rax_22[1]) + (zx.d(*rax_22) << 8)
                                            goto label_142c0120f

return sub_142bfdba0(arg1)
