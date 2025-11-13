// 函数: sub_141d9b230
// 地址: 0x141d9b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
uint64_t result = arg5
void* r15 = arg1

if (*(arg1 + 0x398) == 1)
    int64_t rbx_1 = *arg2
    int32_t rsi_1 = arg2[1].d
    void* const r14_1 = nullptr
    void* const var_168 = nullptr
    void* const rdi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_168, rsi_1, 0)
        r14_1 = var_168
        arg1 = memcpy(r14_1, rbx_1, rsi_1 * 2)
        rdi_1 = r14_1
    else
        rdi_1 = nullptr
    
    void* var_158
    void* var_148
    
    if (rsi_1 s<= 1)
        int64_t* rax_3 = sub_140b291e0(sub_140b214c0(&var_158), &var_148, 0)
        
        if (&var_168 != rax_3)
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            r14_1 = *rax_3
            *rax_3 = 0
            rsi_1 = rax_3[1].d
            rax_3[1] = 0
        
        arg1 = var_148
        
        if (arg1 != 0)
            arg1 = sub_140a74f90(arg1)
    
    int32_t rdi_2 = *(r15 + 0x3a8)
    int64_t rbx_3 = *(r15 + 0x3a0)
    var_158 = nullptr
    sub_1405a4c70(&var_158, sbb.d(arg1.d, arg1.d, rdi_2 != 0) + 2 + rdi_2, 0)
    memcpy(var_158, rbx_3, rdi_2 * 2)
    int32_t rdi_3 = 1
    sub_140a20ba0(&var_158, &data_142d99650, 1)
    void* const rbx_4 = var_158
    var_158 = nullptr
    int32_t var_150_1
    var_150_1.q = 0
    void* const rdi_4
    
    if (rdi_2 s> 1)
        int32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        if (rdi_2 != 0 || rsi_2 == 0)
            rdi_3 = 0
        
        var_168 = rbx_4
        rbx_4 = nullptr
        int32_t rdx_9 = rdi_2 + rdi_3 + rsi_2
        int32_t var_14c
        int32_t var_15c_1 = var_14c
        
        if (rdx_9 s> var_14c)
            sub_1405947f0(&var_168, rdx_9)
        
        sub_140a20ba0(&var_168, r14_1, rsi_2)
        rdi_4 = var_168
        rsi_1 = rdi_2
        var_168 = nullptr
        int32_t var_160_2
        var_160_2.q = 0
    else
        var_148 = nullptr
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_148, rsi_1, 0)
            rdi_4 = var_148
            memcpy(rdi_4, r14_1, rsi_1 * 2)
        else
            rdi_4 = nullptr
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    void* var_a0_1 = r15
    void*** var_b8_1 = nullptr
    void** const var_a8 = &data_142da2668
    void (* var_c8)(void** arg1, int32_t* arg2) = sub_141d9beb0
    uint64_t var_130 = 0
    int32_t var_124
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_130, rsi_1, 0)
        memcpy(var_130, rdi_4, rsi_1 * 2)
    else
        var_124 = 0
    
    int64_t var_120
    sub_140596d10(&var_120, arg4)
    int64_t var_108
    sub_140596d10(&var_108, result)
    uint32_t count = arg6[1].d
    int64_t rsi_3 = *arg6
    int64_t var_f8 = 0
    
    if (count != 0)
        sub_1405da9e0(&var_f8, count, 0)
        memcpy(var_f8, rsi_3, count)
    else
        int32_t var_ec_1 = 0
    
    uint32_t count_1 = *(r15 + 0xf8)
    int64_t rsi_4 = *(r15 + 0xf0)
    int64_t var_e8 = 0
    int32_t var_dc
    
    if (count_1 != 0)
        sub_1405da9e0(&var_e8, count_1, 0)
        memcpy(var_e8, rsi_4, count_1)
    else
        var_dc = 0
    
    int64_t* rax_7 = sub_140a82f30(0x68, 8)
    *rax_7 = &data_143239710
    rax_7[1] = r15
    rax_7[2] = var_130
    rax_7[3].d = rsi_1
    *(rax_7 + 0x1c) = var_124
    var_130 = 0
    int32_t var_128_1
    var_128_1.q = 0
    sub_140596d10(&rax_7[4], &var_120)
    rax_7[6].d = arg3
    sub_140596d10(&rax_7[7], &var_108)
    rax_7[9] = 0
    int64_t r14_2 = var_f8
    rax_7[0xa].d = count
    
    if (count != 0)
        sub_1405da9e0(&rax_7[9], count, 0)
        memcpy(rax_7[9], r14_2, count)
    else
        *(rax_7 + 0x54) = count
    
    rax_7[0xb] = var_e8
    rax_7[0xc].d = count_1
    *(rax_7 + 0x64) = var_dc
    *rax_7 = &data_143239730
    void* const var_88
    void* const rax_12 = var_88
    
    if (rax_7 != -8)
        rax_12 = &data_141d9ba40
    
    var_88 = rax_12
    result = sub_141d92760(r15, 0xb, &var_88, &var_c8)
    
    if (var_88 != 0)
        void var_68
        int64_t* rcx_33 = &var_68
        
        if (rax_7 != 0)
            rcx_33 = rax_7
        
        result = (*(*rcx_33 + 0x10))(rcx_33)
    
    if (r14_2 != 0)
        result = sub_140a74f90(r14_2)
    
    int64_t rcx_35 = var_108
    
    if (rcx_35 != 0)
        result = sub_140a74f90(rcx_35)
    
    int64_t rcx_36 = var_120
    
    if (rcx_36 != 0)
        result = sub_140a74f90(rcx_36)
    
    uint64_t rcx_37 = var_130
    
    if (rcx_37 != 0)
        result = sub_140a74f90(rcx_37)
    
    if (var_c8 != 0)
        void** const* rcx_38 = &var_a8
        
        if (var_b8_1 != 0)
            rcx_38 = var_b8_1
        
        result = (*rcx_38)[2](rcx_38)
    
    if (rdi_4 != 0)
        result = sub_140a74f90(rdi_4)

__security_check_cookie(rax_1 ^ &var_188)
return result
