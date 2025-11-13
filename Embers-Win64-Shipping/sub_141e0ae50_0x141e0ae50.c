// 函数: sub_141e0ae50
// 地址: 0x141e0ae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t var_1ec = 0
int64_t rbx = *arg2
int32_t rax_2 = *(arg1 + 0x290)
int64_t var_1d8 = rbx
uint32_t result
int64_t var_1f8

if (rax_2 == *(arg1 + 0x2bc))
label_141e0aef5:
    var_1ec = *(arg1 + 0x2e0)
    int64_t* var_170 = arg2
    int32_t* var_168_1 = &var_1ec
    sub_140a5c330(arg1 + 0x288, &var_1d8, &var_170, nullptr)
    int64_t rdi_1 = sx.q(*(arg1 + 0x2e0))
    var_1f8 = 0
    int16_t var_1f0_1 = 0
    int32_t rax_8 = (rdi_1 + 1).d
    *(arg1 + 0x2e0) = rax_8
    
    if (rax_8 s> *(arg1 + 0x2e4))
        sub_14083a7e0(arg1 + 0x2d8)
    
    int64_t rcx_5 = *(arg1 + 0x2d8)
    int64_t rdx_6 = rdi_1 * 3
    int64_t zmm0_1 = var_1f8
    var_1f8 = 0
    *(rcx_5 + (rdx_6 << 2)) = zmm0_1
    *(rcx_5 + (rdx_6 << 2) + 8) = var_1f0_1.d
    int64_t rdi_2 = sx.q(*(arg1 + 0x2f0))
    int16_t var_1f0_2 = 0
    int32_t rax_10 = (rdi_2 + 1).d
    *(arg1 + 0x2f0) = rax_10
    
    if (rax_10 s> *(arg1 + 0x2f4))
        sub_14083a7e0(arg1 + 0x2e8)
    
    int64_t rcx_7 = *(arg1 + 0x2e8)
    int64_t rdx_8 = rdi_2 * 3
    result = var_1f0_2.d
    *(rcx_7 + (rdx_8 << 2)) = var_1f8
    *(rcx_7 + (rdx_8 << 2) + 8) = result
