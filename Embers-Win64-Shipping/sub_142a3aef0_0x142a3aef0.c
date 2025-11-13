// 函数: sub_142a3aef0
// 地址: 0x142a3aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
int64_t rdi = arg2

if (arg1 == 0 || *arg4 != 0)
    void* const* result
    result.b = 0
    return result

int32_t* rax = j_sub_140a82f30(0x28)
int32_t* rsi_1 = rax
int32_t* arg_8 = rax

if (rax == 0)
    rsi_1 = nullptr
else
    *rax = 0xffffffff
    *(rax + 8) = 0
    *(rax + 0x10) = 0
    rax[6] = 0x7f7fffff
    rax[7] = 0x7f7fffff
    rax[8] = 0x7f7fffff

int32_t* rbx_1 = rsi_1
int32_t* var_78_1 = rbx_1

if (rsi_1 == 0)
label_142a3b17b:
    rdi.b = 0
else
    int64_t r15_1 = rdi + arg3
    
    while (rdi s< r15_1)
        uint64_t rax_1 = sub_142a3e160(arg1, rdi, &arg_8, arg5)
        
        if (rax_1 s< 0)
            goto label_142a3b17b
        
        rdi += sx.q(arg_8.d)
        
        if (r15_1 s>= 0 && rdi s>= r15_1)
            goto label_142a3b17b
        
        int64_t rax_2 = sub_142a3e270(arg1, rdi, &arg_8, arg5)
        
        if (rax_2 s< 0)
            goto label_142a3b17b
        
        int64_t rax_3 = sx.q(arg_8.d)
        
        if ((rax_3 - 1).d u> 7)
            goto label_142a3b17b
        
        rdi += rax_3
        
        if (rdi u> 0x7fffffffffffffff)
            goto label_142a3b17b
        
        if (r15_1 s>= 0 && rdi s> r15_1)
            goto label_142a3b17b
        
        if (rax_1 == 0x7671)
            int64_t rax_4 = sub_142a3ea30(arg1, rdi, rax_2)
            
            if (rax_4 s< 0)
                goto label_142a3b17b
            
            *rsi_1 = rax_4.d
        else if (rax_1 != 0x7672)
            float var_88[0x2] = (zx.o(0)).q
            
            if (sub_142a3e770(arg1, rdi, rax_2, &var_88) s< 0)
                goto label_142a3b17b
            
            uint128_t zmm0_1 = zx.o(var_88)
            
            if (-0x3810000020000000 f> zmm0_1.q)
                goto label_142a3b17b
            
            if (zmm0_1.q f> 0x47efffffe0000000)
                goto label_142a3b17b
            
            if (not(zmm0_1.q f<= 0.0) && 0x3810000000000000 f> zmm0_1.q)
                goto label_142a3b17b
            
            if (rax_1 == 0x7673)
                rsi_1[6] = _mm_cvtpd_ps(zmm0_1).d
            else if (rax_1 == 0x7674)
                rsi_1[7] = _mm_cvtpd_ps(zmm0_1).d
            else
                if (rax_1 != 0x7675)
                    goto label_142a3b17b
                
                rsi_1[8] = _mm_cvtpd_ps(zmm0_1).d
        else
            if (rax_2 == 0)
                goto label_142a3b17b
            
            if (rax_2 u> 0x80000000)
                goto label_142a3b17b
            
            int64_t rax_5 = j_sub_140a82f30(rax_2)
            
            if (rax_5 == 0)
                goto label_142a3b17b
            
            if ((**arg1)(arg1, rdi, zx.q(rax_2.d), rax_5) != 0)
                j_sub_140a74f90(rax_5)
                goto label_142a3b17b
            
            *(rsi_1 + 8) = rax_5
            *(rsi_1 + 0x10) = rax_2
        
        rdi += rax_2
        
        if (rdi s> r15_1)
            goto label_142a3b17b
    
    rbx_1 = nullptr
    *arg4 = rsi_1
    rdi.b = 1

if (rbx_1 != 0)
    j_sub_140a74f90(*(rbx_1 + 8))
    j_sub_140a74f90(rbx_1)

return zx.q(rdi.b)
