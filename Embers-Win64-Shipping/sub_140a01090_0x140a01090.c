// 函数: sub_140a01090
// 地址: 0x140a01090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0
int32_t rbp = arg2

if (*(arg3 + 0xc) != 0)
    sub_1405dadb0(arg3, 0)

arg4[1].d = 0

if (*(arg4 + 0xc) != 0)
    sub_140638cc0(arg4, 0)

uint64_t* r14 = arg5
r14[1].d = 0

if (*(r14 + 0xc) != 0)
    sub_1405c5570(r14, 0)

if (arg1 s< 2 || rbp s< 2)
    return 

uint64_t i_1 = zx.q(rbp - 1)
int32_t j_2 = arg1 - 1
int32_t r15_1 = 0
int128_t zmm9 = arg6
uint128_t zmm13
zmm13.d = _mm_cvtepi32_ps(zx.o(i_1.d)).d f* zmm9.d
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(j_2)).d f* zmm9.d
zmm13.d = zmm13.d f* 0.5f
zmm10.d = zmm10.d f* 0.5f

if (rbp s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm11
    int128_t var_98_1 = zmm11
    
    do
        int32_t rsi_1 = 0
        
        if (arg1 s> 0)
            int32_t var_c0_1 = 0
            zmm8.d = float.s(r15_1)
            int64_t zmm0
            zmm0.d = zmm8.q.d f* zmm9.d
            zmm0.d = zmm0.d f- zmm13.d
            int32_t var_c4_1 = zmm0.d
            zmm0.d = float.s(arg1)
            zmm8.d = zmm8.d f/ (float.s(rbp) f- 1f)
            zmm0.d = zmm0.d f- 1f
            zmm11.d = 1f f/ zmm0.d
            
            do
                int64_t rbp_1 = sx.q(arg4[1].d)
                zmm6 = _mm_cvtepi32_ps(zx.o(rsi_1))
                int32_t rax = (rbp_1 + 1).d
                arg4[1].d = rax
                zmm0.d = zmm6.q.d f* zmm9.d
                zmm0.d = zmm0.d f- zmm10.d
                
                if (rax s> *(arg4 + 0xc))
                    sub_140638a00(arg4)
                
                int64_t rax_1 = *arg4
                int64_t rcx_5 = rbp_1 * 3
                zmm7.d = zmm11.d f* zmm6.d
                *(rax_1 + (rcx_5 << 2)) = zmm0.d.q
                *(rax_1 + (rcx_5 << 2) + 8) = 0
                int64_t rbp_2 = sx.q(r14[1].d)
                int32_t rax_2 = (rbp_2 + 1).d
                r14[1].d = rax_2
                
                if (rax_2 s> *(r14 + 0xc))
                    sub_1405a4d70(r14)
                
                uint64_t rax_3 = *r14
                rsi_1 += 1
                *(rax_3 + (rbp_2 << 3)) = zmm7.d
                *(rax_3 + (rbp_2 << 3) + 4) = zmm8.d
            while (rsi_1 s< arg1)
            
            rbp = arg2
        
        r15_1 += 1
    while (r15_1 s< rbp)
    
    i_1 = zx.q(i_1.d)
    j_2 = arg1 - 1

if (i_1.d s<= 0)
    return 

int32_t r12_1 = arg1
arg5 = i_1
uint64_t i

do
    if (j_2 s> 0)
        uint64_t j_1 = zx.q(j_2)
        int32_t rdi_1 = r12_1
        uint64_t j
        
        do
            int64_t rsi_2 = sx.q(arg3[1].d)
            int32_t rax_4 = (rsi_2 + 1).d
            arg3[1].d = rax_4
            
            if (rax_4 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_2 << 2)) = rdi_1 - arg1
            int64_t rsi_3 = sx.q(arg3[1].d)
            int32_t rax_6 = (rsi_3 + 1).d
            arg3[1].d = rax_6
            
            if (rax_6 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_3 << 2)) = rdi_1
            int64_t rsi_4 = sx.q(arg3[1].d)
            int32_t rax_8 = (rsi_4 + 1).d
            arg3[1].d = rax_8
            
            if (rax_8 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            int32_t rbp_3 = 1 - arg1 + rdi_1
            *(*arg3 + (rsi_4 << 2)) = rbp_3
            int64_t rsi_5 = sx.q(arg3[1].d)
            int32_t rax_10 = (rsi_5 + 1).d
            arg3[1].d = rax_10
            
            if (rax_10 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_5 << 2)) = rbp_3
            int64_t rsi_6 = sx.q(arg3[1].d)
            int32_t rax_12 = (rsi_6 + 1).d
            arg3[1].d = rax_12
            
            if (rax_12 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_6 << 2)) = rdi_1
            int64_t rsi_7 = sx.q(arg3[1].d)
            int32_t rax_14 = (rsi_7 + 1).d
            arg3[1].d = rax_14
            
            if (rax_14 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            rdi_1 += 1
            *(*arg3 + (rsi_7 << 2)) = rdi_1
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_1 = arg5
        j_2 = arg1 - 1
        rbp = arg2
    
    r12_1 += rbp
    i = i_1
    i_1 -= 1
    arg5 = i_1
while (i != 1)
