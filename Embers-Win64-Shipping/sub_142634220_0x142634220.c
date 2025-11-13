// 函数: sub_142634220
// 地址: 0x142634220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[1].d
uint128_t zmm11 = arg3
arg2[3].d = 0
int64_t* r9 = arg2

if (r11 s< 2)
    arg2[1].d = 0
    return 

int32_t rbx = 0
uint64_t r10 = 0
int32_t r8 = 0

if (r11 s> 0)
    int32_t rcx = r11
    int32_t rdi_1 = 0
    int32_t rsi_1
    
    do
        int64_t r8_1 = *r9
        rsi_1 = rbx + 1
        r10 = sx.q(r9[3].d)
        r11 = rcx
        
        if (*(r8_1 + (sx.q(mods.dp.d(sx.q(rsi_1), rcx) * 5) << 1) + 6)
                != *(r8_1 + (sx.q(rdi_1) << 1) + 6))
            *(r9[2] + (r10 << 1)) = rbx.w
            r9[3].d += 1
            r10 = zx.q(r9[3].d)
            r11 = r9[1].d
        
        rdi_1 += 5
        r8 = r10.d
        rbx = rsi_1
        rcx = r11
    while (rsi_1 s< r11)

int32_t r12 = 1

if (r10.d s< 2)
    int16_t* r8_2 = *r9
    int32_t i = 1
    int16_t rbp_1 = 0
    int16_t r14_1 = 0
    uint32_t r10_1 = zx.d(*r8_2)
    uint32_t rdi_2 = zx.d(r8_2[2])
    uint32_t rbx_1 = r10_1
    uint32_t rsi_2 = rdi_2
    
    if (r11 s> 1)
        void* r8_3 = &r8_2[5]
        
        do
            uint32_t rax_4 = zx.d(*r8_3)
            uint32_t rdx_3 = zx.d(*(r8_3 + 4))
            
            if (rax_4 s< r10_1)
            label_142634344:
                r10_1 = rax_4
                rdi_2 = rdx_3
                rbp_1 = i.w
            else if (rax_4 == r10_1 && rdx_3 s< rdi_2)
                goto label_142634344
            
            if (rax_4 s> rbx_1)
            label_142634355:
                rbx_1 = rax_4
                rsi_2 = rdx_3
                r14_1 = i.w
            else if (rax_4 == rbx_1 && rdx_3 s> rsi_2)
                goto label_142634355
            
            i += 1
            r8_3 += 0xa
        while (i s< r9[1].d)
    
    r9[3].d = 0
    *r9[2] = rbp_1
    int64_t rcx_2 = sx.q(r9[3].d)
    r9[3].d = (rcx_2 + 1).d
    *(r9[2] + (rcx_2 << 1) + 2) = r14_1
    r9[3].d += 1
    r10 = zx.q(r9[3].d)
    r8 = r10.d

int32_t i_1 = 0
int32_t i_3 = 0
int64_t rax

