// 函数: sub_1425f5700
// 地址: 0x1425f5700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_58 = arg2
int16_t* var_e0
sub_140b2b230(&var_e0)
int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const r12 = &data_142d40450
int16_t* const rdx = &data_142d40450
int32_t var_d8

if (var_d8 != 0)
    rdx = var_e0

int64_t r8 = *rax_2
char rax_3 = (*(r8 + 0xd8))(rax_2, rdx, r8)
char rax_5

if (rax_3 == 0)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_d8 != 0)
        rdx_1 = var_e0
    
    rax_5 = (*(*rax_2 + 0xe0))(rax_2, rdx_1)

int64_t rbx

if (rax_3 != 0 || rax_5 != 0)
    int32_t rdi_1 = arg2[1].d
    int16_t* r14_3
    
    if (var_d8 s> 1)
        int32_t r15_1 = rdi_1 - 1
        
        if (rdi_1 == 0)
            r15_1 = 0
        
        int32_t rax_6
        
        if (var_d8 == 0)
            rax_6 = var_d8 + 1
        
        if (var_d8 != 0 || r15_1 == 0)
            rax_6 = 0
        
        int16_t* rdi_2 = var_e0
        int32_t rcx_5 = r15_1 + rax_6
        int16_t* var_f0 = nullptr
        
        if (var_d8 != 0 || rcx_5 != 0)
            sub_1405a4c70(&var_f0, rcx_5 + var_d8, 0)
            memcpy(var_f0, rdi_2, var_d8 * 2)
        else
            int32_t var_e4_1 = 0
        
        sub_140a20ba0(&var_f0, *var_58, r15_1)
        r14_3 = var_f0
        rdi_1 = var_d8
        var_f0 = nullptr
        int32_t var_e8_1
        var_e8_1.q = 0
    else
        int64_t r14_2 = *arg2
        var_58 = nullptr
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_58, rdi_1, 0)
            r14_3 = var_58
            memcpy(r14_3, r14_2, rdi_1 * 2)
        else
            r14_3 = nullptr
    
    int16_t* const r8_6 = &data_142d40450
    
    if (rdi_1 != 0)
        r8_6 = r14_3
    
    int16_t* pwszOutputURL_1
    (*(*rax_2 + 0x198))(rax_2, &pwszOutputURL_1, r8_6)
    
    if (r14_3 != 0)
        sub_140a74f90(r14_3)
    
    int64_t* rax_8 = j_sub_140a82f30(8)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        *rax_8 = 0
    
    int64_t* rdi_3 = *(arg1 + 0x10)
    
    if (rdi_3 != rax_8)
        *(arg1 + 0x10) = rax_8
        
        if (rdi_3 != 0)
            int64_t* rcx_11 = *rdi_3
            
            if (rcx_11 != 0)
                (*(*rcx_11 + 0x10))(rcx_11)
            
            j_sub_140a74f90(rdi_3)
    
    int16_t* const pwszOutputURL = &data_142d40450
    int64_t* ppSinkWriter = *(arg1 + 0x10)
    int32_t var_c8
    
    if (var_c8 != 0)
        pwszOutputURL = pwszOutputURL_1
    
    int64_t* rcx_13 = *ppSinkWriter
    *ppSinkWriter = 0
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x10))(rcx_13)
    
    if (MFCreateSinkWriterFromURL(pwszOutputURL, 0, 0, ppSinkWriter) s< 0)
        rbx.b = 0
    else if (arg3 == 0)
    label_1425f59d0:
        int16_t* var_90
        sub_1425f2e70(sub_1425f2bf0(), &var_90)
        int32_t var_88
        
        if (var_88 != 0)
            r12 = var_90
        
        if (sub_140a54570(r12, &data_1437020ab) == 0)
            rbx.b = 0
        else
            void var_80
            sub_1425f4eb0(*(arg1 + 0x10), &var_58, &var_90, &var_80)
            
            if (var_58:4.b == 0)
                rbx.b = 0
            else
                *(arg1 + 0xd8) = var_58.d
                int64_t* rcx_23 = **(arg1 + 0x10)
                
                if ((*(*rcx_23 + 0x28))(rcx_23) s< 0)
                    rbx.b = 0
                else
                    rbx.b = 1
        
        void var_68
        sub_140846380(&var_68)
        int16_t* rcx_27 = var_90
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    else
        int16_t* var_c0
        sub_1425f2d20(sub_1425f2bf0(), &var_c0)
        int16_t* const rcx_16 = &data_142d40450
        int32_t var_b8
        
        if (var_b8 != 0)
            rcx_16 = var_c0
        
        int32_t rax_13 = sub_140a54570(rcx_16, &data_1437020ab)
        void var_b0
        
        if (rax_13 != 0)
            sub_1425f4c60(*(arg1 + 0x10), &var_58, &var_c0, &var_b0)
        void var_a0
        
        if (rax_13 != 0 && var_58:4.b != 0)
            *(arg1 + 0xd4) = var_58.d
            sub_140846380(&var_a0)
            int16_t* rcx_19 = var_c0
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            goto label_1425f59d0
        
        sub_140846380(&var_a0)
        int16_t* rcx_25 = var_c0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        rbx.b = 0
    
    int16_t* pwszOutputURL_2 = pwszOutputURL_1
    
    if (pwszOutputURL_2 != 0)
        sub_140a74f90(pwszOutputURL_2)
else
    rbx.b = 0

int16_t* rcx_28 = var_e0

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rbx.b)
