// 函数: opus_pcm_soft_clip
// 地址: 0x140387060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
int64_t r11 = arg4
void* rdx = arg1

if (r10.d s< 1 || arg2 s< 1 || arg1 == 0 || arg4 == 0)
    return 

uint32_t r9 = 0
uint64_t rax_1 = 0
int32_t r8_1 = arg2 * r10.d
uint128_t zmm2
uint128_t zmm3

if (r8_1 s>= 4)
    void* rcx = arg1 + 8
    uint64_t rax_4 = zx.q(((r8_1 - 4) u>> 2) + 1)
    uint64_t i_13 = zx.q(rax_4.d)
    r9 = (rax_4 << 2).d
    rax_1 = rax_4 << 2
    uint64_t i
    
    do
        zmm2 = *(rcx - 8)
        
        if (zmm2.d f> 2f)
            zmm2 = 0x40000000
        else if (not(-2f f<= zmm2.d))
            zmm2 = 0xc0000000
        else if (not(zmm2.d f<= 2f))
            zmm2 = 0x40000000
        
        zmm3 = *(rcx - 4)
        *(rcx - 8) = zmm2.d
        
        if (zmm3.d f> 2f)
            zmm3 = 0x40000000
        else if (not(-2f f<= zmm3.d))
            zmm3 = 0xc0000000
        else if (not(zmm3.d f<= 2f))
            zmm3 = 0x40000000
        
        zmm2 = *rcx
        *(rcx - 4) = zmm3.d
        
        if (zmm2.d f> 2f)
            zmm2 = 0x40000000
        else if (not(-2f f<= zmm2.d))
            zmm2 = 0xc0000000
        else if (not(zmm2.d f<= 2f))
            zmm2 = 0x40000000
        
        zmm3 = *(rcx + 4)
        *rcx = zmm2.d
        
        if (zmm3.d f> 2f)
            zmm3 = 0x40000000
        else if (not(-2f f<= zmm3.d))
            zmm3 = 0xc0000000
        else if (not(zmm3.d f<= 2f))
            zmm3 = 0x40000000
        
        *(rcx + 4) = zmm3.d
        rcx += 0x10
        i = i_13
        i_13 -= 1
    while (i != 1)
    rdx = arg1

if (r9 s< r8_1)
    void* rax_5 = rdx + (rax_1 << 2)
    uint64_t i_11 = zx.q(r8_1 - r9)
    uint64_t i_1
    
    do
        zmm2 = *rax_5
        
        if (zmm2.d f> 2f)
            zmm2 = 0x40000000
        else if (not(-2f f<= zmm2.d))
            zmm2 = 0xc0000000
        else if (not(zmm2.d f<= 2f))
            zmm2 = 0x40000000
        
        *rax_5 = zmm2.d
        rax_5 += 4
        i_1 = i_11
        i_11 -= 1
    while (i_1 != 1)

int64_t rax = 0
int64_t var_80_1 = 0

if (r10.d s<= 0)
    return 

zmm3 = zx.o(0)
uint128_t zmm7
uint128_t var_58_1 = zmm7
uint128_t zmm9
uint128_t var_78_1 = zmm9

