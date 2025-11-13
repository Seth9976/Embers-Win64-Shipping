// 函数: sub_142b35e80
// 地址: 0x142b35e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1
uint64_t i_2 = i_1
int64_t* rax = *(arg1 + 0x40)

if (rax != 0)
    rax = *rax

int64_t rbp = *rax
int32_t rax_1 = *(arg1 + 0x48)

if (rax_1 u> 1)
    int64_t r11_1 = *(arg1 + 0x40)
    i_1 = zx.q(rax_1 - 1)
    int64_t* r9_1 = 8
    uint64_t i
    
    do
        int64_t* rax_2
        
        if (r11_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = *(r9_1 + r11_1)
        
        int64_t r10_1 = *rax_2
        int32_t rdx_1 = 0
        int64_t r8_1 = rbp
        int64_t rcx = r10_1
        
        if ((rbp.b & 1) == 0)
            while ((rcx.b & 1) == 0)
                rdx_1 += 1
                r8_1 s>>= 1
                rcx s>>= 1
                
                if ((r8_1.b & 1) != 0)
                    break
        
        int64_t rax_4
        
        if ((r8_1.b & 1) == 0)
            rax_4 = r8_1
        else
            rax_4 = neg.q(rcx)
        
        if (rax_4 != 0)
            do
                while ((rax_4.b & 1) == 0)
                    rax_4 s>>= 1
                
                if (rax_4 s<= 0)
                    rcx = neg.q(rax_4)
                else
                    r8_1 = rax_4
                
                rax_4 = r8_1 - rcx
            while (r8_1 != rcx)
        
        r9_1 = &r9_1[1]
        rbp = divs.dp.q(sx.o(rbp), r8_1 << rdx_1.b) * r10_1
        i = i_1
        i_1 -= 1
    while (i != 1)

uint128_t zmm9 = 0x3fe0000000000000
int128_t zmm6
zmm6.q = float.d(rbp)
int64_t rdi = 0
zmm6.q = zmm6.q f* arg2.q
zmm6.q = zmm6.q f+ zmm9.q
uint128_t zmm7 = -0x8000000000000000

if (boost::math::detail::isnan_impl<long double>(zmm6.q) == 0)
    double zmm0_1[0x2] = sub_142a4bcc0()
    double zmm1[0x2] = zmm0_1
    zmm0_1 ^= zmm7
    
    if (not(zmm0_1[0] f> zmm6.q))
        zmm0_1 = _mm_min_sd(zmm1[0], zmm6.q)
    
    i_1.b = 0.0 > zmm0_1[0]
    
    if (i_1.b != 0)
        zmm0_1 ^= zmm7
    
    rdi = int.q(sub_142a4b9b0(zmm0_1[0]))
    
    if (i_1.b != 0)
        rdi = neg.q(rdi)

int128_t zmm0_4 = sub_142a4bcc0()
int64_t rbx = 0

if (boost::math::detail::isnan_impl<long double>(zmm0_4.q) == 0)
    double zmm0_3[0x2] = sub_142a4bcc0()
    double zmm1_1[0x2] = zmm0_3
    zmm0_3 ^= zmm7
    
    if (not(zmm0_3[0] f> zmm0_4.q))
        zmm0_3 = _mm_min_sd(zmm1_1[0], zmm0_4.q)
    
    int64_t rsi
    rsi.b = 0.0 > zmm0_3[0]
    
    if (rsi.b != 0)
        zmm0_3 ^= zmm7
    
    rbx = int.q(sub_142a4b9b0(zmm0_3[0]).q)
    
    if (rsi.b != 0)
        rbx = neg.q(rbx)

int32_t r11_2 = *(arg1 + 0x48)
int32_t r9_2 = 0
int32_t rcx_3 = 0

if (r11_2 != 0)
    int64_t r10_2 = *(arg1 + 0x40)
    int64_t* r8_3 = nullptr
    
    do
        int64_t* rax_11
        
        if (r10_2 == 0)
            rax_11 = nullptr
        else
            rax_11 = *(r8_3 + r10_2)
        
        int64_t temp1_2 = mods.dp.q(sx.o(*rax_11 * rdi), rbp)
        int64_t rax_16 = rbp - temp1_2
        
        if (rax_16 s>= temp1_2)
            rax_16 = temp1_2
        
        if (rax_16 s< rbx)
            rbx = rax_16
            r9_2 = rcx_3
            
            if (rax_16 == 0)
                break
        
        rcx_3 += 1
        r8_3 = &r8_3[1]
    while (rcx_3 u< r11_2)

uint64_t rcx_4 = zx.q(r9_2 + 1)

if (rcx_4.d u< r11_2)
    int64_t* rdx_6 = *(arg1 + 0x40)
    int64_t* r8_4
    
    if (rdx_6 == 0)
        r8_4 = nullptr
    else
        r8_4 = rdx_6[rcx_4]
    
    if (rdx_6 != 0)
        rdx_6 = rdx_6[zx.q(r9_2)]
    
    if (*r8_4 == *rdx_6)
        int64_t rdx_7 = *(arg1 + 0x40)
        int64_t* r8_5
        
        if (rdx_7 == 0)
            r8_5 = nullptr
        else
            r8_5 = *(rdx_7 + (zx.q(r9_2) << 3))
        
        zmm0_4.q = float.d(*r8_5)
        zmm0_4.q = zmm0_4.q f* arg2.q
        
        if (zmm9.q f> zmm0_4.q || not(zmm0_4.q f< 2.0))
            r9_2 = rcx_4.d

int64_t rcx_5 = *(arg1 + 0x40)

if (rcx_5 == 0)
    return 0

return *(rcx_5 + (zx.q(r9_2) << 3))
