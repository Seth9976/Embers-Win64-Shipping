// 函数: sub_14175d510
// 地址: 0x14175d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2[1].d)

if (r10.d == 0)
    *arg3 = 0
    return 

int64_t* r11 = *arg2
int64_t r8 = *(arg1 + 0x28)
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm13
int128_t var_b8 = zmm13
void* rbx_2 = &r11[r10 * 2]
int32_t arg_10 = 0
float var_168 = 0f
float var_164 = 0f
int128_t zmm14
int128_t var_c8 = zmm14
int64_t rax_1 = sx.q(**r11) * 3
int128_t zmm15 = zx.o(0)
uint64_t var_160 = *(r8 + (rax_1 << 2))
int64_t* var_150 = r11
void* var_108 = rbx_2

if (r11 == rbx_2)
    *arg3 = 0
    return 

zmm12 = *(r8 + (rax_1 << 2) + 8)
zmm13 = var_160:4.d
zmm14 = var_160.d
int128_t zmm6
int128_t var_48_1 = zmm6
uint128_t zmm7
uint128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8
uint128_t zmm9
uint128_t var_78_1 = zmm9
int128_t zmm10
int128_t var_88_1 = zmm10
int128_t zmm11
int128_t var_98_1 = zmm11
uint128_t zmm0
int64_t zmm1
uint128_t zmm2
float zmm3
float zmm4

