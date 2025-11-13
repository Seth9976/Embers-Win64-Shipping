// 函数: sub_1429c7120
// 地址: 0x1429c7120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rdi = arg1
int64_t i_6 = sx.q(arg4)
uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
int32_t i_7 = i_6.d
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t var_178 = 0
uint64_t r15 = 0

if (i_6.d s> 0)
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    void* rax_2 = rdi + 0x2c
    int128_t zmm8
    int128_t var_78_1 = zmm8
    void* rcx = rdi + 8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    void* rdx = rdi + 0x18
    uint32_t zmm10[0x4]
    uint32_t var_98_1[0x4] = zmm10
    int64_t i_4 = i_6
    uint32_t zmm11[0x4]
    uint32_t var_a8_1[0x4] = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_b8_1[0x4] = zmm12
    uint32_t zmm13[0x4]
    uint32_t var_c8_1[0x4] = zmm13
    uint32_t zmm14[0x4]
    uint32_t var_d8_1[0x4] = zmm14
    uint32_t zmm15[0x4]
    uint32_t var_e8_1[0x4] = zmm15
    int64_t i
    
    do
        *(rcx - 8) = 0xffffffff
        rcx += 0x58
        *(rdx - 8) = 0
        rdx += 0x58
        *(rax_2 + 0x20) |= 4
        rax_2 += 0x58
        *(rcx - 0x5c) = 0xffffffff
        *(rdx - 0x58) = 0
        *(rax_2 - 0x38) |= 4
        *(rcx - 0x58) = 0xffffffff
        *(rdx - 0x50) = 0
        *(rax_2 - 0x38) |= 4
        __builtin_memset(rax_2 - 0x5c, 0, 0x20)
        i = i_4
        i_4 -= 1
    while (i != 1)
    void* rbx_1 = rdi + 0x34
    int32_t rdi_1 = (i_4 + 8).d
    int32_t* r14_1 = nullptr
    int64_t i_5 = i_6
    int64_t i_1
    
    do
        int32_t r8 = *(r14_1 + arg2)
        uint32_t var_170
        int32_t var_110
        (*(*arg3 + 0x10))(arg3, &var_110, zx.q(r8 s>> 2), zx.q(r8) & 3, var_178, var_170, arg3)
        int32_t r8_2 = *(r14_1 + arg2 + 4)
        int32_t var_120
        (*(*arg3 + 0x10))(arg3, &var_120, zx.q(r8_2 s>> 2), zx.q(r8_2) & 3)
        int32_t r8_4 = *(r14_1 + arg2 + 8)
        int32_t var_100
        (*(*arg3 + 0x10))(arg3, &var_100, zx.q(r8_4 s>> 2), zx.q(r8_4) & 3)
        int32_t r8_6 = *(r14_1 + arg2)
        int32_t var_158
        (*(*arg3 + 0x20))(arg3, &var_158, zx.q(r8_6 s>> 2), zx.q(r8_6) & 3)
        int32_t r8_8 = *(r14_1 + arg2 + 4)
        int32_t var_160
        (*(*arg3 + 0x20))(arg3, &var_160, zx.q(r8_8 s>> 2), zx.q(r8_8) & 3)
        int32_t r8_10 = *(r14_1 + arg2 + 8)
        int32_t var_150
        (*(*arg3 + 0x20))(arg3, &var_150, zx.q(r8_10 s>> 2), zx.q(r8_10) & 3)
        zmm10 = var_150
        int32_t var_154
        int32_t var_14c
        int128_t zmm4_1
        zmm4_1.d = var_14c.d f- var_154
        zmm12 = var_120
        int64_t zmm5_1 = var_100
        int32_t var_fc
        zmm6 = var_fc
        zmm8 = var_160
        int32_t var_15c
        arg6 = var_15c
        arg6[0] = arg6[0] f- var_154
        zmm10[0] = zmm10[0] f- var_158
        zmm8.d = zmm8.d f- var_158
        zmm12[0] = zmm12[0] f- var_110
        zmm5_1.d = zmm5_1.d f- var_110
        int32_t var_10c
        zmm6[0] = zmm6[0] f- var_10c
        int32_t var_108
        int32_t var_f8
        zmm7.d = var_f8.d f- var_108
        int32_t var_11c
        zmm13 = var_11c
        int32_t var_118
        zmm11 = var_118
        zmm13[0] = zmm13[0] f- var_10c
        zmm11[0] = zmm11[0] f- var_108
        zmm10[0] = zmm10[0] f* arg6[0]
        zmm9.d = zmm4_1.d f* zmm8.d
        arg5 = zmm7
        int64_t zmm1
        zmm1.d = zmm5_1.d f* arg6[0]
        zmm9.d = zmm9.d f- zmm10[0]
        arg5[0] = arg5[0] f* arg6[0]
        zmm12[0] = zmm12[0] f* zmm4_1.d
        zmm6[0] = zmm6[0] f* arg6[0]
        zmm10 ^= data_142d3f780
        zmm12[0] = zmm12[0] f- zmm1.d
        zmm7.d = zmm7.d f* zmm8.d
        int32_t rsi = 0
        arg6 = zmm13
        zmm5_1.d = zmm5_1.d f* zmm8.d
        zmm6[0] = zmm6[0] f* zmm8.d
        arg6[0] = arg6[0] f* zmm4_1.d
        zmm11[0] = zmm11[0] f* zmm10[0]
        arg6[0] = arg6[0] f- zmm6[0]
        zmm11[0] = zmm11[0] f* zmm4_1.d
        zmm12[0] = zmm12[0] f* zmm10[0]
        uint32_t zmm0[0x4] = _mm_cvtps_pd(zmm9.q)
        
        if (zmm9.d f> 0f)
            rsi = rdi_1
        
        int32_t rsi_1 = rsi | *(rbx_1 + 0x18)
        *(rbx_1 + 0x18) = rsi_1
        zmm11[0] = zmm11[0] f+ zmm7.d
        zmm13[0] = zmm13[0] f* zmm10[0]
        zmm7 = 0x7fffffffffffffff
        zmm11[0] = zmm11[0] f- arg5[0]
        zmm0 = _mm_and_ps(zmm0, zmm7)
        var_170 = arg6[0]
        zmm9 = _mm_cvtpd_ps(zmm0)
        zmm12[0] = zmm12[0] f+ zmm5_1.d
        zmm13[0] = zmm13[0] f+ zmm6[0]
        int32_t rax_9
        rax_9.b = zmm9.d f> 1.17549435e-38f
        
        if (rax_9 != 0)
            zmm1 = zmm12[0].q
            arg6[0] = arg6[0] f* arg6[0]
            zmm1.d = zmm1.d f* zmm12[0]
            zmm11[0] = zmm11[0] f* zmm11[0]
            arg6[0] = arg6[0] f+ zmm1.d
            arg6[0] = arg6[0] f+ zmm11[0]
            zmm6 = sqrtf(arg6[0])
            zmm1.d = zmm12[0].q.d f* zmm12[0]
            zmm13[0] = zmm13[0] f* zmm13[0]
            zmm11[0] = zmm11[0] f* zmm11[0]
            zmm13[0] = zmm13[0] f+ zmm1.d
            zmm13[0] = zmm13[0] f+ zmm11[0]
            arg6 = sqrtf(zmm13[0])
            
            if ((rdi_1.b & rsi_1.b) != 0)
                arg5 = 0x3f800000
            else
                arg5 = 0xbf800000
            
            zmm0 = zx.o(0)
            zmm0[0].q = fconvert.d(zmm6[0])
            int32_t rax_10
            rax_10.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
            
            if (rax_10 != 0)
                arg5[0] = arg5[0] f/ zmm6[0]
                zmm11[0] = zmm11[0] f* arg5[0]
                zmm12[0] = zmm12[0] f* arg5[0]
                zmm1.d = var_170.d f* arg5[0]
                uint32_t var_138_1 = zmm11[0]
                *(rbx_1 - 0xc) = (_mm_unpacklo_ps(zmm12, zmm1)).q
                *(rbx_1 - 4) = var_138_1
            
            zmm0 = zx.o(0)
            zmm0[0].q = fconvert.d(arg6[0])
            int32_t rax_12
            rax_12.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
            
            if (rax_12 != 0)
                arg5[0] = arg5[0] f/ arg6[0]
                zmm12[0] = zmm12[0] f* arg5[0]
                zmm13[0] = zmm13[0] f* arg5[0]
                zmm11[0] = zmm11[0] f* arg5[0]
                *rbx_1 = (_mm_unpacklo_ps(zmm12, zmm13[0].q)).q
                *(rbx_1 + 8) = zmm11[0]
            
            zmm6[0] = zmm6[0] f/ zmm9.d
            zmm0 = zx.o(0)
            zmm0[0].q = fconvert.d(zmm6[0])
            arg6[0] = arg6[0] f/ zmm9.d
            zmm0 = _mm_and_ps(zmm0, zmm7)
            *(rbx_1 + 0xc) = zmm6[0]
            int64_t temp0_11 = _mm_cvtpd_ps(zmm0)
            *(rbx_1 + 0x10) = arg6[0]
            int32_t rax_14
            rax_14.b = temp0_11.d f> 1.17549435e-38f
            
            if (rax_14 != 0)
                zmm0 = zx.o(0)
                zmm0[0].q = fconvert.d(arg6[0])
                int32_t rax_15
                rax_15.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
                
                if (rax_15 != 0)
                    *(rbx_1 + 0x18) = rsi_1 & 0xfffffffb
        
        r14_1 = &r14_1[3]
        rbx_1 += 0x58
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rdi = arg1
    r15 = zx.q(var_178)
    i_6 = zx.q(i_7)

