// 函数: sub_14138cf00
// 地址: 0x14138cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rbx = *arg3
int64_t rdx = sx.q(arg3[1].d)
int64_t r14 = 0
float zmm6[0x4]
float var_48[0x4] = zmm6
void* r13 = &rbx[rdx]
void* var_2a8
void* var_2a0
uint64_t var_248
float zmm7[0x4]
float zmm8[0x4]
int128_t zmm9
int128_t zmm10

if (rbx != r13)
    zmm6 = zx.o(0)
    
    do
        void* r15_1 = *rbx
        *(arg2 + 8)
        void* rdi_1 = *(r15_1 + 8)
        
        if (sub_14122ca50() != 0 && (*(rdi_1 + 0x39) & 1) != 0)
            if ((*(rdi_1 + 0x37) & 8) != 0 && (*(rdi_1 + 0x38) & 0x40) != 0)
            label_14138cfb7:
                
                if (*(r15_1 + 0x70) == 0)
                    int32_t rcx_1 = *(arg2 + 8)
                    float var_168_1[0x4] = data_142d3f660
                    int128_t var_148
                    __builtin_memcpy(&var_148, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x80)
                    int32_t var_240_1 = 0
                    char* var_2c8_1 = nullptr
                    int32_t var_2d0_1 = 0
                    var_248 = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
                    int128_t var_c8
                    __builtin_memset(&var_c8, 0, 0x30)
                    int32_t var_1d0_1 = 0
                    uint64_t var_1a8[0x8]
                    zmm7, zmm8, zmm9, zmm10 = sub_141226f00(rcx_1, &var_1a8, nullptr, nullptr, 
                        &var_248, var_2d0_1, var_2c8_1)
                    int64_t* rcx_2 = data_143f0f180
                    uint64_t* var_2d8_1
                    var_2d8_1.d = 2
                    (*(*rcx_2 + 0xf8))(rcx_2, &var_2a8, &var_1a8, &data_143e823a0, var_2d8_1, 0)
                    void* rax_5 = var_2a8
                    var_2a0 = rax_5
                    
                    if (rax_5 != 0)
                        *(rax_5 + 8) += 1
                    
                    sub_1405d1550(&var_2a8)
                    sub_1405d1600(r15_1 + 0x70, &var_2a0)
                    zmm6 = sub_1405d1550(&var_2a0)
            else if (*(rdi_1 + 0x32) - 1 u> 1)
                if (*(rdi_1 + 0x33) == 2)
                    goto label_14138cfb7
            else if (*(rdi_1 + 0x40) != 0 || *(rdi_1 + 0x33) == 2)
                goto label_14138cfb7
        
        rbx = &rbx[1]
    while (rbx != r13)
    
    rdx = zx.q(arg3[1].d)
    rbx = *arg3

int64_t r15_2 = 0
uint64_t r13_2 = sx.q(rdx.d) << 3 u>> 3

if (rbx u> &rbx[sx.q(rdx.d)])
    r13_2 = 0

int64_t* r13_3

if (r13_2 == 0)
    r13_3 = arg3
else
    do
        void* rdi_2 = *rbx
        void* rax_8 = *(rdi_2 + 8)
        
        if ((*(rax_8 + 0x37) & 8) != 0 && (*(rax_8 + 0x38) & 0x40) != 0)
            *(arg2 + 8)
            
            if (sub_14122ca50() != 0)
                void* rax_10 = sub_141225fa0(arg2 + 0x1150, *(rdi_2 + 0x10))
                
                if (rax_10 == 0)
                    void* rax_11
                    rax_11, zmm7, zmm8, zmm9, zmm10 = sub_14121ce80(arg2 + 0x1150, rdi_2, 1)
                    *(rax_11 + 0x182) = 1
                    *(rdi_2 + 0x68) = rax_11
                else
                    *(rdi_2 + 0x68) = rax_10
                    *(rax_10 + 0x182) = 1
        
        char rax_12 = *(rdi_2 + 0x120)
        
        if ((rax_12 & 4) == 0)
            *(rdi_2 + 0x120) = rax_12 | 4
        
        rbx = &rbx[1]
        r15_2 += 1
    while (r15_2 != r13_2)
    
    rdx = zx.q(arg3[1].d)
    r13_3 = arg3
    rbx = *arg3