do
    int64_t r9_1 = sx.q(r11[1].d)
    int64_t rdx = 0
    float var_148
    float var_144
    float var_140
    float var_138
    int32_t var_134
    int32_t var_130
    int32_t var_128
    int32_t var_124
    
    if (r9_1 s>= 4)
        void* rax_3 = *r11
        void* rdi_1 = &var_148 - rax_3
        int32_t* r10_1 = rax_3 + 8
        void* rsi_1 = &var_144 - rax_3
        int64_t i_1 = ((r9_1 - 4) u>> 2) + 1
        int64_t rdx_1 = i_1 << 2
        int64_t i
        
        do
            int64_t rcx_5 = sx.q(r10_1[-2]) * 3
            zmm2.d = (*(r8 + (rcx_5 << 2))).d f- zmm14.d
            zmm1.d = (*(r8 + (rcx_5 << 2) + 4)).d f- zmm13.d
            zmm0.d = (*(r8 + (rcx_5 << 2) + 8)).d f- zmm12.d
            int64_t rcx_6 = sx.q(r10_1[-1]) * 3
            int64_t rax_6 = sx.q(*r10_1)
            *(rdi_1 + r10_1 - 8) = zmm2.d
            zmm2 = *(r8 + (rcx_6 << 2))
            *(&var_140 - rax_3 + r10_1) = zmm1.d
            zmm2.d = zmm2.d f- zmm14.d
            zmm1 = *(r8 + (rcx_6 << 2) + 4)
            *(&var_130 - rax_3 + r10_1) = zmm0.d
            zmm1.d = zmm1.d f- zmm13.d
            int64_t rcx_7 = rax_6 * 3
            int64_t rax_7 = sx.q(r10_1[1])
            zmm0.d = (*(r8 + (rcx_6 << 2) + 8)).d f- zmm12.d
            *(rsi_1 + r10_1 - 8) = zmm2.d
            zmm2 = *(r8 + (rcx_7 << 2))
            void var_13c
            *(&var_13c - rax_3 + r10_1) = zmm1.d
            zmm2.d = zmm2.d f- zmm14.d
            zmm1 = *(r8 + (rcx_7 << 2) + 4)
            void var_12c
            *(r10_1 + &var_12c - rax_3) = zmm0.d
            zmm1.d = zmm1.d f- zmm13.d
            int64_t rcx_8 = rax_7 * 3
            zmm0.d = (*(r8 + (rcx_7 << 2) + 8)).d f- zmm12.d
            *(rdi_1 + r10_1) = zmm2.d
            zmm2 = *(r8 + (rcx_8 << 2))
            *(&var_138 - rax_3 + r10_1) = zmm1.d
            zmm2.d = zmm2.d f- zmm14.d
            zmm1 = *(r8 + (rcx_8 << 2) + 4)
            *(&var_128 - rax_3 + r10_1) = zmm0.d
            zmm1.d = zmm1.d f- zmm13.d
            zmm0.d = (*(r8 + (rcx_8 << 2) + 8)).d f- zmm12.d
            *(rsi_1 + r10_1) = zmm2.d
            *(&var_134 - rax_3 + r10_1) = zmm1.d
            *(&var_124 - rax_3 + r10_1) = zmm0.d
            r10_1 = &r10_1[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
        r11 = var_150
        rdx = rdx_1
        rbx_2 = var_108
        r9_1 = sx.q(r11[1].d)
    
    if (rdx s< r9_1)
        int64_t r10_2 = *r11
        
        do
            int64_t rcx_9 = sx.q(*(r10_2 + (rdx << 2))) * 3
            zmm2.d = (*(r8 + (rcx_9 << 2))).d f- zmm14.d
            zmm1.d = (*(r8 + (rcx_9 << 2) + 4)).d f- zmm13.d
            zmm0.d = (*(r8 + (rcx_9 << 2) + 8)).d f- zmm12.d
            (&var_148)[rdx] = zmm2.d
            (&var_138)[rdx] = zmm1.d
            (&var_128)[rdx] = zmm0.d
            rdx += 1
        while (rdx s< r9_1)
    
    int32_t var_120
    zmm10 = var_120
    r11 = &r11[2]
    zmm9 = var_124
    zmm8 = var_134
    zmm6 = var_130
    zmm7 = var_128
    float zmm5 = var_138
    zmm4 = var_148
    zmm1.d = zmm10.q.d f* zmm5
    var_150 = r11
    zmm0.d = zmm9.d f* zmm6.d
    zmm2.d = zmm9.d f* zmm5
    zmm11.d = zmm10.d f* zmm8.d
    zmm11.d = zmm11.d f- zmm0.d
    zmm0.d = zmm7.d f* zmm6.d
    zmm11.d = zmm11.d f* zmm4
    zmm1.d = zmm1.d f- zmm0.d
    zmm0 = zmm7
    zmm7.d = zmm7.d f+ zmm9.d
    zmm0.d = zmm0.d f* zmm8.d
    zmm1.d = zmm1.d f* var_144
    zmm2.d = zmm2.d f- zmm0.d
    zmm7.d = zmm7.d f+ zmm10.d
    zmm11.d = zmm11.d f- zmm1.d
    zmm2.d = zmm2.d f* var_140
    zmm11.d = zmm11.d f+ zmm2.d
    zmm15.d = zmm15.d f+ zmm11.d
    zmm7.d = zmm7.d f* zmm11.d
    zmm1.d = arg_10.d f+ (zmm4 + var_144 + var_140) f* zmm11.d
    zmm3 = var_168 + (zmm5 f+ zmm8.d f+ zmm6.d) f* zmm11.d
    zmm4 = var_164 f+ zmm7.d
    arg_10 = zmm1.d
    var_168 = zmm3
    var_164 = zmm4
while (r11 != rbx_2)

if (zmm15.d f< 9.99999975e-05f)
    *arg3 = 0
    return 

zmm2.d = 0.25f f/ zmm15.d
zmm15.d = zmm15.d f* 0.166666672f
zmm0.d = zmm2.d f* zmm1.d
zmm1.d = zmm2.q.d f* zmm3
zmm2.d = zmm2.d f* zmm4
zmm0.d = zmm0.d f+ zmm14.d
zmm1.d = zmm1.d f+ zmm13.d
zmm2.d = zmm2.d f+ zmm12.d
*arg4 = (_mm_unpacklo_ps(zmm0, zmm1)).q
arg4[1].d = zmm2.d
*arg3 = zmm15.d
