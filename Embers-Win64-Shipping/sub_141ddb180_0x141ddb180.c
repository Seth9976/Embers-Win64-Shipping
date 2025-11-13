// 函数: sub_141ddb180
// 地址: 0x141ddb180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* rbx = arg5

if (arg5 == 0)
    rbx = arg1 + 0x278

float var_1e8[0x4]
__builtin_memcpy(&var_1e8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
float var_1c8 = arg4
int32_t var_1d4 = (*(arg1 + 0x264)).d
float result_1 = 1f

if (*(rbx + 0xb0) s< 0)
    *(arg3 + 0xd0) = *(rbx + 0xba)
    *(arg3 + 0xe4) = *(rbx + 0x234)
    *(arg3 + 0x150) = *(rbx + 0x2a0)
    *(arg3 + 0x154) = *(rbx + 0x2a4)
    *(arg3 + 0x155) = *(rbx + 0x2a5)
    
    if (arg3 + 0x158 != rbx + 0x2a8)
        int32_t r14_1 = *(rbx + 0x2b0)
        int64_t r15_1 = *(rbx + 0x2a8)
        int32_t r8 = *(arg3 + 0x164)
        *(arg3 + 0x160) = r14_1
        
        if (r14_1 != 0 || r8 != 0)
            sub_1405c4b20(arg3 + 0x158, r14_1, r8)
            memcpy(*(arg3 + 0x158), r15_1, r14_1 * 0x1c)
        else
            *(arg3 + 0x164) = 0
    
    *(arg3 + 0x168) = *(rbx + 0x2b8)
    int128_t zmm1 = *(rbx + 0x228)
    *(arg3 + 0xd4) = (*(rbx + 0x224)).d
    *(arg3 + 0xd8) = zmm1.d
    int32_t zmm2 = *(rbx + 0x230)
    *(arg3 + 0xdc) = (*(rbx + 0x22c)).d
    *(arg3 + 0xe0) = zmm2

if ((*(rbx + 0xb1) & 8) != 0)
    int32_t rax_10 = *(arg3 + 0x17c)
    void* rsi_2 = *(arg3 + 0x170)
    int32_t i_6 = *(arg3 + 0x178)
    
    if (rax_10 s< 0)
        if (i_6 != 0)
            void* rsi_4 = rsi_2 + 0x90
            int32_t i
            
            do
                int64_t rcx_6 = *rsi_4
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                *(rsi_4 - 0x70) = &data_142d6a040
                int64_t rcx_7 = *(rsi_4 - 0x18)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                sub_1405ae180(rsi_4 - 0x68)
                rsi_4 += 0xa8
                i = i_6
                i_6 -= 1
            while (i != 1)
            rax_10 = *(arg3 + 0x17c)
        
        *(arg3 + 0x178) = 0
        
        if (rax_10 != 0)
            sub_1405e4140(arg3 + 0x170, 0)
    else
        if (i_6 != 0)
            int64_t* rsi_3 = rsi_2 + 0x90
            int32_t i_1
            
            do
                int64_t rcx_3 = *rsi_3
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rsi_3[-0xe] = &data_142d6a040
                int64_t rcx_4 = rsi_3[-3]
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                sub_1405ae180(&rsi_3[-0xd])
                rsi_3 = &rsi_3[0x15]
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        *(arg3 + 0x178) = 0
    
    int64_t* i_2 = *(rbx + 0x2c0)
    
    for (void* r12_2 = sx.q(*(rbx + 0x2c8)) * 0xa8 + i_2; i_2 != r12_2; i_2 = &i_2[0x15])
        if (*i_2 != 0)
            int64_t r15_2 = sx.q(*(arg3 + 0x178))
            int32_t rax_12 = (r15_2 + 1).d
            *(arg3 + 0x178) = rax_12
            
            if (rax_12 s> *(arg3 + 0x17c))
                sub_1405e3f90(arg3 + 0x170)
            
            sub_141db7300(r15_2 * 0xa8 + *(arg3 + 0x170), i_2)

void var_128
uint64_t rcx_14
float zmm8_1[0x4]
float zmm9_1[0x4]
rcx_14, zmm8_1, zmm9_1 = sub_141e77da0(&var_128, *(arg1 + 0x50), var_1c8, arg3 + 0x20, rbx)
int32_t zmm7 = (zx.o(0)).d
int32_t var_118
float result_3[0x4]
uint128_t result_4

if ((*(rbx + 0xb1) & 1) != 0)
    char rax_14 = *(rbx + 0xbb)
    
    if (rax_14 != 2)
        result_3 = *(rbx + 0x2d8)
        float zmm6_1[0x4] = var_118
        result_4.d = (*(rbx + 0x2dc)).d f- result_3[0]
        zmm6_1[0] = zmm6_1[0] - result_3[0]
        result_4 = __maxss_xmmss_memss(result_4.d, 0x322bcc77)
        zmm6_1[0] = zmm6_1[0] f/ result_4.d
        
        if (zmm6_1[0] >= 0f)
            zmm6_1 = _mm_min_ss(zmm6_1[0], zmm8_1[0])
        else
            zmm6_1 = zx.o(0)
        
        if (rax_14 != 0)
            result_3, rcx_14, zmm7, zmm8_1, zmm9_1 =
                sub_141f86ef0(sub_141f8b8d0(rbx + 0x2e8), zmm6_1, zx.o(0))
            result_4 = result_3
        else
            result_3 = *(rbx + 0x2d0)
            result_4.d = (*(rbx + 0x2d4)).d f- result_3[0]
            result_4.d = result_4.d f* zmm6_1[0]
            result_4.d = result_4.d f+ result_3[0]
        
        result_4 = _mm_max_ss(result_4.d, zmm7)
    else
        result_4 = *(rbx + 0x2e0)
    
    result_4.d = _mm_max_ss(result_4.d, zmm7).d f* *(arg3 + 0x74)
    *(arg3 + 0x74) = result_4.d

char rax_18 = *(rbx + 0xb0)
float var_1d8_1
int32_t var_11c

if ((rax_18 & 0xa) == 0)
    zmm8_1 = var_1e8[3]
else
    int64_t rcx_17 = *(arg1 + 0x50)
    var_1e8[2] = (*(arg1 + 0x258))[0]
    zmm7 = sub_141e7ce30(rcx_17, &var_128, &var_1e8, &var_1e8[1])
    float zmm3_1[0x4] = zmm8_1
    var_1e8[3] = zmm8_1[0]
    var_1d8_1 = zmm3_1[0]
    uint64_t var_a8
    rcx_14 = zx.q(*(var_a8 + 0xb0))
    float result_2[0x4]
    
    if ((rcx_14.b & 8) == 0 || (rcx_14.b & 2) == 0)
        result_2 = result_1
    else
        void* rax_17 = sub_141e7dd10(*(arg1 + 0x50))
        float zmm0_1[0x4] = sub_141e7dc60(*(arg1 + 0x50), var_1e8[0].d, var_a8)
        uint64_t rcx_20 = var_a8
        
        if ((*(rcx_20 + 0xb0) & 0x10) != 0)
            float zmm4_1[0x4] = var_1e8[2]
            
            if (zmm0_1[0] > zmm4_1[0])
                zmm3_1 = *(rcx_20 + 0x214)
            else
                zmm3_1 = *(rcx_20 + 0x210)
            
            zmm0_1 = sub_140ad6340(zmm4_1, zmm0_1, zmm9_1, zmm3_1[0])
            rcx_20 = var_a8
        
        var_1e8[2] = zmm0_1[0]
        var_1d8_1 = sub_1423648a0(rcx_20, rax_17, zmm0_1[0])
        float zmm0_3 = sub_142364870(var_a8, rax_17, var_1e8[2][0])
        result_2 = var_1e8[2]
        var_1e8[3] = zmm0_3
        result_3 = sub_142364840(var_a8, rax_17, result_2[0])
        zmm3_1 = var_1d8_1
        result_2 = result_3
        zmm8_1 = var_1e8[3]
        result_1 = result_3[0]
    
    result_4 = *(arg3 + 0x74)
    
    if (not(var_1d4[0] f>= result_4.d))
        var_1d4 = result_4.d
    
    result_2[0] = result_2[0] f* *(arg3 + 0x5c)
    result_4.d = result_4.d f* zmm3_1[0]
    *(arg3 + 0x5c) = result_2[0]
    *(arg3 + 0x74) = result_4.d
    rax_18 = *(rbx + 0xb0)
    
    if ((rax_18 & 2) != 0)
        *(arg3 + 0x84) = var_11c[0]
        *(arg3 + 0x88) = var_118.d
        result_4 = var_1e8[1]
        int32_t var_114
        *(arg3 + 0x8c) = var_114[0]
        *(arg3 + 0x90) = result_4.d
        rax_18 = *(rbx + 0xb0)

if ((rax_18 & 1) != 0)
    if (*(rbx + 9) != 0)
        float var_f8[0x4]
        float var_148_1[0x4] = var_f8
        float var_1a8_1 = _mm_shuffle_ps(var_f8, var_f8, 0xaa)[0]
        float temp0_7[0x4] = _mm_unpacklo_ps(var_f8, _mm_shuffle_ps(var_f8, var_f8, 0x55).q)
        int64_t var_1b0_1 = temp0_7.q
        int64_t var_198 = temp0_7.q
        float var_190_1 = var_1a8_1
        rcx_14, result_3, zmm7 = sub_141e5be90(rbx, arg3 + 0x20, &var_198, zmm8_1)
    else
        result_3, rcx_14, zmm7 = sub_141e55300(rbx, var_11c, *(rbx + 0x24), zmm8_1[0])
    
    result_3[0] = result_3[0] f* *(arg3 + 0x60)
    *(arg3 + 0x60) = result_3[0]

if ((*(rbx + 0xb0) & 0x20) != 0)
    if (*(rbx + 0x388) != 0)
        rcx_14.b = 2
        void* rax_20
        rax_20, rcx_14 = sub_141e5ebb0(rcx_14)
        
        if (rax_20 != 0)
            for (int64_t* i_3 = *(rbx + 0x380); i_3 != &i_3[sx.q(*(rbx + 0x388))]; i_3 = &i_3[1])
                void* r8_6 = *i_3
                
                if (r8_6 != 0)
                    void* rax_21 = *(r8_6 + 0x10)
                    rcx_14 = sx.q(*(rax_20 + 0x38))
                    
                    if (rcx_14.d s<= *(rax_21 + 0x38)
                            && *(*(rax_21 + 0x30) + (rcx_14 << 3)) == rax_20 + 0x30)
                        *(arg3 + 0x190) = r8_6
                        break
    else if (not(zmm7 f>= *(arg3 + 0x5c)))
        char rax_23
        rax_23, rcx_14 = sub_141e807c0(*(arg1 + 0x50))
        
        if (rax_23 == 0)
            uint64_t var_178
            sub_141e7dd40(*(arg1 + 0x50), *(arg1 + 0x6d0), &var_178, 0)
            float zmm2_1[0x4] = *(arg3 + 0x30)
            float var_138_1[0x4] = zmm2_1
            float var_180_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
            float temp0_10[0x4] = _mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).q)
            int64_t var_188_1 = temp0_10.q
            int64_t var_168 = temp0_10.q
            float var_160_1 = var_180_1
            int64_t var_158 = var_178
            int32_t var_170
            int32_t var_150_1 = var_170
            sub_141dbc4a0(arg1, &var_158, &var_168, rbx)
            result_3 = *(arg1 + 0x1e0)
            result_3[0] = result_3[0] f* *(arg3 + 0x60)
            *(arg3 + 0x60) = result_3[0]
            bool z_1
            
            if (0 == *(arg1 + 0x188))
                *(arg1 + 0x188) = 0
                z_1 = true
            else
                *(arg1 + 0x188)
                z_1 = false
            
            rcx_14.b = not(z_1)
            *(arg3 + 0x1c4) &= 0xef
            rcx_14.b <<= 4
            *(arg3 + 0x1c4) |= rcx_14.b
            *(arg3 + 0x1bc) = (*(arg1 + 0x1c4))[0]

