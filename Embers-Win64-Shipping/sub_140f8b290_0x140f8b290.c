// 函数: sub_140f8b290
// 地址: 0x140f8b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rdi = 0
uint32_t i
uint32_t rbx_3

if (arg3 == 0)
    int64_t* rcx = arg1[3]
    int64_t r8 = arg1[9]
    int64_t var_168 = 0
    int64_t var_160_1 = 0
    (*(*rcx + 0x10))(rcx, &var_168, r8)
    void var_e8
    sub_140aae2f0(&var_e8, &var_168)
    int64_t rcx_2 = var_168
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t* rax_3 = sub_140ac6680(arg2)
    int16_t** rax_4 = sub_140ac6680(&var_e8)
    int16_t* const rcx_5 = &data_142d40450
    int16_t* const rdx_2
    
    if (rax_3[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_3
    
    if (rax_4[1].d != 0)
        rcx_5 = *rax_4
    
    void* rdx_3 = rdx_2 - rcx_5
    
    do
        uint32_t rbx_2 = zx.d(*rcx_5)
        i = zx.d(*(rcx_5 + rdx_3))
        rbx_3 = rbx_2 - i
        
        if (rbx_2 != i)
            break
        
        rcx_5 = &rcx_5[1]
    while (i != 0)
    
    int64_t* var_e0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t rax_7 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_e0 + 8))(var_e0, 1)

