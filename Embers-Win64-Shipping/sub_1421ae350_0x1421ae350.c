// 函数: sub_1421ae350
// 地址: 0x1421ae350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_158
void* rsp_1 = &var_158
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11
int128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
int128_t zmm13
int128_t var_a8 = zmm13
int128_t zmm14
int128_t var_b8 = zmm14
int128_t zmm15
int128_t var_c8 = zmm15
char var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* var_f0 = arg2
int64_t* rdx = *(arg1 + 0x1d8)
int32_t rcx = *(arg1 + 0x110)
void* rsi

if (rcx != 0xfffffff0)
    int64_t rcx_1 = sx.q(rcx + 0x1f)
    int64_t rax_4 = rcx_1 + 0xf
    
    if (rax_4 u<= rcx_1)
        rax_4 = 0xffffffffffffff0
    
    int64_t rax_5 = rax_4 & 0xfffffffffffffff0
    __chkstk(rax_5)
    rsp_1 = &var_158 - rax_5
    rsi = (rsp_1 + 0x3f) & 0xfffffffffffffff0
else
    rsi = nullptr

char rax_6 = rdx[0x2d].b

if (rax_6 u> 1)
    var_128 = 0

if (rax_6 u<= 1 || rax_6 == 6)
    var_128 = 1

int32_t var_118
int32_t result_1
int512_t zmm1

if ((*(*rdx + 0x59) & 1) == 0)
    uint128_t zmm0
    zmm0.d = (*(arg1 + 0x134)).d f- *(arg1 + 0x50)
    zmm1.o = *(arg1 + 0x138)
    zmm1.d = zmm1.d f- *(arg1 + 0x54)
    var_118 = zmm0.d
    zmm0.d = (*(arg1 + 0x13c)).d f- *(arg1 + 0x58)
    int32_t var_114_1 = zmm1.d
    result_1 = zmm0.d
else
    var_118.q = data_143dbb1f8.q
    result_1 = data_143dbb200

int32_t i_2 = *arg3
int32_t i = i_2
uint64_t result = zx.q(result_1)
uint64_t var_100 = var_118.q
int32_t i_1 = i

