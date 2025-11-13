// 函数: sub_1419f7fc0
// 地址: 0x1419f7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t count_1 = arg1[1].d
int16_t i_38 = arg3
int32_t count_2 = count_1
int32_t rsi = 0
int32_t i = 0
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int32_t zmm3[0x4]

if (count_1 != 0)
    if (count_1 u>= 8 && data_143ccb970 s>= 2)
        int64_t rcx = *arg1
        zmm2 = zx.o(0)
        zmm3 = zx.o(0)
        
        do
            int64_t i_8 = sx.q(i)
            i += 8
            zmm1 = _mm_cvtepu16_epi32(*(rcx + (i_8 << 1)))
            uint128_t zmm0 = zx.o(*(rcx + (i_8 << 1) + 8))
            zmm2 = _mm_max_epu32(zmm2, zmm1)
            zmm3 = _mm_max_epu32(zmm3, _mm_cvtepu16_epi32(zmm0.q))
        while (i u< count_1 - (count_1 & 7))
        
        zmm2 = _mm_max_epu32(zmm2, zmm3)
        zmm2 = _mm_max_epu32(zmm2, _mm_bsrli_si128(zmm2, 8))
        rsi = _mm_max_epu32(zmm2, _mm_bsrli_si128(zmm2, 4))[0]
    
    for (; i u< count_1; i += 1)
        uint32_t rcx_1 = zx.d(*(*arg1 + (sx.q(i) << 1)))
        
        if (rcx_1 u>= rsi)
            rsi = rcx_1

int64_t var_300 = 0
int64_t rbx = 0
int64_t var_308 = 0

if (rsi != 0xffffffff)
    sub_141a149d0(&var_308, rsi + 1)
    rbx = var_308

char* result_1

if (rsi != 0xffffffff)
    uint64_t i_15 = zx.q(rsi + 1)
    uint64_t i_1
    
    do
        int64_t rdi_1 = sx.q(var_300.d)
        result_1 = nullptr
        int64_t var_2e0_1 = 0
        int32_t rax_5 = (rdi_1 + 1).d
        var_300.d = rax_5
        
        if (rax_5 s> var_300:4.d)
            sub_141a146b0(&var_308)
            rbx = var_308
        
        int64_t rcx_4 = rdi_1 * 5
        *(rbx + (rcx_4 << 2)) = result_1.o
        *(rbx + (rcx_4 << 2) + 0x10) = 0
        i_1 = i_15
        i_15 -= 1
    while (i_1 != 1)
    count_1 = count_2

int32_t rcx_6 = *(arg2 + 0xc)
int32_t rdi_2 = 0
arg2[1].d = 0

if (rcx_6 != count_1)
    sub_1405947f0(arg2, count_1)
    rcx_6 = *(arg2 + 0xc)
    rdi_2 = arg2[1].d

int32_t rax_6 = rdi_2 + count_1
arg2[1].d = rax_6

if (rax_6 s> rcx_6)
    sub_140594770(arg2)

int64_t count = sx.q(count_1)
memset(*arg2 + (sx.q(rdi_2) << 1), 0, count * 2)
int32_t rdx_7 = 0

if (count_1 != 0)
    do
        int64_t rcx_10 = sx.q(rdx_7)
        rdx_7 += 1
        uint64_t rax_10 = zx.q(*(*arg1 + (rcx_10 << 1))) * 5
        *(rbx + (rax_10 << 2) + 8) += 1
    while (rdx_7 u< count_1)

int32_t r15_1 = 0
int32_t rdi_3 = 0
var_308 = 0
int32_t i_2 = 0
var_300:4.d = 0
float zmm0_1

