// 函数: sub_1417d47e0
// 地址: 0x1417d47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int32_t* r11 = *(arg1 + 0x248)
int128_t zmm11
int128_t var_a8 = zmm11
int64_t r14 = sx.q(arg2)

if (r11[8] == r11[0x13])
label_1417d487e:
    int64_t rcx_1 = sx.q(*r11)
    int64_t var_170 = rcx_1
    int32_t var_1b8 = r14.d
    *r11 = (rcx_1 + 1).d
    sub_14103b0d0(*(arg1 + 0x248) + 0x18, &var_1b8, &var_170)
else
    void* r8_1 = *(r11 + 0x58)
    void* r10_1 = &r11[0x14]
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(r11[0x18]) - 1) & r14) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_1417d487e
    
    int64_t r8_2 = *(r11 + 0x18)
    
    while (true)
        int64_t rdx = sx.q(rax_1) * 3
        
        if (*(r8_2 + (rdx << 3)) == r14.d)
            break
        
        rax_1 = *(r8_2 + (rdx << 3) + 0x10)
        
        if (rax_1 == 0xffffffff)
            goto label_1417d487e
    
    if (rax_1 == 0xffffffff)
        goto label_1417d487e

void* rcx_4 = *(arg1 + 0x248)
int64_t* rdi_2 = r14 * 0x30 + *(rcx_4 + 8)
void** var_208
sub_1417cf750(rcx_4, &var_208)
void* r8_4 = *(arg1 + 0x248)
void* const rcx_9

if (*(r8_4 + 0x20) == *(r8_4 + 0x4c))
label_1417d4920:
    rcx_9 = nullptr
