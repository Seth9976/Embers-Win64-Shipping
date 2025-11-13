// 函数: sub_141a1e870
// 地址: 0x141a1e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rax_2 = arg1[2]

if (rax_2 == 0)
    void** const var_f8
    memset(&var_f8, 0, 0x90)
    sub_140b4c2a0(&var_f8)
    var_f8 = &data_142d6b230
    int64_t var_58_1 = 0x7fffffffffffffff
    int64_t var_68_1 = 0
    sub_140b55290(&var_f8, 1)
    var_f8[0x1b](&var_f8, 0)
    int64_t* var_f0
    int32_t* rdx_1 = *var_f0
    int32_t var_154
    char var_cf
    
    if (&rdx_1[1] u> var_f0[1])
        int32_t* rdx_2 = &var_154
        void** const* rcx_6 = &var_f8
        
        if ((var_cf & 0x20) != 0)
            sub_140b54070(rcx_6, rdx_2, arg3)
        else
            var_f8[0x2a](rcx_6, rdx_2, 4)
    else
        var_154 = *rdx_1
        *var_f0 += 4
    
    int32_t* rdx_3 = *var_f0
    int32_t var_158
    
    if (&rdx_3[1] u> var_f0[1])
        int32_t* rdx_4 = &var_158
        void** const* rcx_8 = &var_f8
        
        if ((var_cf & 0x20) != 0)
            sub_140b54070(rcx_8, rdx_4, arg3)
        else
            var_f8[0x2a](rcx_8, rdx_4, 4)
    else
        var_158 = *rdx_3
        *var_f0 += 4
    
    int32_t rcx_10 = var_158
    int32_t rdx_5 = 0
    int32_t var_138_1 = 0
    int32_t r8_1 = 0
    char* var_140 = nullptr
    int32_t var_134_1 = 0
    
    if (rcx_10 != 0)
        sub_1405c5510(&var_140, rcx_10)
        rcx_10 = var_158
        r8_1 = var_134_1
        rdx_5 = var_138_1
    
    int32_t rax_10 = rdx_5 + rcx_10
    int32_t var_138_2 = rax_10
    
    if (rax_10 s> r8_1)
        sub_1405daba0(&var_140)
        rcx_10 = var_158
    
    int64_t rbx_1 = sx.q(rcx_10)
    
    if (rcx_10 != 0 && (var_cf & 1) == 0)
        if (var_68_1 + rbx_1 s> var_f8[5](&var_f8))
            char var_cf_1 = var_cf | 1
        else
            memcpy(var_140, sx.q(var_68_1.d) + *arg1, rbx_1.d)
            int64_t var_68_2 = var_68_1 + rbx_1
    
    int32_t rax_14 = var_154
    int32_t rcx_14 = 0
    int32_t var_144_1 = 0
    int32_t rdx_11 = 0
    int32_t var_148_1 = 0
    int128_t* var_150 = nullptr
    
    if (rax_14 != 0)
        sub_1405c5510(&var_150, rax_14)
        rax_14 = var_154
        rcx_14 = var_144_1
        rdx_11 = var_148_1
    
    int32_t rax_15 = rax_14 + rdx_11
    int32_t var_148_2 = rax_15
    
    if (rax_15 s> rcx_14)
        sub_1405daba0(&var_150)
    
    int32_t var_168_1 = 0
    int32_t var_104_1 = 0
    void var_100
    int512_t zmm1 =
        sub_140b02330((*sub_140b5e500(&var_100, 0x101)).q, var_150, var_154, var_140, var_158, 0)
    int64_t* rax_18 = j_sub_140a82f30(0x20)
    int64_t* rbx_3
    
    if (rax_18 == 0)
        rbx_3 = nullptr
    else
        int64_t* rax_19
        rax_19, zmm1 = sub_141a1b750(rax_18, &var_150, zmm1)
        rbx_3 = rax_19
    
    void*** rax_20 = j_sub_140a82f30(0x18)
    
    if (rax_20 == 0)
        rax_20 = nullptr
    else
        rax_20[1].d = 1
        *rax_20 = &data_143024a20
        *(rax_20 + 0xc) = 1
        rax_20[2] = rbx_3
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_1405c5510(arg1, 0)
    
    zmm1.o = rbx_3.o
    uint128_t var_118 = zmm1.o
    void*** rcx_22 = _mm_bsrli_si128(zmm1.o, 8).q
    
    if (rcx_22 != 0)
        rcx_22[1].d += 1
        rcx_22 = rax_20
        zmm1.o = var_118
    
    if (&var_118 != &arg1[2])
        int128_t var_48_1 = zmm1.o
        var_118 = *(arg1 + 0x10)
        *(arg1 + 0x10) = zmm1.o
    
    void* rdx_16 = var_118:8.q
    
    if (rdx_16 != 0)
        int32_t rax_21 = *(rdx_16 + 8)
        *(rdx_16 + 8) -= 1
        
        if (rax_21 == 1)
            int64_t* rbx_4 = var_118:8.q
            (**rbx_4)(rbx_4, rdx_16)
            int32_t rdi_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_24 = var_118:8.q
                (*(*rcx_24 + 8))(rcx_24, zx.q(rdi_1))
        
        rcx_22 = rax_20
    
    *arg2 = rbx_3
    arg2[1] = rcx_22
    int128_t* rcx_25 = var_150
    int64_t var_120_2 = 0
    int64_t var_128_2 = 0
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    char* rcx_26 = var_140
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    sub_140b4cb40(&var_f8)
else
    *arg2 = rax_2
    void* rcx = arg1[3]
    arg2[1] = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1

__security_check_cookie(rax_1 ^ &var_198)
return arg2