if (rsi + 1 u>= 4)
    uint64_t i_42 = zx.q(i_38)
    
    do
        int64_t i_12 = sx.q(i_2)
        int64_t rdx_8 = i_12 * 5
        *(rbx + (rdx_8 << 2) + 0xc) = -1
        *(rbx + (rdx_8 << 2) + 4) = rdi_3
        uint64_t r9 = zx.q(*(rbx + (rdx_8 << 2) + 8))
        int32_t rdi_4 = rdi_3 + r9.d
        
        if (r9.d != 0)
            uint64_t rax_11 = zx.q(*(rbx + (rdx_8 << 2) + 0xc))
            zmm2 = zx.o(0)
            
            if (rax_11.d u< i_42.d)
                zmm2 = *((((i_42 << 6) + rax_11) << 2) + &data_143f23d80)
            
            if (r9.d u>= 0x40)
                zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(r9))[0]
                zmm0_1 = zmm0_1 + zmm0_1
            else
                zmm0_1 = *((r9 << 2) + &data_143f27e80)
            
            zmm2[0] = zmm2[0] f+ zmm0_1
        else
            zmm2 = 0xbf800000
        
        *(rbx + (rdx_8 << 2)) = zmm2[0]
        *(rbx + (rdx_8 << 2) + 8) = 0
        int64_t rdx_9 = i_12 * 5
        *(rbx + (rdx_9 << 2) + 0x20) = -1
        *(rbx + (rdx_9 << 2) + 0x18) = rdi_4
        uint64_t r9_1 = zx.q(*(rbx + (rdx_9 << 2) + 0x1c))
        int32_t rdi_5 = rdi_4 + r9_1.d
        
        if (r9_1.d != 0)
            uint64_t rax_12 = zx.q(*(rbx + (rdx_9 << 2) + 0x20))
            zmm2 = zx.o(0)
            
            if (rax_12.d u< i_42.d)
                zmm2 = *((((i_42 << 6) + rax_12) << 2) + &data_143f23d80)
            
            if (r9_1.d u>= 0x40)
                zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(r9_1))[0]
                zmm0_1 = zmm0_1 + zmm0_1
            else
                zmm0_1 = *((r9_1 << 2) + &data_143f27e80)
            
            zmm2[0] = zmm2[0] f+ zmm0_1
        else
            zmm2 = 0xbf800000
        
        *(rbx + (rdx_9 << 2) + 0x14) = zmm2[0]
        *(rbx + (rdx_9 << 2) + 0x1c) = 0
        int64_t rdx_10 = i_12 * 5
        *(rbx + (rdx_10 << 2) + 0x34) = -1
        *(rbx + (rdx_10 << 2) + 0x2c) = rdi_5
        uint64_t r9_2 = zx.q(*(rbx + (rdx_10 << 2) + 0x30))
        int32_t rdi_6 = rdi_5 + r9_2.d
        
        if (r9_2.d != 0)
            uint64_t rax_13 = zx.q(*(rbx + (rdx_10 << 2) + 0x34))
            zmm2 = zx.o(0)
            
            if (rax_13.d u< i_42.d)
                zmm2 = *((((i_42 << 6) + rax_13) << 2) + &data_143f23d80)
            
            if (r9_2.d u>= 0x40)
                zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(r9_2))[0]
                zmm0_1 = zmm0_1 + zmm0_1
            else
                zmm0_1 = *((r9_2 << 2) + &data_143f27e80)
            
            zmm2[0] = zmm2[0] f+ zmm0_1
        else
            zmm2 = 0xbf800000
        
        *(rbx + (rdx_10 << 2) + 0x28) = zmm2[0]
        *(rbx + (rdx_10 << 2) + 0x30) = 0
        int64_t rdx_11 = i_12 * 5
        *(rbx + (rdx_11 << 2) + 0x48) = -1
        *(rbx + (rdx_11 << 2) + 0x40) = rdi_6
        uint64_t r8_1 = zx.q(*(rbx + (rdx_11 << 2) + 0x44))
        rdi_3 = rdi_6 + r8_1.d
        
        if (r8_1.d != 0)
            uint64_t rax_14 = zx.q(*(rbx + (rdx_11 << 2) + 0x48))
            zmm2 = zx.o(0)
            
            if (rax_14.d u< i_42.d)
                zmm2 = *((((i_42 << 6) + rax_14) << 2) + &data_143f23d80)
            
            if (r8_1.d u>= 0x40)
                zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(r8_1))[0]
                zmm0_1 = zmm0_1 + zmm0_1
            else
                zmm0_1 = *((r8_1 << 2) + &data_143f27e80)
            
            zmm2[0] = zmm2[0] f+ zmm0_1
        else
            zmm2 = 0xbf800000
        
        i_2 += 4
        *(rbx + (rdx_11 << 2) + 0x3c) = zmm2[0]
        *(rbx + (rdx_11 << 2) + 0x44) = 0
    while (i_2 u< rsi - 2)
    
    count_1 = count_2