if (r10.d s> 0)
    int32_t rdi_3 = r10.d
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t r11_2 = 0
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    
    do
        int64_t rbx_2 = *r9
        zmm7 = zx.o(0)
        int64_t r8_4 = r9[2]
        uint64_t r14_2 = zx.q(*(r8_4 + (r11_2 << 1)))
        uint64_t rax_7 = zx.q((r14_2 * 5).d)
        uint32_t rsi_3 = zx.d(*(rbx_2 + (rax_7 << 1)))
        uint32_t rbp_2 = zx.d(*(rbx_2 + (rax_7 << 1) + 4))
        int16_t arg_20 = -1
        uint64_t r10_2 = zx.q(*(r8_4 + (sx.q(mods.dp.d(sx.q(i_1 + 1), rdi_3)) << 1)))
        uint64_t rax_11 = r10_2 * 5
        uint32_t rcx_3 = zx.d(*(rbx_2 + (rax_11 << 1)))
        uint32_t r8_5 = zx.d(*(rbx_2 + (rax_11 << 1) + 4))
        int32_t rax_12
        int32_t r13_1
        int32_t r15_1
        
        if (rcx_3 u> rsi_3 || (rcx_3 == rsi_3 && r8_5 u> rbp_2))
            r15_1 = r9[1].d
            rax_12 = (r14_2 + 1).d
            r14_2 = zx.q(r10_2.d)
            r13_1 = 1
        else
            r15_1 = r9[1].d
            r13_1 = r15_1 - 1
            rax_12 = r10_2.d + r13_1
        
        uint64_t rdx_7 = zx.q(mods.dp.d(sx.q(rax_12), r15_1))
        rax = sx.q((rdx_7 * 5).d)
        
        if (arg1 == *(rbx_2 + (rax << 1) + 8))
            r10 = zx.q(rdi_3)
            r9 = arg2
        
        if (arg1 == *(rbx_2 + (rax << 1) + 8) && *(rbx_2 + (rax << 1) + 6) != 0xffff)
        label_1426345f2:
            i_1 += 1
            r11_2 += 1
            r8 = r9[3].d
            i_3 = i_1
        else
            r10 = zx.q(rdi_3)
            
            if (rdx_7.d == r14_2.d)
                goto label_1426345f2
            
            int32_t r12_1 = -1
            zmm9 = _mm_cvtepi32_ps(zx.o(rsi_3))
            zmm6 = _mm_cvtepi32_ps(zx.o(r8_5 - rbp_2))
            uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rcx_3 - rsi_3))
            uint128_t zmm0
            zmm0.d = zmm5.d f* zmm5.d
            zmm10 = _mm_cvtepi32_ps(zx.o(rbp_2))
            float zmm3 = zmm6.d f* zmm6.d f+ zmm0.d
            
            do
                int64_t rcx_5 = sx.q((rdx_7 * 5).d)
                uint32_t r8_7 = zx.d(*(rbx_2 + (rcx_5 << 1) + 4))
                uint32_t r10_4 = zx.d(*(rbx_2 + (rcx_5 << 1)))
                arg3.d = _mm_cvtepi32_ps(zx.o(r8_7 - rbp_2)).d f* zmm6.d
                zmm0.d = _mm_cvtepi32_ps(zx.o(r10_4 - rsi_3)).d f* zmm5.d
                arg3.d = arg3.d f+ zmm0.d
                
                if (not(zmm3 <= 0f))
                    arg3.d = arg3.d f/ zmm3
                
                if (arg3.d f>= 0f)
                    arg3 = _mm_min_ss(arg3.d, 0x3f800000)
                else
                    arg3 = zx.o(0)
                
                float zmm1 = arg3.d
                arg3.d = arg3.d f* zmm6.d
                int32_t rax_20 = rdx_7.d
                arg3.d = arg3.d f+ zmm10.d
                zmm0.d = float.s(r10_4)
                zmm1 = zmm1 f* zmm5.d f+ zmm9.d f- zmm0.d
                zmm0.d = float.s(r8_7)
                arg3.d = arg3.d f- zmm0.d
                arg3.d = arg3.d f* arg3.d
                arg3.d = arg3.d f+ zmm1 * zmm1
                bool cond:7_1 = arg3.d f<= zmm7.d
                arg3 = _mm_max_ss(arg3.d, zmm7.d)
                
                if (cond:7_1)
                    rax_20 = r12_1
                
                r12_1 = rax_20
                rdx_7 = zx.q(mods.dp.d(sx.q(rdx_7.d + r13_1), r15_1))
                zmm7 = arg3
            while (rdx_7.d != r14_2.d)
            
            r10 = sx.q(r9[3].d)
            r12 = 1
            
            if (r12_1 == 0xffffffff)
                goto label_1426345f2
            
            zmm0.d = zmm11.d f* zmm11.d
            
            if (arg3.d f<= zmm0.d)
                goto label_1426345f2
            
            uint64_t rdx_9 = r10
            r9[3].d = (r10 + 1).d
            
            if (r10 s> r11_2)
                do
                    int64_t rcx_6 = r9[2]
                    *(rcx_6 + (rdx_9 << 1)) = *(rcx_6 + (rdx_9 << 1) - 2)
                    rdx_9 -= 1
                while (rdx_9 s> r11_2)
            
            *(r9[2] + (r11_2 << 1) + 2) = r12_1.w
            r10 = zx.q(r9[3].d)
            r8 = r10.d
            i_1 = i_3
        
        rdi_3 = r10.d
    while (i_1 s< r10.d)

int32_t rsi_4 = 0

if (r10.d s> 1)
    int64_t rbx_3 = r9[2]
    int64_t r10_5 = 1
    int64_t r11_3 = 0
    
    do
        int16_t rdx_11 = *(rbx_3 + (r11_3 << 1))
        int64_t rax_25 = r10_5
        int16_t temp14_1 = *(rbx_3 + (r10_5 << 1))
        
        if (temp14_1 u>= rdx_11)
            rax_25 = r11_3
        
        r11_3 = rax_25
        rax = zx.q(r12)
        
        if (temp14_1 u>= rdx_11)
            rax = zx.q(rsi_4)
        
        r12 += 1
        r10_5 += 1
        rsi_4 = rax.d
    while (r12 s< r8)

int32_t i_2 = r9[3].d
r9[1].d = 0

if (i_2 s<= 0)
    return 

int32_t rdi_4 = rsi_4 + 1

do
    int64_t r8_8 = r9[2]
    int64_t r10_6 = *r9
    uint64_t r11_4 = zx.q(*(r8_8 + (sx.q(mods.dp.d(sx.q(rdi_4 - 1), i_2)) << 1))) * 5
    int64_t rbx_4 = sx.q(r9[1].d * 5)
    uint64_t rax_33 = zx.q(*(r8_8 + (sx.q(mods.dp.d(sx.q(rdi_4), i_2)) << 1))) * 5
    int16_t rcx_10 = *(r10_6 + (r11_4 << 1))
    
    if (rcx_10 != *(r10_6 + (rax_33 << 1))
            || *(r10_6 + (r11_4 << 1) + 4) != *(r10_6 + (rax_33 << 1) + 4))
        *(r10_6 + (rbx_4 << 1)) = rcx_10
        *(r10_6 + (rbx_4 << 1) + 2) = *(r10_6 + (r11_4 << 1) + 2)
        *(r10_6 + (rbx_4 << 1) + 4) = *(r10_6 + (r11_4 << 1) + 4)
        *(r10_6 + (rbx_4 << 1) + 6) = *(r10_6 + (r11_4 << 1) + 6)
        *(r10_6 + (rbx_4 << 1) + 8) = *(r10_6 + (r11_4 << 1) + 8)
        r9[1].d += 1
    
    i_2 = r9[3].d
    rdi_4 += 1
while (not.d(rsi_4) + rdi_4 s< i_2)
