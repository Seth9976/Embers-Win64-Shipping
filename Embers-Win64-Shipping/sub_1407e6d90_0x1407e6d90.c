// 函数: sub_1407e6d90
// 地址: 0x1407e6d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int16_t* result = arg5
int32_t r15_1 = (arg2 + 0x3ff) & 0xfffffc00

if (r15_1 u> *(arg1 + 0x90))
    int16_t* const result_1 = &data_142d40450
    
    if (result != 0)
        result_1 = result
    
    wchar16 var_158[0x48]
    sub_1405a6010(&var_158, 0x80, u"NiagaraFreeIDList_%s", result_1)
    int64_t var_198_1 = 0
    wchar16 (* var_1a0_1)[0x48] = &var_158
    int32_t var_1a8_1 = 1
    int128_t var_188
    __builtin_memset(&var_188, 0, 0x1c)
    sub_1407b4d10(&var_188, 4, r15_1, 0x1d, var_1a8_1, var_1a0_1, var_198_1)
    int64_t r12_1
    
    if (*(arg1 + 0x90) u<= 0)
        r12_1 = sub_14082c590()
    else
        int64_t rax_2 = *(arg1 + 0x78)
        int64_t* rbx_3 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_2 = &rbx_3[1]
        
        if (rcx_2 u> *(arg3 + 0x38))
            sub_140b0e3d0(arg3 + 0x30, 0x10)
            rbx_3 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_2 = &rbx_3[1]
        
        *(arg3 + 0x30) = rcx_2
        *rbx_3 = rax_2
        void*** rcx_6 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_6[6]
        
        if (rax_3 u> *(arg3 + 0x38))
            sub_140b0e3d0(arg3 + 0x30, 0x38)
            rcx_6 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_6[6]
        
        *(arg3 + 0x30) = rax_3
        void**** rax_4 = *(arg3 + 8)
        *(arg3 + 0x14) += 1
        *rax_4 = rcx_6
        *(arg3 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142da7798
        rcx_6[2].d = 1
        rcx_6[3] = rbx_3
        rcx_6[4].d = 0
        *(rcx_6 + 0x24) = 3
        rcx_6[5] = 0
        r12_1 = *(arg1 + 0x80)
    
    int64_t rcx_10 = var_188:8.q
    int64_t* rbx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx = &rbx_8[1]
    
    if (rdx u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x10)
        rbx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        rdx = &rbx_8[1]
    
    *(arg3 + 0x30) = rdx
    *rbx_8 = rcx_10
    void*** rcx_14 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_14[6]
    
    if (rax_7 u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x38)
        rcx_14 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_14[6]
    
    *(arg3 + 0x30) = rax_7
    void**** rax_8 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_8 = rcx_14
    *(arg3 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142da7798
    rcx_14[2].d = 1
    rcx_14[3] = rbx_8
    rcx_14[4].d = 1
    *(rcx_14 + 0x24) = 3
    rcx_14[5] = 0
    sub_1408880e0(arg3, arg4, r15_1, &var_188, *(arg1 + 0x90), r12_1)
    sub_1405d1600(arg1 + 0x70, &var_188)
    sub_1405d1600(arg1 + 0x78, &var_188:8)
    int64_t var_178
    sub_1405d1600(arg1 + 0x80, &var_178)
    void* rcx_22 = var_188.q
    int32_t var_170
    *(arg1 + 0x88) = var_170
    int32_t var_170_1 = 0
    *(arg1 + 0x90) = r15_1
    
    if (rcx_22 != 0)
        int32_t rax_12 = 0
        
        if (0 == *(rcx_22 + 8))
            *(rcx_22 + 8) = 0
        else
            rax_12 = *(rcx_22 + 8)
        
        if (rax_12 == 1)
            void* rbx_11 = var_188.q
            
            if (*(rbx_11 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_23 = data_143f0f180
                    (*(*rcx_23 + 0x630))(rcx_23, rbx_11)
                
                *(rbx_11 + 0x11) = 0
    
    int32_t var_170_2 = 0
    sub_1405d16e0(&var_188, nullptr)
    sub_1405d16e0(&var_188:8, nullptr)
    sub_1405d16e0(&var_178, nullptr)
    sub_1405ec8a0(&var_178)
    sub_1405d1550(&var_188:8)
    result = sub_1405d1550(&var_188)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
