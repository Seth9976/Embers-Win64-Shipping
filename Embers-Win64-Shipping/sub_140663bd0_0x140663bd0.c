// 函数: sub_140663bd0
// 地址: 0x140663bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    void* rcx = arg1[4]
    
    if (rcx != 0)
        bool z_1
        
        if (0 == *(rcx + 0x78))
            *(rcx + 0x78) = 0
            z_1 = true
        else
            int64_t rax_2
            rax_2.b = *(rcx + 0x78)
            z_1 = false
        
        if (z_1)
            (*(*arg1 + 8))(arg1, 0)
    
    *(arg1 + 0x31) = 0
    int64_t rax_4 = *arg4
    
    if (rax_4 != 0)
        int64_t var_108 = rax_4
        void* rcx_2 = &arg4[4]
        void* rax_5 = arg4[2]
        int128_t* var_f8 = nullptr
        
        if (rax_5 != 0)
            rcx_2 = rax_5
        
        (**rcx_2)(rcx_2, &var_f8)
        int128_t var_e8
        
        if (&arg1[8] != &var_108)
            int128_t zmm5_1 = *(arg1 + 0x40)
            int128_t zmm4_1 = *(arg1 + 0x50)
            arg7 = *(arg1 + 0x60)
            arg6 = *(arg1 + 0x70)
            arg5 = var_f8.o
            *(arg1 + 0x40) = var_108.o
            int128_t zmm0 = var_e8
            *(arg1 + 0x50) = arg5
            int128_t var_d8
            arg5 = var_d8
            *(arg1 + 0x60) = zmm0
            *(arg1 + 0x70) = arg5
            int128_t var_88_1 = zmm5_1
            int128_t var_78_1 = zmm4_1
            int128_t var_68_1 = arg7
            int128_t var_58_1 = arg6
            var_108.o = zmm5_1
            var_f8.o = zmm4_1
            var_e8 = arg7
            int128_t var_d8_1 = arg6
        
        if (var_108 != 0)
            int128_t* rax_7 = var_f8
            int128_t* rcx_3 = &var_e8
            
            if (rax_7 != 0)
                rcx_3 = rax_7
            
            (*(*rcx_3 + 0x10))(rcx_3, arg5, arg6, arg7)
    
    int64_t rax_9 = *arg3
    int64_t var_148[0x2]
    var_148[0] = rax_9
    int64_t var_138 = 0
    
    if (rax_9 != 0)
        void* rax_10 = arg3[2]
        void* rcx_4 = &arg3[4]
        
        if (rax_10 != 0)
            rcx_4 = rax_10
        
        (**rcx_4)(rcx_4, &var_138, arg6, arg7)
    
    int64_t rax_12 = *arg2
    int64_t var_c8 = rax_12
    void* var_b8 = nullptr
    
    if (rax_12 != 0)
        void* rax_13 = arg2[2]
        void* rcx_5 = &arg2[4]
        
        if (rax_13 != 0)
            rcx_5 = rax_13
        
        (**rcx_5)(rcx_5, &var_b8, arg6, arg7)
    
    void* var_160
    result = sub_140662490(&var_160, 3, &var_c8, &var_148, arg6, arg7)
    
    if (&arg1[4] != result)
        arg1[4] = *result
        *result = 0
        result = sub_1405aeff0(&arg1[5], &result[1])
    
    int64_t* var_158
    
    if (var_158 != 0)
        result = zx.q(var_158[1].d)
        var_158[1].d -= 1
        
        if (result.d == 1)
            result = (**var_158)(var_158)
            int32_t rdi_2 = *(var_158 + 0xc)
            *(var_158 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_158 + 8))(var_158, zx.q(rdi_2))
    
    if (var_c8 != 0)
        void* rax_17 = var_b8
        void var_a8
        void* rcx_11 = &var_a8
        
        if (rax_17 != 0)
            rcx_11 = rax_17
        
        result = (*(*rcx_11 + 0x10))(rcx_11)

if (*arg2 != 0)
    void* rax_19 = arg2[2]
    void* rcx_12 = &arg2[4]
    
    if (rax_19 != 0)
        rcx_12 = rax_19
    
    result = (*(*rcx_12 + 0x10))(rcx_12)

if (*arg3 != 0)
    void* rax_21 = arg3[2]
    void* rcx_13 = &arg3[4]
    
    if (rax_21 != 0)
        rcx_13 = rax_21
    
    result = (*(*rcx_13 + 0x10))(rcx_13)

if (*arg4 != 0)
    void* rax_23 = arg4[2]
    void* rcx_14 = &arg4[4]
    
    if (rax_23 != 0)
        rcx_14 = rax_23
    
    result = (*(*rcx_14 + 0x10))(rcx_14)

__security_check_cookie(rax_1 ^ &var_188)
return result
