// 函数: sub_1419f8ec0
// 地址: 0x1419f8ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t count_1 = arg1[1].d
int16_t result_19 = arg3
int32_t count_2 = count_1
int32_t rsi = 0
int32_t i = 0
int32_t zmm1[0x4]
int32_t zmm2[0x4]

if (count_1 != 0)
    if (count_1 u>= 8 && data_143ccb970 s>= 2)
        int64_t rcx = *arg1
        zmm1 = zx.o(0)
        zmm2 = zx.o(0)
        
        do
            int64_t i_8 = sx.q(i)
            i += 8
            zmm1 = _mm_max_epu32(zmm1, *(rcx + (i_8 << 2)))
            zmm2 = _mm_max_epu32(zmm2, *(rcx + (i_8 << 2) + 0x10))
        while (i u< count_1 - (count_1 & 7))
        
        zmm1 = _mm_max_epu32(zmm1, zmm2)
        zmm1 = _mm_max_epu32(zmm1, _mm_bsrli_si128(zmm1, 8))
        rsi = _mm_max_epu32(zmm1, _mm_bsrli_si128(zmm1, 4))[0]
    
    if (i u< count_1)
        int64_t rdx_2 = *arg1
        
        do
            int64_t i_9 = sx.q(i)
            
            if (*(rdx_2 + (i_9 << 2)) u>= rsi)
                rsi = *(rdx_2 + (i_9 << 2))
            
            i += 1
        while (i u< count_1)

int64_t var_300 = 0
char* rbx = nullptr
char* var_308 = nullptr

if (rsi != 0xffffffff)
    sub_141a149d0(&var_308, rsi + 1)
    rbx = var_308

int64_t var_2e0
int64_t var_2d8

if (rsi != 0xffffffff)
    uint64_t i_16 = zx.q(rsi + 1)
    uint64_t i_1
    
    do
        int64_t rdi_1 = sx.q(var_300.d)
        var_2e0 = 0
        var_2d8 = 0
        int32_t rax_4 = (rdi_1 + 1).d
        var_300.d = rax_4
        
        if (rax_4 s> var_300:4.d)
            sub_141a146b0(&var_308)
            rbx = var_308
        
        int64_t rcx_3 = rdi_1 * 5
        *(rbx + (rcx_3 << 2)) = var_2e0.o
        *(rbx + (rcx_3 << 2) + 0x10) = 0
        i_1 = i_16
        i_16 -= 1
    while (i_1 != 1)
    count_1 = count_2

int32_t rcx_5 = *(arg2 + 0xc)
int32_t rdi_2 = 0
arg2[1].d = 0

if (rcx_5 != count_1)
    sub_1405dadb0(arg2, count_1)
    rcx_5 = *(arg2 + 0xc)
    rdi_2 = arg2[1].d

int32_t rax_5 = rdi_2 + count_1
arg2[1].d = rax_5

if (rax_5 s> rcx_5)
    sub_1405a4cf0(arg2)

int64_t count = sx.q(count_1)
memset(*arg2 + (sx.q(rdi_2) << 2), 0, count << 2)
int32_t rdx_7 = 0

if (count_1 != 0)
    do
        int64_t rcx_9 = sx.q(rdx_7)
        rdx_7 += 1
        int64_t rax_9 = sx.q(*(*arg1 + (rcx_9 << 2))) * 5
        *(rbx + (rax_9 << 2) + 8) += 1
    while (rdx_7 u< count_1)

int32_t r15_1 = 0
int32_t rdi_3 = 0
var_2e0 = 0
int32_t i_2 = 0
var_2d8:4.d = 0
float zmm0_1