if (*(rbx + 0x378) s> 0)
    void* rax_27
    rax_27, rcx_14 = sub_141e5ebb0(0)
    
    if (rax_27 != 0)
        for (int64_t* i_4 = *(rbx + 0x370); i_4 != &i_4[sx.q(*(rbx + 0x378))]; i_4 = &i_4[1])
            void* r8_9 = *i_4
            
            if (r8_9 != 0)
                void* rax_28 = *(r8_9 + 0x10)
                rcx_14 = sx.q(*(rax_27 + 0x38))
                
                if (rcx_14.d s<= *(rax_28 + 0x38)
                        && *(*(rax_28 + 0x30) + (rcx_14 << 3)) == rax_27 + 0x30)
                    *(arg3 + 0x188) = r8_9
                    break

if (*(rbx + 0x398) s> 0)
    rcx_14.b = 1
    void* rax_30 = sub_141e5ebb0(rcx_14)
    
    if (rax_30 != 0)
        for (int64_t* i_5 = *(rbx + 0x390); i_5 != &i_5[sx.q(*(rbx + 0x398))]; i_5 = &i_5[1])
            void* r8_10 = *i_5
            
            if (r8_10 != 0)
                void* rax_31 = *(r8_10 + 0x10)
                int64_t rcx_27 = sx.q(*(rax_30 + 0x38))
                
                if (rcx_27.d s<= *(rax_31 + 0x38)
                        && *(*(rax_31 + 0x30) + (rcx_27 << 3)) == rax_30 + 0x30)
                    *(arg3 + 0x1a0) = r8_10
                    break

