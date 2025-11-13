// 函数: sub_142a3aa50
// 地址: 0x142a3aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** arg_20 = arg4
int64_t var_a8 = -2
int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
uint128_t zmm11
uint128_t var_88 = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
int64_t rdi = arg2

if (arg1 == 0 || *arg4 != 0)
    int64_t* result
    result.b = 0
    return result

void* rax = j_sub_140a82f30(0x28)
void* r14_1 = rax
void* arg_8 = rax

if (rax == 0)
    r14_1 = nullptr
else
    __builtin_memset(rax, 0, 0x20)
    *(rax + 0x20) = 0x7f7fffff
    *(rax + 0x24) = 0x7f7fffff

void* rbx_1 = r14_1
void* var_b0 = rbx_1

if (r14_1 == 0)
label_142a3ad76:
    rdi.b = 0
else
    int64_t rbp_1 = rdi + arg3
    
    if (rdi s< rbp_1)
        zmm6 = zx.o(0)
        zmm10 = -0x3810000020000000
        zmm7 = 0x47efffffe0000000
        zmm9 = 0x3810000000000000
        
        do
            if (rbp_1 s>= 0 && rdi s>= rbp_1)
                goto label_142a3ad76
            
            uint64_t rax_1 = sub_142a3e160(arg1, rdi, &arg_8, arg5)
            
            if (rax_1 s< 0)
                goto label_142a3ad76
            
            rdi += sx.q(arg_8.d)
            
            if (rbp_1 s>= 0 && rdi s>= rbp_1)
                goto label_142a3ad76
            
            int64_t rax_2 = sub_142a3e270(arg1, rdi, &arg_8, arg5)
            
            if (rax_2 s< 0)
                goto label_142a3ad76
            
            int64_t rdx_2 = sx.q(arg_8.d)
            
            if ((rdx_2 - 1).d u> 7)
                goto label_142a3ad76
            
            rdi += rdx_2
            
            if (rdi u> 0x7fffffffffffffff)
                goto label_142a3ad76
            
            if (rbp_1 s>= 0 && rdi s> rbp_1)
                goto label_142a3ad76
            
            float var_b8[0x2]
            
            if (rax_1 == 0x55d9)
                var_b8 = zmm6.q
                int32_t rax_3 = sub_142a3e770(arg1, rdi, rax_2, &var_b8)
                uint128_t zmm0_1 = zx.o(var_b8)
                
                if (zmm10.q f> zmm0_1.q)
                    goto label_142a3ad76
                
                if (zmm0_1.q f> zmm7.q)
                    goto label_142a3ad76
                
                if (not(zmm0_1.q f<= zmm6.q) && zmm9.q f> zmm0_1.q)
                    goto label_142a3ad76
                
                arg5.o = _mm_cvtpd_ps(zmm0_1)
                *(r14_1 + 0x20) = arg5.d
                
                if (rax_3 s< 0)
                    goto label_142a3ad76
                
                if (0f f> arg5.d)
                    goto label_142a3ad76
                
                if (_mm_cvtps_pd(arg5.q).q f> 0x40c387feb851eb85)
                    goto label_142a3ad76
            else if (rax_1 != 0x55da)
                if (rax_1 - 0x55d1 u> 7)
                    goto label_142a3ad76
                
                void* rax_8
                bool cond:0_1
                
                switch (rax_1)
                    case 0x55d1, 0x55d2
                        cond:0_1 = rax_1 == 0x55d1
                        rax_8 = r14_1
                    case 0x55d3, 0x55d4
                        cond:0_1 = rax_1 == 0x55d3
                        rax_8 = r14_1 + 8
                    case 0x55d5, 0x55d6
                        cond:0_1 = rax_1 == 0x55d5
                        rax_8 = r14_1 + 0x10
                    case 0x55d7, 0x55d8
                        cond:0_1 = rax_1 == 0x55d7
                        rax_8 = r14_1 + 0x18
                
                char rax_9
                rax_9, arg5, zmm6 = sub_142a3ae00(arg1, rdi, rax_2, cond:0_1, rax_8)
                
                if (rax_9 == 0)
                    goto label_142a3ad76
            else
                var_b8 = zmm6.q
                int32_t rax_4 = sub_142a3e770(arg1, rdi, rax_2, &var_b8)
                uint128_t zmm0_2 = zx.o(var_b8)
                
                if (zmm10.q f> zmm0_2.q)
                    goto label_142a3ad76
                
                if (zmm0_2.q f> zmm7.q)
                    goto label_142a3ad76
                
                if (not(zmm0_2.q f<= zmm6.q) && zmm9.q f> zmm0_2.q)
                    goto label_142a3ad76
                
                arg5.o = _mm_cvtpd_ps(zmm0_2)
                *(r14_1 + 0x24) = arg5.d
                
                if (rax_4 s< 0)
                    goto label_142a3ad76
                
                if (0f f> arg5.d)
                    goto label_142a3ad76
                
                if (_mm_cvtps_pd(arg5.q).q f> 0x408f3fffcb923a2a)
                    goto label_142a3ad76
            rdi += rax_2
            
            if (rdi s> rbp_1)
                goto label_142a3ad76
        while (rdi s< rbp_1)
    
    rbx_1 = nullptr
    *arg_20 = r14_1
    rdi.b = 1

if (rbx_1 != 0)
    sub_142a363b0(&var_b0, rbx_1)

return zx.q(rdi.b)
