// 函数: sub_140408e60
// 地址: 0x140408e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int32_t arg_10 = arg2
int32_t rax = arg7
int128_t zmm13 = zx.o(0)
int64_t rbp = 0
int32_t rcx = arg6
int32_t r10 = arg3
int32_t r8 = 0
int32_t var_e8 = 0
int64_t var_e0 = 0

if (rax + 3 s<= rcx)
    sub_1403fe0d0(arg10, arg13, 3)
    rcx = arg6
    arg2 = arg_10
    arg4 = arg_20
    r10 = arg3
    r8 = 0

int128_t zmm15

if (arg13 == 0)
    int64_t rax_2 = sx.q(arg12)
    zmm15 = *((rax_2 << 2) + 0x1437006e8)
    zmm13 = *((rax_2 << 2) + &data_1437006d8)
else
    zmm15 = 0x3e199800

int32_t rdi = arg2
int64_t r14 = sx.q(arg2)

if (arg2 s< r10)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    
    do
        arg13 = 0
        int32_t rdx_9
        
        do
            int64_t rbx_3 = sx.q(*(arg1 + 8)) * rbp + r14
            zmm7 = *(arg5 + (rbx_3 << 2))
            zmm6 = *(arg4 + (rbx_3 << 2))
            
            if (not(-9f f<= zmm7.d))
                zmm7 = 0xc1100000
            
            zmm9 = *(&var_e0 + (rbp << 2))
            zmm7.d = zmm7.d f* zmm13.d
            zmm8.d = zmm6.d f- zmm7.d
            zmm8.d = zmm8.d f- zmm9.d
            uint128_t zmm0
            zmm0.d = zmm8.d f+ 0.5f
            int32_t rdx_1 = int.d(floor(_mm_cvtps_pd(zmm0.q).q).q)
            arg7 = rdx_1
            uint128_t zmm1 = *(arg5 + (rbx_3 << 2))
            
            if (not(-28f f<= zmm1.d))
                zmm1 = 0xc1e00000
            
            zmm1.d = zmm1.d f- arg14.d
            
            if (rdx_1 s< 0 && not(zmm1.d f<= zmm6.d))
                zmm1.d = zmm1.d f- zmm6.d
                rdx_1 += int.d(zmm1.d)
                
                if (rdx_1 s> 0)
                    rdx_1 = 0
                
                arg7 = rdx_1
            
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = __bsr_gprv_memv(arg10[4].d)
            int32_t rbx_4 = rdx_1
            int32_t rcx_5 = neg.d(arg10[3].d - temp0_2 - 1)
            int32_t rax_9 = rcx_5 + rcx - (r10 - rdi) * arg11 * 3
            
            if (rdi != arg_10 && rax_9 s< 0x1e)
                if (rax_9 s< 0x18)
                    if (rdx_1 s> 1)
                        rdx_1 = 1
                    
                    arg7 = rdx_1
                
                if (rax_9 s< 0x10)
                    if (rdx_1 s< 0xffffffff)
                        rdx_1 = -1
                    
                    arg7 = rdx_1
            
            if (arg15 != 0 && rdi s>= 2)
                int32_t rax_10 = 0
                
                if (rdx_1 s< 0)
                    rax_10 = rdx_1
                
                rdx_1 = rax_10
                arg7 = rax_10
            
            int32_t rax_12 = arg6 + rcx_5
            
            if (rax_12 s>= 0xf)
                int32_t rax_13 = 0x14
                
                if (rdi s< 0x14)
                    rax_13 = rdi
                
                int64_t rax_15 = sx.q(rax_13 * 2)
                sub_14040bce0(arg10, &arg7, zx.d(*(rax_15 + arg8)) << 7, 
                    zx.d(*(rax_15 + arg8 + 1)) << 6)
            else if (rax_12 s>= 2)
                int32_t rax_16 = 1
                
                if (rdx_1 s< 1)
                    rax_16 = rdx_1
                
                if (rax_16 s< 0xffffffff)
                    rax_16 = -1
                
                arg7 = rax_16
                int32_t rdx_3
                rdx_3.b = rax_16 s< 0
                sub_1403fe400(arg10, neg.d(rdx_3) ^ (rax_16 * 2), &data_1437006f8, 2)
            else if (rax_12 s< 1)
                arg7 = 0xffffffff
            else
                if (rdx_1 s> 0)
                    rdx_1 = 0
                
                arg7 = rdx_1
                sub_1403fe0d0(arg10, neg.d(rdx_1), 1)
            
            arg4 = arg_20
            int64_t rax_19 = sx.q(*(arg1 + 8)) * rbp
            zmm8.d = zmm8.d f- _mm_cvtepi32_ps(zx.o(arg7)).d
            zmm0.d = zmm9.d f+ zmm7.d
            *(arg9 + ((rax_19 + r14) << 2)) = zmm8.d
            int32_t rcx_11 = arg7
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(rbx_4 - rcx_11)
            r8 = var_e8 + (temp1_1 ^ temp0_4) - temp0_4
            int64_t rax_25 = sx.q(*(arg1 + 8))
            rdx_9 = arg13 + 1
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_11))
            zmm0.d = zmm0.d f+ zmm1.d
            zmm9.d = zmm9.d f+ zmm1.d
            var_e8 = r8
            arg13 = rdx_9
            zmm1.d = zmm1.d f* zmm15.d
            zmm9.d = zmm9.d f- zmm1.d
            int64_t rax_27 = rax_25 * rbp + r14
            rbp += 1
            void var_e4
            *(&var_e4 + (rbp << 2)) = zmm9.d
            *(arg5 + (rax_27 << 2)) = zmm0.d
        while (rdx_9 s< arg11)
        r10 = arg3
        rcx = arg6
        rdi += 1
        r14 += 1
        rbp = 0
    while (rdi s< r10)

if (arg15 != 0)
    r8 = 0

return zx.q(r8)