while (i_2 u< rsi + 1)
    int64_t rcx_24 = sx.q(i_2) * 5
    uint64_t rax_16 = zx.q(*(rbx + (rcx_24 << 2) + 8))
    *(rbx + (rcx_24 << 2) + 4) = rdi_3
    rdi_3 += rax_16.d
    *(rbx + (rcx_24 << 2) + 0xc) = -1
    
    if (rax_16.d == 0)
        zmm0_1 = -1f
    else if (rax_16.d u>= 0x40)
        zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(rax_16))[0]
        zmm0_1 = zmm0_1 + zmm0_1
    else
        zmm0_1 = *((rax_16 << 2) + &data_143f27e80)
    
    i_2 += 1
    *(rbx + (rcx_24 << 2)) = zmm0_1
    *(rbx + (rcx_24 << 2) + 8) = 0

int32_t rsi_2 = 0
var_300.d = 0

if (rdi_3 != 0)
    sub_1405dadb0(&var_308, rdi_3)
    r15_1 = var_300:4.d
    rsi_2 = var_300.d

int32_t rax_17 = rdi_3 + rsi_2
var_300.d = rax_17

if (rax_17 s> r15_1)
    sub_1405a4cf0(&var_308)

int64_t r15_2 = var_308
memset(r15_2 + (sx.q(rsi_2) << 2), 0, sx.q(rdi_3) << 2)
int64_t* rsi_3 = arg1
int32_t r9_3 = 0

if (count_1 != 0)
    do
        int64_t r8_4 = sx.q(r9_3)
        uint64_t rdx_14 = zx.q(*(*rsi_3 + (r8_4 << 1))) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_14 << 2) + 4) + *(rbx + (rdx_14 << 2) + 8)) << 2)) = r9_3
        *(rbx + (rdx_14 << 2) + 8) += 1
        uint64_t rdx_15 = zx.q(*(*rsi_3 + (r8_4 << 1) + 2)) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_15 << 2) + 4) + *(rbx + (rdx_15 << 2) + 8)) << 2)) = r9_3
        *(rbx + (rdx_15 << 2) + 8) += 1
        uint64_t rdx_16 = zx.q(*(*rsi_3 + (r8_4 << 1) + 4)) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_16 << 2) + 4) + *(rbx + (rdx_16 << 2) + 8)) << 2)) = r9_3
        r9_3 += 3
        *(rbx + (rdx_16 << 2) + 8) += 1
    while (r9_3 u< count_1)

int32_t rcx_32 = 0
result_1 = nullptr
int32_t rdi_7 = 0
int64_t var_2e0_2 = 0

if (count_1 != 0)
    sub_1405c5510(&result_1, count_1)
    rcx_32 = var_2e0_2:4.d
    rdi_7 = var_2e0_2.d

int32_t rax_31 = count_1 + rdi_7
var_2e0_2.d = rax_31

if (rax_31 s> rcx_32)
    sub_1405daba0(&result_1)

