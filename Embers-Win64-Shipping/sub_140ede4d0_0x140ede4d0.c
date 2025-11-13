// 函数: sub_140ede4d0
// 地址: 0x140ede4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rax_2
int32_t r8
rax_2, r8 = sub_140ac6680(arg1 + 0x478)
int32_t rdi = rax_2[1].d
int64_t rbx = *rax_2
int64_t var_128 = 0
sub_1405a4c70(&var_128, sbb.d(r8, r8, rdi != 0) + 2 + rdi, 0)
memcpy(var_128, rbx, rdi * 2)

if (arg2 != 0)
    int32_t rbx_1 = rdi - 1
    
    if (rdi s<= 0)
        rbx_1 = 0
    
    int32_t rax_3
    rax_3.b = rdi s<= 0
    int32_t rax_5 = rax_3 + 1 + rdi
    int32_t var_120_1 = rax_5
    int32_t var_11c
    
    if (rax_5 s> var_11c)
        sub_140594770(&var_128)
    
    int64_t rcx_5 = sx.q(rbx_1)
    *(var_128 + (rcx_5 << 1)) = arg2
    *(var_128 + (rcx_5 << 1) + 2) = 0

void var_b8
int64_t* rax_8 = sub_140aae2f0(&var_b8, &var_128)
int64_t rdx_5 = *(arg1 + 0x478)
*(arg1 + 0x478) = *rax_8
*rax_8 = rdx_5
int64_t rdx_6 = *(arg1 + 0x480)
*(arg1 + 0x480) = rax_8[1]
rax_8[1] = rdx_6
*(arg1 + 0x488) = rax_8[2].d
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_12 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

int64_t rcx_11 = var_128

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (*(arg1 + 0x458) != 0 && *(arg1 + 0x468) != 0)
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, 0xf)
    int32_t rax_14 = var_110_1 + 0xf
    var_110_1 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_118)
    
    sub_1405a7220(var_118, 0xf, "Searching: {0}", 0xf, 0x3f)
    int64_t* rdi_2 = *(arg1 + 0x480)
    int64_t r12_1 = *(arg1 + 0x478)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int32_t rsi_1 = *(arg1 + 0x488)
    void var_88
    char* var_70
    char** rax_16 = sub_140a96390(&var_70, sub_140aae2f0(&var_88, &var_118))
    int32_t var_60_1 = 4
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    char var_38_1 = 1
    int32_t* var_108 = nullptr
    int32_t var_100_1 = 1
    sub_1405a4b40(&var_108, 1, 0)
    int32_t* rcx_18 = var_108
    *rcx_18 = var_60_1
    int64_t var_58
    *(rcx_18 + 8) = var_58
    *(rcx_18 + 8) = var_58
    rcx_18[2] = var_58.d
    *(rcx_18 + 8) = var_58
    rcx_18[0xa].b = 0
    
    if (var_38_1 != 0)
        *(rcx_18 + 0x10) = r12_1
        *(rcx_18 + 0x18) = rdi_2
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        rcx_18[8] = rsi_1
        rcx_18[0xa].b = 1
    
    char* var_c8 = *rax_16
    void* rax_24 = rax_16[1]
    void* var_c0_1 = rax_24
    
    if (rax_24 != 0)
        *(rax_24 + 8) += 1
    
    void var_a0
    int64_t* rax_25 = sub_140aac870(&var_a0, &var_c8, &var_108)
    int64_t var_f8 = *rax_25
    int64_t* rcx_21 = rax_25[1]
    
    if (rcx_21 != 0)
        rcx_21[1].d += 1
    
    int32_t var_e8_1 = rax_25[2].d
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t rax_29 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*var_98 + 8))(var_98, 1)
    
    sub_140596f50(&var_108)
    
    if (var_38_1 != 0)
        char var_38_2 = 0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rax_33 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* rsi_4 = rax_16[1]
    
    if (rsi_4 != 0)
        rsi_4[1].d -= 1
        
        if (rsi_4[1].d == 1)
            (**rsi_4)(rsi_4)
            int32_t rax_37 = *(rsi_4 + 0xc)
            *(rsi_4 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rsi_4 + 8))(rsi_4, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rax_41 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rax_41 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    sub_140f8d4f0(*(arg1 + 0x458), &var_f8)
    
    if (rcx_21 != 0)
        rcx_21[1].d -= 1
        
        if (rcx_21[1].d == 1)
            (**rcx_21)(rcx_21)
            int32_t rax_45 = *(rcx_21 + 0xc)
            *(rcx_21 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*rcx_21 + 8))(rcx_21, 1)
    
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t rbx_2 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_80 + 8))(var_80, zx.q(rbx_2))
    
    int64_t rcx_36 = var_118
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    int64_t* rcx_37 = *(arg1 + 0x468)
    char var_e0 = data_1439ae51c
    char var_df_1 = 1
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0
    (*(*rcx_37 + 0x1d8))(rcx_37, &var_e0)

int512_t result = sub_140eb9c60(arg1)
__security_check_cookie(rax_1 ^ &var_158)
return result
