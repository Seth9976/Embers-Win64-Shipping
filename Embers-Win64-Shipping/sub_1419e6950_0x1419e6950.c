// 函数: sub_1419e6950
// 地址: 0x1419e6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void* r12 = arg1 + 0x80
int32_t rbx = *(r12 + 0x28)
void* r13 = r12 + 0x10
int128_t zmm7
int128_t var_58 = zmm7
int32_t r8 = 0
int32_t r9 = 0
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
int32_t var_178 = 0
int32_t var_174 = 1
void* var_118 = r13
void* var_170 = r13
int32_t var_168 = 0xffffffff
int64_t var_164 = 0

if (rbx != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_1419e6a4d:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_174_1 = rax_8
        int32_t arg_20 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_164.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_164.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_164:4.d = r9
            var_178 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_168_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_1419e6a4d
        
        var_164.d = rbx

int32_t rdx_2 = *(r12 + 0x28)
float var_150[0x4] = var_178.o
int32_t r8_2 = rdx_2 s>> 5
int32_t rsi = 0xffffffff << (rdx_2.b & 0x1f)
int32_t r9_3 = rdx_2 & 0xffffffe0
void* var_158
var_158.d = r8_2
int128_t var_140 = 0xffffffff
int64_t var_e8 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_150[2] = rsi
var_150[3] = rdx_2
var_140.d = r9_3
float var_108[0x4] = r12.o

if (rdx_2 != rbx)
    void* rax_11 = *(r13 + 0x10)
    void* r10_2 = r13
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_6 != 0)
    label_1419e6b3d:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t var_120_1 = temp0_4
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_150[3] = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_150[3] = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_140.d = r9_3
            var_158.d = r8_2
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_150[2] = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1419e6b3d
        
        var_150[3] = rbx

int128_t zmm8 = 0x3f800000
int128_t zmm14 = 0x322bcc77
int128_t zmm15 = 0xc0000000
int128_t zmm12 = 0xbfd1eb85
int128_t zmm13 = 0x3fd1eb85
uint64_t rdx_8 = var_150[2].q u>> 0x20
uint64_t var_110 = rdx_8