if (rsi + 1 u>= 4)
    uint64_t result_24 = zx.q(result_19)
    
    do
        int64_t i_13 = sx.q(i_2)
        int64_t rdx_8 = i_13 * 5
        *(rbx + (rdx_8 << 2) + 0xc) = -1
        *(rbx + (rdx_8 << 2) + 4) = rdi_3
        uint64_t r9 = zx.q(*(rbx + (rdx_8 << 2) + 8))
        int32_t rdi_4 = rdi_3 + r9.d
        
        if (r9.d != 0)
            uint64_t rax_10 = zx.q(*(rbx + (rdx_8 << 2) + 0xc))
            zmm2 = zx.o(0)
            
            if (rax_10.d u< result_24.d)
                zmm2 = *((((result_24 << 6) + rax_10) << 2) + &data_143f23d80)
            
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
        int64_t rdx_9 = i_13 * 5
        *(rbx + (rdx_9 << 2) + 0x20) = -1
        *(rbx + (rdx_9 << 2) + 0x18) = rdi_4
        uint64_t r9_1 = zx.q(*(rbx + (rdx_9 << 2) + 0x1c))
        int32_t rdi_5 = rdi_4 + r9_1.d
        
        if (r9_1.d != 0)
            uint64_t rax_11 = zx.q(*(rbx + (rdx_9 << 2) + 0x20))
            zmm2 = zx.o(0)
            
            if (rax_11.d u< result_24.d)
                zmm2 = *((((result_24 << 6) + rax_11) << 2) + &data_143f23d80)
            
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
        int64_t rdx_10 = i_13 * 5
        *(rbx + (rdx_10 << 2) + 0x34) = -1
        *(rbx + (rdx_10 << 2) + 0x2c) = rdi_5
        uint64_t r9_2 = zx.q(*(rbx + (rdx_10 << 2) + 0x30))
        int32_t rdi_6 = rdi_5 + r9_2.d
        
        if (r9_2.d != 0)
            uint64_t rax_12 = zx.q(*(rbx + (rdx_10 << 2) + 0x34))
            zmm2 = zx.o(0)
            
            if (rax_12.d u< result_24.d)
                zmm2 = *((((result_24 << 6) + rax_12) << 2) + &data_143f23d80)
            
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
        int64_t rdx_11 = i_13 * 5
        *(rbx + (rdx_11 << 2) + 0x48) = -1
        *(rbx + (rdx_11 << 2) + 0x40) = rdi_6
        uint64_t r8_1 = zx.q(*(rbx + (rdx_11 << 2) + 0x44))
        rdi_3 = rdi_6 + r8_1.d
        
        if (r8_1.d != 0)
            uint64_t rax_13 = zx.q(*(rbx + (rdx_11 << 2) + 0x48))
            zmm2 = zx.o(0)
            
            if (rax_13.d u< result_24.d)
                zmm2 = *((((result_24 << 6) + rax_13) << 2) + &data_143f23d80)
            
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
    int64_t rcx_23 = sx.q(i_2) * 5
    uint64_t rax_15 = zx.q(*(rbx + (rcx_23 << 2) + 8))
    *(rbx + (rcx_23 << 2) + 4) = rdi_3
    rdi_3 += rax_15.d
    *(rbx + (rcx_23 << 2) + 0xc) = -1
    
    if (rax_15.d == 0)
        zmm0_1 = -1f
    else if (rax_15.d u>= 0x40)
        zmm0_1 = 1f f/ _mm_sqrt_ss(zx.o(0)[0], float.s(rax_15))[0]
        zmm0_1 = zmm0_1 + zmm0_1
    else
        zmm0_1 = *((rax_15 << 2) + &data_143f27e80)
    
    i_2 += 1
    *(rbx + (rcx_23 << 2)) = zmm0_1
    *(rbx + (rcx_23 << 2) + 8) = 0

int32_t rsi_2 = 0
var_2d8.d = 0

if (rdi_3 != 0)
    sub_1405dadb0(&var_2e0, rdi_3)
    r15_1 = var_2d8:4.d
    rsi_2 = var_2d8.d

int32_t rax_16 = rdi_3 + rsi_2
var_2d8.d = rax_16

if (rax_16 s> r15_1)
    sub_1405a4cf0(&var_2e0)

int64_t r15_2 = var_2e0
memset(r15_2 + (sx.q(rsi_2) << 2), 0, sx.q(rdi_3) << 2)
int64_t* rsi_3 = arg1
int32_t r9_3 = 0