while (true)
    uint128_t zmm1 = *(r11 + (rax << 2))
    void* r10_1 = rdx + (rax << 2)
    int32_t i_2 = 0
    int64_t rdx_1 = 0
    void* var_88_1 = r10_1
    uint128_t zmm0
    
    if (arg2 s>= 4)
        int64_t r9_1 = r10 << 2
        void* rcx_1 = r10_1
        
        do
            zmm2 = *rcx_1
            zmm0.d = zmm2.d f* zmm1.d
            
            if (zmm0.d f>= zmm3.d)
                goto label_140387335
            
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm2.d
            *rcx_1 = zmm0.d
            void* rcx_2 = rcx_1 + r9_1
            zmm2 = *rcx_2
            zmm0.d = zmm2.d f* zmm1.d
            
            if (zmm0.d f>= zmm3.d)
                goto label_140387335
            
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm2.d
            *rcx_2 = zmm0.d
            void* rcx_3 = rcx_2 + r9_1
            zmm2 = *rcx_3
            zmm0.d = zmm2.d f* zmm1.d
            
            if (zmm0.d f>= zmm3.d)
                goto label_140387335
            
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm2.d
            *rcx_3 = zmm0.d
            void* rcx_4 = rcx_3 + r9_1
            zmm2 = *rcx_4
            zmm0.d = zmm2.d f* zmm1.d
            
            if (zmm0.d f>= zmm3.d)
                goto label_140387335
            
            zmm0.d = zmm0.d f* zmm2.d
            i_2 += 4
            rdx_1 += 4
            zmm0.d = zmm0.d f+ zmm2.d
            *rcx_4 = zmm0.d
            rcx_1 = rcx_4 + r9_1
        while (i_2 s< arg2 - 3)
    
    if (i_2 s< arg2)
        void* rax_7 = r10_1 + ((rdx_1 * r10) << 2)
        
        do
            zmm2 = *rax_7
            zmm0.d = zmm2.d f* zmm1.d
            
            if (zmm0.d f>= zmm3.d)
                break
            
            zmm0.d = zmm0.d f* zmm2.d
            i_2 += 1
            zmm0.d = zmm0.d f+ zmm2.d
            *rax_7 = zmm0.d
            rax_7 += r10 << 2
        while (i_2 s< arg2)
    