while (true)
    int64_t rcx_8 = sx.q(var_150[3])
    int64_t* result = var_108[0].q
    
    if (rcx_8.d == rdx_8.d && var_150[0].q == r13 && result == r12)
        return result
    
    int32_t* r13_1 = *(*result + rcx_8 * 0x10)
    result = nullptr
    void* rcx_10 = *(arg1 + 0x28)
    
    if (0 == *(rcx_10 + 0x38))
        *(rcx_10 + 0x38) = 0
    else
        result = zx.q(*(rcx_10 + 0x38))
    
    if (result.d != *(arg1 + 0x150))
        return result
    
    if (r13_1[0x14].b != 0)
        void* rsi_1 = *(r13_1 + 0x38)
        
        if (*(arg1 + 0xe0) s<= *(rsi_1 + 0x2a0))
            int32_t rax_21
            
            if (*(rsi_1 + 0x2bc) == 0 || *(rsi_1 + 0x2bd) == 0)
                rax_21.b = 0
            else
                rax_21.b = 1
            
            if (rax_21.b == *(arg1 + 0x14c))
                int32_t i = 0
                
                if (*(rsi_1 + 0x2b0) s> 0)
                    do
                        float zmm0[0x4] = *(rsi_1 + 0x2c0)
                        int32_t rax_23 = *(arg1 + 0x148) * 0xbb38435 + 0x3619636b
                        *(arg1 + 0x148) = rax_23
                        zmm9 = rax_23 u>> 9 | 0x3f800000
                        zmm9[0] = zmm9[0] f- zmm8.d
                        zmm9[0] = zmm9[0] * zmm0[0]
                        float zmm0_1[0x4]
                        int32_t zmm8_1
                        float zmm9_1[0x4]
                        zmm0_1, zmm8_1, zmm9_1 = sub_1419e2f60(rsi_1, zmm9)
                        void* rbx_1 = *(r13_1 + 0x38)
                        int32_t rax_26 = 0
                        float zmm4_1[0x4] = r13_1[0xb]
                        float temp0_5[0x4] = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xe0)))
                        float zmm3_1 = *(rbx_1 + 0x2c4)
                        int32_t rcx_12 = int.d(zmm3_1 - temp0_5[0])
                        
                        if (rcx_12 s> 0)
                            do
                                zmm4_1[0] = zmm4_1[0] f+ zmm8_1
                                
                                if (zmm4_1[0] > zmm3_1)
                                    break
                                
                                rax_26 += 1
                            while (rax_26 s< rcx_12)
                        
                        int32_t rax_27 = 0
                        
                        if (rcx_12 s> 0)
                            do
                                zmm9_1[0] = zmm9_1[0] f+ zmm8_1
                                
                                if (zmm9_1[0] > zmm3_1)
                                    break
                                
                                rax_27 += 1
                            while (rax_27 s< rcx_12)
                        
                        int128_t zmm0_2
                        int512_t zmm6_1
                        float zmm7_2[0x4]
                        zmm0_2, zmm6_1, zmm7_2 = sub_1419e2f60(rbx_1, zmm4_1)
                        zmm6_1.o = zmm0_2
                        float zmm0_3
                        float zmm6_2
                        float zmm8_2
                        zmm0_3, zmm6_2, zmm8_2 = sub_1419e2f60(rbx_1, zmm7_2)
                        float temp0_6[0x4] =
                            __maxss_xmmss_memss((*(rbx_1 + 0x29c))[0], *(rbx_1 + 0x298))
                        int32_t rcx_15 = *(arg1 + 0x148) * 0xbb38435
                        temp0_6[0] = temp0_6[0] * (zmm6_2 + zmm0_3)
                        *(arg1 + 0x148) = (rcx_15 + 0x3619636b) * 0xbb38435 + 0x3619636b
                        float zmm7_3 = _mm_sqrt_ss(0, 
                            logf(_mm_max_ss(((rcx_15 + 0x3619636b) u>> 9 | 0x3f800000) - zmm8_2, 
                                zmm14.d)) f* zmm15.d) * cosf(_mm_max_ss(
                            (((rcx_15 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000)
                                - zmm8_2, 
                            zmm14.d) * 6.28318548f)[0]
                        
                        if (zmm7_3 f>= zmm12.d)
                            _mm_min_ss(zmm7_3, zmm13.d)
                        
                        *(rsi_1 + 0x2ac)
                        temp0_6[0]
                        *(rsi_1 + 0x2a8)
                        *(arg1 + 0x148) =
                            ((rcx_15 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                            + 0x3619636b
                        float zmm1_3[0x4] = (
                            ((rcx_15 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                            + 0x3619636b) u>> 9 | 0x3f800000
                        zmm1_3[0] = zmm1_3[0] - zmm8_2
                        float temp0_11[0x4] = _mm_max_ss(zmm1_3[0], zmm14.d)
                        temp0_11[0] = temp0_11[0] * 3.14159274f
                        temp0_11[0] = temp0_11[0] + temp0_11[0]
                        int64_t r8_3
                        r8_3, zmm0, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, 
                            zmm15 = __libm_sse2_sincosf_(temp0_11)
                        zmm10[0] = zmm10[0] * zmm10[0]
                        zmm6.d = zmm6.d f+ zmm7.d
                        float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
                        temp0_12[0] = temp0_12[0] f* zmm6.d
                        zmm0[0] = zmm0[0] f* zmm6.d
                        temp0_12[0] = temp0_12[0] * temp0_12[0]
                        zmm0[0] = zmm0[0] * zmm0[0]
                        zmm0[0] = zmm0[0] + temp0_12[0]
                        zmm0[0] = zmm0[0] f+ zmm14.d
                        
                        if (not(zmm0[0] <= zmm10[0]))
                            zmm0[0] = zmm0[0] f+ r13_1[1]
                            temp0_12[0] = temp0_12[0] f+ *r13_1
                            float var_128_1 = r13_1[2][0]
                            float var_12c_1 = zmm0[0]
                            float var_130 = temp0_12[0]
                            int64_t* rax_38
                            rax_38, zmm8, zmm12, zmm13, zmm14, zmm15 =
                                sub_1419e3940(arg1, &var_130, r8_3, rsi_1, zmm9[0], 0)
                            
                            if (rax_38 != 0)
                                int64_t rbx_4 = sx.q(arg2[1].d)
                                int32_t rcx_18 = (rbx_4 + 1).d
                                arg2[1].d = rcx_18
                                
                                if (rcx_18 s> *(arg2 + 0xc))
                                    sub_1405a4d70(arg2)
                                
                                *(*arg2 + (rbx_4 << 3)) = rax_38
                        
                        i += 1
                    while (i s< *(rsi_1 + 0x2b0))
                
                r12 = arg1 + 0x80
    
    var_150[2] &= not.d(var_108[3])
    sub_14059bdd0(&var_108[2])
    rdx_8 = var_110
    r13 = var_118