int64_t r15_3 = 0
uint64_t r12_2 = sx.q(rdx.d) << 3 u>> 3

if (rbx u> &rbx[sx.q(rdx.d)])
    r12_2 = 0

if (r12_2 != 0)
    do
        void* rdi_3 = *rbx
        
        if (data_143f552a4 != 0)
            int32_t rax_15 = sub_1413ae000(rdi_3)
            *(rdi_3 + 0x128) = rax_15
            
            if (rax_15 s> 0)
                int64_t rax_16 = sx.q(data_143f0f1a0)
                int64_t rdx_6
                
                if (rax_16.d u> 0x1e || not(test_bit(0x6562c800, rax_16.d)))
                    rdx_6 = rax_16 * 5
                
                bool cond:1_1
                
                if ((rax_16.d u<= 0x1e && test_bit(0x6562c800, rax_16.d))
                        || (*((rdx_6 << 2) + &data_143f025fc) & 1) != 0)
                    cond:1_1 = sub_1419a5610() == 0
                label_14138d267:
                    
                    if (not(cond:1_1))
                        *(rdi_3 + 0x124) = sub_141185050(arg2 + 0x17d0, *(rdi_3 + 0x128))
                else if (*(arg2 + 8) s>= 3 && rax_16.d != 6 && rax_16.d != 0xd)
                    int64_t rdx_7 = *((rdx_6 << 2) + &data_143f025f0)
                    
                    if (rdx_7 != data_143f025b8 && rax_16.d != 0x19 && rdx_7 != data_143f025d0
                            && rax_16.d != 0x30)
                        int64_t rdx_8 = rax_16 * 5
                        
                        if (((*((rdx_8 << 2) + 0x143f02600) u>> 1).b & 1) != 0)
                            cond:1_1 = ((*((rdx_8 << 2) + &data_143f025fc) u>> 0x17).b & 1) == 0
                            goto label_14138d267
                        
                        *(rdi_3 + 0x124) = sub_141185050(arg2 + 0x17d0, *(rdi_3 + 0x128))
        
        rbx = &rbx[1]
        r15_3 += 1
    while (r15_3 != r12_2)
    
    r13_3 = arg3
    r14 = 0
    rdx = zx.q(r13_3[1].d)
    rbx = *r13_3

int64_t r15_4 = 0
int64_t r12_4 = sx.q(rdx.d) << 3 u>> 3

if (rbx u> &rbx[sx.q(rdx.d)])
    r12_4 = 0

float var_290[0x4]
float zmm0[0x4]
float zmm1[0x4]

if (r12_4 != 0)
    do
        void* rdi_4 = *rbx
        int128_t* rax_24
        int64_t rcx_12
        
        if ((*(rdi_4 + 0xa0) & 1) != 0)
            rcx_12 = sx.q(*(*(rdi_4 + 0xf0) + 8))
            
            if (rcx_12.d s>= 3)
                rax_24 = sub_1410a09e0((*U"1111")[rcx_12])
        
        if ((*(rdi_4 + 0xa0) & 1) == 0 || (rcx_12.d s>= 3 && rax_24.b == 0))
            rax_24.b = 0
        else
            rax_24.b = 1
        
        if (rax_24.b != 0)
            void* rax_25 = *(rdi_4 + 8)
            void* rcx_14 = *(rdi_4 + 0xf0)
            zmm1 = *(rax_25 + 0xc0)
            var_290 = zmm1
            zmm0 = zx.o(*(rax_25 + 0xd0))
            int64_t var_238 = zmm1.q
            int64_t var_280_1 = zmm0.q
            int32_t var_278_1 = *(rax_25 + 0xd8)
            float var_230_1 = _mm_bsrli_si128(zmm1, 8)[0]
            int64_t rax_27 = sub_1413e7be0(rcx_14, &var_238)
            void* rcx_15 = *(rdi_4 + 0xf0)
            *(rdi_4 + 0x80) = rax_27
            rax_24, zmm7, zmm8, zmm9, zmm10 = sub_1413e7810(rcx_15, &var_290)
            void* rcx_16 = *(rdi_4 + 0xf0)
            *(rdi_4 + 0x78) = rax_24
            
            if (*(rcx_16 + 8) s< 3)
                float rax_28 = var_290[2]
                int64_t var_228 = var_290[0].q
                float var_220_1 = rax_28
                sub_1413e7e50(rcx_16, &var_228, rdi_4 + 0xa8)
            
            *(rdi_4 + 0xa0) &= 0xfffffffe
        
        rbx = &rbx[1]
        r15_4 += 1
    while (r15_4 != r12_4)
    
    r13_3 = arg3