int32_t i_2 = (i_6 - 1).d
int32_t i_3 = i_2

if (i_2 s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t r14_2 = rsi_3 + 1
        int64_t rdx_7 = r14_2 * 0x58
        int64_t rcx_7 = rsi_3 * 0x58
        int64_t rax_23
        
        if (*(rcx_7 + rdi + 0x48) != *(rdx_7 + rdi + 0x48))
            rax_23 = 1
        else
            char rax_17 = (*(rcx_7 + rdi + 0x4c)).b
            
            if ((rax_17 & 1) == 0)
                char rcx_8 = (*(rdx_7 + rdi + 0x4c)).b
                
                if ((rcx_8 & 1) == 0 && ((rax_17 ^ rcx_8) & 8) != 0)
                    int32_t r12_1 = 0
                    uint32_t zmm0_2[0x4]
                    float zmm0_3
                    
                    if ((rcx_8 & 4) == 0)
                        uint32_t rbx_2 = (r15 * 3).d
                        float zmm3
                        zmm0_2, zmm3 =
                            sub_1429c44d0(arg3, (sx.q(rbx_2) << 2) + arg2, arg5[0], arg6[0], i_3)
                        zmm0_3, arg6 =
                            sub_1429c44d0(arg3, (sx.q(rbx_2 + 3) << 2) + arg2, arg5[0], zmm3)
                    
                    int64_t rax_21
                    
                    if ((rcx_8 & 4) != 0 || zmm0_2[0] f>= zmm0_3)
                        rax_21 = rsi_3
                        r12_1 = 1
                    else
                        rax_21 = r14_2
                    
                    i_2 = i_3
                    
                    if (r12_1 == 0)
                        r14_2 = rsi_3
                    
                    int64_t rdx_12 = r14_2 * 0x58
                    *(rdx_12 + rdi + 0x4c) &= 0xfffffff7
                    *(rdx_12 + rdi + 0x4c) |= *(rax_21 * 0x58 + rdi + 0x4c) & 8
            
            rax_23 = 2
        
        r15 = zx.q(r15.d + rax_23.d)
        rsi_3 += rax_23
    while (r15.d s< i_2)
    
    i_6 = zx.q(i_7)

int32_t* rax_25 = malloc(sx.q(i_6.d) * 0x24)
void* result

if (rax_25 != 0)
    sub_1429c3ef0(rdi, rax_25, arg2, i_6.d)
    result = free(rax_25)
else
    result = sub_1429c4290(rdi, arg2, i_6.d)

__security_check_cookie(rax_1 ^ &var_198)
return result
