// 函数: sub_142c03090
// 地址: 0x142c03090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
uint128_t zmm10 = 0x4024000000000000
int64_t r15
r15.b = 0
int64_t r13
r13.b = 0
char arg_10 = 0
int128_t zmm7 = zx.o(0)
int32_t r12 = 0
uint64_t rsi = 0
int32_t r14 = 0
uint8_t r9 = 0
int32_t rbp = 0

while (true)
    uint8_t rdx_2
    
    if ((rbp.b & 1) != 0)
        rdx_2 = r9 & 0xf
    label_142c0317a:
        uint32_t r8_1 = zx.d(rdx_2)
        
        if (r8_1 - 0xa u<= 5)
            switch (r8_1)
                case 0xa
                    if (r14 == 0)
                        r14 = 1
                        rbp += 1
                        continue
                case 0xb
                    goto label_142c031c6
                case 0xc
                    arg_10 = 1
                label_142c031c6:
                    
                    if (r14 != 2)
                        r14 = 2
                        rbp += 1
                        continue
                case 0xe
                    if (rbp == 0)
                        r15.b = 1
                        rbp += 1
                        continue
                case 0xf
                    break
        else if (r14 == 1)
            if (rdi u<= 0x1999999999999)
                r12 += 1
                rdi = zx.q(rdx_2) + rdi * 0xa
            
            rbp += 1
            continue
        else if (r14 == 2)
            int32_t rcx_7 = r8_1 + ((rsi * 5).d << 1)
            
            if (rcx_7 u> 0x7ff)
                r13.b = 1
                rbp += 1
                continue
            else
                rsi = zx.q(rcx_7)
                rbp += 1
                continue
        else
            rbp += 1
            zmm7.q = zmm7.q f* zmm10.q
            zmm7.q = zmm7.q f+ _mm_cvtepi32_pd(zx.q(r8_1)).q
            continue
    else if (sub_142bfd200(arg1, 1) != 0)
        uint64_t rcx_1 = zx.q(*(arg1 + 0x18))
        int32_t rdx_1 = *(arg1 + 0x10)
        int128_t* const rax_2
        
        if (rcx_1.d u< rdx_1)
            rax_2 = rcx_1 + *(arg1 + 8)
        else
            *(arg1 + 0x1c) = 1
            rax_2 = &data_14369a5d0
        
        r9 = *rax_2
        
        if (*(arg1 + 0x1c) != 0 || rcx_1.d u> rdx_1 || rcx_1.d + 1 u> rdx_1)
            *(arg1 + 0x18) = rdx_1
            *(arg1 + 0x1c) = 1
        else
            *(arg1 + 0x18) = rcx_1.d + 1
        
        rdx_2 = r9 u>> 4
        goto label_142c0317a
    *(arg1 + 0x1c) = 1
    return (zx.o(0)).q

if (r15.b != 0)
    zmm7 ^= data_142d8e3c0

if (r12 != 0)
    int128_t zmm6
    zmm6.q = float.d(rdi)
    
    if (rdi s< 0)
        zmm6.q = zmm6.q f+ 1.8446744073709552e+19
    
    zmm6.q = zmm6.q f/ pow(zmm10.q, float.d(zx.q(r12)))
    
    if (r15.b != 0)
        zmm6 ^= data_142d8e3c0
    
    zmm7.q = zmm7.q f+ zmm6.q

if (r13.b != 0)
    zmm7.q f- 0.0
    
    if (is_unordered.q(zmm7.q, 0.0) || not(zmm7.q f== 0.0))
        if (arg_10 == 0)
            if (r15.b == 0)
                return 0x7fefffffffffffff
            
            return -0x10000000000001
        
        if (r15.b == 0)
            return 0x10000000000000
        
        return -0x7ff0000000000000
else if (rsi.d != 0)
    uint64_t zmm0 = pow(zmm10.q, float.d(zx.q(rsi.d)))
    
    if (arg_10 == 0)
        zmm7.q = zmm7.q f* zmm0
    else
        zmm7.q = zmm7.q f/ zmm0

return zmm7.q