if (arg4 != 0)
    zmm7, zmm8, zmm9, zmm10 = sub_14138cc20(arg1, arg2, r13_3, arg5)

void** rdi_5 = *r13_3
int64_t r15_5 = 0
uint64_t rcx_18 = sx.q(r13_3[1].d)
uint64_t rbx_2 = rcx_18 << 3 u>> 3

if (rdi_5 u> &rdi_5[rcx_18])
    rbx_2 = 0

if (rbx_2 != 0)
    do
        void* r8_4 = *rdi_5
        void* r9_1 = *(r8_4 + 8)
        uint8_t var_1e0
        uint8_t rcx_19 = var_1e0 ^ ((*(r9_1 + 0x39) u>> 1 ^ var_1e0) & 1)
        uint8_t var_1e0_1 = rcx_19
        uint8_t rdx_14 = ((*(r9_1 + 0x37) u>> 2 ^ rcx_19) & 2) ^ rcx_19
        uint8_t var_1e0_2 = rdx_14
        uint8_t rax_31 = *(r9_1 + 0x39)
        void* var_218 = r8_4
        void* var_210_1 = r9_1
        var_1e0 = ((rax_31 u>> 2 ^ rdx_14) & 4) ^ rdx_14
        float var_208_1[0x4] = *(r9_1 + 0xc0)
        int64_t var_1f8_1 = *(r9_1 + 0xd0)
        int32_t var_1f0_1 = *(r9_1 + 0xd8)
        float var_1ec_1 = (*(r9_1 + 0x138))[0]
        float var_1e8_1 = (*(r9_1 + 0x134))[0]
        int32_t var_1e4_1 = *(r9_1 + 0x130)
        zmm7, zmm8, zmm9, zmm10 =
            sub_14138abf0(arg2 + 0x2120, &var_218, arg2 + 0x2120, arg2 + 0x6180)
        r15_5 += 1
        rdi_5 = &rdi_5[1]
    while (r15_5 != rbx_2)
    
    void*** r13_4 = arg3
    rcx_18 = zx.q(r13_4[1].d)
    rdi_5 = *r13_4

int64_t var_298_1 = 0
uint64_t rdx_17 = sx.q(rcx_18.d) << 3 u>> 3

if (rdi_5 u> &rdi_5[sx.q(rcx_18.d)])
    rdx_17 = 0

var_248 = rdx_17