if (count_1 != 0)
    do
        int64_t r8_4 = sx.q(r9_3)
        int64_t rdx_14 = sx.q(*(*rsi_3 + (r8_4 << 2))) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_14 << 2) + 4) + *(rbx + (rdx_14 << 2) + 8)) << 2)) = r9_3
        *(rbx + (rdx_14 << 2) + 8) += 1
        int64_t rdx_15 = sx.q(*(*rsi_3 + (r8_4 << 2) + 4)) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_15 << 2) + 4) + *(rbx + (rdx_15 << 2) + 8)) << 2)) = r9_3
        *(rbx + (rdx_15 << 2) + 8) += 1
        int64_t rdx_16 = sx.q(*(*rsi_3 + (r8_4 << 2) + 8)) * 5
        *(r15_2 + (sx.q(*(rbx + (rdx_16 << 2) + 4) + *(rbx + (rdx_16 << 2) + 8)) << 2)) = r9_3
        r9_3 += 3
        *(rbx + (rdx_16 << 2) + 8) += 1
    while (r9_3 u< count_1)

var_308 = nullptr
int32_t rcx_30 = 0
var_300:4.d = 0
int32_t rdi_7 = 0
var_300.d = 0

if (count_1 != 0)
    sub_1405c5510(&var_308, count_1)
    rcx_30 = var_300:4.d
    rdi_7 = var_300.d

int32_t rax_30 = count_1 + rdi_7
var_300.d = rax_30

if (rax_30 s> rcx_30)
    sub_1405daba0(&var_308)

char* rdi_8 = var_308
memset(&rdi_8[sx.q(rdi_7)], 0, count)
int32_t count_3 = count_2
void var_18c
void* r12_1 = &var_18c
float zmm3 = data_143f27e84 * 3f
int32_t i_3 = 0
void var_298
void* var_2b0 = &var_298
uint32_t result = 0
void* var_2a8_1 = &var_18c
zmm1 = 0xbf800000
uint32_t result_1 = 0
int32_t i_7 = 0
int32_t var_2f4 = 0

