// 函数: sub_14069c3c0
// 地址: 0x14069c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t result = __security_cookie ^ &var_258
int64_t result_1 = result
int64_t* var_1d8 = arg1
uint32_t rcx = zx.d(arg2)
char var_220
char* var_1f8
char var_1b8
char var_198
int64_t var_158

if (arg2 == 0)
    __builtin_strncpy(&var_158, "All Files", 0xa)
    int64_t var_148
    __builtin_memcpy(&var_148, 
        "\x09\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x2a\x00", 0x12)
    int64_t var_120_1 = 0xf
    int64_t var_128_1 = 1
    char* rax_18 = j_sub_140a82f30(0x40)
    char* rdi_4 = rax_18
    var_1f8 = rax_18
    int64_t* i = &var_158
    void var_118
    
    do
        sub_140592d30(rdi_4, i)
        rdi_4 = &rdi_4[0x20]
        i = &i[4]
    while (i != &var_118)
    
    char var_230_3 = 0
    char** var_238_3 = &var_1f8
    int64_t var_1a0_1 = 0xf
    int64_t var_1a8_1 = 0
    var_1b8 = 0
    int64_t var_208_2 = 0xf
    int64_t var_210_2 = 0xd
    __builtin_strncpy(&var_220, "Select a file", 0xe)
    sub_14068ef50(&var_118, 0, &var_220, &var_1b8, var_238_3, var_230_3)
    char* var_110
    sub_1406b1310(var_110)
    sub_140592d30(&var_198, &var_110[8])
    int64_t var_180
    
    if (var_180 u< 0x10)
        goto label_14069cadc
    
    void* rcx_52 = var_198.q
    void* rax_19 = rcx_52
    
    if (var_180 + 1 u>= 0x1000)
        rcx_52 = *(rcx_52 - 8)
    
    if (var_180 + 1 u>= 0x1000 && rax_19 - rcx_52 - 8 u> 0x1f)
    label_14069ccf3:
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    j_sub_140a74f90(rcx_52)
label_14069cadc:
    int64_t* var_c0
    int64_t* rbx_10 = var_c0
    char** r14_4 = nullptr
    char** r15_3 = nullptr
    void* r13_1 = nullptr
    int64_t var_b8
    
    if (rbx_10 != var_b8)
        int64_t rdi_7 = (var_b8 - rbx_10) s>> 5
        
        if (rdi_7 u> 0x7ffffffffffffff)
            stdext::threads::_Throw_lock_error()
            noreturn
        
        int64_t rdi_8 = rdi_7 << 5
        
        if (rdi_8 u>= 0x1000)
            if (rdi_8 + 0x27 u<= rdi_8)
                stdext::threads::_Throw_lock_error()
                noreturn
            
            int64_t rax_22 = j_sub_140a82f30(rdi_8 + 0x27)
            
            if (rax_22 == 0)
                goto label_14069ccf3
            
            r14_4 = (rax_22 + 0x27) & 0xffffffffffffffe0
            r14_4[-1] = rax_22
        else if (rdi_8 != 0)
            r14_4 = j_sub_140a82f30(rdi_8)
        
        r13_1 = &r14_4[rdi_7 * 4]
        r15_3 = r14_4
        
        do
            sub_140592d30(r15_3, rbx_10)
            r15_3 = &r15_3[4]
            rbx_10 = &rbx_10[4]
        while (rbx_10 != var_b8)
    
    sub_1406af8f0(&var_c0)
    void var_e0
    sub_14058f000(&var_e0)
    void var_100
    sub_14058f000(&var_100)
    int64_t rbx_11 = -1
    int64_t* var_108
    
    if (var_108 != 0)
        var_108[1].d -= 1
        
        if (var_108[1].d == 1)
            (**var_108)(var_108)
            int32_t rax_26 = *(var_108 + 0xc)
            *(var_108 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*var_108 + 8))(var_108)
    
    if (var_208_2 u>= 0x10)
        void* rcx_61 = var_220.q
        void* rax_28 = rcx_61
        
        if (var_208_2 + 1 u>= 0x1000)
            rcx_61 = *(rcx_61 - 8)
        
        if (var_208_2 + 1 u>= 0x1000 && rax_28 - rcx_61 - 8 u> 0x1f)
            goto label_14069ccf3
        
        j_sub_140a74f90(rcx_61)
    
    if (var_1a0_1 u>= 0x10)
        void* rcx_62 = var_1b8.q
        void* rax_31 = rcx_62
        
        if (var_1a0_1 + 1 u>= 0x1000)
            rcx_62 = *(rcx_62 - 8)
        
        if (var_1a0_1 + 1 u>= 0x1000 && rax_31 - rcx_62 - 8 u> 0x1f)
            goto label_14069ccf3
        
        j_sub_140a74f90(rcx_62)
    
    char* r12_2 = var_1f8
    
    if (r12_2 != 0)
        char* rax_34 = rdi_4
        char* rdi_10 = r12_2
        
        if (r12_2 != rax_34)
            do
                int64_t rdx_37 = *(rdi_10 + 0x18)
                
                if (rdx_37 u>= 0x10)
                    void* rcx_63 = *rdi_10
                    
                    if (rdx_37 + 1 u>= 0x1000)
                        void* r8_11 = *(rcx_63 - 8)
                        
                        if (rcx_63 - r8_11 - 8 u> 0x1f)
                            goto label_14069ccf3
                        
                        rcx_63 = r8_11
                    
                    j_sub_140a74f90(rcx_63)
                    rax_34 = rdi_4
                
                *(rdi_10 + 0x10) = 0
                *(rdi_10 + 0x18) = 0xf
                *rdi_10 = 0
                rdi_10 = &rdi_10[0x20]
            while (rdi_10 != rax_34)
        
        char* rax_36 = r12_2
        
        if (((&rax_18[0x40] - r12_2) & 0xffffffffffffffe0) u>= 0x1000)
            r12_2 = *(r12_2 - 8)
            
            if (rax_36 - r12_2 - 8 u> 0x1f)
                goto label_14069ccf3
        
        j_sub_140a74f90(r12_2)
    
    int64_t i_4 = 2
    void* r12_3 = &var_118
    int64_t i_1
    
    do
        r12_3 -= 0x20
        result = sub_14058a4d0(r12_3)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    
    if (r14_4 != r15_3)
        char* r12_4 = r14_4
        
        if (r14_4[3] u>= 0x10)
            r12_4 = *r14_4
        
        var_220.q = 0
        int32_t rax_39 = 0
        char var_214_1
        var_214_1.d = 0
        int32_t rdi_11 = 0
        int32_t var_218_5 = 0
        int64_t rbx_13
        
        if (r12_4 == 0 || *r12_4 == 0)
            rbx_13 = var_220.q
        else
            do
                rbx_11 += 1
            while (r12_4[rbx_11] != 0)
            
            if (rbx_11.d + 1 s> 0)
                sub_1405947f0(&var_220, rbx_11.d + 1)
                rax_39 = var_214_1.d
                rdi_11 = var_218_5
            
            rdi_11 += rbx_11.d + 1
            
            if (rdi_11 s> rax_39)
                sub_140594770(&var_220)
            
            rbx_13 = var_220.q
            var_238_3.w = 0x3f
            sub_1405a7220(rbx_13, rbx_11.d + 1, r12_4, rbx_11.d + 1, var_238_3.w)
        
        var_1f8 = nullptr
        char* var_1f0_2
        var_1f0_2:4.d = 0
        var_1f0_2.d = rdi_11
        
        if (rdi_11 != 0)
            sub_1405a4c70(&var_1f8, rdi_11, 0)
            memcpy(var_1f8, rbx_13, rdi_11 * 2)
        
        int64_t* rbx_14 = var_1d8
        sub_1405a9f90(&rbx_14[0x5e], &var_1f8)
        char* rcx_73 = var_1f8
        
        if (rcx_73 != 0)
            sub_140a74f90(rcx_73)
        
        sub_140699c40(&rbx_14[0x5c], &var_220)
        result = sub_140698c60(rbx_14)
        int64_t rcx_76 = var_220.q
        
        if (rcx_76 != 0)
            result = sub_140a74f90(rcx_76)
    
    if (r14_4 != 0)
        char** rbx_15 = r14_4
        
        if (r14_4 != r15_3)
            do
                sub_14058a4d0(rbx_15)
                rbx_15 = &rbx_15[4]
            while (rbx_15 != r15_3)
        
        if (((r13_1 - r14_4) & 0xffffffffffffffe0) u>= 0x1000)
            char** rcx_78 = r14_4[-1]
            
            if (r14_4 - rcx_78 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            r14_4 = rcx_78
        
        result = j_sub_140a74f90(r14_4)
else
    char var_214
    int64_t var_1a8
    int64_t var_1a0
    void var_a8
    char* var_a0
    
    if (rcx == 1)
        int64_t var_1c0_2 = 0xf
        int64_t var_1c8_2 = 0
        var_1d8.b = 0
        sub_14058ad40(&var_1d8, &data_1437020ab, 0)
        int64_t var_210_1 = 0
        int64_t var_208_1 = 0xf
        var_220 = 0
        sub_14058ad40(&var_220, "Select a folder", 0xf)
        char var_230_2 = 0
        int64_t* var_238_2 = &var_1f8
        __builtin_memset(&var_1f8, 0, 0x18)
        sub_14068ef50(&var_a8, 2, &var_220, &var_1d8, var_238_2, var_230_2)
        char* rdi_2 = var_1f8
        
        if (rdi_2 != 0)
            char* rbx_5 = rdi_2
            int64_t var_1f0
            
            if (rdi_2 != var_1f0)
                do
                    sub_14058a4d0(rbx_5)
                    rbx_5 = &rbx_5[0x20]
                while (rbx_5 != var_1f0)
            
            char* rax_8 = rdi_2
            int64_t var_1e8_1
            
            if (((var_1e8_1 - rdi_2) & 0xffffffffffffffe0) u>= 0x1000)
                rdi_2 = *(rdi_2 - 8)
                
                if (rax_8 - rdi_2 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rdi_2)
        
        sub_1406b1310(var_a0)
        sub_140592d30(&var_1b8, &var_a0[8])
        sub_140692cd0(&var_a8)
        
        if (var_208_1 u>= 0x10)
            void* rcx_34 = var_220.q
            void* rax_11 = rcx_34
            
            if (var_208_1 + 1 u>= 0x1000)
                rcx_34 = *(rcx_34 - 8)
            
            if (var_208_1 + 1 u>= 0x1000 && rax_11 - rcx_34 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_34)
        
        if (var_1c0_2 u>= 0x10)
            int64_t* rcx_35 = var_1d8
            int64_t* rax_14 = rcx_35
            
            if (var_1c0_2 + 1 u>= 0x1000)
                rcx_35 = rcx_35[-1]
            
            if (var_1c0_2 + 1 u>= 0x1000 && rax_14 - rcx_35 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_35)
        
        if (var_1a8 != 0)
            char* r14_3 = &var_1b8
            int32_t rax_17 = 0
            var_220.q = 0
            
            if (var_1a0 u>= 0x10)
                r14_3 = var_1b8.q
            
            int64_t r15_2 = 0
            int32_t var_218_3 = 0
            int32_t rdi_3 = 0
            var_214.d = 0
            
            if (r14_3 != 0 && *r14_3 != 0)
                int64_t rbx_7 = -1
                
                do
                    rbx_7 += 1
                while (r14_3[rbx_7] != 0)
                
                if (rbx_7.d + 1 s> 0)
                    sub_1405947f0(&var_220, rbx_7.d + 1)
                    rax_17 = var_214.d
                    rdi_3 = var_218_3
                    r15_2 = var_220.q
                
                rdi_3 += rbx_7.d + 1
                
                if (rdi_3 s> rax_17)
                    sub_140594770(&var_220)
                    r15_2 = var_220.q
                
                var_238_2.w = 0x3f
                sub_1405a7220(r15_2, rbx_7.d + 1, r14_3, rbx_7.d + 1, var_238_2.w)
            
            var_1d8 = nullptr
            int32_t var_1cc_2 = 0
            int32_t var_1d0_2 = rdi_3
            
            if (rdi_3 != 0)
                sub_1405a4c70(&var_1d8, rdi_3, 0)
                memcpy(var_1d8, r15_2, rdi_3 * 2)
            
            sub_1405a9f90(&arg1[0x5e], &var_1d8)
            int64_t* rcx_42 = var_1d8
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            sub_140699c40(&arg1[0x5c], &var_220)
            sub_140698c60(arg1)
            int64_t rcx_45 = var_220.q
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
        
        result = sub_14058a4d0(&var_1b8)
    else if (rcx == 2)
        int64_t var_180_1 = 0xf
        int64_t var_188_1 = 0
        var_198 = 0
        sub_14058ad40(&var_198, "All Files", zx.q(rcx + 7))
        int64_t var_168_1 = 0
        int64_t var_160_1 = 0xf
        char var_178 = 0
        sub_14058ad40(&var_178, &data_1437020b8, 1)
        var_1f8 = &var_198
        int64_t* var_1f0_1 = &var_158
        sub_14068c580(&var_220, &var_1f8)
        int64_t var_1c8_1 = 0
        int64_t var_1c0_1 = 0xf
        var_1d8.b = 0
        sub_14058ad40(&var_1d8, &data_1437020ab, 0)
        int64_t var_1e8 = 0
        int64_t var_1e0_1 = 0xf
        var_1f8.b = 0
        sub_14058ad40(&var_1f8, "Select a file", 0xd)
        sub_14068ef50(&var_a8, 1, &var_1f8, &var_1d8, &var_220, 0)
        sub_1406b1310(var_a0)
        sub_140592d30(&var_1b8, &var_a0[8])
        sub_140692cd0(&var_a8)
        
        if (var_1e0_1 u>= 0x10)
            char* rcx_11 = var_1f8
            char* rax_1 = rcx_11
            
            if (var_1e0_1 + 1 u>= 0x1000)
                rcx_11 = *(rcx_11 - 8)
            
            if (var_1e0_1 + 1 u>= 0x1000 && rax_1 - rcx_11 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_11)
        
        if (var_1c0_1 u>= 0x10)
            int64_t* rcx_12 = var_1d8
            int64_t* rax_4 = rcx_12
            
            if (var_1c0_1 + 1 u>= 0x1000)
                rcx_12 = rcx_12[-1]
            
            if (var_1c0_1 + 1 u>= 0x1000 && rax_4 - rcx_12 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_12)
        
        sub_1406af8f0(&var_220)
        int64_t i_3 = 2
        int64_t* rbx_2 = &var_158
        int64_t i_2
        
        do
            rbx_2 -= 0x20
            sub_14058a4d0(rbx_2)
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        
        if (var_1a8 != 0)
            char* r14_1 = &var_1b8
            int32_t rax_7 = 0
            var_220.q = 0
            
            if (var_1a0 u>= 0x10)
                r14_1 = var_1b8.q
            
            int64_t r15_1 = 0
            int32_t var_218_1 = 0
            int32_t rdi_1 = 0
            var_214.d = 0
            
            if (r14_1 != 0 && *r14_1 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (r14_1[rbx_3] != 0)
                
                if (rbx_3.d + 1 s> 0)
                    sub_1405947f0(&var_220, rbx_3.d + 1)
                    rax_7 = var_214.d
                    rdi_1 = var_218_1
                    r15_1 = var_220.q
                
                rdi_1 += rbx_3.d + 1
                
                if (rdi_1 s> rax_7)
                    sub_140594770(&var_220)
                    r15_1 = var_220.q
                
                int64_t* var_238_1
                var_238_1.w = 0x3f
                sub_1405a7220(r15_1, rbx_3.d + 1, r14_1, rbx_3.d + 1, var_238_1.w)
            
            var_1d8 = nullptr
            int32_t var_1cc_1 = 0
            int32_t var_1d0_1 = rdi_1
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_1d8, rdi_1, 0)
                memcpy(var_1d8, r15_1, rdi_1 * 2)
            
            sub_1405a9f90(&arg1[0x5e], &var_1d8)
            int64_t* rcx_21 = var_1d8
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            sub_140699c40(&arg1[0x5c], &var_220)
            sub_140698c60(arg1)
            int64_t rcx_24 = var_220.q
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
        
        result = sub_14058a4d0(&var_1b8)
__security_check_cookie(result_1 ^ &var_258)
return result