if (i_2 s> 0)
    zmm7 = arg3[1]
    zmm14 = result.d
    zmm6 = zmm7
    zmm12.d = 1f f/ _mm_cvtepi32_ps(zx.o(i_2)).d
    
    do
        int64_t r9
        int512_t zmm0_1
        r9, zmm0_1 = memset(rsi, 0, sx.q(*(arg1 + 0x110)))
        int512_t zmm2
        zmm2.o = *(arg1 + 0x94)
        zmm1.o = *(arg1 + 0x90)
        zmm0_1.o = *(arg1 + 0x98)
        zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm2.q)
        *(rsi + 0x10) = (zmm1.o).q
        *(rsi + 0x18) = zmm0_1.d
        int32_t rax_9 = arg4[1].d
        int32_t rcx_4 = i_2 - rax_9
        
        if (rax_9 != 0 && i s> rcx_4)
            int64_t rdx_1 = sx.q(i - rcx_4) * 9
            int64_t rax_13 = *arg4
            zmm0_1.o = zx.o(*(rax_13 + (rdx_1 << 3) - 0x48))
            *(rsi + 0x10) = (zmm0_1.o).q
            *(rsi + 0x18) = *(rax_13 + (rdx_1 << 3) - 0x40)
            *(rsi + 0xc) = *(*arg4 + (rdx_1 << 3) - 0x3c)
            int64_t rax_16 = *arg4
            zmm0_1.o = *(rsi + 0x30)
            zmm0_1.d = zmm0_1.d f+ *(rax_16 + (rdx_1 << 3) - 0x38)
            *(rsi + 0x30) = zmm0_1.d
            zmm1.o = *(rax_16 + (rdx_1 << 3) - 0x34)
            zmm1.d = zmm1.d f+ *(rsi + 0x34)
            *(rsi + 0x34) = zmm1.d
            zmm0_1.o = *(rax_16 + (rdx_1 << 3) - 0x30)
            zmm0_1.d = zmm0_1.d f+ *(rsi + 0x38)
            *(rsi + 0x38) = zmm0_1.d
        
        void* rdx_2 = *(arg1 + 0x1d8)
        int32_t j = 0
        int512_t zmm3
        
        if (*(rdx_2 + 0x20) s> 0)
            int64_t* rbx = nullptr
            
            do
                int64_t* rcx_6 = *(rbx + *(rdx_2 + 0x18))
                
                if (rcx_6[5].b s>= 0)
                    zmm7 = zmm6
                else
                    int64_t rax_18 = *rcx_6
                    zmm7 = arg3[1]
                    zmm3.o = zmm7
                    *(rsp_1 + 0x20) = rsi
                    (*(rax_18 + 0x268))(nop)
                    rdx_2 = *(arg1 + 0x1d8)
                
                j += 1
                rbx = &rbx[1]
            while (j s< *(rdx_2 + 0x20))
            
            i = i_1
        
        int32_t rax_19 = *(arg1 + 0x28c) * 0xbb38435
        zmm1.o = zmm14
        zmm2.o = var_100:4.d
        zmm3.o = zx.o(i)
        zmm3.o = _mm_cvtepi32_ps(zmm3.o)
        *(arg1 + 0x28c) = rax_19 + 0x3619636b
        zmm0_1.o = zx.o(*(rsi + 0x20))
        int64_t* rax_23 = var_f0
        zmm8.d = ((rax_19 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
        zmm3.d = zmm3.d f* zmm12.d
        var_f0 = &rax_23[9]
        int32_t rax_25 = rax_23[7].d
        rax_23[2] = (zmm0_1.o).q
        zmm0_1.o = zmm7
        int128_t zmm4_1
        zmm4_1.d = var_100.d.d f* zmm3.d
        rax_23[3].d = *(rsi + 0x28)
        zmm0_1.d = zmm0_1.d f* rax_23[2].d
        void* rax_27 = *(arg1 + 0x1d8)
        zmm4_1.d = zmm4_1.d f+ *(rsi + 0x10)
        zmm1.d = zmm1.d f* zmm3.d
        zmm2.d = zmm2.d f* zmm3.d
        zmm1.d = zmm1.d f+ *(rsi + 0x18)
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm0_1.o = zmm8
        zmm0_1.d = zmm0_1.d f* *(rax_27 + 0x148)
        zmm2.d = zmm2.d f+ *(rsi + 0x14)
        zmm4_1.d = zmm4_1.d f+ *(rax_27 + 0x13c)
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        zmm0_1.o = zmm7
        zmm0_1.d = zmm0_1.d f* *(rax_23 + 0x14)
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm0_1.o = zmm8
        zmm0_1.d = zmm0_1.d f* *(rax_27 + 0x14c)
        zmm2.d = zmm2.d f+ *(rax_27 + 0x140)
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm0_1.o = zmm7
        zmm0_1.d = zmm0_1.d f* rax_23[3].d
        zmm1.d = zmm1.d f+ zmm0_1.d
        zmm0_1.o = zmm8
        zmm0_1.d = zmm0_1.d f* *(rax_27 + 0x150)
        zmm1.d = zmm1.d f+ *(rax_27 + 0x144)
        zmm1.d = zmm1.d f+ zmm0_1.d
        zmm0_1.o = zmm4_1
        zmm0_1.o = _mm_unpacklo_ps(zmm0_1.o, zmm2.q)
        *rax_23 = (zmm0_1.o).q
        rax_23[1].d = zmm1.d
        *(rax_23 + 0xc) = *(rsi + 0xc)
        zmm0_1.o = *(rsi + 0x1c)
        zmm0_1.o = __maxss_xmmss_memss(zmm0_1.d, 0x3a83126f)
        *(rax_23 + 0x1c) = zmm0_1.d
        zmm1.o = zx.o(*(rsi + 0x40))
        zmm0_1.o = zmm1.o
        var_118.q = (zmm1.o).q
        zmm0_1.o = _mm_shuffle_ps(zmm0_1.o, zmm0_1.o, 0x55)
        
        if (zmm0_1.d f>= 0f)
            zmm3.o = 0x3f000000
        else
            zmm3.o = zx.o(0)
        
        zmm1.o = var_118
        
        if (zmm1.d f>= 0f)
            zmm2.o = 0x3f000000
        else
            zmm2.o = zx.o(0)
        
        bool cond:0_1 = var_128 == 0
        zmm1.o = _mm_and_ps(zmm1.o, 0x7fffffff)
        zmm1.d = zmm1.d f* *(*(arg1 + 0x1d8) + 0x154)
        zmm1.d = zmm1.d f* 0.5f
        rax_23[4].d = zmm1.d
        
        if (cond:0_1)
            void* rax_31 = *(arg1 + 0x1d8)
            zmm0_1.o = _mm_and_ps(zmm0_1.o, 0x7fffffff)
            zmm0_1.d = zmm0_1.d f* *(rax_31 + 0x158)
            zmm0_1.d = zmm0_1.d f* 0.5f
        else
            zmm0_1.o = zmm1.o
        
        *(rax_23 + 0x24) = zmm0_1.d
        zmm1.d = zmm1.d f+ zmm2.d
        zmm3.d = zmm3.d f+ *(rax_23 + 0x24)
        rax_23[4].d = zmm1.d
        *(rax_23 + 0x24) = zmm3.d
        zmm6 = *(rsi + 0x2c)
        zmm6[0] = zmm6[0] * 0.159154937f
        zmm0_1.o = zmm6
        truncf(zmm0_1.d)
        zmm6[0] = zmm6[0] f- zmm0_1.d
        rax_23[5].d = zmm6[0]
        zmm1.o = *(rsi + 0x3c)
        zmm1.d = zmm1.d f* 0.159154937f
        zmm1.d = zmm1.d f* *(*(arg1 + 0x1d8) + 0x15c)
        *(rax_23 + 0x3c) = zmm8.d
        zmm1.d = zmm1.d f/ *(rax_23 + 0x1c)
        *(rax_23 + 0x2c) = zmm1.d
        zmm6 = *(arg1 + 0x12c)
        int32_t* rbx_2 = *(arg1 + 0x1d8) + 0xa0
        zmm6[0] = zmm6[0] f- rbx_2[1]
        uint64_t rdi = zx.q(*(rbx_2 + 0x1b))
        zmm6[0] = zmm6[0] f* *rbx_2
        float temp0_9[0x4] = _mm_max_ss(zmm6[0], 0)
        zmm0_1.o = temp0_9
        truncf(zmm0_1.d)
        uint32_t r8_3 = zx.d(*(rbx_2 + 0x1a))
        zmm1.o = temp0_9
        int64_t r9_1 = *(rbx_2 + 8)
        zmm3.o = temp0_9
        zmm3.d = zmm3.d f- zmm0_1.d
        int32_t rcx_7 = int.d(zmm1.d)
        int32_t r11_2 = zx.d(*(rbx_2 + 0x19)) - 1
        int32_t rax_33 = r11_2
        
        if (rcx_7 u<= r11_2)
            rax_33 = rcx_7
        
        if (rcx_7 + 1 u<= r11_2)
            r11_2 = rcx_7 + 1
        
        int32_t* r10_1 = r9_1 + (sx.q(rax_33 * r8_3) << 2)
        int64_t rax_36 = sx.q(r11_2 * r8_3)
        zmm2.o = *(r9_1 + (rax_36 << 2))
        zmm1.o = *(r9_1 + (rax_36 << 2) + (rdi << 2))
        zmm1.d = zmm1.d f- r10_1[rdi]
        zmm2.d = zmm2.d f- *r10_1
        zmm1.d = zmm1.d f* zmm3.d
        int32_t rax_38 = *(arg1 + 0x28c) * 0xbb38435 + 0x3619636b
        zmm2.d = zmm2.d f* zmm3.d
        zmm1.d = zmm1.d f+ r10_1[rdi]
        zmm2.d = zmm2.d f+ *r10_1
        *(arg1 + 0x28c) = rax_38
        zmm0_1.o = rax_38 u>> 9 | 0x3f800000
        zmm1.d = zmm1.d f- zmm2.d
        zmm0_1.d = zmm0_1.d f- 1f
        zmm1.d = zmm1.d f* zmm0_1.d
        zmm1.d = zmm1.d f+ zmm2.d
        *(rax_23 + 0x34) = zmm1.d
        zmm6 = *(arg1 + 0x12c)
        int32_t* rbx_4 = *(arg1 + 0x1d8) + 0xc0
        zmm6[0] = zmm6[0] f- rbx_4[1]
        uint64_t rdi_1 = zx.q(*(rbx_4 + 0x1b))
        zmm6[0] = zmm6[0] f* *rbx_4
        float temp0_10[0x4] = _mm_max_ss(zmm6[0], 0)
        zmm0_1.o = temp0_10
        truncf(zmm0_1.d)
        zmm3.o = temp0_10
        zmm1.o = temp0_10
        zmm3.d = zmm3.d f- zmm0_1.d
        int32_t rcx_9 = int.d(zmm1.d)
        uint32_t r8_4 = zx.d(*(rbx_4 + 0x1a))
        int64_t r9_2 = *(rbx_4 + 8)
        int32_t r11_5 = zx.d(*(rbx_4 + 0x19)) - 1
        int32_t rax_41 = r11_5
        
        if (rcx_9 u<= r11_5)
            rax_41 = rcx_9
        
        if (rcx_9 + 1 u<= r11_5)
            r11_5 = rcx_9 + 1
        
        int32_t* r10_2 = r9_2 + (sx.q(rax_41 * r8_4) << 2)
        int64_t rax_44 = sx.q(r11_5 * r8_4)
        zmm2.o = *(r9_2 + (rax_44 << 2))
        zmm1.o = *(r9_2 + (rax_44 << 2) + (rdi_1 << 2))
        zmm1.d = zmm1.d f- r10_2[rdi_1]
        zmm2.d = zmm2.d f- *r10_2
        zmm1.d = zmm1.d f* zmm3.d
        int32_t rax_46 = *(arg1 + 0x28c) * 0xbb38435 + 0x3619636b
        zmm2.d = zmm2.d f* zmm3.d
        zmm1.d = zmm1.d f+ r10_2[rdi_1]
        zmm2.d = zmm2.d f+ *r10_2
        *(arg1 + 0x28c) = rax_46
        zmm0_1.o = rax_46 u>> 9 | 0x3f800000
        zmm1.d = zmm1.d f- zmm2.d
        zmm0_1.d = zmm0_1.d f- 1f
        zmm1.d = zmm1.d f* zmm0_1.d
        zmm1.d = zmm1.d f+ zmm2.d
        rax_23[6].d = zmm1.d
        zmm6 = *(arg1 + 0x12c)
        int32_t* rbx_6 = *(arg1 + 0x1d8) + 0x100
        zmm6[0] = zmm6[0] f- rbx_6[1]
        uint64_t rdi_2 = zx.q(*(rbx_6 + 0x1b))
        zmm6[0] = zmm6[0] f* *rbx_6
        float temp0_11[0x4] = _mm_max_ss(zmm6[0], 0)
        zmm0_1.o = temp0_11
        truncf(zmm0_1.d)
        uint32_t r8_5 = zx.d(*(rbx_6 + 0x1a))
        zmm1.o = temp0_11
        int64_t r9_3 = *(rbx_6 + 8)
        zmm3.o = temp0_11
        zmm3.d = zmm3.d f- zmm0_1.d
        int32_t rcx_11 = int.d(zmm1.d)
        int32_t r11_8 = zx.d(*(rbx_6 + 0x19)) - 1
        int32_t rax_49 = r11_8
        
        if (rcx_11 u<= r11_8)
            rax_49 = rcx_11
        
        if (rcx_11 + 1 u<= r11_8)
            r11_8 = rcx_11 + 1
        
        int32_t* r10_3 = r9_3 + (sx.q(rax_49 * r8_5) << 2)
        int64_t rax_52 = sx.q(r11_8 * r8_5)
        zmm2.o = *(r9_3 + (rax_52 << 2))
        zmm2.d = zmm2.d f- *r10_3
        zmm1.o = *(r9_3 + (rax_52 << 2) + (rdi_2 << 2))
        zmm1.d = zmm1.d f- r10_3[rdi_2]
        zmm2.d = zmm2.d f* zmm3.d
        int32_t rax_54 = *(arg1 + 0x28c) * 0xbb38435 + 0x3619636b
        zmm1.d = zmm1.d f* zmm3.d
        zmm2.d = zmm2.d f+ *r10_3
        zmm1.d = zmm1.d f+ r10_3[rdi_2]
        *(arg1 + 0x28c) = rax_54
        zmm0_1.o = rax_54 u>> 9 | 0x3f800000
        zmm1.d = zmm1.d f- zmm2.d
        zmm0_1.d = zmm0_1.d f- 1f
        int64_t rcx_13 = sx.q(rax_25)
        zmm7[0] = zmm7[0] f- arg3[2]
        i_2 = *arg3
        i = i_1 - 1
        zmm1.d = zmm1.d f* zmm0_1.d
        zmm0_1.o = 0x3f800000
        i_1 = i
        arg3[1] = zmm7[0]
        zmm6 = zmm7
        zmm1.d = zmm1.d f+ zmm2.d
        rax_23[7].d = zmm1.d
        result = *(arg1 + 0x218)
        zmm0_1.d = 1f f/ *(rax_23 + 0x1c)
        zmm0_1.d = zmm0_1.d f+ *(arg1 + 0x128)
        zmm0_1.o = __maxss_xmmss_memss(zmm0_1.d, *(result + (rcx_13 << 2)))
        *(result + (rcx_13 << 2)) = zmm0_1.d
    while (i s> 0)

__security_check_cookie(rax_1 ^ &var_128)
return result