if (count_3 != 0)
    uint32_t result_5 = zx.d(result_19)
    int32_t rcx_68
    
    do
        int32_t zmm0_2[0x4]
        
        if (not(zmm1[0] f>= 0f))
            int32_t i_14 = 0
            
            do
                int64_t i_17 = sx.q(i_14)
                
                if (rdi_8[i_17] == 0)
                    int64_t r8_6 = *rsi_3
                    zmm0_2 = *(rbx + sx.q(*(r8_6 + (i_17 << 2) + 4)) * 0x14)
                    int64_t rax_33 = sx.q(*(r8_6 + (i_17 << 2) + 8))
                    zmm0_2[0] = zmm0_2[0] f+ *(rbx + sx.q(*(r8_6 + (i_17 << 2))) * 0x14)
                    zmm0_2[0] = zmm0_2[0] f+ *(rbx + rax_33 * 0x14)
                    
                    if (not(zmm0_2[0] f<= zmm1[0]))
                        i_3 = i_14
                        zmm1 = zmm0_2
                        
                        if (zmm0_2[0] f>= zmm3)
                            break
                
                i_14 += 3
            while (i_14 u< count_3)
            
            i_7 = i_3
        
        int64_t i_11 = sx.q(i_3)
        uint32_t result_2 = 1
        var_308[i_11] = 1
        int64_t rsi_4 = sx.q(var_2f4)
        int64_t rcx_37 = sx.q(*(*rsi_3 + (i_11 << 2)))
        *r12_1 = rcx_37.d
        int64_t r9_4 = rcx_37 * 5
        *(*arg2 + (rsi_4 << 2)) = rcx_37.d
        int32_t rdx_20 = *(rbx + (r9_4 << 2) + 8)
        *(rbx + (r9_4 << 2) + 0x10) = 0
        
        if (rdx_20 != 1)
            int32_t rcx_38 = *(rbx + (r9_4 << 2) + 4)
            int32_t r11_1 = rcx_38 + rdx_20
            
            if (rcx_38 u< r11_1)
                while (*(r15_2 + (sx.q(rcx_38) << 2)) != i_3)
                    rcx_38 += 1
                    
                    if (rcx_38 u>= r11_1)
                        break
            
            if (rcx_38 != r11_1 - 1)
                int64_t rdx_21 = sx.q(rcx_38)
                int32_t r8_7 = *(r15_2 + (rdx_21 << 2))
                *(r15_2 + (rdx_21 << 2)) = *(r15_2 + (sx.q(r11_1) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_4 << 2) + 4) + *(rbx + (r9_4 << 2) + 8)) << 2) - 4) =
                    r8_7
                rdx_20 = *(rbx + (r9_4 << 2) + 8)
            
            uint64_t rdx_22 = zx.q(rdx_20 - 1)
            *(rbx + (r9_4 << 2) + 8) = rdx_22.d
            
            if (rdx_20 != 1)
                uint64_t rax_44 = zx.q(*(rbx + (r9_4 << 2) + 0x10))
                uint64_t result_21 = zx.q(result_19)
                zmm2 = zx.o(0)
                
                if (rax_44.d u< result_21.d)
                    zmm2 = *((((result_21 << 6) + rax_44) << 2) + &data_143f23d80)
                
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
            
            *(rbx + (r9_4 << 2)) = zmm2[0]
        else
            *(rbx + (r9_4 << 2) + 8) = 0
        
        int64_t* r8_9 = arg1
        int64_t rcx_42 = sx.q(*(*r8_9 + (i_11 << 2) + 4))
        int64_t r9_5 = rcx_42 * 5
        *(*arg2 + (rsi_4 << 2) + 4) = rcx_42.d
        bool cond:2_1
        
        if (*(rbx + (r9_5 << 2) + 0x10) u>= 1)
            *(rbx + (r9_5 << 2) + 0x10) = 1
            result_2 = 2
            cond:2_1 = *(rbx + (r9_5 << 2) + 8) != 1
            *(r12_1 + 4) = rcx_42.d
        
        if (*(rbx + (r9_5 << 2) + 0x10) u< 1 || cond:2_1)
            int32_t rcx_43 = *(rbx + (r9_5 << 2) + 4)
            int32_t rdx_23 = *(rbx + (r9_5 << 2) + 8)
            int32_t r11_2 = rcx_43 + rdx_23
            
            if (rcx_43 u< r11_2)
                while (*(r15_2 + (sx.q(rcx_43) << 2)) != i_3)
                    rcx_43 += 1
                    
                    if (rcx_43 u>= r11_2)
                        break
            
            if (rcx_43 != r11_2 - 1)
                int64_t rdx_24 = sx.q(rcx_43)
                int32_t r8_8 = *(r15_2 + (rdx_24 << 2))
                *(r15_2 + (rdx_24 << 2)) = *(r15_2 + (sx.q(r11_2) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_5 << 2) + 4) + *(rbx + (r9_5 << 2) + 8)) << 2) - 4) =
                    r8_8
                rdx_23 = *(rbx + (r9_5 << 2) + 8)
                r8_9 = arg1
            
            uint64_t rdx_25 = zx.q(rdx_23 - 1)
            *(rbx + (r9_5 << 2) + 8) = rdx_25.d
            
            if (rdx_23 != 1)
                uint64_t rax_55 = zx.q(*(rbx + (r9_5 << 2) + 0x10))
                uint64_t result_22 = zx.q(result_19)
                zmm2 = zx.o(0)
                
                if (rax_55.d u< result_22.d)
                    zmm2 = *((((result_22 << 6) + rax_55) << 2) + &data_143f23d80)
                
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
            
            *(rbx + (r9_5 << 2)) = zmm2[0]
        else
            *(rbx + (r9_5 << 2) + 8) = 0
        
        int64_t rcx_47 = sx.q(*(*r8_9 + (i_11 << 2) + 8))
        int64_t r9_6 = rcx_47 * 5
        *(*arg2 + (rsi_4 << 2) + 8) = rcx_47.d
        
        if (*(rbx + (r9_6 << 2) + 0x10) u< result_2)
        label_1419f97d8:
            int32_t rcx_48 = *(rbx + (r9_6 << 2) + 4)
            int32_t rdx_26 = *(rbx + (r9_6 << 2) + 8)
            int32_t r11_3 = rcx_48 + rdx_26
            
            if (rcx_48 u< r11_3)
                while (*(r15_2 + (sx.q(rcx_48) << 2)) != i_3)
                    rcx_48 += 1
                    
                    if (rcx_48 u>= r11_3)
                        break
            
            if (rcx_48 != r11_3 - 1)
                int64_t rdx_27 = sx.q(rcx_48)
                int32_t r8_10 = *(r15_2 + (rdx_27 << 2))
                *(r15_2 + (rdx_27 << 2)) = *(r15_2 + (sx.q(r11_3) << 2) - 4)
                *(r15_2 + (sx.q(*(rbx + (r9_6 << 2) + 4) + *(rbx + (r9_6 << 2) + 8)) << 2) - 4) =
                    r8_10
                rdx_26 = *(rbx + (r9_6 << 2) + 8)
            
            uint64_t rdx_28 = zx.q(rdx_26 - 1)
            uint64_t result_23 = zx.q(result_19)
            *(rbx + (r9_6 << 2) + 8) = rdx_28.d
            
            if (rdx_26 != 1)
                uint64_t rax_66 = zx.q(*(rbx + (r9_6 << 2) + 0x10))
                zmm2 = zx.o(0)
                
                if (rax_66.d u< result_23.d)
                    zmm2 = *((((result_23 << 6) + rax_66) << 2) + &data_143f23d80)
                
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
            uint64_t result_6 = zx.q(result_2)
            *(rbx + (r9_6 << 2) + 0x10) = result_2
            result_2 += 1
            bool cond:4_1 = *(rbx + (r9_6 << 2) + 8) != 1
            *(r12_1 + (result_6 << 2)) = rcx_47.d
            
            if (cond:4_1)
                goto label_1419f97d8
            
            *(rbx + (r9_6 << 2) + 8) = 0
        
        uint32_t result_7 = result_1
        uint32_t r15_3 = 0
        uint32_t result_3 = result_5
        
        if (result_7 u>= 4)
            void* rdi_10 = var_2b0 + 8
            uint64_t rax_70 = zx.q(((result_7 - 4) u>> 2) + 1)
            uint64_t i_10 = zx.q(rax_70.d)
            uint32_t result_20 = zx.d(arg3)
            uint32_t result_8 = result_20
            uint64_t i_4
            
            do
                int64_t rcx_52 = sx.q(*(rdi_10 - 8))
                uint32_t result_14 = result_2
                int64_t rdx_29 = rcx_52 * 5
                
                if (*(rbx + (rdx_29 << 2) + 0x10) u>= result_2)
                    uint64_t result_10 = zx.q(result_2)
                    *(rbx + (rdx_29 << 2) + 0x10) = result_2
                    result_2 += 1
                    uint64_t rax_71 = zx.q(result_20.w)
                    *(r12_1 + (result_10 << 2)) = rcx_52.d
                    uint64_t rcx_53 = zx.q(*(rbx + (rdx_29 << 2) + 8))
                    
                    if (rcx_53.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (result_14 u< rax_71.d)
                            zmm2 = *((((rax_71 << 6) + result_10) << 2) + &data_143f23d80)
                        
                        if (rcx_53.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_53)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_53 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_29 << 2)) = zmm2[0]
                
                int64_t rcx_54 = sx.q(*(rdi_10 - 4))
                uint32_t result_15 = result_2
                int64_t rdx_30 = rcx_54 * 5
                
                if (*(rbx + (rdx_30 << 2) + 0x10) u>= result_2)
                    uint64_t result_11 = zx.q(result_2)
                    *(rbx + (rdx_30 << 2) + 0x10) = result_2
                    result_2 += 1
                    uint64_t rax_74 = zx.q(result_20.w)
                    *(r12_1 + (result_11 << 2)) = rcx_54.d
                    uint64_t rcx_55 = zx.q(*(rbx + (rdx_30 << 2) + 8))
                    
                    if (rcx_55.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (result_15 u< rax_74.d)
                            zmm2 = *((((rax_74 << 6) + result_11) << 2) + &data_143f23d80)
                        
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
                    
                    *(rbx + (rdx_30 << 2)) = zmm2[0]
                
                int64_t rcx_56 = sx.q(*rdi_10)
                uint32_t result_16 = result_2
                int64_t rdx_31 = rcx_56 * 5
                
                if (*(rbx + (rdx_31 << 2) + 0x10) u>= result_2)
                    uint64_t result_12 = zx.q(result_2)
                    *(rbx + (rdx_31 << 2) + 0x10) = result_2
                    result_2 += 1
                    *(r12_1 + (result_12 << 2)) = rcx_56.d
                    uint64_t rcx_57 = zx.q(*(rbx + (rdx_31 << 2) + 8))
                    
                    if (rcx_57.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (result_16 u< result_8)
                            zmm2 = *((((zx.q(result_8) << 6) + result_12) << 2) + &data_143f23d80)
                        
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
                    
                    *(rbx + (rdx_31 << 2)) = zmm2[0]
                
                int64_t rcx_58 = sx.q(*(rdi_10 + 4))
                uint32_t result_17 = result_2
                int64_t rdx_32 = rcx_58 * 5
                
                if (*(rbx + (rdx_32 << 2) + 0x10) u< result_2)
                    result_3 = result_8
                else
                    uint64_t result_13 = zx.q(result_2)
                    *(rbx + (rdx_32 << 2) + 0x10) = result_2
                    result_2 += 1
                    *(r12_1 + (result_13 << 2)) = rcx_58.d
                    uint64_t rcx_59 = zx.q(*(rbx + (rdx_32 << 2) + 8))
                    
                    if (rcx_59.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (result_17 u< result_3)
                            zmm2 = *((((zx.q(result_3) << 6) + result_13) << 2) + &data_143f23d80)
                        
                        if (rcx_59.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_59)
                            result_3 = result_8
                            zmm1 = _mm_sqrt_ss(0, zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                            zmm2[0] = zmm2[0] f+ zmm0_2[0]
                            *(rbx + (rdx_32 << 2)) = zmm2[0]
                        else
                            result_3 = result_8
                            zmm2[0] = zmm2[0] f+ (*((rcx_59 << 2) + &data_143f27e80))[0]
                            *(rbx + (rdx_32 << 2)) = zmm2[0]
                    else
                        result_8 = zx.d(result_20.w)
                        *(rbx + (rdx_32 << 2)) = 0xbf800000
                
                rdi_10 += 0x10
                i_4 = i_10
                i_10 -= 1
            while (i_4 != 1)
            i_3 = i_7
            r15_3 = (rax_70 << 2).d
            result_7 = result_1
        
        uint32_t result_4 = result_3
        
        if (r15_3 u< result_7)
            uint64_t i_12 = zx.q(result_7 - r15_3)
            void* r9_7 = var_2b0 + (zx.q(r15_3) << 2)
            uint64_t i_5
            
            do
                int64_t rcx_61 = sx.q(*r9_7)
                uint32_t result_18 = result_2
                int64_t rdx_34 = rcx_61 * 5
                
                if (*(rbx + (rdx_34 << 2) + 0x10) u>= result_2)
                    uint64_t result_9 = zx.q(result_2)
                    *(rbx + (rdx_34 << 2) + 0x10) = result_2
                    result_2 += 1
                    uint64_t rax_84 = zx.q(arg3)
                    *(r12_1 + (result_9 << 2)) = rcx_61.d
                    uint64_t rcx_62 = zx.q(*(rbx + (rdx_34 << 2) + 8))
                    
                    if (rcx_62.d != 0)
                        zmm2 = zx.o(0)
                        
                        if (result_18 u< rax_84.d)
                            zmm2 = *((((rax_84 << 6) + result_9) << 2) + &data_143f23d80)
                        
                        if (rcx_62.d u>= 0x40)
                            zmm0_2 = zx.o(0)
                            zmm0_2[0] = float.s(rcx_62)
                            zmm1 = _mm_sqrt_ss(zx.o(0)[0], zmm0_2[0])
                            zmm0_2 = 0x3f800000
                            zmm0_2[0] = 1f f/ zmm1[0]
                            zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                        else
                            zmm0_2 = *((rcx_62 << 2) + &data_143f27e80)
                        
                        zmm2[0] = zmm2[0] f+ zmm0_2[0]
                    else
                        zmm2 = 0xbf800000
                    
                    *(rbx + (rdx_34 << 2)) = zmm2[0]
                
                r9_7 += 4
                i_5 = i_12
                i_12 -= 1
            while (i_5 != 1)
            result_3 = result_4
            i_3 = i_7
        
        zmm1 = 0xbf800000
        
        if (result_2 != 0)
            void* r14_2 = r12_1
            uint32_t var_2c0
            var_2c0.q = r12_1
            uint64_t i_15 = zx.q(result_2)
            result_1.q = i_15
            uint64_t i_6
            
            do
                int32_t r11_4 = 0
                int64_t rcx_63 = sx.q(*r14_2) * 5
                int32_t rsi_5 = *(rbx + (rcx_63 << 2) + 8)
                *(rbx + (rcx_63 << 2) + 0xc) = *(rbx + (rcx_63 << 2) + 0x10)
                *(rbx + (rcx_63 << 2) + 0x10) = 0xffffffff
                
                if (rsi_5 != 0)
                    int32_t r15_5 = *(rbx + (rcx_63 << 2) + 4)
                    int64_t rdi_11 = *arg1
                    int32_t i_18 = i_7
                    int64_t r14_3 = var_2e0
                    int64_t i_19
                    
                    do
                        i_19 = sx.q(*(r14_3 + (sx.q(r15_5 + r11_4) << 2)))
                        zmm0_2 = *(rbx + sx.q(*(rdi_11 + (i_19 << 2) + 4)) * 0x14)
                        int64_t rax_92 = sx.q(*(rdi_11 + (i_19 << 2) + 8))
                        zmm0_2[0] = zmm0_2[0] f+ *(rbx + sx.q(*(rdi_11 + (i_19 << 2))) * 0x14)
                        zmm0_2[0] = zmm0_2[0] f+ *(rbx + rax_92 * 0x14)
                        bool cond:8_1 = zmm0_2[0] f<= zmm1[0]
                        zmm2 = _mm_max_ss(zmm0_2[0], zmm1[0])
                        
                        if (cond:8_1)
                            i_19 = zx.q(i_18)
                        
                        r11_4 += 1
                        i_18 = i_19.d
                        zmm1 = zmm2
                    while (r11_4 u< rsi_5)
                    
                    r14_2 = var_2c0.q
                    i_15 = result_1.q
                    i_7 = i_19.d
                
                r14_2 += 4
                i_6 = i_15
                i_15 -= 1
                var_2c0.q = r14_2
                result_1.q = i_15
            while (i_6 != 1)
            result_3 = result_4
            i_3 = i_7
            r12_1 = var_2a8_1
        
        void* rax_93 = var_2b0
        count_3 = count_2
        r15_2 = var_2e0
        rsi_3 = arg1
        rdi_8 = var_308
        var_2a8_1 = rax_93
        var_2b0 = r12_1
        r12_1 = rax_93
        result = result_3
        result_19 = arg3
        
        if (result_2 u<= result_3)
            result = result_2
        
        rcx_68 = var_2f4 + 3
        result_1 = result
        var_2f4 = rcx_68
    while (rcx_68 u< count_3)

if (rdi_8 != 0)
    result = sub_140a74f90(rdi_8)

if (r15_2 != 0)
    result = sub_140a74f90(r15_2)

if (rbx != 0)
    result = sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_338)
return result