label_140387335:
    zmm9 = *r10_1
    int32_t i_16 = 0
    int64_t rsi_1 = 0
    
    while (true)
        int32_t i_14 = i_16
        int64_t rdx_3 = rsi_1
        bool cond:1_1
        
        if (i_16 s>= arg2)
        label_140387421:
            cond:1_1 = i_14 == arg2
        else
            if (arg2 - i_16 s>= 4)
                int64_t r9_2 = r10 << 2
                void* rcx_6 = r10_1 + ((rsi_1 * r10) << 2)
                
                while (true)
                    zmm0 = *rcx_6
                    
                    if (zmm0.d f> 1f)
                        goto label_140387421_1
                    
                    if (-1f f> zmm0.d)
                        goto label_140387421_1
                    
                    void* rcx_7 = rcx_6 + r9_2
                    rdx_3 += 1
                    zmm0 = *rcx_7
                    
                    if (zmm0.d f> 1f || -1f f> zmm0.d)
                        i_14 += 1
                        goto label_140387421_1
                    
                    void* rcx_8 = rcx_7 + r9_2
                    rdx_3 += 1
                    zmm0 = *rcx_8
                    
                    if (zmm0.d f> 1f || -1f f> zmm0.d)
                        i_14 += 2
                        goto label_140387421_1
                    
                    void* rcx_9 = rcx_8 + r9_2
                    rdx_3 += 1
                    zmm0 = *rcx_9
                    
                    if (zmm0.d f> 1f || -1f f> zmm0.d)
                        i_14 += 3
                        goto label_140387421_1
                    
                    i_14 += 4
                    rdx_3 += 1
                    rcx_6 = rcx_9 + r9_2
                    
                    if (i_14 s>= arg2 - 3)
                        break
                    
                    continue
            
            cond:1_1 = i_14 == arg2
            
            if (i_14 s< arg2)
                void* rcx_10 = r10_1 + ((rdx_3 * r10) << 2)
                
                do
                    zmm0 = *rcx_10
                    
                    if (zmm0.d f> 1f)
                        break
                    
                    if (-1f f> zmm0.d)
                        break
                    
                    i_14 += 1
                    rdx_3 += 1
                    rcx_10 += r10 << 2
                while (i_14 s< arg2)
                
            label_140387421_1:
                cond:1_1 = i_14 == arg2
        
        if (cond:1_1)
            zmm7 = zmm3
            break
        
        rsi_1 = rdx_3
        int64_t rdx_4 = rdx_3 * r10
        int32_t i_4 = i_14
        int32_t i_18 = i_14
        uint128_t zmm5 = *(r10_1 + (rdx_4 << 2))
        void* r9_4 = r10_1 + (rdx_4 << 2)
        zmm1 = zmm5
        
        if (not(zmm3.d f<= zmm5.d))
            zmm1 ^= 0x80000000
        
        int64_t i_3 = sx.q(i_14)
        
        if (i_3 s< 4)
        label_1403874fb:
            
            if (i_3 s> 0)
                void* rax_21 = ((i_3 << 2) + -fffffffffffffffc) * r10 + r10_1
                
                do
                    zmm0.d = zmm5.d f* *rax_21
                    
                    if (zmm0.d f< zmm3.d)
                        break
                    
                    i_3 -= 1
                    i_18 -= 1
                    rax_21 += neg.q(r10) << 2
                while (i_3 s> 0)
        else
            void* r10_2 = r10_1 + (((i_3 - 2) * r10) << 2)
            
            while (true)
                zmm0.d = zmm5.d f* *((((0 + 2) << 2) + -fffffffffffffffc) * r10 + r10_2)
                
                if (zmm0.d f< zmm3.d)
                    break
                
                zmm0.d = zmm5.d f* *r10_2
                
                if (zmm0.d f< zmm3.d)
                    i_18 -= 1
                    break
                
                zmm0.d = zmm5.d f* *(r10_2 + (((0 - 1) * r10) << 2))
                
                if (zmm0.d f< zmm3.d)
                    i_18 -= 2
                    break
                
                zmm0.d = zmm5.d f* *(r10_2 + (((0 - 2) * r10) << 2))
                
                if (zmm0.d f< zmm3.d)
                    i_18 -= 3
                    break
                
                i_3 -= 4
                i_18 -= 4
                r10_2 += neg.q(r10) << 4
                
                if (i_3 s<= 3)
                    r10_1 = var_88_1
                    goto label_1403874fb
        
        void* r9_8
        
        if (i_14 s>= arg2)
        label_1403876f7:
            r9_8 = var_88_1
        else
            if (arg2 - i_14 s>= 4)
                int32_t i_17 = i_14 + 2
                int64_t rdx_5 = r10 << 2
                
                do
                    zmm2 = *r9_4
                    zmm0.d = zmm2.d f* zmm5.d
                    
                    if (zmm0.d f< zmm3.d)
                        goto label_1403876f7
                    
                    zmm0 = zmm2
                    
                    if (not(zmm3.d f<= zmm2.d))
                        zmm0 ^= 0x80000000
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm1 = zmm2
                        
                        if (not(zmm3.d f<= zmm2.d))
                            zmm1 ^= 0x80000000
                        
                        i_14 = i_4
                    
                    void* r9_5 = r9_4 + rdx_5
                    rsi_1 += 1
                    zmm2 = *r9_5
                    zmm0.d = zmm2.d f* zmm5.d
                    
                    if (zmm0.d f< zmm3.d)
                        i_4 += 1
                        goto label_1403876f7
                    
                    zmm0 = zmm2
                    
                    if (not(zmm3.d f<= zmm2.d))
                        zmm0 ^= 0x80000000
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm1 = zmm2
                        
                        if (not(zmm3.d f<= zmm2.d))
                            zmm1 ^= 0x80000000
                        
                        i_14 = i_17 - 1
                    
                    void* r9_6 = r9_5 + rdx_5
                    rsi_1 += 1
                    zmm2 = *r9_6
                    zmm0.d = zmm2.d f* zmm5.d
                    
                    if (zmm0.d f< zmm3.d)
                        i_4 += 2
                        goto label_1403876f7
                    
                    zmm0 = zmm2
                    
                    if (not(zmm3.d f<= zmm2.d))
                        zmm0 ^= 0x80000000
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm1 = zmm2
                        
                        if (not(zmm3.d f<= zmm2.d))
                            zmm1 ^= 0x80000000
                        
                        i_14 = i_17
                    
                    void* r9_7 = r9_6 + rdx_5
                    rsi_1 += 1
                    zmm2 = *r9_7
                    zmm0.d = zmm2.d f* zmm5.d
                    
                    if (zmm0.d f< zmm3.d)
                        i_4 += 3
                        goto label_1403876f7
                    
                    zmm0 = zmm2
                    
                    if (not(zmm3.d f<= zmm2.d))
                        zmm0 ^= 0x80000000
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm1 = zmm2
                        
                        if (not(zmm3.d f<= zmm2.d))
                            zmm1 ^= 0x80000000
                        
                        i_14 = i_17 + 1
                    
                    i_4 += 4
                    rsi_1 += 1
                    r9_4 = r9_7 + rdx_5
                    i_17 += 4
                while (i_4 s< arg2 - 3)
            
            r9_8 = var_88_1
            
            if (i_4 s< arg2)
                void* rcx_17 = r9_8 + ((rsi_1 * r10) << 2)
                
                do
                    zmm2 = *rcx_17
                    zmm0.d = zmm2.d f* zmm5.d
                    
                    if (zmm0.d f< zmm3.d)
                        break
                    
                    zmm0 = zmm2
                    
                    if (not(zmm3.d f<= zmm2.d))
                        zmm0 ^= 0x80000000
                    
                    if (not(zmm0.d f<= zmm1.d))
                        zmm1 = zmm2
                        
                        if (not(zmm3.d f<= zmm2.d))
                            zmm1 ^= 0x80000000
                        
                        i_14 = i_4
                    
                    i_4 += 1
                    rsi_1 += 1
                    rcx_17 += r10 << 2
                while (i_4 s< arg2)
        
        if (i_18 == 0)
            zmm0.d = zmm5.d f* *r9_8
        
        int32_t rdi_1
        
        if (i_18 != 0 || zmm0.d f< zmm3.d)
            rdi_1 = 0
        else
            rdi_1 = i_18 + 1
        
        zmm7 = zmm1
        zmm1.d = zmm1.d f* zmm1.d
        zmm7.d = zmm7.d f- 1f
        zmm7.d = zmm7.d f/ zmm1.d
        
        if (not(zmm5.d f<= zmm3.d))
            zmm7 ^= 0x80000000
        
        int64_t i_20 = sx.q(i_18)
        
        if (i_20 s>= rsi_1)
            r10_1 = var_88_1
        else
            if (rsi_1 - i_20 s>= 4)
                void* r9_9 = r9_8 + (((i_20 + 2) * r10) << 2)
                int64_t r10_5 = (0 - 2) * r10
                int64_t rcx_20 = (0 - 1) * r10
                int64_t i_9 = ((rsi_1 - i_20 - 4) u>> 2) + 1
                i_20 += i_9 << 2
                int64_t i_5
                
                do
                    zmm0 = *(r9_9 + (r10_5 << 2))
                    zmm1.d = zmm0.d f* zmm7.d
                    zmm1.d = zmm1.d f* zmm0.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    *(r9_9 + (r10_5 << 2)) = zmm1.d
                    zmm0 = *(r9_9 + (rcx_20 << 2))
                    zmm1.d = zmm0.d f* zmm7.d
                    zmm1.d = zmm1.d f* zmm0.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    *(r9_9 + (rcx_20 << 2)) = zmm1.d
                    zmm2 = *r9_9
                    zmm0.d = zmm2.d f* zmm7.d
                    zmm0.d = zmm0.d f* zmm2.d
                    zmm0.d = zmm0.d f+ zmm2.d
                    *r9_9 = zmm0.d
                    zmm1 = *(r9_9 + (r10 << 2))
                    zmm0.d = zmm1.d f* zmm7.d
                    zmm0.d = zmm0.d f* zmm1.d
                    zmm0.d = zmm0.d f+ zmm1.d
                    *(r9_9 + (r10 << 2)) = zmm0.d
                    r9_9 += r10 << 4
                    i_5 = i_9
                    i_9 -= 1
                while (i_5 != 1)
            
            r10_1 = var_88_1
            
            if (i_20 s< rsi_1)
                void* rcx_21 = r10_1 + ((i_20 * r10) << 2)
                int64_t i_10 = rsi_1 - i_20
                int64_t i_6
                
                do
                    zmm0 = *rcx_21
                    zmm1.d = zmm0.d f* zmm7.d
                    zmm1.d = zmm1.d f* zmm0.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    *rcx_21 = zmm1.d
                    rcx_21 += r10 << 2
                    i_6 = i_10
                    i_10 -= 1
                while (i_6 != 1)
        
        if (rdi_1 != 0 && i_14 s>= 2)
            int64_t i_19 = sx.q(i_16)
            zmm1.d = zmm9.d f- *r10_1
            zmm2.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(i_14)).d
            
            if (i_16 s< i_14)
                if (i_14 - i_16 s>= 4)
                    void* rdx_7 = r10_1 + (((i_19 + 2) * r10) << 2)
                    int64_t r9_13 = (0 - 2) * r10
                    int64_t r10_7 = (0 - 1) * r10
                    uint64_t rax_46 = zx.q(((i_14 - i_16 - 4) u>> 2) + 1)
                    uint64_t i_15 = zx.q(rax_46.d)
                    i_16 += (rax_46 << 2).d
                    i_19 += rax_46 << 2
                    uint64_t i_7
                    
                    do
                        zmm1.d = zmm1.d f- zmm2.d
                        zmm0.d = zmm1.d f+ *(rdx_7 + (r9_13 << 2))
                        *(rdx_7 + (r9_13 << 2)) = zmm0.d
                        
                        if (zmm0.d f> 1f)
                            zmm0 = 0x3f800000
                        else if (not(-1f f<= zmm0.d))
                            zmm0 = 0xbf800000
                        else if (not(zmm0.d f<= 1f))
                            zmm0 = 0x3f800000
                        
                        *(rdx_7 + (r9_13 << 2)) = zmm0.d
                        zmm1.d = zmm1.d f- zmm2.d
                        zmm0.d = zmm1.d f+ *(rdx_7 + (r10_7 << 2))
                        *(rdx_7 + (r10_7 << 2)) = zmm0.d
                        
                        if (zmm0.d f> 1f)
                            zmm0 = 0x3f800000
                        else if (not(-1f f<= zmm0.d))
                            zmm0 = 0xbf800000
                        else if (not(zmm0.d f<= 1f))
                            zmm0 = 0x3f800000
                        
                        *(rdx_7 + (r10_7 << 2)) = zmm0.d
                        zmm1.d = zmm1.d f- zmm2.d
                        zmm0.d = zmm1.d f+ *rdx_7
                        *rdx_7 = zmm0.d
                        
                        if (zmm0.d f> 1f)
                            zmm0 = 0x3f800000
                        else if (not(-1f f<= zmm0.d))
                            zmm0 = 0xbf800000
                        else if (not(zmm0.d f<= 1f))
                            zmm0 = 0x3f800000
                        
                        *rdx_7 = zmm0.d
                        zmm1.d = zmm1.d f- zmm2.d
                        zmm0.d = zmm1.d f+ *(rdx_7 + (r10 << 2))
                        *(rdx_7 + (r10 << 2)) = zmm0.d
                        
                        if (zmm0.d f> 1f)
                            zmm0 = 0x3f800000
                        else if (not(-1f f<= zmm0.d))
                            zmm0 = 0xbf800000
                        else if (not(zmm0.d f<= 1f))
                            zmm0 = 0x3f800000
                        
                        *(rdx_7 + (r10 << 2)) = zmm0.d
                        rdx_7 += r10 << 4
                        i_7 = i_15
                        i_15 -= 1
                    while (i_7 != 1)
                    r10_1 = var_88_1
                
                if (i_16 s< i_14)
                    int64_t i_12 = sx.q(i_14 - i_16)
                    void* rax_47 = r10_1 + ((i_19 * r10) << 2)
                    int64_t i_8
                    
                    do
                        zmm1.d = zmm1.d f- zmm2.d
                        zmm0.d = zmm1.d f+ *rax_47
                        *rax_47 = zmm0.d
                        
                        if (zmm0.d f> 1f)
                            zmm0 = 0x3f800000
                        else if (not(-1f f<= zmm0.d))
                            zmm0 = 0xbf800000
                        else if (not(zmm0.d f<= 1f))
                            zmm0 = 0x3f800000
                        
                        *rax_47 = zmm0.d
                        rax_47 += r10 << 2
                        i_8 = i_12
                        i_12 -= 1
                    while (i_8 != 1)
        
        i_16 = i_4
        
        if (i_4 == arg2)
            break
    
    r11 = arg4
    rdx = arg1
    *(r11 + (var_80_1 << 2)) = zmm7.d
    rax = var_80_1 + 1
    var_80_1 = rax
    
    if (rax s>= r10)
        break
