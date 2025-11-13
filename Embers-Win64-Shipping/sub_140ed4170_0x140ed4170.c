// 函数: sub_140ed4170
// 地址: 0x140ed4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t rdx = *(sub_140ac6680(arg1 + 0x478) + 8)
int32_t rax_3 = rdx - 1

if (rdx == 0)
    rax_3 = 0

int512_t result

if (rax_3 s> 1)
    int64_t* rax_4 = sub_140ac6680(arg1 + 0x478)
    int32_t rcx_3 = rax_4[1].d
    int16_t* r15_1
    
    if (rcx_3 == 0)
        r15_1 = &data_142d40450
    else
        r15_1 = *rax_4
    
    int64_t var_128 = 0
    int32_t rax_5 = rcx_3 - 2
    
    if (rcx_3 == 0)
        rax_5 = -1
    
    int32_t rdi_1 = 0
    int32_t rdx_1 = 0
    int32_t rcx_4 = 0
    int32_t var_120_1 = 0
    
    if (rax_5 s>= 0)
        rdi_1 = rax_5
    
    int32_t var_11c_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rdi_1 s> 0)
        if (rdi_1 + 1 s> 0)
            sub_1405947f0(&var_128, rdi_1 + 1)
            rcx_4 = var_11c_1
            rdx_1 = var_120_1
        
        int32_t rax_8 = rdi_1 + 1 + rdx_1
        
        if (rax_8 s> rcx_4)
            sub_140594770(&var_128)
        
        UnDecorator::getReferenceType(var_128, r15_1, rdi_1 * 2)
        *(var_128 + (sx.q(rax_8) << 1) - 2) = 0
    
    void var_b8
    int64_t* rax_10 = sub_140aae2f0(&var_b8, &var_128)
    int64_t rdx_5 = *(arg1 + 0x478)
    *(arg1 + 0x478) = *rax_10
    *rax_10 = rdx_5
    int64_t rdx_6 = *(arg1 + 0x480)
    *(arg1 + 0x480) = rax_10[1]
    rax_10[1] = rdx_6
    *(arg1 + 0x488) = rax_10[2].d
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t rax_14 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*var_b0 + 8))(var_b0, 1)
    
    int64_t rcx_14 = var_128
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    if (*(arg1 + 0x458) != 0 && *(arg1 + 0x468) != 0)
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        sub_1405947f0(&var_118, 0xf)
        int32_t rax_16 = var_110_1 + 0xf
        var_110_1 = rax_16
        
        if (rax_16 s> 0)
            sub_140594770(&var_118)
        
        sub_1405a7220(var_118, 0xf, "Searching: {0}", 0xf, 0x3f)
        int64_t* rdi_3 = *(arg1 + 0x480)
        int64_t r12_1 = *(arg1 + 0x478)
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
        
        int32_t rsi_1 = *(arg1 + 0x488)
        void var_88
        char* var_70
        char** rax_18 = sub_140a96390(&var_70, sub_140aae2f0(&var_88, &var_118))
        int32_t var_60_1 = 4
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
        
        char var_38_1 = 1
        int32_t* var_108 = nullptr
        int32_t var_100_1 = 1
        sub_1405a4b40(&var_108, 1, 0)
        int32_t* rcx_21 = var_108
        *rcx_21 = var_60_1
        int64_t var_58
        *(rcx_21 + 8) = var_58
        *(rcx_21 + 8) = var_58
        rcx_21[2] = var_58.d
        *(rcx_21 + 8) = var_58
        rcx_21[0xa].b = 0
        
        if (var_38_1 != 0)
            *(rcx_21 + 0x10) = r12_1
            *(rcx_21 + 0x18) = rdi_3
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
            
            rcx_21[8] = rsi_1
            rcx_21[0xa].b = 1
        
        char* var_c8 = *rax_18
        void* rax_26 = rax_18[1]
        void* var_c0_1 = rax_26
        
        if (rax_26 != 0)
            *(rax_26 + 8) += 1
        
        void var_a0
        int64_t* rax_27 = sub_140aac870(&var_a0, &var_c8, &var_108)
        int64_t var_f8 = *rax_27
        int64_t* rcx_24 = rax_27[1]
        
        if (rcx_24 != 0)
            rcx_24[1].d += 1
        
        int32_t var_e8_1 = rax_27[2].d
        int64_t* var_98
        
        if (var_98 != 0)
            var_98[1].d -= 1
            
            if (var_98[1].d == 1)
                (**var_98)(var_98)
                int32_t rax_31 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*var_98 + 8))(var_98, 1)
        
        sub_140596f50(&var_108)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_35 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rsi_4 = rax_18[1]
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t rax_39 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_43 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_43 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        sub_140f8d4f0(*(arg1 + 0x458), &var_f8)
        
        if (rcx_24 != 0)
            rcx_24[1].d -= 1
            
            if (rcx_24[1].d == 1)
                (**rcx_24)(rcx_24)
                int32_t rax_47 = *(rcx_24 + 0xc)
                *(rcx_24 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*(*rcx_24 + 8))(rcx_24, 1)
        
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t rbx_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_80 + 8))(var_80, zx.q(rbx_1))
        
        int64_t rcx_39 = var_118
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        int64_t* rcx_40 = *(arg1 + 0x468)
        char var_e0 = data_1439ae51c
        char var_df_1 = 1
        int64_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        (*(*rcx_40 + 0x1d8))(rcx_40, &var_e0)
    
    result = sub_140eb9c60(arg1)
else
    result = sub_140ed5fb0(arg1)

__security_check_cookie(rax_1 ^ &var_158)
return result
