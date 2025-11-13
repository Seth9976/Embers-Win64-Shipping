// 函数: sub_1418800f0
// 地址: 0x1418800f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t r15
r15.b = 0
int64_t* rdi = arg2
void var_c0
sub_141820450(&var_c0)
sub_141824770(rdi, &var_c0, arg4)
void* i_1

if ((*(rdi + 0x29) & 1) == 0)
    r15.b = 1
    void* i = i_1
    int32_t var_a8
    
    for (void* rax_4 = (sx.q(var_a8) << 5) + i; i != rax_4; i += 0x20)
        void var_98
        sub_141820510(&var_98)
        (*(*rdi + 0x178))(rdi, *(i + 0x10))
        sub_141824b20(rdi, &var_98, arg4)
        int16_t* var_e0
        void var_68
        sub_141829dd0(&var_e0, &var_68, 0x14)
        int16_t* const rsi_1 = &data_142d40450
        int16_t* r13_1 = var_e0
        int32_t var_d8
        
        if (var_d8 != 0)
            rsi_1 = r13_1
        
        int16_t* var_d0
        void var_70
        sub_141829dd0(&var_d0, &var_70, 8)
        int16_t* r12_1 = var_d0
        int16_t* var_100
        sub_140b291e0(i, &var_100, 0)
        int16_t* const r8 = &data_142d40450
        int16_t* const var_138_1 = rsi_1
        int32_t var_f8
        
        if (var_f8 != 0)
            r8 = var_100
        
        int64_t var_128
        arg4 = sub_140a2e390(&var_128, u"%s\t%s\t%s", r8)
        int16_t* rcx_9 = var_100
        
        if (rcx_9 != 0)
            arg4 = sub_140a74f90(rcx_9)
        
        if (r12_1 != 0)
            arg4 = sub_140a74f90(r12_1)
        
        if (r13_1 != 0)
            arg4 = sub_140a74f90(r13_1)
        
        if (*(arg1 + 0x28) != 0)
            int64_t var_f0
            arg4 = sub_140a2e390(&var_f0, u"\t%u", zx.q(*(i + 0x18)))
            int32_t var_e8
            int32_t r8_3
            
            if (var_e8 == 0)
                r8_3 = 0
            else
                r8_3 = var_e8 - 1
            
            sub_140a20ba0(&var_128, var_f0, r8_3)
            int64_t rcx_14 = var_f0
            
            if (rcx_14 != 0)
                arg4 = sub_140a74f90(rcx_14)
        
        int64_t rdi_2 = sx.q(arg3[1].d)
        int32_t rax_7 = (rdi_2 + 1).d
        arg3[1].d = rax_7
        
        if (rax_7 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        rdi = arg2
        int64_t* rcx_18 = (rdi_2 << 4) + *arg3
        *rcx_18 = 0
        *rcx_18 = var_128
        var_128 = 0
        int32_t var_120
        rcx_18[1].d = var_120
        int32_t var_11c
        *(rcx_18 + 0xc) = var_11c
        char rcx_19 = 0
        int32_t var_90
        int32_t var_8c
        int32_t var_88
        int32_t var_84
        
        if ((var_84 | var_88 | var_90 | var_8c) != 0)
            rcx_19 = r15.b
        
        var_120.q = 0
        r15 = zx.q(rcx_19)
        int64_t rcx_20 = var_128
        
        if ((*(rdi + 0x29) & 1) != 0)
            r15.b = 0
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            break
        
        if (rcx_20 != 0)
            arg4 = sub_140a74f90(rcx_20)

if (i_1 != 0)
    sub_140a74f90(i_1)

__security_check_cookie(rax_1 ^ &var_158)
return zx.q(r15.b)