else
    int32_t rax_4 = sub_140b5ead0(rbx.d) + var_1d8:4.d
    void* r8_1 = arg1 + 0x2c0
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x2d0)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
        goto label_141e0aef5
    
    int64_t r8_2 = *(arg1 + 0x288)
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_6) * 5
        
        if (*(r8_2 + (rdx_3 << 2)) == rbx)
            break
        
        rax_6 = *(r8_2 + (rdx_3 << 2) + 0xc)
        
        if (rax_6 == 0xffffffff)
            goto label_141e0aef5
    
    if (rax_6 == 0xffffffff)
        goto label_141e0aef5
    
    void* rax_11 = sub_141df8410(*(arg1 + 0xa8), rdx_3)
    int64_t i_1 = 2
    int64_t var_1e8
    int64_t var_190
    int64_t* rcx_12
    int32_t rbx_1
    
    if (rax_11 == 0)
        var_1e8 = 0
        int32_t var_1e0_1 = 0
        sub_1405947f0(&var_1e8, 0xc)
        int32_t rax_13 = var_1e0_1 + 0xc
        var_1e0_1 = rax_13
        
        if (rax_13 s> 0)
            sub_140594770(&var_1e8)
        
        sub_1405a7220(var_1e8, 0xc, "Unavailable", 0xc, 0x3f)
        rcx_12 = &var_1e8
        rbx_1 = 2
    else
        int64_t var_1b0 = *(rax_11 + 0x18)
        sub_140b63b70(&var_1b0, &var_190)
        rcx_12 = &var_190
        rbx_1 = 1
    
    int64_t rax_14 = *rcx_12
    *rcx_12 = 0
    int64_t var_1c0 = rax_14
    int32_t var_1b8_1 = rcx_12[1].d
    int32_t var_1b4_1 = *(rcx_12 + 0xc)
    rcx_12[1] = 0
    
    if ((2 & rbx_1.b) != 0)
        int64_t rcx_16 = var_1e8
        rbx_1 &= 0xfffffffd
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
    
    if ((rbx_1.b & 1) != 0)
        int64_t rcx_17 = var_190
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    
    if (data_143de5480 != 0)
        result.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || result.b != 0)
        sub_140b58170(&var_1f8, "AnimBlueprintLog", 1)
        void var_d8
        int64_t* rax_17 = sub_140aae420(&var_d8, &var_1c0)
        int64_t var_150
        void var_c0
        int64_t* rax_19 = sub_140aae2f0(&var_c0, sub_140b63b70(arg2, &var_150))
        void var_128
        char* var_110
        char** rax_21 = sub_140a96390(&var_110, 
            _vfprintf_p_l(&var_128, 
                SLOTNODE: '{0}' in animation instance class {1} already exists. Remove duplicat", 
            AnimInstance"))
        int64_t var_98_1 = *rax_19
        void* rcx_25 = rax_19[1]
        int32_t var_a8_1 = 4
        void* var_90_1 = rcx_25
        
        if (rcx_25 != 0)
            *(rcx_25 + 8) += 1
        
        int32_t var_88_1 = rax_19[2].d
        int64_t var_68_1 = *rax_17
        void* rax_24 = rax_17[1]
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_24
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        int32_t var_58_1 = rax_17[2].d
        char var_50_1 = 1
        void* var_1d0 = nullptr
        int32_t var_1c8_1 = 2
        sub_1405a4b40(&var_1d0, 2, 0)
        void var_a0
        void* rdx_15 = &var_a0
        int64_t* rcx_28 = var_1d0 + 8
        int32_t i_2 = 2
        int32_t i
        
        do
            rcx_28[-1].d = *(rdx_15 - 8)
            *rcx_28 = *rdx_15
            *rcx_28 = *rdx_15
            *rcx_28 = *rdx_15
            *rcx_28 = *rdx_15
            rcx_28[4].b = 0
            
            if (*(rdx_15 + 0x20) != 0)
                rcx_28[1] = *(rdx_15 + 8)
                void* rax_32 = *(rdx_15 + 0x10)
                rcx_28[2] = rax_32
                
                if (rax_32 != 0)
                    *(rax_32 + 8) += 1
                
                rcx_28[3].d = *(rdx_15 + 0x18)
                rcx_28[4].b = 1
            
            rcx_28 = &rcx_28[6]
            rdx_15 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* var_180 = *rax_21
        void* rax_35 = rax_21[1]
        void* var_178_1 = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        void var_140
        int64_t* rax_36 = sub_140aac870(&var_140, &var_180, &var_1d0)
        int64_t var_1a8 = *rax_36
        int64_t* rcx_31 = rax_36[1]
        
        if (rcx_31 != 0)
            rcx_31[1].d += 1
        
        int32_t var_198_1 = rax_36[2].d
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t rax_40 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (rax_40 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        sub_140596f50(&var_1d0)
        int64_t __saved_rdi
        int64_t* rsi_1 = &__saved_rdi
        
        do
            i_1 -= 1
            rsi_1 = &rsi_1[-6]
            
            if (*rsi_1 != 0)
                *rsi_1 = 0
                int64_t* rbx_3 = rsi_1[-2]
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_44 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_44 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
        while (i_1 != 0)
        
        int64_t* rbx_4 = rax_21[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_48 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_48 == 1)
                    (*(*rbx_4 + 8))(rbx_4, zx.q((i_1 + 1).d))
        
        int64_t* rbx_5 = rax_19[1]
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_52 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_52 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* rbx_6 = rax_17[1]
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t rax_56 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_56 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        void var_160
        void var_100
        sub_140ae44d0(sub_140accdf0(&var_100, &var_1f8), &var_160, &var_1a8)
        int64_t* var_158
        
        if (var_158 != 0)
            var_158[1].d -= 1
            
            if (var_158[1].d == 1)
                (**var_158)(var_158)
                int32_t temp3_1 = *(var_158 + 0xc)
                *(var_158 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_158 + 8))(var_158, 1)
        
        result = sub_140acd9c0(&var_100)
        
        if (rcx_31 != 0)
            result = rcx_31[1].d
            rcx_31[1].d -= 1
            
            if (result == 1)
                (**rcx_31)(rcx_31)
                result = *(rcx_31 + 0xc)
                *(rcx_31 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rcx_31 + 8))(rcx_31, 1)
        
        int64_t* var_120
        
        if (var_120 != 0)
            result = var_120[1].d
            var_120[1].d -= 1
            
            if (result == 1)
                result = (**var_120)(var_120)
                int32_t rdi_3 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    result = (*(*var_120 + 8))(var_120, zx.q(rdi_3))
        
        int64_t rcx_52 = var_150
        
        if (rcx_52 != 0)
            result = sub_140a74f90(rcx_52)
    
    int64_t rcx_53 = var_1c0
    
    if (rcx_53 != 0)
        result = sub_140a74f90(rcx_53)
__security_check_cookie(rax_1 ^ &var_228)
return result