if (rdx_17 != 0)
    uint8_t rbx_3 = arg4
    float var_58_1[0x4] = zmm7
    float var_68_1[0x4] = zmm8
    int128_t var_78_1 = zmm9
    int128_t var_88_1 = zmm10
    int64_t rdx_29
    
    do
        void* r13_5 = *rdi_5
        int64_t* r15_6 = *(r13_5 + 8)
        int32_t rdx_18 = *(r13_5 + 0x110)
        var_2a0.d = rdx_18
        
        if (*(r15_6 + 0x39) s< 0)
            int32_t rcx_21 = *(arg2 + 0x1008)
            var_2a8.d = rcx_21
            *(arg2 + 0x1008) = rcx_21 + 1
            
            if (rcx_21 + 1 s> *(arg2 + 0x100c))
                sub_1405a4d70(arg2 + 0x1000)
                rcx_21 = var_2a8.d
                rdx_18 = var_2a0.d
            
            *(*(arg2 + 0x1000) + (sx.q(rcx_21) << 3)) = r13_5
        
        int64_t r9_3 = sx.q(rdx_18)
        int64_t rcx_25 = r9_3 << 6
        *(*(arg2 + 0xdd8) + (r9_3 << 3)) = r15_6
        int64_t rdx_20 = r9_3 * 5
        int64_t rax_39 = *(arg2 + 0xdc8)
        *(rcx_25 + rax_39) = *(r15_6 + 0x80)
        *(rcx_25 + rax_39 + 0x10) = *(r15_6 + 0x90)
        *(rcx_25 + rax_39 + 0x20) = *(r15_6 + 0xa0)
        *(rcx_25 + rax_39 + 0x30) = *(r15_6 + 0xb0)
        int64_t rcx_26 = *(arg2 + 0xde8)
        int32_t rax_40 = r15_6[0x1b].d
        zmm0 = zx.o(r15_6[0x1a])
        zmm1 = *(r15_6 + 0xc0)
        int64_t var_280_2 = zmm0.q
        *(rcx_26 + (rdx_20 << 3)) = zmm1
        *(rcx_26 + (rdx_20 << 3) + 0x10) = zmm0.q
        *(rcx_26 + (rdx_20 << 3) + 0x18) = rax_40
        zmm0 = r15_6[0x27].d
        zmm0[0] = zmm0[0] * zmm0[0]
        var_290 = zmm1
        *(rcx_26 + (rdx_20 << 3) + 0x1c) = zmm0[0]
        zmm0 = *(r15_6 + 0x134)
        *(rcx_26 + (rdx_20 << 3) + 0x20) = zmm0[0]
        *(rcx_26 + (rdx_20 << 3) + 0x24) = zmm0[0]
        char rcx_27 = *(r15_6 + 0x39)
        rbx_3 =
            (((*(r15_6 + 0x37) & 8) | (rcx_27 & 0x10)) u>> 1 | (rcx_27 & 2)) u>> 1 | (rbx_3 & 0xf8)
        *(r9_3 + *(arg2 + 0xdf8)) = rbx_3
        int32_t rcx_28 = r15_6[0x26].d
        int64_t r8_6 = *(arg2 + 0xe08)
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rcx_28)
        var_2a8.d = rcx_28
        *(r8_6 + (r9_3 << 3) + 4) = 1 << (rcx_28.b & 7)
        *(r8_6 + (r9_3 << 3)) = (temp1_1 + (temp0_3 & 7)) s>> 3
        char r12_5 = 0
        
        if ((*(*r15_6 + 0xd0))(r15_6) != 0)
            r12_5 = 1
        
        if ((*(*r15_6 + 0xe0))(r15_6) != 0)
            r12_5 |= 0x10
        
        if ((*(r15_6 + 0x3c) & 2) != 0 || *(r13_5 + 0x20) u> 0)
            r12_5 |= 4
        
        int64_t rdx_25 = sx.q(var_2a0.d)
        zmm6 = var_290[3]
        zmm7 = var_280_2.d
        zmm8 = var_280_2:4.d
        zmm9 = rax_40
        char rcx_32 = r12_5 | 8
        
        if (var_2a8.d s< 0)
            rcx_32 = r12_5
        
        float var_270_1 = var_290[0][0]
        float var_26c_1 = var_290[1][0]
        float var_268_1 = var_290[2][0]
        *(rdx_25 + *(arg2 + 0xe18)) = rcx_32
        
        if ((*(*r15_6 + 0x110))(r15_6) != 0)
            void var_1cc
            int128_t* rax_58 = (*(*r15_6 + 0x118))(r15_6, &var_1cc)
            zmm1 = zx.o(rax_58[1].q)
            float zmm2[0x4] = *rax_58
            zmm9 = *(rax_58 + 0x18)
            zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm7 = zmm1.d
            zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            var_270_1.o = zmm2
        
        int64_t rcx_35 = *(arg2 + 0xe28)
        zmm6[0] = zmm6[0] + 1f
        zmm0 = var_270_1.o
        rdi_5 = &rdi_5[1]
        float (* rdx_27)[0x4] = rdx_25 * 0x1c
        float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x93)
        zmm7[0] = zmm7[0] + 1f
        zmm8[0] = zmm8[0] + 1f
        temp0_6[0] = zmm6[0]
        zmm9.d = zmm9.d f+ 1f
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
        var_270_1.o = temp0_7
        int32_t var_258_2 = zmm9.d
        *(rdx_27 + rcx_35) = temp0_7
        *(rdx_27 + rcx_35 + 0x10) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        *(rdx_27 + rcx_35 + 0x18) = var_258_2
        rdx_29 = var_298_1 + 1
        var_298_1 = rdx_29
        *(*(arg2 + 0xe38) + (rdx_25 << 2)) = *(r13_5 + 0x10)
    while (rdx_29 != var_248)
    r14 = 0
    rcx_18 = zx.q(arg3[1].d)
    rdi_5 = *arg3