if ((*(rbx + 0xb0) & 4) != 0)
    result_4 = *(rbx + 0x1e4)
    var_1c8 = (*(rbx + 0x1e0))[0]
    int32_t var_1c4_1 = result_4.d
    result_4 = *(rbx + 0x1ec)
    float var_1c0 = (*(rbx + 0x1e8))[0]
    int32_t var_1bc_1 = result_4.d
    int128_t zmm0_5
    int512_t zmm6_2
    zmm0_5, zmm6_2 = sub_141dc5ac0(arg1, rbx, &var_128, &var_1c8, rbx + 0xd0)
    zmm6_2.o = zmm0_5
    int32_t zmm6_3
    result_3, zmm6_3 = sub_141dc5ac0(arg1, rbx, &var_128, &var_1c0, rbx + 0x158)
    
    if (not(zmm6_3 f>= *(arg3 + 0x1b4)))
        *(arg3 + 0x1b4) = zmm6_3
    
    if (not(result_3[0] f<= *(arg3 + 0x1b8)))
        *(arg3 + 0x1b8) = result_3[0]

*(arg3 + 0x80) = *(rbx + 0xbc)
*(arg3 + 0x180) = *(rbx + 0xc0)
char rcx_30 = ((*(rbx + 0xb1) << 6 ^ *(arg3 + 0x1c4)) & 0x7f) ^ *(rbx + 0xb1) << 6
*(arg3 + 0x1c4) = rcx_30
*(arg3 + 0x1c4) = (*(rbx + 0xb0) & 2) | rcx_30
uint32_t result

if (var_118[0] f>= *(rbx + 0xb4))
    char rax_39
    
    if (*(rbx + 0xb2) == 0)
        rax_39 = sub_141e80840(*(arg1 + 0x50))
    
    if (*(rbx + 0xb2) != 0 || rax_39 == 0)
        bool cond:6_1
        
        if (*(rbx + 0xb2) == 1)
            cond:6_1 = sub_141e80800(*(arg1 + 0x50)) != 0
            result = 0
        
        if (*(rbx + 0xb2) != 1 || not(cond:6_1))
            result = zx.d(*(rbx + 0xb2))
    else
        result = 1
else
    result = 0

*(arg3 + 0x184) = result

if (arg5 != 0)
    *(arg1 + 0x264) = var_1d4[0]
else
    result = result_1
    *(arg1 + 0x250) = var_1e8
    *(arg1 + 0x260) = var_1d8_1.q
    *(arg1 + 0x268) = result

__security_check_cookie(rax_1 ^ &var_218)
return result