else
    void* rax_4 = *(r8_4 + 0x58)
    void* rdx_3 = r8_4 + 0x50
    
    if (rax_4 != 0)
        rdx_3 = rax_4
    
    int32_t rax_5 = *(rdx_3 + (((sx.q(*(r8_4 + 0x60)) - 1) & r14) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1417d4920_1:
        rcx_9 = nullptr
    else
        int64_t r9_4 = *(r8_4 + 0x18)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 3
            rcx_9 = r9_4 + (rdx_4 << 3)
            
            if (*(r9_4 + (rdx_4 << 3)) == r14.d)
                break
            
            rax_5 = *(rcx_9 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1417d4920_2
        
        if (rax_5 == 0xffffffff)
        label_1417d4920_2:
            rcx_9 = nullptr

void** r13 = var_208
void* rdx_5 = &r13[1]
*rdx_5 = *(rcx_9 + 8)
void* rax_7 = &r13[2]
int64_t i_15 = sx.q(rdi_2[1].d)
uint128_t i_22 = data_143dbb1f8
uint128_t i_19 = data_143dbb1fc
int128_t zmm8 = data_143dbb200
int32_t i_20 = i_15.d

if (i_15.d s> *(rax_7 + 0xc))
    sub_140638cc0(rax_7, i_15.d)

void* rax_8 = &r13[4]

if (i_15.d s> *(rax_8 + 0xc))
    sub_140638cc0(rax_8, i_15.d)

int64_t i_21 = i_15
int32_t var_1e8
uint128_t zmm0_1
uint128_t i_18

if (i_15.d s> 0)
    int128_t* rbx_1 = nullptr
    int64_t i_10 = i_15
    int64_t i
    
    do
        int64_t rax_10 = *rdi_2
        int64_t rsi_1 = sx.q(*(rax_7 + 8))
        zmm0_1.d = (*(rbx_1 + rax_10)).d f- i_22.d
        i_18.d = (*(rbx_1 + rax_10 + 4)).d f- i_19.d
        var_1e8 = zmm0_1.d
        int32_t rax_11 = (rsi_1 + 1).d
        zmm0_1.d = (*(rbx_1 + rax_10 + 8)).d f- zmm8.d
        int32_t var_1e4_1 = i_18.d
        *(rax_7 + 8) = rax_11
        int32_t var_1e0_1 = zmm0_1.d
        
        if (rax_11 s> *(rax_7 + 0xc))
            sub_140638a00(rax_7)
        
        int64_t rcx_13 = *rax_7
        int64_t rdx_9 = rsi_1 * 3
        *(rcx_13 + (rdx_9 << 2)) = var_1e8.q
        *(rcx_13 + (rdx_9 << 2) + 8) = var_1e0_1
        int64_t rsi_2 = sx.q(*(rax_8 + 8))
        int64_t r14_1 = *rdi_2
        int32_t rax_13 = (rsi_2 + 1).d
        *(rax_8 + 8) = rax_13
        
        if (rax_13 s> *(rax_8 + 0xc))
            sub_140638a00(rax_8)
        
        int64_t rdx_11 = rsi_2 * 3
        int64_t rcx_15 = *rax_8
        *(rcx_15 + (rdx_11 << 2)) = *(rbx_1 + r14_1)
        int32_t rax_14 = *(rbx_1 + r14_1 + 8)
        rbx_1 += 0xc
        *(rcx_15 + (rdx_11 << 2) + 8) = rax_14
        i = i_10
        i_10 -= 1
    while (i != 1)
    i_15 = zx.q(i_20)
    r13 = var_208

int64_t rbx_2 = sx.q(rdi_2[5].d)
void* r13_2 = &r13[0xe]
void* var_1d0 = r13_2

if (rbx_2.d s> *(r13_2 + 0xc))
    sub_1405dadb0(r13_2, rbx_2.d)

if (rbx_2.d s> 0)
    int64_t rbx_3 = 0
    
    do
        int64_t rsi_3 = sx.q(*(r13_2 + 8))
        int64_t r14_2 = rdi_2[4]
        int32_t rax_15 = (rsi_3 + 1).d
        *(r13_2 + 8) = rax_15
        
        if (rax_15 s> *(r13_2 + 0xc))
            sub_1405a4cf0(r13_2)
        
        int32_t rax_16 = *(r14_2 + (rbx_3 << 2))
        rbx_3 += 1
        *(*r13_2 + (rsi_3 << 2)) = rax_16
    while (rbx_3 s< rbx_2)

void* rbx_5 = &var_208[6]
var_1e8.q = rbx_5

if (i_15.d s> *(rbx_5 + 0xc))
    sub_140638cc0(rbx_5, i_15.d)

uint128_t zmm9
uint128_t var_88 = zmm9
uint128_t zmm10
uint128_t var_98 = zmm10
int64_t i_17 = sx.q(i_15.d)
int64_t i_8
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4_1
uint128_t zmm5_1

if (i_15.d s> 0)
    if (*(arg1 + 0x201) == 0)
        void* rsi_5 = nullptr
        int64_t i_11 = i_17
        int64_t i_1
        
        do
            int64_t rax_19 = *rax_7
            i_19 = zx.o(*(rsi_5 + rax_19))
            int32_t r14_4 = *(rsi_5 + rax_19 + 8)
            i_22 = _mm_shuffle_ps(i_19, i_19, 0x55)
            i_8 = i_19.q
            zmm9 = i_8.d
            zmm2.d = i_22.d f* i_22.d
            zmm10 = r14_4
            zmm0_1.d = zmm9.d f* zmm9.d
            i_18.d = zmm10.d f* zmm10.d
            zmm2.d = zmm2.d f+ zmm0_1.d
            zmm2.d = zmm2.d f+ i_18.d
            
            if (not(zmm2.d f<= 9.99999994e-09f))
                zmm4_1.d = 0x3f000000
                zmm3.d = zmm2.d
                zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                zmm3.d = zmm3.d f* 0.5f
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                i_18.d = zmm3.d f* zmm0_1.d
                zmm2.d = zmm4_1.d f- i_18.d
                zmm0_1.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                i_18.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* i_18.d
                zmm4_1.d = 0.5f f- zmm3.d
                zmm0_1.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm9.d = zmm9.d f* zmm5_1.d
                i_22.d = i_22.d f* zmm5_1.d
                zmm10.d = zmm10.d f* zmm5_1.d
                zmm0_1.d = zmm9.d
                int32_t var_178_1 = zmm5_1.d
                _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                i_18.d = i_22.d
                r14_4 = zmm10.d
                i_18 = _mm_shuffle_ps(i_18, i_18, 0xe1)
                i_8 = i_18.q
                i_19 = i_18
            
            int64_t rdi_3 = sx.q(*(rbx_5 + 8))
            int32_t rax_20 = (rdi_3 + 1).d
            *(rbx_5 + 8) = rax_20
            
            if (rax_20 s> *(rbx_5 + 0xc))
                sub_140638a00(rbx_5)
            
            int64_t rax_21 = *rbx_5
            int64_t rcx_23 = rdi_3 * 3
            rsi_5 += 0xc
            *(rax_21 + (rcx_23 << 2)) = i_19.q
            *(rax_21 + (rcx_23 << 2) + 8) = r14_4
            i_1 = i_11
            i_11 -= 1
        while (i_1 != 1)
    else
        void* r14_3 = nullptr
        int64_t i_9 = sx.q(i_15.d)
        int64_t i_2
        
        do
            int64_t rsi_4 = sx.q(*(rbx_5 + 8))
            int64_t r15_3 = rdi_2[2]
            int32_t rax_17 = (rsi_4 + 1).d
            *(rbx_5 + 8) = rax_17
            
            if (rax_17 s> *(rbx_5 + 0xc))
                sub_140638a00(rbx_5)
            
            int64_t rdx_16 = rsi_4 * 3
            int64_t rcx_21 = *rbx_5
            *(rcx_21 + (rdx_16 << 2)) = *(r14_3 + r15_3)
            int32_t rax_18 = *(r14_3 + r15_3 + 8)
            r14_3 += 0xc
            *(rcx_21 + (rdx_16 << 2) + 8) = rax_18
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
    
    r13_2 = var_1d0
    i_17 = sx.q(i_15.d)

void** r15_5 = var_208
int32_t rdx_18 = (i_15 * 2).d
void* rdi_4 = &r15_5[0xc]

if (rdx_18 s> *(r15_5 + 0x6c))
    sub_1405dadb0(rdi_4, rdx_18)

uint64_t var_1c8

if (i_17 s> 0)
    int128_t* rsi_6 = nullptr
    char arg_1b = 0x7f
    char arg_23 = 0x7f
    i_8 = i_17
    int64_t i_3
    
    do
        int64_t r14_5 = *rbx_5
        zmm9 = *(rsi_6 + r14_5)
        zmm10 = *(rsi_6 + r14_5 + 8)
        int64_t* rax_22
        
        if (zmm9.d f>= zmm10.d)
            int32_t var_184 = 0
            rax_22 = &var_184
            int64_t var_180_1 = 0x3f800000
        else
            int64_t var_190 = 0x3f800000
            rax_22 = &var_190
            int32_t var_188_1 = 0
        
        zmm3 = zx.o(*rax_22)
        int32_t rax_23 = rax_22[1].d
        zmm5_1 = zmm3
        var_1c8 = zmm3.q
        i_18 = var_1c8:4.d
        zmm3.d = zmm3.d f* *(rsi_6 + r14_5 + 4)
        i_22 = i_18
        zmm4_1 = rax_23
        zmm0_1 = zmm4_1
        i_18.d = i_18.d f* zmm10.d
        zmm4_1.d = zmm4_1.d f* *(rsi_6 + r14_5 + 4)
        zmm5_1.d = zmm5_1.d f* zmm10.d
        zmm4_1.d = zmm4_1.d f- i_18.d
        zmm0_1.d = zmm0_1.d f* zmm9.d
        i_22.d = i_22.d f* zmm9.d
        zmm5_1.d = zmm5_1.d f- zmm0_1.d
        zmm4_1.d = zmm4_1.d f* 127f
        i_22.d = i_22.d f- zmm3.d
        zmm4_1.d = zmm4_1.d f+ zmm4_1.d
        zmm4_1.d = zmm4_1.d f+ 0.5f
        int32_t rdx_20 = int.d(zmm4_1.d) s>> 1
        char arg_18
        
        if (rdx_20 s>= 0xffffff80)
            char rcx_25 = 0x7f
            
            if (rdx_20 s< 0x7f)
                rcx_25 = rdx_20.b
            
            arg_18 = rcx_25
        else
            arg_18 = 0x80
        
        zmm5_1.d = zmm5_1.d f* 127f
        zmm5_1.d = zmm5_1.d f+ zmm5_1.d
        zmm5_1.d = zmm5_1.d f+ 0.5f
        int32_t rdx_22 = int.d(zmm5_1.d) s>> 1
        char arg_19
        
        if (rdx_22 s>= 0xffffff80)
            char rcx_26 = 0x7f
            
            if (rdx_22 s< 0x7f)
                rcx_26 = rdx_22.b
            
            arg_19 = rcx_26
        else
            arg_19 = 0x80
        i_22.d = i_22.d f* 127f
        i_22.d = i_22.d f+ i_22.d
        i_22.d = i_22.d f+ 0.5f
        int32_t rdx_24 = int.d(i_22.d) s>> 1
        char arg_1a
        
        if (rdx_24 s>= 0xffffff80)
            char rcx_27 = 0x7f
            
            if (rdx_24 s< 0x7f)
                rcx_27 = rdx_24.b
            
            arg_1a = rcx_27
        else
            arg_1a = 0x80
        int64_t r15_4 = sx.q(*(rdi_4 + 8))
        int32_t rax_27 = (r15_4 + 1).d
        *(rdi_4 + 8) = rax_27
        
        if (rax_27 s> *(rdi_4 + 0xc))
            sub_1405a4cf0(rdi_4)
        
        *(*rdi_4 + (r15_4 << 2)) = arg_18.d
        i_18.d = (*(rsi_6 + r14_5)).d f* 127f
        i_18.d = i_18.d f+ i_18.d
        i_18.d = i_18.d f+ 0.5f
        int32_t rdx_27 = int.d(i_18.d) s>> 1
        char arg_20
        
        if (rdx_27 s>= 0xffffff80)
            char rcx_30 = 0x7f
            
            if (rdx_27 s< 0x7f)
                rcx_30 = rdx_27.b
            
            arg_20 = rcx_30
        else
            arg_20 = 0x80
        
        i_18.d = (*(rsi_6 + r14_5 + 4)).d f* 127f
        i_18.d = i_18.d f+ i_18.d
        i_18.d = i_18.d f+ 0.5f
        int32_t rdx_29 = int.d(i_18.d) s>> 1
        char arg_21
        
        if (rdx_29 s>= 0xffffff80)
            char rcx_31 = 0x7f
            
            if (rdx_29 s< 0x7f)
                rcx_31 = rdx_29.b
            
            arg_21 = rcx_31
        else
            arg_21 = 0x80
        i_18.d = (*(rsi_6 + r14_5 + 8)).d f* 127f
        i_18.d = i_18.d f+ i_18.d
        i_18.d = i_18.d f+ 0.5f
        int32_t rdx_31 = int.d(i_18.d) s>> 1
        char arg_22
        
        if (rdx_31 s>= 0xffffff80)
            char rcx_32 = 0x7f
            
            if (rdx_31 s< 0x7f)
                rcx_32 = rdx_31.b
            
            arg_22 = rcx_32
        else
            arg_22 = 0x80
        int64_t r14_6 = sx.q(*(rdi_4 + 8))
        int32_t rax_32 = (r14_6 + 1).d
        *(rdi_4 + 8) = rax_32
        
        if (rax_32 s> *(rdi_4 + 0xc))
            sub_1405a4cf0(rdi_4)
        
        int64_t rcx_34 = *rdi_4
        rsi_6 += 0xc
        i_3 = i_8
        i_8 -= 1
        *(rcx_34 + (r14_6 << 2)) = arg_20.d
    while (i_3 != 1)
    r15_5 = var_208

void* r14_8 = arg1
int32_t rdx_35

if (*(r14_8 + 0x202) == 0)
    rdx_35 = arg_10
else
    if (i_15.d s> *(r15_5 + 0x8c))
        sub_1405dadb0(&r15_5[0x10], i_15.d)
    
    rdx_35 = arg_10
    zmm0_1 = _mm_cvtepi32_ps(zx.o(*(r14_8 + 0x25c)))
    i_22.d = _mm_cvtepi32_ps(zx.o(rdx_35)).d f/ zmm0_1.d
    
    if (i_15.d s> 0)
        uint64_t i_12 = zx.q(i_15.d)
        uint64_t i_4
        
        do
            int64_t r14_7 = sx.q(r15_5[0x11].d)
            int32_t rax_34 = (r14_7 + 1).d
            r15_5[0x11].d = rax_34
            
            if (rax_34 s> *(r15_5 + 0x8c))
                sub_1406105e0(&r15_5[0x10])
            
            *(r15_5[0x10] + (r14_7 << 2)) = i_22.d
            i_4 = i_12
            i_12 -= 1
        while (i_4 != 1)
        r14_8 = arg1
        rdx_35 = arg_10

uint32_t rcx_37 = zx.d(*(r14_8 + 0x203))

if (rcx_37 == 1)
    if (*(r14_8 + 0x202) != 0)
        void** rsi_9 = var_208
        
        if (i_15.d s> *(rsi_9 + 0x5c))
            sub_140679c00(&rsi_9[0xa], i_15.d)
        
        if (i_15.d s> 0)
            int64_t r14_10 = 0
            void** r13_4 = var_208
            i_15 = i_21
            
            do
                i_18 = *(arg1 + 0x218)
                zmm2 = *(arg1 + 0x21c)
                zmm0_1.d = (*(arg1 + 0x228)).d f- i_18.d
                zmm4_1 = *(r13_4[0x10] + (r14_10 << 2))
                zmm3 = *(arg1 + 0x220)
                zmm5_1 = *(arg1 + 0x224)
                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                zmm0_1.d = zmm0_1.d f+ i_18.d
                i_18.d = (*(arg1 + 0x22c)).d f- zmm2.d
                i_8.d = zmm0_1.d
                i_18.d = i_18.d f* zmm4_1.d
                zmm0_1.d = (*(arg1 + 0x230)).d f- zmm3.d
                i_18.d = i_18.d f+ zmm2.d
                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                i_8:4.d = i_18.d
                zmm0_1.d = zmm0_1.d f+ zmm3.d
                i_18.d = (*(arg1 + 0x234)).d f- zmm5_1.d
                int32_t var_1f0_3 = zmm0_1.d
                i_18.d = i_18.d f* zmm4_1.d
                i_18.d = i_18.d f+ zmm5_1.d
                int32_t var_1ec_1 = i_18.d
                char* rax_43 = sub_140ae16d0(&i_8, &arg_10, 0)
                int64_t r15_6 = sx.q(rsi_9[0xb].d)
                int32_t rcx_45 = (r15_6 + 1).d
                rsi_9[0xb].d = rcx_45
                
                if (rcx_45 s> *(rsi_9 + 0x5c))
                    sub_1406105e0(&rsi_9[0xa])
                
                r14_10 += 1
                *(rsi_9[0xa] + (r15_6 << 2)) = *rax_43
            while (r14_10 s< i_15)
            
            r13_2 = var_1d0
            rbx_5 = var_1e8.q
else if (rcx_37 == 2)
    int32_t rcx_39 = *(r14_8 + 0x210)
    
    if (rcx_39 s> 0)
        void** rsi_8 = var_208
        i_8 = sx.q(mods.dp.d(sx.q(rdx_35), rcx_39))
        i_20.q = *(r14_8 + 0x208)
        
        if (i_15.d s> *(rsi_8 + 0x5c))
            sub_140679c00(&rsi_8[0xa], i_15.d)
        
        if (i_15.d s> 0)
            int64_t i_16 = i_8
            uint64_t i_13 = zx.q(i_15.d)
            uint64_t i_5
            
            do
                int64_t r14_9 = sx.q(rsi_8[0xb].d)
                int32_t rax_40 = (r14_9 + 1).d
                rsi_8[0xb].d = rax_40
                
                if (rax_40 s> *(rsi_8 + 0x5c))
                    sub_1406105e0(&rsi_8[0xa])
                
                *(rsi_8[0xa] + (r14_9 << 2)) = *(i_20.q + (i_16 << 2))
                i_5 = i_13
                i_13 -= 1
            while (i_5 != 1)
            r13_2 = var_1d0
            rbx_5 = var_1e8.q

void** rax_45 = var_208

if (rax_45[0xb].d == 0)
    if (i_15.d s> *(rax_45 + 0x5c))
        sub_140679c00(&rax_45[0xa], i_15.d)
    
    if (i_15.d s> 0)
        uint64_t i_14 = zx.q(i_15.d)
        uint64_t i_6
        
        do
            int64_t r14_11 = sx.q(rax_45[0xb].d)
            int32_t rax_46 = (r14_11 + 1).d
            rax_45[0xb].d = rax_46
            
            if (rax_46 s> *(rax_45 + 0x5c))
                sub_1406105e0(&rax_45[0xa])
            
            *(rax_45[0xa] + (r14_11 << 2)) = data_14399f630
            i_6 = i_14
            i_14 -= 1
        while (i_6 != 1)

void* rsi_12 = &var_208[8]

if (i_15.d s> *(rsi_12 + 0xc))
    sub_1405c5570(rsi_12, i_15.d)

int32_t i_7 = 0

if (i_15.d s> 0)
    zmm11.d = 1f f/ _mm_cvtepi32_ps(zx.o(i_15.d)).d
    
    do
        int64_t r15_7 = sx.q(*(rsi_12 + 8))
        i_22 = _mm_cvtepi32_ps(zx.o(i_7))
        int32_t rax_48 = (r15_7 + 1).d
        *(rsi_12 + 8) = rax_48
        i_22.d = i_22.d f* zmm11.d
        
        if (rax_48 s> *(rsi_12 + 0xc))
            sub_1405a4d70(rsi_12)
        
        int64_t rax_49 = *rsi_12
        i_7 += 1
        *(rax_49 + (r15_7 << 3)) = i_22.d
        *(rax_49 + (r15_7 << 3) + 4) = i_22.d
    while (i_7 s< i_15.d)

void*** rax_50 = j_sub_140a82f30(0x18)
void*** r15_8 = rax_50
int64_t* var_200
int64_t* r14_12 = var_200

if (rax_50 == 0)
    r15_8 = nullptr
else
    *r15_8 = &data_142fcc198
    r15_8[1] = var_208
    r15_8[2] = r14_12
    
    if (r14_12 != 0)
        r14_12[1].d += 1
        r14_12 = var_200

void*** rax_52 = j_sub_140a82f30(0x18)

if (rax_52 != 0)
    rax_52[1].d = 1
    *rax_52 = &data_142d42ea8
    *(rax_52 + 0xc) = 1
    rax_52[2] = r15_8

int64_t r8_6 = *rdx_5
void** r12_1 = var_208
void* rax_54 = *(arg1 + 0x240)
int64_t var_158 = r8_6
void* var_150 = rax_8
void* var_148 = rsi_12
int64_t* rcx_53 = rax_54 + 0x408
void* var_138 = &r12_1[0xa]

if (rax_54 == 0)
    rcx_53 = nullptr

void*** var_108 = r15_8
void*** var_100 = rax_52
void* var_d8 = &r12_1[0xa]
int32_t var_110
int32_t var_b0 = var_110
void* var_140 = rdi_4
void* var_130 = r13_2
int64_t* var_160_1 = nullptr
int64_t var_168_1 = 0
int64_t var_f8 = r8_6
void* var_f0 = rax_8
void* var_e8 = rsi_12
void* var_e0 = rdi_4
void* var_d0 = r13_2
int128_t var_128
int128_t var_c8 = var_128
int64_t var_118
uint64_t var_b8 = var_118
int32_t result = (*(*rcx_53 + 0x18))(rcx_53, &var_108, r8_6, 0)

if (var_160_1 != 0)
    result = var_160_1[1].d
    var_160_1[1].d -= 1
    
    if (result == 1)
        (**var_160_1)(var_160_1)
        result = *(var_160_1 + 0xc)
        *(var_160_1 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_160_1 + 8))(var_160_1, 1)
    
    r12_1 = var_208
    r14_12 = var_200

if (*(arg1 + 0x1f8) s> 0)
    int64_t rdi_6 = sx.q(r12_1[0xf].d)
    int64_t r13_5 = *r13_2
    var_1c8 = 0
    int32_t var_1c0_2 = rdi_6.d
    uint64_t rdi_7
    
    if (rdi_6.d != 0)
        sub_140638750(&var_1c8, rdi_6.d, 0)
        rdi_7 = var_1c8
        memcpy(rdi_7, r13_5, (rdi_6 << 2).d)
    else
        rdi_7 = 0
        int32_t var_1bc_1 = 0
    
    result = sub_1417d0e80(arg1 + 0x1f0, *rdx_5, rax_7, &var_1c8, rbx_5, &r12_1[0x10])
    
    if (rdi_7 != 0)
        result = sub_140a74f90(rdi_7)

if (r14_12 != 0)
    result = r14_12[1].d
    r14_12[1].d -= 1
    
    if (result == 1)
        result = (**var_200)(var_200)
        int32_t rsi_13 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (rsi_13 == 1)
            return (*(*var_200 + 8))(var_200, zx.q(rsi_13))

return result