memset(&result_1[sx.q(rdi_7)], 0, count)
zmm3 = data_143f27e84
int32_t count_3 = count_2
void var_18c
void* r11_1 = &var_18c
zmm3[0] = zmm3[0] f* 3f
uint32_t i_31 = 0
int32_t i_3 = 0
void var_298
void* var_2c8_1 = &var_298
void* var_2f0 = &var_18c
zmm1 = 0xbf800000
uint32_t i_32 = 0
int32_t i_7 = 0
int32_t var_2f4 = 0

if (count_3 != 0)
    uint32_t i_35 = zx.d(i_38)
    int32_t rcx_71
    
    do
        int32_t zmm0_2[0x4]
        
        if (not(zmm1[0] f>= 0f))
            char* result_2 = result_1
            int32_t i_13 = 0
            
            do
                int64_t i_16 = sx.q(i_13)
                
                if (result_2[i_16] == 0)
                    int64_t r8_6 = *rsi_3
                    zmm0_2 = *(rbx + zx.q(*(r8_6 + (i_16 << 1) + 2)) * 0x14)
                    uint64_t rax_34 = zx.q(*(r8_6 + (i_16 << 1) + 4))
                    zmm0_2[0] = zmm0_2[0] f+ *(rbx + zx.q(*(r8_6 + (i_16 << 1))) * 0x14)
                    zmm0_2[0] = zmm0_2[0] f+ *(rbx + rax_34 * 0x14)
                    
                    if (not(zmm0_2[0] f<= zmm1[0]))
                        i_3 = i_13
                        zmm1 = zmm0_2
                        
                        if (zmm0_2[0] f>= zmm3[0])
                            break
                    
                    result_2 = result_1
                
                i_13 += 3
            while (i_13 u< count_3)
            
            i_7 = i_3
        
        int64_t i_10 = sx.q(i_3)
        uint32_t i_17 = 1
        result_1[i_10] = 1
        int64_t rsi_4 = sx.q(var_2f4)
        uint64_t rcx_38 = zx.q(*(*rsi_3 + (i_10 << 1)))
        *r11_1 = rcx_38.d
        uint64_t r9_4 = rcx_38 * 5
        *(*arg2 + (rsi_4 << 1)) = rcx_38.w
        int32_t rdx_20 = *(rbx + (r9_4 << 2) + 8)
        *(rbx + (r9_4 << 2) + 0x10) = 0
        
        if (rdx_20 != 1)
            int32_t rcx_39 = *(rbx + (r9_4 << 2) + 4)
            int32_t r11_2 = rcx_39 + rdx_20
            
            if (rcx_39 u< r11_2)
                while (*(r15_2 + (sx.q(rcx_39) << 2)) != i_3)
                    rcx_39 += 1
                    
                    if (rcx_39 u>= r11_2)
                        break
            
            if (rcx_39 != r11_2 - 1)
                int64_t rdx_21 = sx.q(rcx_39)
                int32_t r8_7 = *(r15_2 + (rdx_21 << 2))
                *(r15_2 + (rdx_21 << 2)) = *(r15_2 + (sx.q(r11_2) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_4 << 2) + 4) + *(rbx + (r9_4 << 2) + 8)) << 2) - 4) =
                    r8_7
                rdx_20 = *(rbx + (r9_4 << 2) + 8)
            
            uint64_t rdx_22 = zx.q(rdx_20 - 1)
            *(rbx + (r9_4 << 2) + 8) = rdx_22.d
            
            if (rdx_20 != 1)
                uint64_t rax_45 = zx.q(*(rbx + (r9_4 << 2) + 0x10))
                uint64_t i_39 = zx.q(i_38)
                zmm2 = zx.o(0)
                
                if (rax_45.d u< i_39.d)
                    zmm2 = *((((i_39 << 6) + rax_45) << 2) + &data_143f23d80)
                
                if (rdx_22.d u>= 0x40)
                    zmm0_2 = zx.o(0)
                    zmm0_2[0] = float.s(zx.q(rdx_22.d))
                    zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                    zmm0_2 = 0x3f800000
                    zmm0_2[0] = 1f f/ zmm1[0]
                    zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                else
                    zmm0_2 = *((rdx_22 << 2) + &data_143f27e80)
                
                zmm2[0] = zmm2[0] f+ zmm0_2[0]
            else
                zmm2 = 0xbf800000
            
            r11_1 = var_2f0
            *(rbx + (r9_4 << 2)) = zmm2[0]
        else
            *(rbx + (r9_4 << 2) + 8) = 0
        
        int64_t* r8_9 = arg1
        uint64_t rcx_43 = zx.q(*(*r8_9 + (i_10 << 1) + 2))
        uint64_t r9_5 = rcx_43 * 5
        *(*arg2 + (rsi_4 << 1) + 2) = rcx_43.w
        bool cond:2_1
        
        if (*(rbx + (r9_5 << 2) + 0x10) u>= 1)
            *(rbx + (r9_5 << 2) + 0x10) = 1
            i_17 = 2
            cond:2_1 = *(rbx + (r9_5 << 2) + 8) != 1
            *(r11_1 + 4) = zx.d(rcx_43.w)
        
        if (*(rbx + (r9_5 << 2) + 0x10) u< 1 || cond:2_1)
            int32_t rcx_44 = *(rbx + (r9_5 << 2) + 4)
            int32_t rdx_23 = *(rbx + (r9_5 << 2) + 8)
            int32_t r11_3 = rcx_44 + rdx_23
            
            if (rcx_44 u< r11_3)
                while (*(r15_2 + (sx.q(rcx_44) << 2)) != i_3)
                    rcx_44 += 1
                    
                    if (rcx_44 u>= r11_3)
                        break
            
            if (rcx_44 != r11_3 - 1)
                int64_t rdx_24 = sx.q(rcx_44)
                int32_t r8_8 = *(r15_2 + (rdx_24 << 2))
                *(r15_2 + (rdx_24 << 2)) = *(r15_2 + (sx.q(r11_3) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_5 << 2) + 4) + *(rbx + (r9_5 << 2) + 8)) << 2) - 4) =
                    r8_8
                rdx_23 = *(rbx + (r9_5 << 2) + 8)
                r8_9 = arg1
            
            uint64_t rdx_25 = zx.q(rdx_23 - 1)
            *(rbx + (r9_5 << 2) + 8) = rdx_25.d
            
            if (rdx_23 != 1)
                uint64_t rax_57 = zx.q(*(rbx + (r9_5 << 2) + 0x10))
                uint64_t i_40 = zx.q(i_38)
                zmm2 = zx.o(0)
                
                if (rax_57.d u< i_40.d)
                    zmm2 = *((((i_40 << 6) + rax_57) << 2) + &data_143f23d80)
                
                if (rdx_25.d u>= 0x40)
                    zmm0_2 = zx.o(0)
                    zmm0_2[0] = float.s(zx.q(rdx_25.d))
                    zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                    zmm0_2 = 0x3f800000
                    zmm0_2[0] = 1f f/ zmm1[0]
                    zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                else
                    zmm0_2 = *((rdx_25 << 2) + &data_143f27e80)
                
                zmm2[0] = zmm2[0] f+ zmm0_2[0]
            else
                zmm2 = 0xbf800000
            
            r11_1 = var_2f0
            *(rbx + (r9_5 << 2)) = zmm2[0]
        else
            *(rbx + (r9_5 << 2) + 8) = 0
        
        uint64_t rcx_48 = zx.q(*(*r8_9 + (i_10 << 1) + 4))
        uint64_t r9_6 = rcx_48 * 5
        *(*arg2 + (rsi_4 << 1) + 4) = rcx_48.w
        
        if (*(rbx + (r9_6 << 2) + 0x10) u< i_17)
        label_1419f8911:
            int32_t rcx_50 = *(rbx + (r9_6 << 2) + 4)
            int32_t rdx_26 = *(rbx + (r9_6 << 2) + 8)
            int32_t r11_4 = rcx_50 + rdx_26
            
            if (rcx_50 u< r11_4)
                while (*(r15_2 + (sx.q(rcx_50) << 2)) != i_3)
                    rcx_50 += 1
                    
                    if (rcx_50 u>= r11_4)
                        break
            
            if (rcx_50 != r11_4 - 1)
                int64_t rdx_27 = sx.q(rcx_50)
                int32_t r8_10 = *(r15_2 + (rdx_27 << 2))
                *(r15_2 + (rdx_27 << 2)) = *(r15_2 + (sx.q(r11_4) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_6 << 2) + 4) + *(rbx + (r9_6 << 2) + 8)) << 2) - 4) =
                    r8_10
                rdx_26 = *(rbx + (r9_6 << 2) + 8)
            
            uint64_t rdx_28 = zx.q(rdx_26 - 1)
            uint64_t i_41 = zx.q(i_38)
            *(rbx + (r9_6 << 2) + 8) = rdx_28.d
            
            if (rdx_26 != 1)
                uint64_t rax_68 = zx.q(*(rbx + (r9_6 << 2) + 0x10))
                zmm2 = zx.o(0)
                
                if (rax_68.d u< i_41.d)
                    zmm2 = *((((i_41 << 6) + rax_68) << 2) + &data_143f23d80)
                
                if (rdx_28.d u>= 0x40)
                    zmm0_2 = zx.o(0)
                    zmm0_2[0] = float.s(zx.q(rdx_28.d))
                    zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                    zmm0_2 = 0x3f800000
                    zmm0_2[0] = 1f f/ zmm1[0]
                    zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                else
                    zmm0_2 = *((rdx_28 << 2) + &data_143f27e80)
                
                zmm2[0] = zmm2[0] f+ zmm0_2[0]
            else
                zmm2 = 0xbf800000
            
            *(rbx + (r9_6 << 2)) = zmm2[0]
        else
            uint64_t i_19 = zx.q(i_17)
            *(rbx + (r9_6 << 2) + 0x10) = i_17
            i_17 += 1
            bool cond:4_1 = *(rbx + (r9_6 << 2) + 8) != 1
            *(r11_1 + (i_19 << 2)) = zx.d(rcx_48.w)
            
            if (cond:4_1)
                goto label_1419f8911
            
            *(rbx + (r9_6 << 2) + 8) = 0
        
        uint32_t i_33 = i_35
        uint32_t r15_3 = 0
        
        if (i_31 u>= 4)
            uint32_t i_37 = zx.d(arg3)
            void* rdi_9 = var_2c8_1 + 8
            uint64_t rax_72 = zx.q(((i_31 - 4) u>> 2) + 1)
            uint32_t i_36 = i_37
            uint64_t i_9 = zx.q(rax_72.d)
            uint64_t i_4
            
            do
                int64_t rcx_54 = sx.q(*(rdi_9 - 8))
                uint32_t i_26 = i_17
                int64_t rdx_29 = rcx_54 * 5
                
                if (*(rbx + (rdx_29 << 2) + 0x10) u>= i_17)
                    uint64_t i_21 = zx.q(i_17)
                    *(rbx + (rdx_29 << 2) + 0x10) = i_17
                    i_17 += 1
                    uint64_t rax_73 = zx.q(i_37.w)
                    *(var_2f0 + (i_21 << 2)) = rcx_54.d
                    uint64_t rcx_55 = zx.q(*(rbx + (rdx_29 << 2) + 8))
                    
                    if (rcx_55.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (i_26 u< rax_73.d)
                            zmm2 = *((((rax_73 << 6) + i_21) << 2) + &data_143f23d80)
                        
                        if (rcx_55.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_55)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_55 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_29 << 2)) = zmm2[0]
                
                int64_t rcx_56 = sx.q(*(rdi_9 - 4))
                uint32_t i_27 = i_17
                int64_t rdx_30 = rcx_56 * 5
                
                if (*(rbx + (rdx_30 << 2) + 0x10) u>= i_17)
                    uint64_t i_22 = zx.q(i_17)
                    *(rbx + (rdx_30 << 2) + 0x10) = i_17
                    i_17 += 1
                    uint64_t rax_76 = zx.q(i_37.w)
                    *(var_2f0 + (i_22 << 2)) = rcx_56.d
                    uint64_t rcx_57 = zx.q(*(rbx + (rdx_30 << 2) + 8))
                    
                    if (rcx_57.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (i_27 u< rax_76.d)
                            zmm2 = *((((rax_76 << 6) + i_22) << 2) + &data_143f23d80)
                        
                        if (rcx_57.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_57)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_57 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_30 << 2)) = zmm2[0]
                
                int64_t rcx_58 = sx.q(*rdi_9)
                uint32_t i_28 = i_17
                int64_t rdx_31 = rcx_58 * 5
                
                if (*(rbx + (rdx_31 << 2) + 0x10) u>= i_17)
                    uint64_t i_23 = zx.q(i_17)
                    *(rbx + (rdx_31 << 2) + 0x10) = i_17
                    i_17 += 1
                    *(var_2f0 + (i_23 << 2)) = rcx_58.d
                    uint64_t rcx_59 = zx.q(*(rbx + (rdx_31 << 2) + 8))
                    
                    if (rcx_59.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (i_28 u< i_36)
                            zmm2 = *((((zx.q(i_36) << 6) + i_23) << 2) + &data_143f23d80)
                        
                        if (rcx_59.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_59)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_59 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_31 << 2)) = zmm2[0]
                
                int64_t rcx_60 = sx.q(*(rdi_9 + 4))
                uint32_t i_29 = i_17
                int64_t rdx_32 = rcx_60 * 5
                
                if (*(rbx + (rdx_32 << 2) + 0x10) u< i_17)
                    i_33 = i_36
                else
                    uint64_t i_24 = zx.q(i_17)
                    *(rbx + (rdx_32 << 2) + 0x10) = i_17
                    i_17 += 1
                    *(var_2f0 + (i_24 << 2)) = rcx_60.d
                    uint64_t rcx_61 = zx.q(*(rbx + (rdx_32 << 2) + 8))
                    
                    if (rcx_61.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (i_29 u< i_33)
                            zmm2 = *((((zx.q(i_33) << 6) + i_24) << 2) + &data_143f23d80)
                        
                        if (rcx_61.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_61)
                            i_33 = i_36
                            zmm1 = _mm_sqrt_ss(0, zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                            zmm2[0] = zmm2[0] f+ zmm0_2[0]
                            *(rbx + (rdx_32 << 2)) = zmm2[0]
                        else
                            i_33 = i_36
                            zmm2[0] = zmm2[0] f+ (*((rcx_61 << 2) + &data_143f27e80))[0]
                            *(rbx + (rdx_32 << 2)) = zmm2[0]
                    else
                        i_36 = zx.d(i_37.w)
                        *(rbx + (rdx_32 << 2)) = 0xbf800000
                
                rdi_9 += 0x10
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
            i_3 = i_7
            r15_3 = (rax_72 << 2).d
            i_31 = i_32
        
        uint32_t i_34 = i_33
        
        if (r15_3 u< i_31)
            uint64_t i_11 = zx.q(i_31 - r15_3)
            void* r9_7 = var_2c8_1 + (zx.q(r15_3) << 2)
            uint64_t i_5
            
            do
                int64_t rcx_63 = sx.q(*r9_7)
                uint32_t i_30 = i_17
                int64_t rdx_33 = rcx_63 * 5
                
                if (*(rbx + (rdx_33 << 2) + 0x10) u>= i_17)
                    uint64_t i_20 = zx.q(i_17)
                    *(rbx + (rdx_33 << 2) + 0x10) = i_17
                    i_17 += 1
                    uint64_t rax_86 = zx.q(arg3)
                    *(var_2f0 + (i_20 << 2)) = rcx_63.d
                    uint64_t rcx_64 = zx.q(*(rbx + (rdx_33 << 2) + 8))
                    
                    if (rcx_64.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (i_30 u< rax_86.d)
                            zmm2 = *((((rax_86 << 6) + i_20) << 2) + &data_143f23d80)
                        
                        if (rcx_64.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_64)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_64 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_33 << 2)) = zmm2[0]
                
                r9_7 += 4
                i_5 = i_11
                i_11 -= 1
            while (i_5 != 1)
            i_33 = i_34
            i_3 = i_7
        
        zmm1 = 0xbf800000
        
        if (i_17 != 0)
            void* r14_2 = var_2f0
            uint64_t i_14 = zx.q(i_17)
            uint32_t var_2b0
            var_2b0.q = r14_2
            i_32.q = i_14
            uint64_t i_6
            
            do
                int32_t r11_5 = 0
                int64_t rcx_65 = sx.q(*r14_2) * 5
                int32_t rsi_5 = *(rbx + (rcx_65 << 2) + 8)
                *(rbx + (rcx_65 << 2) + 0xc) = *(rbx + (rcx_65 << 2) + 0x10)
                *(rbx + (rcx_65 << 2) + 0x10) = 0xffffffff
                
                if (rsi_5 != 0)
                    int32_t r15_6 = *(rbx + (rcx_65 << 2) + 4)
                    int64_t rdi_10 = *arg1
                    int32_t i_18 = i_7
                    int64_t r14_3 = var_308
                    int64_t i_25
                    
                    do
                        i_25 = sx.q(*(r14_3 + (sx.q(r15_6 + r11_5) << 2)))
                        zmm0_2 = *(rbx + zx.q(*(rdi_10 + (i_25 << 1) + 2)) * 0x14)
                        uint64_t rax_94 = zx.q(*(rdi_10 + (i_25 << 1) + 4))
                        zmm0_2[0] = zmm0_2[0] f+ *(rbx + zx.q(*(rdi_10 + (i_25 << 1))) * 0x14)
                        zmm0_2[0] = zmm0_2[0] f+ *(rbx + rax_94 * 0x14)
                        bool cond:8_1 = zmm0_2[0] f<= zmm1[0]
                        zmm2 = _mm_max_ss(zmm0_2[0], zmm1[0])
                        
                        if (cond:8_1)
                            i_25 = zx.q(i_18)
                        
                        r11_5 += 1
                        i_18 = i_25.d
                        zmm1 = zmm2
                    while (r11_5 u< rsi_5)
                    
                    r14_2 = var_2b0.q
                    i_14 = i_32.q
                    i_7 = i_25.d
                
                r14_2 += 4
                i_6 = i_14
                i_14 -= 1
                var_2b0.q = r14_2
                i_32.q = i_14
            while (i_6 != 1)
            i_33 = i_34
            i_3 = i_7
        
        void* rax_95 = var_2c8_1
        i_31 = i_33
        count_3 = count_2
        
        if (i_17 u<= i_33)
            i_31 = i_17
        
        r15_2 = var_308
        r11_1 = rax_95
        i_38 = arg3
        rsi_3 = arg1
        var_2c8_1 = var_2f0
        rcx_71 = var_2f4 + 3
        var_2f0 = rax_95
        i_32 = i_31
        var_2f4 = rcx_71
    while (rcx_71 u< count_3)

char* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

if (r15_2 != 0)
    result = sub_140a74f90(r15_2)

if (rbx != 0)
    result = sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_338)
return result
