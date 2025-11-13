// 函数: sub_14152cc90
// 地址: 0x14152cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg9
int64_t* rsi = arg10
int32_t r8 = arg5
int32_t rdi = arg6
uint128_t zmm6 = zx.o(0)
uint128_t zmm7 = zx.o(0)
uint128_t zmm8 = zx.o(0)
*r9 = 0xffffffff
*rsi = 0x46293e5939a08cea
int32_t* rax = *arg1
int32_t rdx = *rax
int32_t rcx = rax[1]

if (rax[0x28].b != 0)
    r8 = rdx

if (*(rax + 0xa1) != 0)
    rdi = rcx

int32_t var_118 = rdi
int32_t rax_1

if (*(rax + 0xa2) == 0)
    rax_1 = arg7
else
    rax_1 = rax[2]

int32_t r12 = 0
int32_t var_130 = 0
int32_t var_138 = 0
int32_t var_140 = 0
int32_t rax_4 = arg8 - (rcx * rax_1 + rdi) * rdx - r8
sub_14152d8b0(arg1, arg8, arg2.q, arg3.q, arg4.q, 0, 0, 0, r9, rsi)
uint64_t result = *arg1
double zmm2 = 8.0
int64_t temp0 = _mm_cvtepi32_pd(zx.q(arg5))
int128_t zmm9
zmm9.q = arg2.q f- *(result + 0x70)
int128_t zmm10
zmm10.q = arg3.q f- *(result + 0x80)
int128_t zmm11
zmm11.q = arg4.q f- *(result + 0x90)
zmm9.q = zmm9.q f- temp0 f* *(result + 0x18)
zmm10.q = zmm10.q f- _mm_cvtepi32_pd(zx.q(arg6)) f* *(result + 0x20)
int32_t r9_1 = int.d(zmm9.q f* arg1[4] * zmm2)
zmm11.q = zmm11.q f- _mm_cvtepi32_pd(zx.q(arg7)) f* *(result + 0x28)
int32_t rcx_5 = int.d(zmm10.q f* arg1[5] f* zmm2)
uint64_t rdx_2 = zx.q(int.d(zmm11.q f* arg1[6] * zmm2))
int32_t r13

if (r9_1 s< 4)
    r13 = 0
    zmm2 = zmm9.q
else
    result = zx.q(7 - r9_1)
    bool cond:3_1 = 7 - r9_1 s>= 0
    zmm2 = arg1[1] f- zmm9.q
    r9_1 = 0
    r12 = 0x60007f
    
    if (cond:3_1)
        r9_1 = result.d
    
    r13 = 0x200001

int32_t arg_8 = r12
int32_t arg_10 = r13
double zmm1

if (rcx_5 s< 4)
    zmm1 = zmm10.q
else
    r12 |= 0x3003f80
    r13 |= 0x1000080
    arg_8 = r12
    arg_10 = r13
    result = zx.q(7 - rcx_5)
    bool cond:4_1 = 7 - rcx_5 s>= 0
    zmm1 = arg1[2] f- zmm10.q
    rcx_5 = 0
    
    if (cond:4_1)
        rcx_5 = result.d

uint64_t zmm0

if (rdx_2.d s< 4)
    zmm0 = zmm11.q
else
    r12 |= 0x181fc000
    r13 |= 0x8004000
    arg_8 = r12
    int32_t r8_1 = 7 - rdx_2.d
    bool cond:5_1 = 7 - rdx_2.d s>= 0
    arg_10 = r13
    rdx_2 = 0
    zmm0 = arg1[3] f- zmm11.q
    
    if (cond:5_1)
        rdx_2 = zx.q(r8_1)

double zmm3 = *rsi

