// 函数: sub_142442a90
// 地址: 0x142442a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int16_t* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

uint64_t var_1c8
sub_1423fb9e0(&var_1c8, sub_1423e6dd0(data_143f5b298, arg1), rdi, (zx.d(arg3) ^ 1) * 2)
int32_t var_1a4
char result
uint64_t rcx_29

if (var_1a4 == 0)
    void var_d8
    int64_t* rax_3 = sub_140aae420(&var_d8, arg2)
    void var_140
    char* var_f8
    char** rax_5 = sub_140a96390(&var_f8, _vfprintf_p_l(&var_140, u"Invalid URL: {0}", u"Engine"))
    int64_t rcx_5 = *rax_3
    int64_t* rcx_6 = rax_3[1]
    int32_t var_a8_1 = 4
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
    
    int32_t rax_6 = rax_3[2].d
    char var_80_1 = 1
    int32_t* var_238 = nullptr
    int32_t var_230_1 = 1
    sub_1405a4b40(&var_238, 1, 0)
    int32_t* rcx_8 = var_238
    *rcx_8 = var_a8_1
    int64_t var_a0
    *(rcx_8 + 8) = var_a0
    *(rcx_8 + 8) = var_a0
    rcx_8[2] = var_a0.d
    *(rcx_8 + 8) = var_a0
    rcx_8[0xa].b = 0
    
    if (var_80_1 != 0)
        *(rcx_8 + 0x10) = rcx_5
        *(rcx_8 + 0x18) = rcx_6
        
        if (rcx_6 != 0)
            rcx_6[1].d += 1
        
        rcx_8[8] = rax_6
        rcx_8[0xa].b = 1
    
    char* var_1e8 = *rax_5
    void* rax_14 = rax_5[1]
    void* var_1e0_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_158
    int64_t* rax_15 = sub_140aac870(&var_158, &var_1e8, &var_238)
    int64_t var_218 = *rax_15
    int64_t* rcx_11 = rax_15[1]
    
    if (rcx_11 != 0)
        rcx_11[1].d += 1
    
    int32_t var_208_1 = rax_15[2].d
    int64_t* var_150
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t rax_19 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_150 + 8))(var_150, 1)
    
    sub_140596f50(&var_238)
    
    if (var_80_1 != 0)
        char var_80_2 = 0
        
        if (rcx_6 != 0)
            rcx_6[1].d -= 1
            
            if (rcx_6[1].d == 1)
                (**rcx_6)(rcx_6)
                int32_t rax_23 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
    
    int64_t* rdi_3 = rax_5[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_27 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_3[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_31 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* rax_33 = sub_140ac6680(&var_218)
    uint64_t var_258 = 0
    int32_t rdi_5 = rax_33[1].d
    int64_t r14_2 = *rax_33
    int32_t var_250_1 = rdi_5
    
    if (rdi_5 != 0)
        sub_1405a4c70(&var_258, rdi_5, 0)
        memcpy(var_258, r14_2, rdi_5 * 2)
    else
        int32_t var_24c_1 = 0
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            (**rcx_11)(rcx_11)
            int32_t rax_36 = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    int64_t* var_138
    
    if (var_138 != 0)
        var_138[1].d -= 1
        
        if (var_138[1].d == 1)
            (**var_138)(var_138)
            int32_t rbx_3 = *(var_138 + 0xc)
            *(var_138 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*var_138 + 8))(var_138, zx.q(rbx_3))
    
    result = sub_1423d27f0(data_143f5b298, arg1, 2, &var_258)
    rcx_29 = var_258
    goto label_1424431db

if (sub_1424130d0(&var_1c8, u"Restart") != 0)
    sub_141fa75e0(&var_1c8, sub_1423e6dd0(data_143f5b298, arg1))

void* rax_43 = sub_1423ef4c0(data_143f5b298, arg1)
result = sub_142445fb0(rax_43, arg1, &var_1c8, arg4)

if (result == 0 && *(rax_43 + 0x90) == result)
    void var_c0
    int64_t* rax_44 = sub_140aae420(&var_c0, arg2)
    void var_110
    char* var_e8
    char** rax_46 = sub_140a96390(&var_e8, _vfprintf_p_l(&var_110, u"Invalid URL: {0}", u"Engine"))
    int64_t rcx_38 = *rax_44
    int64_t* rcx_39 = rax_44[1]
    int32_t var_78_1 = 4
    
    if (rcx_39 != 0)
        rcx_39[1].d += 1
    
    int32_t rax_47 = rax_44[2].d
    char var_50_1 = 1
    int32_t* var_228 = nullptr
    int32_t var_220_1 = 1
    sub_1405a4b40(&var_228, 1, 0)
    int32_t* rcx_41 = var_228
    *rcx_41 = var_78_1
    int64_t var_70
    *(rcx_41 + 8) = var_70
    *(rcx_41 + 8) = var_70
    rcx_41[2] = var_70.d
    *(rcx_41 + 8) = var_70
    rcx_41[0xa].b = 0
    
    if (var_50_1 != 0)
        *(rcx_41 + 0x10) = rcx_38
        *(rcx_41 + 0x18) = rcx_39
        
        if (rcx_39 != 0)
            rcx_39[1].d += 1
        
        rcx_41[8] = rax_47
        rcx_41[0xa].b = 1
    
    char* var_1d8 = *rax_46
    void* rax_55 = rax_46[1]
    void* var_1d0_1 = rax_55
    
    if (rax_55 != 0)
        *(rax_55 + 8) += 1
    
    void var_128
    int64_t* rax_56 = sub_140aac870(&var_128, &var_1d8, &var_228)
    int64_t var_200 = *rax_56
    int64_t* rcx_44 = rax_56[1]
    
    if (rcx_44 != 0)
        rcx_44[1].d += 1
    
    int32_t var_1f0_1 = rax_56[2].d
    int64_t* var_120
    
    if (var_120 != 0)
        var_120[1].d -= 1
        
        if (var_120[1].d == 1)
            (**var_120)(var_120)
            int32_t rax_60 = *(var_120 + 0xc)
            *(var_120 + 0xc) -= 1
            
            if (rax_60 == 1)
                (*(*var_120 + 8))(var_120, 1)
    
    sub_140596f50(&var_228)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (rcx_39 != 0)
            rcx_39[1].d -= 1
            
            if (rcx_39[1].d == 1)
                (**rcx_39)(rcx_39)
                int32_t rax_64 = *(rcx_39 + 0xc)
                *(rcx_39 + 0xc) -= 1
                
                if (rax_64 == 1)
                    (*(*rcx_39 + 8))(rcx_39, 1)
    
    int64_t* rdi_10 = rax_46[1]
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t rax_68 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (rax_68 == 1)
                (*(*rdi_10 + 8))(rdi_10, 1)
    
    int64_t* rdi_11 = rax_44[1]
    
    if (rdi_11 != 0)
        rdi_11[1].d -= 1
        
        if (rdi_11[1].d == 1)
            (**rdi_11)(rdi_11)
            int32_t rax_72 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (rax_72 == 1)
                (*(*rdi_11 + 8))(rdi_11, 1)
    
    int64_t* rax_74 = sub_140ac6680(&var_200)
    uint64_t var_248 = 0
    int32_t rdi_12 = rax_74[1].d
    int64_t r14_4 = *rax_74
    int32_t var_240_1 = rdi_12
    
    if (rdi_12 != 0)
        sub_1405a4c70(&var_248, rdi_12, 0)
        memcpy(var_248, r14_4, rdi_12 * 2)
    else
        int32_t var_23c_1 = 0
    
    if (rcx_44 != 0)
        rcx_44[1].d -= 1
        
        if (rcx_44[1].d == 1)
            (**rcx_44)(rcx_44)
            int32_t rax_77 = *(rcx_44 + 0xc)
            *(rcx_44 + 0xc) -= 1
            
            if (rax_77 == 1)
                (*(*rcx_44 + 8))(rcx_44, 1)
    
    int64_t* var_108
    
    if (var_108 != 0)
        var_108[1].d -= 1
        
        if (var_108[1].d == 1)
            (**var_108)(var_108)
            int32_t rbx_5 = *(var_108 + 0xc)
            *(var_108 + 0xc) -= 1
            
            if (rbx_5 == 1)
                (*(*var_108 + 8))(var_108, zx.q(rbx_5))
    
    result = sub_1423d27f0(data_143f5b298, arg1, 2, &var_248)
    rcx_29 = var_248
label_1424431db:
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)

int64_t var_170

if (var_170 != 0)
    result = sub_140a74f90(var_170)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_180
int64_t* rbx_6 = var_180

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_63 = *rbx_6
        
        if (rcx_63 != 0)
            result = sub_140a74f90(rcx_63)
        
        rbx_6 = &rbx_6[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_6 = var_180

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

int64_t var_190

if (var_190 != 0)
    result = sub_140a74f90(var_190)

int64_t var_1a0

if (var_1a0 != 0)
    result = sub_140a74f90(var_1a0)

int64_t var_1b8

if (var_1b8 != 0)
    result = sub_140a74f90(var_1b8)

uint64_t rcx_68 = var_1c8

if (rcx_68 != 0)
    result = sub_140a74f90(rcx_68)

__security_check_cookie(rax_1 ^ &var_278)
return result
