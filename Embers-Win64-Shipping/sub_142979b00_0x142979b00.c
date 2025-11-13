// 函数: sub_142979b00
// 地址: 0x142979b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rdi = arg5
int32_t var_c8 = 0

if (*(arg1 + 0x198) == 0)
    int64_t* var_c0 = nullptr
    int64_t var_b8_1 = 0
    var_c0 = sub_140e348a0()
    int128_t var_50_1 = data_143702ea0
    char var_60 = 0
    int32_t var_c8_1 = 1
    int64_t* r15_1 = &rdi[2]
    sub_14058c000(&var_60, *r15_1 + 1)
    int64_t* r9 = rdi
    
    if (rdi[3] u>= 0x10)
        r9 = *rdi
    
    int64_t r14_1 = *r15_1
    int64_t rcx_1 = var_50_1.q
    int64_t rdx_2 = var_50_1:8.q
    
    if (r14_1 u> rdx_2 - rcx_1)
        sub_1409093f0(&var_60, r14_1, 0, r9, r14_1)
    else
        var_50_1.q = r14_1 + rcx_1
        char* rbx_1 = &var_60
        
        if (rdx_2 u>= 0x10)
            rbx_1 = var_60.q
        
        void* rbx_2 = &rbx_1[rcx_1]
        memmove(rbx_2, r9, r14_1.d)
        *(rbx_2 + r14_1) = 0
    
    int64_t rcx_4 = var_50_1.q
    int64_t rdx_5 = var_50_1:8.q
    
    if (rdx_5 - rcx_4 u< 1)
        sub_1409093f0(&var_60, 1, 0, &data_142d75054, 1)
    else
        var_50_1.q = rcx_4 + 1
        char* rbx_3 = &var_60
        
        if (rdx_5 u>= 0x10)
            rbx_3 = var_60.q
        
        void* rbx_4 = &rbx_3[rcx_4]
        memmove(rbx_4, &data_142d75054, 1)
        *(rbx_4 + 1) = 0
    
    void var_98
    sub_142984c70(&var_c0, &var_60, 
        sub_142984980(&var_98, 1, *(arg1 + 0x190) + 2 + (sx.q(0xd - *(arg1 + 0x5c)) << 3), 8, 0, 1, 
            1, 0x3fe0000000000000, 0, 0))
    int64_t rdx_7 = var_50_1:8.q
    
    if (rdx_7 u>= 0x10)
        void* rcx_10 = var_60.q
        void* rax_12 = rcx_10
        
        if (rdx_7 + 1 u>= 0x1000)
            rcx_10 = *(rcx_10 - 8)
            
            if (rax_12 - rcx_10 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_10)
    
    if (*(arg1 + 0x58) != 0)
        int128_t var_50_2 = data_143702ea0
        var_60 = 0
        int32_t var_c8_2 = 2
        sub_14058c000(&var_60, *r15_1 + 2)
        int64_t* r9_1 = rdi
        
        if (rdi[3] u>= 0x10)
            r9_1 = *rdi
        
        int64_t r14_2 = *r15_1
        int64_t rcx_12 = var_50_2.q
        int64_t rdx_11 = var_50_2:8.q
        
        if (r14_2 u> rdx_11 - rcx_12)
            sub_1409093f0(&var_60, r14_2, 0, r9_1, r14_2)
        else
            var_50_2.q = r14_2 + rcx_12
            char* rbx_5 = &var_60
            
            if (rdx_11 u>= 0x10)
                rbx_5 = var_60.q
            
            void* rbx_6 = &rbx_5[rcx_12]
            memmove(rbx_6, r9_1, r14_2.d)
            *(rbx_6 + r14_2) = 0
        
        int64_t rcx_15 = var_50_2.q
        int64_t rdx_14 = var_50_2:8.q
        
        if (rdx_14 - rcx_15 u< 2)
            sub_1409093f0(&var_60, 2, 0, &data_143551e88, 2)
        else
            var_50_2.q = rcx_15 + 2
            char* rbx_7 = &var_60
            
            if (rdx_14 u>= 0x10)
                rbx_7 = var_60.q
            
            void* rbx_8 = &rbx_7[rcx_15]
            memmove(rbx_8, &data_143551e88, 2)
            *(rbx_8 + 2) = 0
        
        sub_142984c70(&var_c0, &var_60, 
            sub_142984980(&var_98, 1, *(arg1 + 0x190) + (sx.q(0xd - *(arg1 + 0x5c)) << 3), 0x10, 0, 
                2, 2, (zx.o(0)).q, 0, 0))
        int64_t rdx_16 = var_50_2:8.q
        
        if (rdx_16 u>= 0x10)
            void* rcx_21 = var_60.q
            void* rax_24 = rcx_21
            
            if (rdx_16 + 1 u>= 0x1000)
                rcx_21 = *(rcx_21 - 8)
                
                if (rax_24 - rcx_21 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_21)
        
        int128_t var_50_3 = data_143702ea0
        var_60 = 0
        int32_t var_c8_3 = 4
        sub_14058c000(&var_60, *r15_1 + 2)
        int64_t* r9_2 = rdi
        
        if (rdi[3] u>= 0x10)
            r9_2 = *rdi
        
        char* r14_3 = *r15_1
        int64_t rcx_23 = var_50_3.q
        int64_t rdx_20 = var_50_3:8.q
        
        if (r14_3 u> rdx_20 - rcx_23)
            sub_1409093f0(&var_60, r14_3, 0, r9_2, r14_3)
        else
            var_50_3.q = &r14_3[rcx_23]
            char* rbx_9 = &var_60
            
            if (rdx_20 u>= 0x10)
                rbx_9 = var_60.q
            
            void* rbx_10 = &rbx_9[rcx_23]
            memmove(rbx_10, r9_2, r14_3.d)
            *(r14_3 + rbx_10) = 0
        
        int64_t rcx_26 = var_50_3.q
        int64_t rdx_23 = var_50_3:8.q
        
        if (rdx_23 - rcx_26 u< 2)
            sub_1409093f0(&var_60, 2, 0, &data_143551e8c, 2)
        else
            var_50_3.q = rcx_26 + 2
            char* rbx_11 = &var_60
            
            if (rdx_23 u>= 0x10)
                rbx_11 = var_60.q
            
            void* rbx_12 = &rbx_11[rcx_26]
            memmove(rbx_12, &data_143551e8c, 2)
            *(rbx_12 + 2) = 0
        
        sub_142984c70(&var_c0, &var_60, 
            sub_142984980(&var_98, 1, *(arg1 + 0x190) + 4 + (sx.q(0xd - *(arg1 + 0x5c)) << 3), 
                0x10, 0, 2, 2, (zx.o(0)).q, 0, 0))
        int64_t rdx_25 = var_50_3:8.q
        
        if (rdx_25 u>= 0x10)
            void* rcx_32 = var_60.q
            void* rax_35 = rcx_32
            
            if (rdx_25 + 1 u>= 0x1000)
                rcx_32 = *(rcx_32 - 8)
                
                if (rax_35 - rcx_32 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_32)
    
    int128_t var_50_4 = data_143702ea0
    var_60 = 0
    int32_t var_c8_4 = 8
    sub_14058c000(&var_60, *r15_1 + 1)
    
    if (rdi[3] u>= 0x10)
        rdi = *rdi
    
    char* r14_4 = *r15_1
    int64_t rcx_34 = var_50_4.q
    int64_t rdx_29 = var_50_4:8.q
    
    if (r14_4 u> rdx_29 - rcx_34)
        sub_1409093f0(&var_60, r14_4, 0, rdi, r14_4)
    else
        var_50_4.q = &r14_4[rcx_34]
        char* rbx_13 = &var_60
        
        if (rdx_29 u>= 0x10)
            rbx_13 = var_60.q
        
        void* rbx_14 = &rbx_13[rcx_34]
        memmove(rbx_14, rdi, r14_4.d)
        *(r14_4 + rbx_14) = 0
    
    int64_t rcx_37 = var_50_4.q
    int64_t rdx_32 = var_50_4:8.q
    
    if (rdx_32 - rcx_37 u< 1)
        sub_1409093f0(&var_60, 1, 0, &(*U"DEFGAB")[4], 1)
    else
        var_50_4.q = rcx_37 + 1
        char* rbx_15 = &var_60
        
        if (rdx_32 u>= 0x10)
            rbx_15 = var_60.q
        
        void* rbx_16 = &rbx_15[rcx_37]
        memmove(rbx_16, &(*U"DEFGAB")[4], 1)
        *(rbx_16 + 1) = 0
    
    sub_142984c70(&var_c0, &var_60, 
        sub_142984980(&var_98, 1, *(arg1 + 0x190) + 6 + (sx.q(0xd - *(arg1 + 0x5c)) << 3), 8, 0, 1, 
            1, 0x3ff0000000000000, 0, 0))
    int64_t rdx_34 = var_50_4:8.q
    
    if (rdx_34 u>= 0x10)
        void* rcx_43 = var_60.q
        void* rax_45 = rcx_43
        
        if (rdx_34 + 1 u>= 0x1000)
            rcx_43 = *(rcx_43 - 8)
            
            if (rax_45 - rcx_43 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_43)
    
    sub_142988f40(*(arg1 + 0x50), &var_c0)
    sub_140e309f0(&var_c0)

*(arg1 + 0x198) = arg2
*(arg1 + 0x1a0) = arg3
*(arg1 + 0x1a8) = arg4
__security_check_cookie(rax_1 ^ &var_118)
return arg3
