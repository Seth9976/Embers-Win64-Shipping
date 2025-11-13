// 函数: sub_141388dd0
// 地址: 0x141388dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r8_1 = *(arg1[1] + 0x10)
int128_t var_d8 = *(arg1 + 0x10)
int64_t* var_e8
int32_t result = UnDecorator::getFunctionIndirectType(&var_e8, arg2, r8_1, &var_d8, arg3, arg4)
int64_t* rbx = var_e8

if (rbx != 0)
    void*** rax_2 = j_sub_140a82f30(0x90)
    void*** rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        *rdi_1 = &data_142d56fb8
        rdi_1[1] = 0
        rdi_1[2] = 0
        rdi_1[3].b = 3
        *(rdi_1 + 0x1c) = 0
        rdi_1[4].b = 1
        rdi_1[6] = 0
        rdi_1[8] = 0
        __builtin_memset(&rdi_1[0xe], 0, 0x18)
    
    if (&rdi_1[0xe] != &var_e8)
        int64_t* rcx_1 = rdi_1[0xe]
        rdi_1[0xe] = rbx
        rbx = nullptr
        var_e8 = nullptr
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
    
    sub_14209b260(*arg1, rdi_1)
    sub_140597df0(&rdi_1[1], &arg1[4])
    
    if (rdi_1[0xe][2].d == 0)
        int64_t r15_1 = sx.q(rdi_1[0x10].d)
        void* (* rdx_2)(char* arg1, int64_t* arg2) = sub_1413969b0
        void** const var_98 = &data_142e52180
        void*** var_a8_1 = nullptr
        char var_90_1 = 0xff
        int32_t rax_5 = (r15_1 + 1).d
        void* (* var_b8_1)(char* arg1, int64_t* arg2) = sub_1413969b0
        rdi_1[0x10].d = rax_5
        
        if (rax_5 s> *(rdi_1 + 0x84))
            sub_1405c4fe0(&rdi_1[0xf])
            rdx_2 = var_b8_1
        
        void* (** rcx_7)(char* arg1, int64_t* arg2) = &rdi_1[0xf][r15_1 * 8]
        *rcx_7 = rdx_2
        rcx_7[2] = var_a8_1
        *(rcx_7 + 0x20) = var_98.o
        int128_t var_88
        *(rcx_7 + 0x30) = var_88
        
        if (*rcx_7 == 0 && var_b8_1 != 0)
            void** const* rcx_8 = &var_98
            
            if (var_a8_1 != 0)
                rcx_8 = var_a8_1
            
            (*rcx_8)[2](rcx_8)
        
        if (rdi_1[3].b == 5)
            void*** var_68_1 = nullptr
            int64_t (* rdx_4)(int128_t* arg1, int64_t* arg2) = sub_1413969e0
            int64_t rsi_1 = sx.q(rdi_1[0x10].d)
            void** const var_58 = &data_142e52180
            int32_t var_50_1 = 0x400ccccd
            int64_t (* var_78_1)(int128_t* arg1, int64_t* arg2) = sub_1413969e0
            int32_t rax_9 = (rsi_1 + 1).d
            rdi_1[0x10].d = rax_9
            
            if (rax_9 s> *(rdi_1 + 0x84))
                sub_1405c4fe0(&rdi_1[0xf])
                rdx_4 = var_78_1
            
            int64_t (** rcx_12)(int128_t* arg1, int64_t* arg2) = &rdi_1[0xf][rsi_1 * 8]
            *rcx_12 = rdx_4
            rcx_12[2] = var_68_1
            *(rcx_12 + 0x20) = var_58.o
            int128_t var_48
            *(rcx_12 + 0x30) = var_48
            
            if (*rcx_12 == 0 && var_78_1 != 0)
                void** const* rcx_13 = &var_58
                
                if (var_68_1 != 0)
                    rcx_13 = var_68_1
                
                (*rcx_13)[2](rcx_13)
    
    void* rax_13 = *arg1
    void*** var_e0 = rdi_1
    int64_t r9_1
    r9_1.b = 1
    int64_t* rcx_14 = *(rax_13 + 0x70)
    void var_c8
    result = (*(*rcx_14 + 8))(rcx_14, &var_c8, &var_e0, r9_1)
    int64_t* var_c0
    
    if (var_c0 != 0)
        result = var_c0[1].d
        var_c0[1].d -= 1
        
        if (result == 1)
            result = (**var_c0)(var_c0)
            int32_t rbx_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rbx_1 == 1)
                result = (*(*var_c0 + 8))(var_c0, zx.q(rbx_1))
        
        rbx = var_e8
    
    void*** rcx_17 = var_e0
    
    if (rcx_17 != 0)
        result = (**rcx_17)(rcx_17, 1)
    
    if (rbx != 0)
        result = (**rbx)(rbx, 1)

__security_check_cookie(rax_1 ^ &var_108)
return result
