// 函数: sub_14297a260
// 地址: 0x14297a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_c8 = 0
struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x10)
int32_t code_1
struct _Mtx_internal_imp_t* mtx_1

if (mtx == 0)
    int64_t r12_1 = arg3 << 3
    int64_t r13_1 = arg4 << 3
    mtx_1 = nullptr
    int64_t var_d0_1 = 0
    mtx_1 = sub_140e348a0()
    void* rdi_1 = arg1 + 0x18
    int128_t var_70_1 = data_143702ea0
    char var_80 = 0
    int32_t var_c8_1 = 1
    sub_14058c000(&var_80, *(rdi_1 + 0x10) + 1)
    void* r9_1 = rdi_1
    
    if (*(rdi_1 + 0x18) u>= 0x10)
        r9_1 = *rdi_1
    
    char* rsi_1 = *(rdi_1 + 0x10)
    int64_t rcx_6 = var_70_1.q
    int64_t rdx_3 = var_70_1:8.q
    
    if (rsi_1 u> rdx_3 - rcx_6)
        sub_1409093f0(&var_80, rsi_1, 0, r9_1, rsi_1)
    else
        var_70_1.q = &rsi_1[rcx_6]
        char* rbx = &var_80
        
        if (rdx_3 u>= 0x10)
            rbx = var_80.q
        
        void* rbx_1 = &rbx[rcx_6]
        memmove(rbx_1, r9_1, rsi_1.d)
        *(rsi_1 + rbx_1) = 0
    
    int64_t rcx_9 = var_70_1.q
    int64_t rdx_6 = var_70_1:8.q
    
    if (rdx_6 - rcx_9 u< 1)
        sub_1409093f0(&var_80, 1, 0, &data_142d93d38, 1)
    else
        var_70_1.q = rcx_9 + 1
        char* rbx_2 = &var_80
        
        if (rdx_6 u>= 0x10)
            rbx_2 = var_80.q
        
        void* rbx_3 = &rbx_2[rcx_9]
        memmove(rbx_3, &data_142d93d38, 1)
        *(rbx_3 + 1) = 0
    
    void var_b8
    sub_142984c70(&mtx_1, &var_80, 
        sub_142984980(&var_b8, 1, arg2, r12_1, r13_1, 1, 1, (zx.o(0)).q, 0, 0))
    int64_t rdx_8 = var_70_1:8.q
    
    if (rdx_8 u>= 0x10)
        void* rcx_14 = var_80.q
        void* rax_11 = rcx_14
        
        if (rdx_8 + 1 u>= 0x1000)
            rcx_14 = *(rcx_14 - 8)
            
            if (rax_11 - rcx_14 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_14)
    
    int128_t var_70_2 = data_143702ea0
    var_80 = 0
    int32_t var_c8_2 = 2
    sub_14058c000(&var_80, *(rdi_1 + 0x10) + 1)
    void* r9_3 = rdi_1
    
    if (*(rdi_1 + 0x18) u>= 0x10)
        r9_3 = *rdi_1
    
    char* rsi_2 = *(rdi_1 + 0x10)
    void* rcx_16 = var_70_2.q
    int64_t rdx_12 = var_70_2:8.q
    
    if (rsi_2 u> rdx_12 - rcx_16)
        sub_1409093f0(&var_80, rsi_2, 0, r9_3, rsi_2)
    else
        var_70_2.q = rcx_16 + rsi_2
        char* rbx_4 = &var_80
        
        if (rdx_12 u>= 0x10)
            rbx_4 = var_80.q
        
        void* rbx_5 = rbx_4 + rcx_16
        memmove(rbx_5, r9_3, rsi_2.d)
        *(rsi_2 + rbx_5) = 0
    
    int64_t rcx_19 = var_70_2.q
    int64_t rdx_15 = var_70_2:8.q
    
    if (rdx_15 - rcx_19 u< 1)
        sub_1409093f0(&var_80, 1, 0, &(*U"DEFGAB")[3], 1)
    else
        var_70_2.q = rcx_19 + 1
        char* rbx_6 = &var_80
        
        if (rdx_15 u>= 0x10)
            rbx_6 = var_80.q
        
        void* rbx_7 = &rbx_6[rcx_19]
        memmove(rbx_7, &(*U"DEFGAB")[3], 1)
        *(rbx_7 + 1) = 0
    
    sub_142984c70(&mtx_1, &var_80, 
        sub_142984980(&var_b8, 1, arg2 + 2, r12_1, r13_1, 1, 1, (zx.o(0)).q, 0, 0))
    int64_t rdx_17 = var_70_2:8.q
    
    if (rdx_17 u>= 0x10)
        void* rcx_24 = var_80.q
        void* rax_21 = rcx_24
        
        if (rdx_17 + 1 u>= 0x1000)
            rcx_24 = *(rcx_24 - 8)
            
            if (rax_21 - rcx_24 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_24)
    
    int128_t var_70_3 = data_143702ea0
    var_80 = 0
    int32_t var_c8_3 = 4
    sub_14058c000(&var_80, *(rdi_1 + 0x10) + 1)
    void* r9_5 = rdi_1
    
    if (*(rdi_1 + 0x18) u>= 0x10)
        r9_5 = *rdi_1
    
    char* rsi_3 = *(rdi_1 + 0x10)
    int64_t rcx_26 = var_70_3.q
    int64_t rdx_21 = var_70_3:8.q
    
    if (rsi_3 u> rdx_21 - rcx_26)
        sub_1409093f0(&var_80, rsi_3, 0, r9_5, rsi_3)
    else
        var_70_3.q = &rsi_3[rcx_26]
        char* rbx_8 = &var_80
        
        if (rdx_21 u>= 0x10)
            rbx_8 = var_80.q
        
        void* rbx_9 = &rbx_8[rcx_26]
        memmove(rbx_9, r9_5, rsi_3.d)
        *(rsi_3 + rbx_9) = 0
    
    int64_t rcx_29 = var_70_3.q
    int64_t rdx_24 = var_70_3:8.q
    
    if (rdx_24 - rcx_29 u< 1)
        sub_1409093f0(&var_80, 1, 0, &(*U"DEFGAB")[5], 1)
    else
        var_70_3.q = rcx_29 + 1
        char* rbx_10 = &var_80
        
        if (rdx_24 u>= 0x10)
            rbx_10 = var_80.q
        
        void* rbx_11 = &rbx_10[rcx_29]
        memmove(rbx_11, &(*U"DEFGAB")[5], 1)
        *(rbx_11 + 1) = 0
    
    sub_142984c70(&mtx_1, &var_80, 
        sub_142984980(&var_b8, 1, arg2 + 4, r12_1, r13_1, 1, 1, (zx.o(0)).q, 0, 0))
    int64_t rdx_26 = var_70_3:8.q
    
    if (rdx_26 u>= 0x10)
        void* rcx_34 = var_80.q
        void* rax_31 = rcx_34
        
        if (rdx_26 + 1 u>= 0x1000)
            rcx_34 = *(rcx_34 - 8)
            
            if (rax_31 - rcx_34 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_34)
    
    int128_t var_70_4 = data_143702ea0
    var_80 = 0
    int32_t var_c8_4 = 8
    void* rsi_4 = rdi_1 + 0x10
    sub_14058c000(&var_80, *rsi_4 + 1)
    
    if (*(rdi_1 + 0x18) u>= 0x10)
        rdi_1 = *rdi_1
    
    char* rsi_5 = *rsi_4
    void* rcx_36 = var_70_4.q
    int64_t rdx_30 = var_70_4:8.q
    
    if (rsi_5 u> rdx_30 - rcx_36)
        sub_1409093f0(&var_80, rsi_5, 0, rdi_1, rsi_5)
    else
        var_70_4.q = rcx_36 + rsi_5
        char* rbx_12 = &var_80
        
        if (rdx_30 u>= 0x10)
            rbx_12 = var_80.q
        
        void* rbx_13 = rbx_12 + rcx_36
        memmove(rbx_13, rdi_1, rsi_5.d)
        *(rsi_5 + rbx_13) = 0
    
    int64_t rcx_39 = var_70_4.q
    int64_t rdx_33 = var_70_4:8.q
    
    if (rdx_33 - rcx_39 u< 1)
        sub_1409093f0(&var_80, 1, 0, &(*U"DEFGAB")[4], 1)
    else
        var_70_4.q = rcx_39 + 1
        char* rbx_14 = &var_80
        
        if (rdx_33 u>= 0x10)
            rbx_14 = var_80.q
        
        void* rbx_15 = &rbx_14[rcx_39]
        memmove(rbx_15, &(*U"DEFGAB")[4], 1)
        *(rbx_15 + 1) = 0
    
    sub_142984c70(&mtx_1, &var_80, 
        sub_142984980(&var_b8, 1, arg2 + 6, r12_1, r13_1, 1, 1, 0x3ff0000000000000, 0, 0))
    int64_t rdx_35 = var_70_4:8.q
    
    if (rdx_35 u>= 0x10)
        void* rcx_44 = var_80.q
        void* rax_41 = rcx_44
        
        if (rdx_35 + 1 u>= 0x1000)
            rcx_44 = *(rcx_44 - 8)
            
            if (rax_41 - rcx_44 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_44)
    
    sub_142988f40(*(arg1 + 8), &mtx_1)
    code_1 = sub_140e309f0(&mtx_1)
else
    mtx_1 = mtx
    int32_t code = _Mtx_lock(mtx)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    int64_t var_d0
    var_d0.b = 1
    sub_142979b00(*(arg1 + 0x10), arg2, arg3, arg4, arg1 + 0x18)
    code_1 = _Mtx_unlock(mtx)
    
    if (code_1 != 0)
        std::_Throw_C_error(code_1)
        noreturn
__security_check_cookie(rax_1 ^ &var_128)
return code_1