void* r12_6 = &rdi_5[sx.q(rcx_18.d)]

if (rdi_5 != r12_6)
    do
        void* rbx_4 = *rdi_5
        void* r15_7 = *(rbx_4 + 8)
        sub_1413ade40(rbx_4)
        *(sx.q(*(rbx_4 + 0x110)) + *(arg2 + 0xe48)) = *(rbx_4 + 0x12c)
        
        if ((*(rbx_4 + 0x12c) & 1) != 0)
            int64_t i_1 = sx.q(*(rbx_4 + 0x40))
            char r10_1 = 0
            char r9_4 = 0x7f
            
            if (i_1 s> 0)
                char* r8_8 = *(rbx_4 + 0x38) + 0x10
                int64_t i
                
                do
                    if ((r8_8[2] & 4) != 0)
                        char rdx_31 = *r8_8
                        char rcx_39 = rdx_31
                        
                        if (r9_4 s<= rdx_31)
                            rcx_39 = r9_4
                        
                        r9_4 = rcx_39
                        char rcx_40 = rdx_31
                        
                        if (r10_1 s>= rdx_31)
                            rcx_40 = r10_1
                        
                        r10_1 = rcx_40
                    
                    r8_8 = &r8_8[0x14]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int64_t r8_9 = sx.q(*(rbx_4 + 0x110))
            int64_t r11_1 = *(arg2 + 0xe58)
            int32_t rax_66 = sx.d(r9_4)
            int16_t rcx_41
            
            if (r9_4 s>= 0)
                rcx_41 = 0xf
                
                if (rax_66 s< 0xf)
                    rcx_41 = rax_66.w
            else
                rcx_41 = 0
            
            int32_t rdx_32 = sx.d(r10_1)
            rcx_41 = ((rcx_41 ^ *(r11_1 + (r8_9 << 1))) & 0xf) ^ *(r11_1 + (r8_9 << 1))
            int16_t rax_67
            
            if (r10_1 s>= 0)
                rax_67 = 0xf
                
                if (rdx_32 s< 0xf)
                    rax_67 = rdx_32.w
            else
                rax_67 = 0
            
            rax_67 = ((rax_67 << 4 ^ rcx_41) & 0xf0) ^ rcx_41
            *(r11_1 + (r8_9 << 1)) = rax_67
            int32_t rdx_33 = sx.d(*(r15_7 + 0x41))
            int16_t rcx_42
            
            if (rdx_33 + 7 s>= 0)
                rcx_42 = 0xf
                
                if (rdx_33 + 7 s< 0xf)
                    rcx_42 = (rdx_33 + 7).w
            else
                rcx_42 = 0
            
            rcx_42 = ((rcx_42 << 8 ^ rax_67) & 0xf00) ^ rax_67
            *(r11_1 + (r8_9 << 1)) = rcx_42
            int16_t rdx_35 =
                (sbb.w(0xf00, 0xf00, *(r15_7 + 0x43) != 0) & 0x1000) | (rcx_42 & 0xefff)
            *(r11_1 + (r8_9 << 1)) = rdx_35
            char rax_69
            
            if ((0x1000 & rdx_35) != 0)
                rax_69 = *(r15_7 + 0x43)
            else
                rax_69 = *(r15_7 + 0x42)
            
            *(r11_1 + (r8_9 << 1)) = sx.w(rax_69) << 0xd | (rdx_35 & 0x1fff)
        
        rdi_5 = &rdi_5[1]
    while (rdi_5 != r12_6)
    
    void*** r13_7 = arg3
    rcx_18 = zx.q(r13_7[1].d)
    rdi_5 = *r13_7

uint64_t result = &rdi_5[sx.q(rcx_18.d)]
uint64_t rbx_6 = sx.q(rcx_18.d) << 3 u>> 3

if (rdi_5 u> result)
    rbx_6 = 0

if (rbx_6 != 0)
    do
        result = sub_1413d92f0(arg2, *rdi_5, arg6)
        r14 += 1
        rdi_5 = &rdi_5[1]
    while (r14 != rbx_6)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
