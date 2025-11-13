// 函数: sub_1405f7090
// 地址: 0x1405f7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* r14 = arg3
int64_t var_70
int64_t result

if ((*(*arg1 + 0x50))(arg1, &data_142d5b2f8, &var_70).d s>= 0)
    int64_t rdx = var_70
    result = rdx - 0x41be7cff14dd9a1c
    int64_t var_68
    
    if (rdx == 0x41be7cff14dd9a1c)
        result = var_68 - 0x71b5ecc61abab9b1
    
    bool cond:0_1 = result == 0
    
    if (result == 0)
        goto label_1405f7132
    
    if (rdx != 0x42d84ae78ac3587a || var_68 != 0xff9ee13600ae099)
        result.b = 0
    else
        cond:0_1 = result == 0
    label_1405f7132:
        int64_t rdi_1 = 0
        int16_t* pv = nullptr
        int32_t var_12c = 0
        int64_t rbx_1
        
        if ((*(*arg1 + 0x68))(arg1, &data_142d5b318, &pv, &var_12c, cond:0_1, pv) s< 0)
            void var_88
            int64_t* rax_14 = _vfprintf_p_l(&var_88, u"Unknown", u"WmfMedia")
            int64_t rdx_7 = *arg2
            *arg2 = *rax_14
            *rax_14 = rdx_7
            int64_t rdx_8 = arg2[1]
            arg2[1] = rax_14[1]
            rax_14[1] = rdx_8
            arg2[2].d = rax_14[2].d
            rbx_1 = -1
            int64_t* var_80
            
            if (var_80 != 0)
                var_80[1].d -= 1
                
                if (var_80[1].d == 1)
                    (**var_80)(var_80)
                    int32_t rax_18 = *(var_80 + 0xc)
                    *(var_80 + 0xc) -= 1
                    
                    if (rax_18 == 1)
                        (*(*var_80 + 8))(var_80, 1)
        else
            int16_t* pv_1 = pv
            int64_t var_118 = 0
            int32_t rdx_1 = 0
            int32_t var_110_1 = 0
            int32_t rcx_2 = 0
            int32_t var_10c_1 = 0
            rbx_1 = -1
            
            if (pv_1 != 0 && *pv_1 != 0)
                int64_t rsi_1 = -1
                
                do
                    rsi_1 += 1
                while (pv_1[rsi_1] != 0)
                
                if (rsi_1.d + 1 s> 0)
                    sub_1405947f0(&var_118, rsi_1.d + 1)
                    rcx_2 = var_10c_1
                    rdx_1 = var_110_1
                
                int32_t rax_7 = rsi_1.d + 1 + rdx_1
                int32_t var_110_2 = rax_7
                
                if (rax_7 s> rcx_2)
                    sub_140594770(&var_118)
                
                UnDecorator::getReferenceType(var_118, pv_1, (rsi_1.d + 1) * 2)
            
            void var_a0
            int64_t* rax_8 = sub_140aae2f0(&var_a0, &var_118)
            int64_t rdx_5 = *arg2
            *arg2 = *rax_8
            *rax_8 = rdx_5
            int64_t rdx_6 = arg2[1]
            arg2[1] = rax_8[1]
            rax_8[1] = rdx_6
            arg2[2].d = rax_8[2].d
            int64_t* var_98
            
            if (var_98 != 0)
                var_98[1].d -= 1
                
                if (var_98[1].d == 1)
                    (**var_98)(var_98)
                    int32_t rax_12 = *(var_98 + 0xc)
                    *(var_98 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*var_98 + 8))(var_98, 1)
            
            int64_t rcx_11 = var_118
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            CoTaskMemFree(pv)
            r14 = arg3
        
        int64_t rax_20 = *arg1
        
        if (cond:0_1 == 0)
            int32_t var_134 = 0
            
            if ((*(rax_20 + 0x38))(arg1, &data_142d5b338, &var_134) s>= 0)
                int64_t var_d8
                sub_140a2e390(&var_d8, u"Max Buffers: %i", zx.q(var_134))
                int32_t var_d0
                int32_t r8_9 = var_d0 - 1
                
                if (var_d0 == 0)
                    r8_9 = 0
                
                sub_140a20ba0(r14, var_d8, r8_9)
                int64_t rcx_28 = var_d8
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
        else
            int32_t var_138 = 0
            
            if ((*(rax_20 + 0x38))(arg1, &data_142d5b358, &var_138) s>= 0)
                int64_t var_c8
                int64_t var_b0
                sub_1405ea2f0(&var_c8, u"Role: ", sub_1405f1ee0(&var_b0, var_138))
                int64_t var_e8
                sub_1405ea0e0(&var_e8, &var_c8, &data_142d576a0)
                int32_t var_e0
                int32_t r8_6 = var_e0 - 1
                
                if (var_e0 == 0)
                    r8_6 = 0
                
                sub_140a20ba0(r14, var_e8, r8_6)
                int64_t rcx_23 = var_e8
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = var_c8
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                int64_t rcx_25 = var_b0
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
        
        int32_t var_130 = 0
        
        if ((*(*arg1 + 0x38))(arg1, &data_142d5b308, &var_130) s< 0)
            *arg4 = 0
        else
            int32_t rax_27
            rax_27.b = var_130 == 0
            *arg4 = rax_27.b
        
        void* const rax_28 = &data_142d5b328
        
        if (cond:0_1 != 0)
            rax_28 = &data_142d5b348
        
        int128_t var_60 = *rax_28
        wchar16 const* const r14_1 = u"vidcap://"
        
        if (cond:0_1 != 0)
            r14_1 = u"audcap://"
        
        int64_t rsi_6 = 0
        int64_t var_128 = 0
        int32_t rdx_13 = 0
        int32_t var_120_1 = 0
        int32_t rcx_31 = 0
        int32_t var_11c_1 = 0
        
        if (*r14_1 != 0)
            do
                rbx_1 += 1
            while (r14_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_128, rbx_1.d + 1)
                rcx_31 = var_11c_1
                rdx_13 = var_120_1
                rsi_6 = var_128
            
            int32_t rax_29 = rdx_13 + rbx_1.d + 1
            int32_t var_120_2 = rax_29
            
            if (rax_29 s> rcx_31)
                sub_140594770(&var_128)
                rsi_6 = var_128
            
            UnDecorator::getReferenceType(rsi_6, r14_1, (rbx_1.d + 1) * 2)
        
        if ((*(*arg1 + 0x68))(arg1, &var_60, &pv, &var_12c).d s>= 0)
            int64_t var_108
            sub_1405ea1f0(&var_108, &var_128, pv)
            
            if (arg5 == &var_108)
                rdi_1 = var_108
            else
                int64_t rcx_37 = *arg5
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                *arg5 = var_108
                var_108 = 0
                int32_t var_100
                arg5[1].d = var_100
                int32_t var_fc
                *(arg5 + 0xc) = var_fc
                var_100.q = 0
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            CoTaskMemFree(pv)
            rsi_6 = var_128
        
        if (rsi_6 != 0)
            sub_140a74f90(rsi_6)
        
        result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