if (zmm2 * zmm2 <= zmm3 || zmm1 * zmm1 <= zmm3 || not(zmm0 f* zmm0 f> zmm3))
    int32_t result_2 = 0
    int64_t rdx_3 = sx.q((r9_1 + ((rcx_5 + (rdx_2 << 2).d) << 2)) << 6)
    int64_t i_1 = 0
    int64_t r11_1 = arg1[0x10] + (rdx_3 << 3)
    int64_t rax_7 = arg1[0xf]
    int64_t r15_1 = sx.q(*(rax_7 + (rdx_3 << 2)))
    result = rax_7 + (rdx_3 << 2)
    uint64_t result_1 = result
    int64_t var_110_1 = r11_1
    
    while (true)
        zmm2 = *rsi
        
        if (zmm2 f< *(r11_1 + (i_1 << 3)))
            break
        
        int32_t r8_2 = *(result + (i_1 << 2) + 4)
        i_1 += 1
        int32_t r8_4 = (r8_2 ^ r12) + r13
        result_2 += 1
        int32_t rsi_2 = r8 + (r8_4 & 0x7f) - 0x40
        
        if (r8 + (r8_4 & 0x7f) - 0x40 s< 0 || rsi_2 s>= arg1[7].d)
            rsi = arg10
        else
            int32_t r11_2 = (r8_4 u>> 7 & 0x7f) - 0x40 + rdi
            
            if (r11_2 s< 0 || r11_2 s>= *(arg1 + 0x3c))
                r11_1 = var_110_1
                rsi = arg10
            else
                int32_t r9_3 = rax_1 + (r8_4 u>> 0xe & 0x7f) - 0x40
                
                if (rax_1 + (r8_4 u>> 0xe & 0x7f) - 0x40 s< 0 || r9_3 s>= arg1[8].d)
                    r11_1 = var_110_1
                    rsi = arg10
                else
                    if ((r8_4 & 0x7f) - 0x40 s> 0)
                        zmm1 = _mm_cvtepi32_pd(zx.q((r8_4 & 0x7f) - 0x40)) f* arg1[1] f- zmm9.q
                        zmm1 = zmm1 * zmm1
                    else if ((r8_4 & 0x7f) - 0x40 s>= 0)
                        zmm1 = (zx.o(0)).q
                    else
                        zmm1 = _mm_cvtepi32_pd(zx.q((r8_4 & 0x7f) - 0x3f)) f* arg1[1] f- zmm9.q
                        zmm1 = zmm1 * zmm1
                    
                    if ((r8_4 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0 =
                            _mm_cvtepi32_pd(zx.q((r8_4 u>> 7 & 0x7f) - 0x40)) f* arg1[2] f- zmm10.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    else if ((r8_4 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm0 =
                            _mm_cvtepi32_pd(zx.q((r8_4 u>> 7 & 0x7f) - 0x3f)) f* arg1[2] f- zmm10.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    
                    if ((r8_4 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0 = _mm_cvtepi32_pd(zx.q((r8_4 u>> 0xe & 0x7f) - 0x40)) f* arg1[3]
                            f- zmm11.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    else if ((r8_4 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm0 = _mm_cvtepi32_pd(zx.q((r8_4 u>> 0xe & 0x7f) - 0x3f)) f* arg1[3]
                            f- zmm11.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    
                    if (zmm1 > zmm2)
                        result = result_1
                        r11_1 = var_110_1
                        rsi = arg10
                    else
                        int32_t* rcx_8 = *arg1
                        
                        if (rcx_8[0x28].b != 0)
                            int32_t rdx_4 = *rcx_8
                            int32_t rdi_2 = arg5 + rsi_2
                            
                            if (rdi_2 s< rdx_4)
                                rsi_2 += rdx_4
                                zmm8.q = *(rcx_8 + 0x70) f- *(rcx_8 + 0x78)
                            else if (rdi_2 s< rdx_4 * 2)
                                zmm8 = zx.o(0)
                            else
                                rsi_2 -= rdx_4
                                zmm8.q = *(rcx_8 + 0x78) f- *(rcx_8 + 0x70)
                        
                        if (*(rcx_8 + 0xa1) != 0)
                            int32_t rdx_5 = rcx_8[1]
                            int32_t rdi_4 = arg6 + r11_2
                            
                            if (rdi_4 s< rdx_5)
                                r11_2 += rdx_5
                                zmm7.q = *(rcx_8 + 0x80) f- *(rcx_8 + 0x88)
                            else if (rdi_4 s< rdx_5 * 2)
                                zmm7 = zx.o(0)
                            else
                                r11_2 -= rdx_5
                                zmm7.q = *(rcx_8 + 0x88) f- *(rcx_8 + 0x80)
                        
                        if (*(rcx_8 + 0xa2) != 0)
                            int32_t rdx_6 = rcx_8[2]
                            int32_t rdi_6 = arg7 + r9_3
                            
                            if (rdi_6 s< rdx_6)
                                r9_3 += rdx_6
                                zmm6.q = *(rcx_8 + 0x90) f- *(rcx_8 + 0x98)
                            else if (rdi_6 s< rdx_6 * 2)
                                zmm6 = zx.o(0)
                            else
                                r9_3 -= rdx_6
                                zmm6.q = *(rcx_8 + 0x98) f- *(rcx_8 + 0x90)
                        
                        rsi = arg10
                        sub_14152d8b0(arg1, (rcx_8[1] * r9_3 + r11_2) * *rcx_8 + rsi_2 + rax_4, 
                            arg2.q f- zmm8.q, arg3.q f- zmm7.q, arg4.q f- zmm6.q, 
                            (r8_4 & 0x7f) - 0x40, (r8_4 u>> 7 & 0x7f) - 0x40, 
                            (r8_4 u>> 0xe & 0x7f) - 0x40, arg9, rsi)
                        r11_1 = var_110_1
                        result = result_1
                        rdi = var_118
        
        if (i_1 s>= r15_1)
            arg1[0xe].d += 1
            
            if (arg1[0xe].d == 0xffffffff)
                int32_t* i = arg1[0x11]
                result = sx.q(arg1[9].d)
                
                if (i u< &i[result])
                    do
                        *i = 0
                        i = &i[1]
                        result = arg1[0x11]
                    while (i u< result + (sx.q(arg1[9].d) << 2))
                
                arg1[0xe].d = 1
            
            int32_t* rdi_7 = arg1[0x12]
            int32_t* var_100 = rdi_7
            int32_t* rcx_13 = rdi_7
            int32_t* var_108 = rcx_13
            
            if (i_1 s< 0x3f)
                do
                    if (*(r11_1 + (i_1 << 3)) f> *rsi)
                        return result
                    
                    result = result_1
                    result_2 += 1
                    int32_t rbp_4 = (*(result + ((i_1 + 1) << 2)) ^ r12) + r13
                    int32_t r14_5 = r8 + (rbp_4 & 0x7f) - 0x40
                    
                    if (r8 + (rbp_4 & 0x7f) - 0x40 s>= 0)
                        int32_t rcx_14 = arg1[7].d
                        
                        if (r14_5 s< rcx_14)
                            int32_t rsi_4 = var_118 + (rbp_4 u>> 7 & 0x7f) - 0x40
                            
                            if (var_118 + (rbp_4 u>> 7 & 0x7f) - 0x40 s>= 0)
                                result = zx.q(*(arg1 + 0x3c))
                                
                                if (rsi_4 s< result.d)
                                    int32_t rdi_9 = rax_1 + (rbp_4 u>> 0xe & 0x7f) - 0x40
                                    
                                    if (rax_1 + (rbp_4 u>> 0xe & 0x7f) - 0x40 s>= 0
                                            && rdi_9 s< arg1[8].d)
                                        int32_t* rcx_17 = arg1[0x11] + ((
                                            sx.q((result.d * rdi_9 + rsi_4) * rcx_14) + sx.q(r14_5))
                                            << 2)
                                        *rcx_17 = arg1[0xe].d
                                        var_130.q = *arg10
                                        var_138.q = zmm11.q
                                        var_140.q = zmm10.q
                                        result = sub_14152cc00(arg1, (rbp_4 & 0x7f) - 0x40, 
                                            (rbp_4 u>> 7 & 0x7f) - 0x40, 
                                            (rbp_4 u>> 0xe & 0x7f) - 0x40, zmm9.q, var_140, 
                                            var_138, var_130)
                                        
                                        if (result.b == 0)
                                            int32_t* rcx_19 = *arg1
                                            int32_t r9_5 = rdi_9
                                            int32_t r10_5 = rsi_4
                                            int32_t r11_3 = r14_5
                                            
                                            if (rcx_19[0x28].b != result.b)
                                                int32_t rdx_14 = *rcx_19
                                                int32_t r8_10 = arg5 + r14_5
                                                
                                                if (r8_10 s< rdx_14)
                                                    r11_3 = rdx_14 + r14_5
                                                    zmm8.q = *(rcx_19 + 0x70) f- *(rcx_19 + 0x78)
                                                else if (r8_10 s< rdx_14 * 2)
                                                    zmm8 = zx.o(0)
                                                else
                                                    r11_3 -= rdx_14
                                                    zmm8.q = *(rcx_19 + 0x78) f- *(rcx_19 + 0x70)
                                            
                                            if (*(rcx_19 + 0xa1) != 0)
                                                int32_t rdx_15 = rcx_19[1]
                                                int32_t r8_12 = arg6 + rsi_4
                                                
                                                if (r8_12 s< rdx_15)
                                                    r10_5 = rdx_15 + rsi_4
                                                    zmm7.q = *(rcx_19 + 0x80) f- *(rcx_19 + 0x88)
                                                else if (r8_12 s< rdx_15 * 2)
                                                    zmm7 = zx.o(0)
                                                else
                                                    r10_5 -= rdx_15
                                                    zmm7.q = *(rcx_19 + 0x88) f- *(rcx_19 + 0x80)
                                            
                                            if (*(rcx_19 + 0xa2) != 0)
                                                int32_t rdx_16 = rcx_19[2]
                                                int32_t r8_14 = arg7 + rdi_9
                                                
                                                if (r8_14 s< rdx_16)
                                                    r9_5 = rdx_16 + rdi_9
                                                    zmm6.q = *(rcx_19 + 0x90) f- *(rcx_19 + 0x98)
                                                else if (r8_14 s< rdx_16 * 2)
                                                    zmm6 = zx.o(0)
                                                else
                                                    r9_5 -= rdx_16
                                                    zmm6.q = *(rcx_19 + 0x98) f- *(rcx_19 + 0x90)
                                            
                                            sub_14152d8b0(arg1, 
                                                (rcx_19[1] * r9_5 + r10_5) * *rcx_19 + r11_3
                                                    + rax_4, 
                                                arg2.q f- zmm8.q, arg3.q f- zmm7.q, 
                                                arg4.q f- zmm6.q, (rbp_4 & 0x7f) - 0x40, 
                                                (rbp_4 u>> 7 & 0x7f) - 0x40, 
                                                (rbp_4 u>> 0xe & 0x7f) - 0x40, arg9, arg10)
                                            
                                            if (var_108 u> arg1[0x13] - 0x48)
                                                sub_14152bed0(arg1, &var_100, &var_108)
                                            
                                            var_138.q = &var_108
                                            double var_148_3
                                            var_148_3.d = rsi_4
                                            result = sub_14152d980(arg1, rbp_4, rcx_17, r14_5, 
                                                var_148_3.d, rdi_9, var_138)
                                        
                                        r11_1 = var_110_1
                            
                            rsi = arg10
                    
                    i_1 += 1
                    r12 = arg_8
                    r13 = arg_10
                while (i_1 s< 0x3f)
                
                rdi_7 = var_100
                rcx_13 = var_108
            
            result = sx.q(result_2)
            
            if (not(*(r11_1 + (result << 3)) f> *rsi) && rdi_7 != rcx_13)
                do
                    if (rdi_7 == arg1[0x13])
                        rdi_7 = arg1[0x12]
                    
                    int32_t r15_6 = *rdi_7
                    int32_t r12_5 = rdi_7[1]
                    int32_t r13_4 = rdi_7[2]
                    rdi_7 = &rdi_7[3]
                    int32_t r11_5 = r15_6 - r8
                    int32_t r8_18 = r12_5 - var_118
                    int32_t r9_8 = r13_4 - rax_1
                    var_100 = rdi_7
                    
                    if (r11_5 s> 0)
                        zmm1 = _mm_cvtepi32_pd(zx.q(r11_5)) f* arg1[1] f- zmm9.q
                        zmm1 = zmm1 * zmm1
                    else if (r11_5 s>= 0)
                        zmm1 = (zx.o(0)).q
                    else
                        result = zx.q(r11_5 + 1)
                        zmm1 = _mm_cvtepi32_pd(zx.q(result.d)) f* arg1[1] f- zmm9.q
                        zmm1 = zmm1 * zmm1
                    
                    if (r8_18 s> 0)
                        zmm0 = _mm_cvtepi32_pd(zx.q(r8_18)) f* arg1[2] f- zmm10.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    else if (r8_18 s< 0)
                        result = zx.q(r8_18 + 1)
                        zmm0 = _mm_cvtepi32_pd(zx.q(result.d)) f* arg1[2] f- zmm10.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    
                    if (r9_8 s> 0)
                        zmm0 = _mm_cvtepi32_pd(zx.q(r9_8)) f* arg1[3] f- zmm11.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    else if (r9_8 s< 0)
                        result = zx.q(r9_8 + 1)
                        zmm0 = _mm_cvtepi32_pd(zx.q(result.d)) f* arg1[3] f- zmm11.q
                        zmm1 = zmm1 f+ zmm0 f* zmm0
                    
                    if (not(zmm1 f> *rsi))
                        int32_t* rcx_23 = *arg1
                        int32_t rsi_5 = r13_4
                        int32_t rbp_5 = r12_5
                        int32_t r14_6 = r15_6
                        
                        if (rcx_23[0x28].b != 0)
                            int32_t rdx_25 = *rcx_23
                            int32_t r10_7 = arg5 + r15_6
                            
                            if (r10_7 s< rdx_25)
                                r14_6 = rdx_25 + r15_6
                                zmm8.q = *(rcx_23 + 0x70) f- *(rcx_23 + 0x78)
                            else if (r10_7 s< rdx_25 * 2)
                                zmm8 = zx.o(0)
                            else
                                r14_6 -= rdx_25
                                zmm8.q = *(rcx_23 + 0x78) f- *(rcx_23 + 0x70)
                        
                        if (*(rcx_23 + 0xa1) != 0)
                            int32_t rdx_26 = rcx_23[1]
                            int32_t r10_9 = arg6 + r12_5
                            
                            if (r10_9 s< rdx_26)
                                rbp_5 = rdx_26 + r12_5
                                zmm7.q = *(rcx_23 + 0x80) f- *(rcx_23 + 0x88)
                            else if (r10_9 s< rdx_26 * 2)
                                zmm7 = zx.o(0)
                            else
                                rbp_5 -= rdx_26
                                zmm7.q = *(rcx_23 + 0x88) f- *(rcx_23 + 0x80)
                        
                        if (*(rcx_23 + 0xa2) != 0)
                            int32_t rdx_27 = rcx_23[2]
                            int32_t r10_11 = arg7 + r13_4
                            
                            if (r10_11 s< rdx_27)
                                rsi_5 = rdx_27 + r13_4
                                zmm6.q = *(rcx_23 + 0x90) f- *(rcx_23 + 0x98)
                            else if (r10_11 s< rdx_27 * 2)
                                zmm6 = zx.o(0)
                            else
                                rsi_5 -= rdx_27
                                zmm6.q = *(rcx_23 + 0x98) f- *(rcx_23 + 0x90)
                        
                        rsi = arg10
                        sub_14152d8b0(arg1, (rcx_23[1] * rsi_5 + rbp_5) * *rcx_23 + r14_6 + rax_4, 
                            arg2.q f- zmm8.q, arg3.q f- zmm7.q, arg4.q f- zmm6.q, r11_5, r8_18, 
                            r9_8, arg9, rsi)
                        int32_t* rdx_34 = var_108
                        int64_t rcx_28
                        
                        if (rdi_7 u> rdx_34)
                            rcx_28 = (rdi_7 - rdx_34) s>> 2
                        else
                            rcx_28 = ((rdi_7 - arg1[0x12]) s>> 2) + ((arg1[0x13] - rdx_34) s>> 2)
                        
                        if (rcx_28 s< 0x12)
                            sub_14152bed0(arg1, &var_100, &var_108)
                            rdi_7 = var_100
                        
                        result = sub_14152c000(arg1, r15_6, r12_5, r13_4, &var_108)
                        rcx_13 = var_108
                while (rdi_7 != rcx_13)
            
            break

return result