if (arg3 != 0 || rbx_3 != 0)
    int64_t rax_9 = sub_140ac6680(arg2)
    void var_b0
    
    if (&var_b0 != &arg1[0xf0] && arg1[0xf1].b != 0)
        arg1[0xf1].b = 0
    
    sub_140eec610(arg1[9])
    sub_140eec530(arg1[9])
    int64_t zmm0_1 = sub_140eec710(arg1[9])
    int64_t* rcx_13 = arg1[3]
    (*(*rcx_13 + 8))(rcx_13, rax_9, arg1[9])
    int64_t* rcx_14 = arg1[3]
    (*(*rcx_14 + 0x28))(rcx_14)
    void* r12_1 = arg1[9]
    
    if (*(r12_1 + 0x20) == 0)
        int64_t* rax_12 = j_sub_140a82f30(0x10)
        int64_t* rbx_5 = rax_12
        
        if (rax_12 == 0)
            rbx_5 = nullptr
        else
            *rax_12 = 0
            rax_12[1] = 0
        
        void*** rax_13 = j_sub_140a82f30(0x18)
        
        if (rax_13 == 0)
            rax_13 = nullptr
        else
            rax_13[1].d = 1
            *rax_13 = &data_142ee2130
            *(rax_13 + 0xc) = 1
            rax_13[2] = rbx_5
        
        uint128_t zmm0_2 = rbx_5.o
        uint128_t var_148 = zmm0_2
        void* rax_14 = _mm_bsrli_si128(zmm0_2, 8).q
        void**** var_180 = nullptr
        int32_t var_174_1 = 0
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        void var_8c
        memset(&var_8c, 0, 0x54)
        int64_t* rcx_16 = *arg1
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int64_t* r8_3 = &var_148
        int64_t* rdx_6 = &var_98
        int64_t* rbx_6
        int64_t* rsi_2
        void*** r15_1
        
        if ((*(*rcx_16 + 8))(rcx_16) == 0)
            void*** var_118
            void**** rax_18 = sub_140ef77e0(&var_118, rdx_6, r8_3, &arg1[0xc])
            rbx_6 = rax_18[1]
            r15_1 = *rax_18
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            int64_t* var_110
            rsi_2 = var_110
        else
            void*** var_128
            void**** rax_17 = sub_140ef7390(&var_128, rdx_6, r8_3, &arg1[0xc])
            rbx_6 = rax_17[1]
            r15_1 = *rax_17
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            int64_t* var_120
            rsi_2 = var_120
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp12_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
        
        int32_t var_178_1 = 1
        sub_1405a4f90(&var_180)
        void**** rsi_3 = var_180
        *rsi_3 = r15_1
        rsi_3[1] = rbx_6
        
        if (rbx_6 != 0)
            int32_t rax_21 = rbx_6[1].d
            rbx_6[1].d = rax_21
            
            if (rax_21 == 0)
                (**rbx_6)(rbx_6)
                int32_t temp13_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        int32_t var_40_2 = 0
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        sub_1405e1b50(&var_88, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_27 = var_88
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_98
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t* rbx_7 = var_148:8.q
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp15_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        uint128_t zmm0_3 = rbx_5.o
        int32_t var_130_1 = var_178_1
        uint128_t var_108 = zmm0_3
        int32_t var_12c_1 = var_174_1
        void* rax_28 = _mm_bsrli_si128(zmm0_3, 8).q
        void**** var_138 = rsi_3
        var_180 = nullptr
        var_178_1.q = 0
        
        if (rax_28 != 0)
            *(rax_28 + 8) += 1
        
        void var_d0
        sub_140ee7660(arg1[9], sub_140ee2090(&var_d0, &var_108, &var_138))
        void var_c0
        sub_140596d80(&var_c0)
        int64_t* var_c8
        
        if (var_c8 != 0)
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1)
                (**var_c8)(var_c8)
                int32_t temp18_1 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
        
        zmm0_1 = sub_140596d80(&var_180)
        
        if (rax_13 != 0)
            rax_13[1].d -= 1
            
            if (rax_13[1].d == 1)
                (**rax_13)(rax_13)
                int32_t temp19_1 = *(rax_13 + 0xc)
                *(rax_13 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*rax_13)[1](rax_13, 1)
    
    int64_t r9_2 = sx.q(*(r12_1 + 0x20))
    int64_t rcx_39 = sx.q(arg1[0xf2].d)
    int32_t rdx_10 = 0
    int32_t rax_34
    rax_34.b = arg1[0xf3].b == 1
    
    if (rax_34 + *(arg1 + 0x794) s>= 0)
        rdx_10 = rax_34 + *(arg1 + 0x794)
    
    int32_t rcx_42
    
    if (rcx_39.d s< r9_2.d)
        int32_t rax_37 = *(*(rcx_39 * 0x70 + *(r12_1 + 0x18)) + 8)
        rcx_42 = rax_37 - 1
        
        if (rax_37 == 0)
            rcx_42 = 0
    
    if (rcx_39.d s>= r9_2.d || rdx_10 s> rcx_42)
        void* r11_1 = arg1[9]
        int64_t rdx_11 = r9_2 * 0x70
        int32_t rax_39 = *(*(rdx_11 + *(r12_1 + 0x18) - 0x70) + 8)
        int32_t r8_5 = rax_39 - 1
        
        if (rax_39 == 0)
            r8_5 = 0
        
        int32_t var_188 = r9_2.d - 1
        bool r10_1 = false
        int32_t var_184_1 = r8_5
        int64_t rax_40 = var_188.q
        var_188.q = rax_40
        
        if (r8_5 s> 0)
            int32_t rcx_45 = *(*(*(r11_1 + 0x18) + rdx_11 - 0x70) + 8)
            int32_t rdx_13 = rcx_45 - 1
            
            if (rcx_45 == 0)
                rdx_13 = 0
            
            if (rdx_13 == r8_5)
                uint32_t rax_41 = (rax_40 u>> 0x20).d
                int32_t rcx_46 = 0
                var_188 = r9_2.d - 1
                r10_1 = true
                
                if (rax_41 - 1 s>= 0)
                    rcx_46 = rax_41 - 1
                
                int32_t var_184_2 = rcx_46
                var_188.q = var_188.q
        
        sub_140f8af60(&arg1[0xf2], r11_1, &var_188, r10_1, zmm0_1, var_188)
        bool cond:3_1 = arg1[0xf3].b == 1
        int64_t* rcx_48 = *arg1
        int32_t var_170 = arg1[0xf2].d
        int32_t rax_45
        rax_45.b = cond:3_1
        
        if (rax_45 + *(arg1 + 0x794) s>= 0)
            rdi = rax_45 + *(arg1 + 0x794)
        
        int32_t var_16c_1 = rdi
        (*(*rcx_48 + 0xa8))(rcx_48, &var_170)
        char rdx_16
        uint32_t r8_7
        rdx_16, r8_7 = sub_140f90a90(arg1, (&arg1[0xf2]).d)
        sub_140f8fc70(arg1, rdx_16, r8_7)
    
    int64_t* rcx_51 = *arg1
    void var_f8
    sub_140e19ef0(*(*(*rcx_51 + 0x80))(rcx_51, &var_f8), 1)
    int64_t* var_f0
    
    if (var_f0 != 0)
        var_f0[1].d -= 1
        
        if (var_f0[1].d == 1)
            (**var_f0)(var_f0)
            int32_t temp9_1 = *(var_f0 + 0xc)
            *(var_f0 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_f0 + 8))(var_f0, 1)
    
    i.b = 1
else
    i.b = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return i
