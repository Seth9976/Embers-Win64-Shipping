// 函数: sub_1409dfcb0
// 地址: 0x1409dfcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double var_a8[0x2] = arg5
double var_b8[0x2] = arg6
double var_c8[0x2] = arg7
double var_d8[0x2] = arg8
double var_e8[0x2] = arg9
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
uint64_t var_318
sub_14090aa40(&arg1[5][0x56], &var_318, data_143f36148)
void* var_278
void** rax_3 = sub_14090aa40(&arg1[5][0x2a], &var_278, data_143f35cc8)
uint64_t i_5 = 0
int32_t var_330 = 0
void* rdi = *rax_3
sub_1409db170(arg1, arg2, &i_5)
uint64_t i = i_5
int64_t var_198 = 0
int32_t var_190 = 0
int64_t rsi = i + (sx.q(var_330) << 2)
int32_t var_16c = 0x80
int64_t var_188
__builtin_memset(&var_188, 0, 0x1c)
int32_t var_168 = 0xffffffff
int32_t var_164 = 0
void* var_158 = nullptr
int32_t var_150 = 0
int32_t var_418
int32_t var_3b8

for (; i != rsi; i += 4)
    sub_1409afd50(&var_198, &var_3b8)
    char* var_460_1 = nullptr
    int32_t* var_3b0
    *var_3b0 = *i
    int32_t rax_6 = var_3b8
    var_3b0[1] = 0xffffffff
    sub_1409b8a30(&var_198, &var_418, *var_3b0, var_3b0, rax_6, var_460_1)

void* r12_1 = nullptr
void* rbx_1 = &arg1[5][0x1c]
int32_t* var_238 = nullptr
int32_t* rsi_1 = rbx_1 + 0x10
int32_t var_230 = 0
int32_t rcx_8 = 0
int32_t r8_4 = 0
int32_t var_20c = 0x80
int64_t var_228
__builtin_memset(&var_228, 0, 0x1c)
int32_t var_208 = 0xffffffff
int32_t var_204 = 0
void* var_1f8 = nullptr
int32_t var_1f0 = 0
int32_t r11 = rsi_1[6]
void* var_2d8 = rbx_1
int32_t var_458 = 0
int32_t var_454 = 1
int32_t* var_450 = rsi_1
int32_t var_448 = 0xffffffff
int64_t var_444 = 0

if (r11 != 0)
    int32_t* rax_7 = *(rsi_1 + 0x10)
    int32_t* r9_1 = rsi_1
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *r9_1
    
    if (rdx_7 != 0)
    label_1409dff3c:
        int32_t rax_14 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
        int32_t var_454_1 = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_2
        
        var_444.d = r8_4 - rax_15 + 0x1f
        
        if (r8_4 - rax_15 + 0x1f s> r11)
            var_444.d = r11
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_8)
            r8_4 += 0x20
            rcx_8 += 1
            var_444:4.d = r8_4
            var_458 = rcx_8
            
            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = r9_1[rdx_8 + 1]
            var_448 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1409dff3c
        
        var_444.d = r11

int32_t rdx_9 = *(rbx_1 + 0x28)
double zmm2[0x2] = var_448.o
double var_2f8 = zmm2[0]
int32_t r15 = 0xffffffff << (rdx_9.b & 0x1f)
double var_308[0x2] = var_458.o
int32_t r8_7 = rdx_9 s>> 5
int32_t r9_3 = rdx_9 & 0xffffffe0
int64_t var_378 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_448_1 = r15
var_444.d = rdx_9
double zmm1[0x2] = var_308
double var_398[0x2] = rbx_1.o

if (rdx_9 != r11)
    int32_t* rax_17 = *(rsi_1 + 0x10)
    int32_t* r10_1 = rsi_1
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_13 = r10_1[sx.q(r8_7)] & r15
    
    if (rdx_13 != 0)
    label_1409e0023:
        int32_t rax_24 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0x20
        else
            rax_25 = 0x1f - temp0_4
        
        var_444.d = r9_3 - rax_25 + 0x1f
        
        if (r9_3 - rax_25 + 0x1f s> r11)
            var_444.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_7)
            r9_3 += 0x20
            r8_7 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = r10_1[rcx_13 + 1]
            var_448_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1409e0023
        
        var_444.d = r11

uint64_t rax_28 = var_448_1.q u>> 0x20
uint64_t var_2e0 = rax_28
int32_t i_10
int32_t* var_3c8
void var_370
void var_200

while (true)
    int32_t i_16 = zmm1[1]:4.d
    double rdx_14 = zmm1[0]
    
    if (i_16 != rax_28.d || rdx_14 != rsi_1)
        rax_28.b = 0
    else
        rax_28.b = 1
    
    if (rax_28.b == 0 || var_398[0] != rbx_1)
        rax_28.b = 1
    else
        rax_28.b = 0
    
    if (rax_28.b == 0)
        break
    
    int32_t i_13 = data_143a1c6c8
    
    if (i_16 s< *(rdx_14 i+ 0x18))
        i_13 = i_16
    
    var_3c8 = nullptr
    i_10 = i_13
    int64_t var_3c0_1 = 0
    var_3b8.q = &i_10
    int64_t* var_3b0_1 = &var_3c8
    sub_140999670(&var_238, &var_418, &var_3b8, nullptr)
    int32_t* rcx_16 = var_3c8
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t i_14 = sx.q(i_10)
    
    if (var_230 != var_204)
        void* rdx_16 = &var_200
        
        if (var_1f8 != 0)
            rdx_16 = var_1f8
        
        int32_t i_1 = *(rdx_16 + ((sx.q(var_1f0 - 1) & i_14) << 2))
        
        if (i_1 != 0xffffffff)
            int32_t* r8_11 = var_238
            
            do
                if (r8_11[sx.q(i_1) * 8] == i_14.d)
                    if (i_1 != 0xffffffff)
                        r12_1 = &r8_11[sx.q(i_1) * 8]
                    
                    break
                
                i_1 = r8_11[sx.q(i_1) * 8 + 6]
            while (i_1 != 0xffffffff)
    
    int64_t rcx_17 = i_14 * 5
    int64_t* rdi_1 = arg1[5]
    int32_t rax_34 = *(r12_1 + 0x10)
    int64_t rdx_19 = rdi_1[0x1c]
    int64_t var_430_1 = rdx_19
    int64_t rsi_2 = sx.q(*(rdx_19 + (rcx_17 << 3) + 8))
    
    if (rsi_2.d s> rax_34)
        *(r12_1 + 0x10) = rsi_2.d
        
        if (rsi_2.d s> *(r12_1 + 0x14))
            sub_1405a4cf0(r12_1 + 8)
            rdx_19 = var_430_1
    else if (rsi_2.d s< rax_34 && rax_34 != rsi_2.d)
        *(r12_1 + 0x10) = rsi_2.d
        sub_1405dac90(r12_1 + 8)
        rdx_19 = var_430_1
    
    int64_t rcx_22 = 0
    int32_t r15_1 = 0
    int64_t r14_1 = 0
    
    if (rsi_2.d s> 0)
        int32_t r9_5 = (rsi_2 - 1).d
        int32_t var_434_1 = r9_5
        
        do
            int64_t rdx_21 = *(rdx_19 + (rcx_17 << 3))
            int64_t r8_12 = rdi_1[7]
            
            if (r15_1 != r9_5)
                rcx_22 = r14_1 + 1
            
            rdx_19 = var_430_1
            r15_1 += 1
            r9_5 = var_434_1
            *(*(r12_1 + 8) + (r14_1 << 2)) = *sub_141cdf680(rdi_1, &var_370, 
                *(r8_12 + sx.q(*(rdx_21 + (r14_1 << 2))) * 0x18), 
                *(r8_12 + sx.q(*(rdx_21 + (rcx_22 << 2))) * 0x18))
            r14_1 += 1
            rcx_22 = 0
        while (r14_1 s< rsi_2)
        
        rbx_1 = var_2d8
    
    zmm1[1].d &= not.d(var_398[1]:4.d)
    sub_14059bdd0(&var_398[1])
    rax_28 = var_2e0
    rsi_1 = rbx_1 + 0x10
    r12_1 = nullptr

void*** r15_2 = arg1
void* rdi_2 = rdi
int32_t rcx_27 = 0
int32_t* r13_2 = arg2
int32_t r8_14 = 0
int64_t var_148 = 0
void* rbx_4 = &r15_2[5][0x1c]
int32_t var_140 = 0
int32_t* r10_2 = rbx_4 + 0x10
int32_t var_11c = 0x80
int64_t var_138
__builtin_memset(&var_138, 0, 0x1c)
int32_t var_118 = 0xffffffff
int32_t var_114 = 0
void* var_108 = nullptr
int32_t var_100 = 0
int32_t r11_1 = r10_2[6]
int64_t var_3a8 = 0
int64_t var_3a0 = 0
void* var_3f0 = rbx_4
var_458 = 0
int32_t var_454_2 = 1
var_450 = r10_2
int32_t var_448_2 = 0xffffffff
int64_t var_444_1 = 0

if (r11_1 != 0)
    int32_t* rax_42 = *(r10_2 + 0x10)
    int32_t* r9_7 = r10_2
    
    if (rax_42 != 0)
        r9_7 = rax_42
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_1 - 1)
    int32_t rdx_26 = *r9_7
    
    if (rdx_26 != 0)
    label_1409e037b:
        int32_t rax_49 = neg.d(rdx_26) & rdx_26
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_49)
        int32_t var_454_3 = rax_49
        int32_t rax_50
        
        if (rax_49 == 0)
            rax_50 = 0x20
        else
            rax_50 = 0x1f - temp0_5
        
        var_444_1.d = r8_14 - rax_50 + 0x1f
        
        if (r8_14 - rax_50 + 0x1f s> r11_1)
            var_444_1.d = r11_1
    else
        while (true)
            int64_t rdx_27 = sx.q(rcx_27)
            r8_14 += 0x20
            rcx_27 += 1
            var_444_1:4.d = r8_14
            var_458 = rcx_27
            
            if (rdx_27.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_26 = r9_7[rdx_27 + 1]
            var_448_2 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_1409e037b
        
        var_444_1.d = r11_1
    
    r10_2 = rbx_4 + 0x10

int32_t rdx_28 = *(rbx_4 + 0x28)
zmm2 = var_448_2.o
int32_t r14_2 = r10_2[6]
double zmm0[0x2] = var_458.o
var_398[0] = rbx_4
int32_t rsi_4 = 0xffffffff << (rdx_28.b & 0x1f)
var_398 = zmm0
int32_t r8_17 = rdx_28 s>> 5
zmm0 = var_398
int32_t r9_9 = rdx_28 & 0xffffffe0
int32_t var_448_3 = rsi_4
var_2f8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_444_1.d = rdx_28
void* var_310
var_310.o = zmm0
var_308 = zmm2

if (rdx_28 != r14_2)
    int32_t* rax_52 = *(r10_2 + 0x10)
    
    if (rax_52 != 0)
        r10_2 = rax_52
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r14_2 - 1)
    int32_t rdx_32 = r10_2[sx.q(r8_17)] & rsi_4
    
    if (rdx_32 != 0)
    label_1409e0463:
        int32_t rax_59 = neg.d(rdx_32) & rdx_32
        uint64_t rflags_4
        int32_t temp0_7
        temp0_7, rflags_4 = _bit_scan_reverse(rax_59)
        int32_t rax_60
        
        if (rax_59 == 0)
            rax_60 = 0x20
        else
            rax_60 = 0x1f - temp0_7
        
        var_444_1.d = r9_9 - rax_60 + 0x1f
        
        if (r9_9 - rax_60 + 0x1f s> r14_2)
            var_444_1.d = r14_2
    else
        while (true)
            int64_t rcx_32 = sx.q(r8_17)
            r9_9 += 0x20
            r8_17 += 1
            
            if (rcx_32.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_32 = r10_2[rcx_32 + 1]
            var_448_3 = 0xffffffff
            
            if (rdx_32 != 0)
                goto label_1409e0463
        
        var_444_1.d = r14_2
    
    r10_2 = rbx_4 + 0x10

double zmm6[0x2] = zx.o(0)
int64_t* r12_2 = arg3
uint64_t rcx_35 = var_448_3.q u>> 0x20
var_318 = rcx_35
int32_t* var_408
int32_t var_288[0x4]

while (true)
    int32_t i_6 = var_2f8:4.d
    double rdx_33 = var_308[1]
    
    if (i_6 != rcx_35.d || rdx_33 != r10_2)
        rcx_35.b = 0
    else
        rcx_35.b = 1
    
    if (rcx_35.b == 0 || var_310 != rbx_4)
        rcx_35.b = 1
    else
        rcx_35.b = 0
    
    if (rcx_35.b == 0)
        break
    
    int32_t i_2 = data_143a1c6c8
    
    if (i_6 s< *(rdx_33 i+ 0x18))
        i_2 = i_6
    
    char var_438_1 = 0
    int32_t r8_18
    
    if (var_190 != var_164)
        void var_160
        void* rcx_36 = &var_160
        
        if (var_158 != 0)
            rcx_36 = var_158
        
        r8_18 = *(rcx_36 + ((sx.q(var_150 - 1) & sx.q(i_2)) << 2))
    
    if (var_190 == var_164 || r8_18 == 0xffffffff)
    label_1409e0559:
        r8_18 = -1
    else
        int64_t rdx_36 = var_198
        
        while (true)
            int64_t rcx_37 = sx.q(r8_18) * 3
            
            if (*(rdx_36 + (rcx_37 << 2)) == i_2)
                break
            
            r8_18 = *(rdx_36 + (rcx_37 << 2) + 4)
            
            if (r8_18 == 0xffffffff)
                goto label_1409e0559
    
    if (r8_18 == 0xffffffff)
        goto label_1409e134a
    
    int64_t i_7 = sx.q(i_2)
    int64_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x2c)
    int32_t r9_11 = 0
    int64_t r14_3 = i_7 * 5
    int32_t var_1b4_1 = 0
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0
    int32_t var_1bc_1 = 0x80
    int32_t var_1b8_1 = 0xffffffff
    void*** r12_3 = arg1
    int64_t r15_3 = r12_3[5][0x1c]
    int32_t rsi_5 = *(r15_3 + (r14_3 << 3) + 8)
    int32_t var_1c0
    
    if (rsi_5 s> 0)
        sub_1407c2fa0(&var_1e8, rsi_5)
        int32_t rdx_39
        
        if (rsi_5 u< 4)
            rdx_39 = 1
        else
            uint32_t rsi_6 = rsi_5 u>> 1
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rsi_6 + 8)
            int32_t rcx_39
            
            if (rsi_6 == 0xfffffff8)
                rcx_39 = 0x20
            else
                rcx_39 = 0x1f - temp0_8
            
            int32_t rcx_41 = rcx_39 << 0x1a s>> 0x1f
            uint64_t rflags_6
            char temp0_9
            temp0_9, rflags_6 = _bit_scan_reverse(rsi_6 + 7)
            char rdx_38
            
            if (rcx_41 == 0)
                rdx_38 = 0x20
            else
                rdx_38 = 0x1f - temp0_9
            
            rdx_39 = 1 << ((not.d(rcx_41)).b & (0x20 - rdx_38))
        
        if (var_1a0_1 == 0 || var_1a0_1 s< rdx_39)
            int32_t var_1a0_2 = rdx_39
            sub_140771f10(&var_1e8)
        
        r9_11 = var_1c0
    
    int32_t* rsi_8 = *(r15_3 + (r14_3 << 3))
    void* r14_4 = &rsi_8[sx.q(*(r15_3 + (r14_3 << 3) + 8))]
    
    if (rsi_8 != r14_4)
        do
            sub_140998ff0(&var_1e8, &var_370, rsi_8, nullptr)
            rsi_8 = &rsi_8[1]
        while (rsi_8 != r14_4)
        
        r9_11 = var_1c0
    
    int32_t var_454_4 = 1
    var_408 = nullptr
    int32_t rcx_46 = 0
    var_458 = 0
    int32_t var_3fc_1 = 0
    uint32_t rsi_9 = 0
    int64_t var_1d8
    var_450 = &var_1d8
    int32_t r15_4 = 0
    int32_t var_448_4 = 0xffffffff
    int32_t r10_3 = 0
    int64_t var_444_2 = 0
    int32_t r8_21 = 0
    int64_t* var_1c8
    
    if (r9_11 != 0)
        int64_t* r10_4 = &var_1d8
        
        if (var_1c8 != 0)
            r10_4 = var_1c8
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(r9_11 - 1)
        int32_t rdx_43 = *r10_4
        
        if (rdx_43 != 0)
        label_1409e074b:
            int32_t rax_81 = neg.d(rdx_43) & rdx_43
            uint64_t rflags_7
            int32_t temp0_10
            temp0_10, rflags_7 = _bit_scan_reverse(rax_81)
            int32_t var_454_5 = rax_81
            int32_t rax_82
            
            if (rax_81 == 0)
                rax_82 = 0x20
            else
                rax_82 = 0x1f - temp0_10
            
            int32_t rax_83 = r8_21 - rax_82 + 0x1f
            
            if (rax_83 s> r9_11)
                rax_83 = r9_11
            
            var_444_2.d = rax_83
        else
            while (true)
                int64_t rdx_44 = sx.q(rcx_46)
                r8_21 += 0x20
                rcx_46 += 1
                var_444_2:4.d = r8_21
                var_458 = rcx_46
                
                if (rdx_44.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    var_444_2.d = r9_11
                    break
                
                rdx_43 = *(r10_4 + (rdx_44 << 2) + 4)
                var_448_4 = 0xffffffff
                
                if (rdx_43 != 0)
                    goto label_1409e074b
        
        r10_3 = var_3fc_1
    
    zmm2 = var_448_4.o
    double var_258_1[0x2] = zmm2
    var_444_2.d = r9_11
    double var_268_1[0x2] = var_458.o
    uint64_t rax_85 = (0xffffffff << (r9_11.b & 0x1f)).q u>> 0x20
    uint64_t var_410_2 = rax_85
    double temp0_11[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    var_398 = (&var_1e8).o
    int64_t var_378_1 = temp0_11.q
    
    while (true)
        int64_t rcx_50 = sx.q(var_268_1[1]:4.d)
        
        if (rcx_50.d != rax_85.d || var_268_1[0] != &var_1d8)
            rax_85.b = 0
        else
            rax_85.b = 1
        
        int64_t* rdx_46 = var_398[0]
        
        if (rax_85.b == 0 || rdx_46 != &var_1e8)
            rax_85.b = 1
        else
            rax_85.b = 0
        
        if (rax_85.b == 0)
            rsi_9 = zx.d(var_438_1)
            break
        
        zmm2 = r13_2[1]
        zmm1 = r13_2[2]
        int64_t rdx_48 = sx.q(*(r12_3[5][7] + sx.q(*(*rdx_46 + rcx_50 * 0xc)) * 0x18)) * 3
        int64_t rcx_54 = **(rdi_2 + 0x18)
        zmm2[0].d = zmm2[0].d f* *(rcx_54 + (rdx_48 << 2) + 4)
        zmm0 = *(rcx_54 + (rdx_48 << 2))
        zmm0[0].d = zmm0[0].d f* *r13_2
        zmm1[0].d = zmm1[0].d f* *(rcx_54 + (rdx_48 << 2) + 8)
        zmm2[0].d = zmm2[0].d f+ zmm0[0].d
        zmm2[0].d = zmm2[0].d f+ zmm1[0].d
        zmm2[0].d = zmm2[0].d f- r13_2[3]
        zmm2[0].d f- zmm6[0].d
        
        if (not(zmm2[0].d f<= zmm6[0].d))
            if (rsi_9 s< 0)
                rsi_9.b = 1
                break
            
            if (rsi_9 == 0)
                rsi_9 = 1
        else if (not(zmm2[0].d f>= zmm6[0].d))
            if (rsi_9 s> 0)
                rsi_9.b = 1
                break
            
            if (rsi_9 == 0)
                rsi_9 = -1
        
        char* r14_5 = sx.q(r15_4)
        r15_4 = (&r14_5[1]).d
        r12_3.b = zmm2[0].d f> zmm6[0].d
        
        if (r15_4 s> r10_3)
            sub_140679a80(&var_408)
        
        var_268_1[1].d &= not.d(var_398[1]:4.d)
        *(r14_5 + var_408) = r12_3.b
        sub_14059bdd0(&var_398[1])
        r10_3 = var_3fc_1
        rax_85 = var_410_2
        r12_3 = arg1
    
    int32_t* r10_5 = var_408
    
    if (r10_5 != 0)
        sub_140a74f90(r10_5)
    
    int32_t i_9 = 0
    int32_t var_1a0_3 = 0
    
    if (var_1a8_1 != 0)
        sub_140a74f90(var_1a8_1)
    
    int64_t var_1e0_1
    var_1e0_1.d = 0
    int32_t var_1b4_2 = 0
    int32_t var_1b8_2 = 0xffffffff
    sub_14059a8e0(&var_1d8, 0)
    
    if (var_1c8 != 0)
        sub_140a74f90(var_1c8)
    
    int64_t rcx_63 = var_1e8
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    if (rsi_9.b == 0)
        r12_2 = arg3
        r15_2 = arg1
    label_1409e134a:
        int32_t* rax_150
        rax_150, zmm6 = sub_1409b2fe0(r15_2, &var_288, i_2)
        zmm2 = r13_2[1]
        zmm0 = *r13_2
        zmm1 = r13_2[2]
        zmm2[0].d = zmm2[0].d f* rax_150[1]
        zmm0[0].d = zmm0[0].d f* *rax_150
        zmm1[0].d = zmm1[0].d f* rax_150[2]
        zmm2[0].d = zmm2[0].d f+ zmm0[0].d
        zmm2[0].d = zmm2[0].d f+ zmm1[0].d
        zmm2[0].d = zmm2[0].d f- r13_2[3]
        
        if (zmm2[0].d f< zmm6[0].d)
            int64_t rsi_22 = sx.q(arg4[1].d)
            int32_t rax_153 = (rsi_22 + 1).d
            arg4[1].d = rax_153
            
            if (rax_153 s> *(arg4 + 0xc))
                sub_1405a4cf0(arg4)
            
            *(*arg4 + (rsi_22 << 2)) = i_2
            r12_2 = arg3
        else
            int64_t rsi_21 = sx.q(r12_2[1].d)
            int32_t rax_151 = (rsi_21 + 1).d
            r12_2[1].d = rax_151
            
            if (rax_151 s> *(r12_2 + 0xc))
                sub_1405a4cf0(r12_2)
            
            *(*r12_2 + (rsi_21 << 2)) = i_2
    else
        void* rax_97
        
        if (var_230 == var_204)
        label_1409e0a00:
            rax_97 = nullptr
        else
            void* rcx_64 = &var_200
            
            if (var_1f8 != 0)
                rcx_64 = var_1f8
            
            int32_t rax_96 = *(rcx_64 + ((sx.q(var_1f0 - 1) & i_7) << 2))
            
            if (rax_96 == 0xffffffff)
            label_1409e0a00_1:
                rax_97 = nullptr
            else
                int32_t* rdx_52 = var_238
                
                while (rdx_52[sx.q(rax_96) * 8] != i_2)
                    rax_96 = rdx_52[sx.q(rax_96) * 8 + 6]
                    
                    if (rax_96 == 0xffffffff)
                        goto label_1409e0a00_2
                
                rax_97 = &rdx_52[sx.q(rax_96) * 8]
                
                if (rax_96 == 0xffffffff)
                label_1409e0a00_2:
                    rax_97 = nullptr
        
        int32_t* var_3e8 = nullptr
        int32_t r15_5 = 0
        int32_t var_3dc_1 = 0
        int32_t* rax_113
        
        if (*(rax_97 + 0x10) s<= 3)
            int32_t i_11 = 1
            sub_1405a4cf0(&var_3e8)
            rax_113 = var_3e8
            i_9 = i_11
            *rax_113 = i_2
        else
            int64_t var_2c0 = 0
            int64_t var_2b8_1 = 0
            uint64_t var_348 = 0
            int32_t var_340_1 = 0
            zmm6 = sub_1409e4be0(arg1, &var_2c0, &var_348)
            uint64_t rsi_11 = var_348
            uint64_t var_410_3 = rsi_11
            int64_t rax_99 = rsi_11 + (sx.q(var_340_1) << 2)
            
            if (rsi_11 != rax_99)
                int64_t var_2d0
                int64_t* var_290_1 = &var_2d0
                int64_t rax_100 = i_7 * 5
                
                do
                    int64_t i_12 = sx.q(i_9)
                    int32_t i_15 = (i_12 + 1).d
                    i_10 = i_15
                    
                    if (i_15 s> r15_5)
                        sub_1405a4cf0(&var_3e8)
                        i_10 = i_15
                    
                    int32_t* rdx_55 = var_3e8
                    int32_t rax_102 = *rsi_11
                    uint64_t var_298 = rsi_11
                    rdx_55[i_12] = rax_102
                    var_2d0 = 0
                    int64_t var_2c8_1 = 0
                    sub_140999670(&var_238, &var_2e0, &var_298, nullptr)
                    int64_t rcx_70 = var_2d0
                    
                    if (rcx_70 != 0)
                        sub_140a74f90(rcx_70)
                    
                    void* r12_5
                    
                    if (var_230 == var_204)
                    label_1409e0b4d:
                        r12_5 = nullptr
                    else
                        int64_t r8_25 = sx.q(*rsi_11)
                        void* rax_106 = &var_200
                        
                        if (var_1f8 != 0)
                            rax_106 = var_1f8
                        
                        int32_t rax_107 = *(rax_106 + ((sx.q(var_1f0 - 1) & r8_25) << 2))
                        
                        if (rax_107 == 0xffffffff)
                        label_1409e0b4d_1:
                            r12_5 = nullptr
                        else
                            while (true)
                                int32_t* rdx_58 = var_238
                                
                                if (rdx_58[sx.q(rax_107) * 8] == r8_25.d)
                                    break
                                
                                rax_107 = rdx_58[sx.q(rax_107) * 8 + 6]
                                
                                if (rax_107 == 0xffffffff)
                                    goto label_1409e0b4d_2
                            
                            if (rax_107 == 0xffffffff)
                            label_1409e0b4d_2:
                                r12_5 = nullptr
                            else
                                r12_5 = &var_238[sx.q(rax_107) * 8]
                    
                    int64_t rcx_75 = rax_100
                    int32_t r8_26 = *(r12_5 + 0x10)
                    int64_t* r13_3 = arg1[5]
                    int64_t rdi_3 = r13_3[0x1c]
                    int64_t rsi_12 = sx.q(*(rdi_3 + (rcx_75 << 3) + 8))
                    
                    if (rsi_12.d s> r8_26)
                        *(r12_5 + 0x10) = rsi_12.d
                        
                        if (rsi_12.d s> *(r12_5 + 0x14))
                            sub_1405a4cf0(r12_5 + 8)
                            rcx_75 = rax_100
                    else if (rsi_12.d s< r8_26)
                        sub_140908e30(r12_5 + 8, rsi_12.d, r8_26 - rsi_12.d, 1)
                        rcx_75 = rax_100
                    
                    int32_t r15_6 = 0
                    int64_t r14_6 = 0
                    
                    if (rsi_12.d s> 0)
                        int32_t r9_13 = (rsi_12 - 1).d
                        var_418 = r9_13
                        
                        do
                            int64_t rdx_61 = *(rdi_3 + (rcx_75 << 3))
                            int64_t r8_28 = r13_3[7]
                            int64_t rsi_13 = *(r12_5 + 8)
                            int64_t rcx_78 = 0
                            
                            if (r15_6 != r9_13)
                                rcx_78 = r14_6 + 1
                            
                            int32_t* rax_112 = sub_141cdf680(r13_3, &var_2d8, 
                                *(r8_28 + sx.q(*(rdx_61 + (r14_6 << 2))) * 0x18), 
                                *(r8_28 + sx.q(*(rdx_61 + (rcx_78 << 2))) * 0x18))
                            r9_13 = var_418
                            r15_6 += 1
                            *(rsi_13 + (r14_6 << 2)) = *rax_112
                            r14_6 += 1
                            rcx_75 = rax_100
                        while (r14_6 s< rsi_12)
                    
                    i_9 = i_10
                    rsi_11 = var_410_3 + 4
                    r15_5 = var_3dc_1
                    var_410_3 = rsi_11
                while (rsi_11 != rax_99)
                
                rsi_11 = var_348
                rdi_2 = rdi
                rbx_4 = var_3f0
                r13_2 = arg2
            
            if (rsi_11 != 0)
                sub_140a74f90(rsi_11)
            
            int64_t rcx_83 = var_2c0
            
            if (rcx_83 != 0)
                sub_140a74f90(rcx_83)
            
            rax_113 = var_3e8
        
        if (i_9 s> 0)
            int32_t* r9_15 = rax_113
            int32_t* var_430_4 = rax_113
            uint64_t i_4 = zx.q(i_9)
            uint64_t i_3
            
            do
                void* rdx_66
                
                if (var_230 == var_204)
                label_1409e0d14:
                    rdx_66 = nullptr
                else
                    int64_t r8_30 = sx.q(*r9_15)
                    void* rax_118 = &var_200
                    
                    if (var_1f8 != 0)
                        rax_118 = var_1f8
                    
                    int32_t rax_119 = *(rax_118 + ((sx.q(var_1f0 - 1) & r8_30) << 2))
                    
                    if (rax_119 == 0xffffffff)
                    label_1409e0d14_1:
                        rdx_66 = nullptr
                    else
                        while (true)
                            int32_t* rdx_65 = var_238
                            
                            if (rdx_65[sx.q(rax_119) * 8] == r8_30.d)
                                break
                            
                            rax_119 = rdx_65[sx.q(rax_119) * 8 + 6]
                            
                            if (rax_119 == 0xffffffff)
                                goto label_1409e0d14_2
                        
                        if (rax_119 == 0xffffffff)
                        label_1409e0d14_2:
                            rdx_66 = nullptr
                        else
                            rdx_66 = &var_238[sx.q(rax_119) * 8]
                
                int32_t* r15_7 = *(rdx_66 + 8)
                int32_t rbx_6 = 0
                int64_t rax_120 = sx.q(*(rdx_66 + 0x10))
                int32_t* r12_7 = nullptr
                int32_t* var_3d8 = nullptr
                int32_t r14_7 = 0
                int32_t var_3cc_1 = 0
                void* rax_121 = &r15_7[rax_120]
                
                if (r15_7 != rax_121)
                    int64_t r8_31 = var_148
                    
                    do
                        if (var_140 == var_114)
                        label_1409e0daa:
                            arg7 = r13_2[1]
                            arg6 = *r13_2
                            arg8 = r13_2[2]
                            int64_t rdx_71 = sx.q(*r15_7) * 3
                            arg5 = r13_2[3]
                            int64_t rcx_90 = arg1[5][0xe]
                            int64_t r9_17 = **(rdi_2 + 0x18)
                            int64_t r10_6 = sx.q(*(rcx_90 + (rdx_71 << 3))) * 3
                            arg7[0].d = arg7[0].d f* *(r9_17 + (r10_6 << 2) + 4)
                            int64_t rdx_72 = sx.q(*(rcx_90 + (rdx_71 << 3) + 4)) * 3
                            arg7[0].d = arg7[0].d f* *(r9_17 + (rdx_72 << 2) + 4)
                            arg6[0].d = arg6[0].d f* *(r9_17 + (rdx_72 << 2))
                            arg8[0].d = arg8[0].d f* *(r9_17 + (rdx_72 << 2) + 8)
                            arg7[0].d = arg7[0].d f+ arg6[0].d
                            arg6[0].d = arg6[0].d f* *(r9_17 + (r10_6 << 2))
                            arg7[0].d = arg7[0].d f+ arg8[0].d
                            arg8[0].d = arg8[0].d f* *(r9_17 + (r10_6 << 2) + 8)
                            arg7[0].d = arg7[0].d f+ arg6[0].d
                            arg7[0].d = arg7[0].d f- arg5[0].d
                            arg7[0].d = arg7[0].d f+ arg8[0].d
                            arg7[0].d = arg7[0].d f- arg5[0].d
                            rcx_90.b = arg7[0].d f> zmm6[0].d
                            int64_t rax_131
                            rax_131.b = arg7[0].d f> zmm6[0].d
                            
                            if (rax_131.b != rcx_90.b)
                                uint128_t zmm10_1 = zx.o(*(r9_17 + (r10_6 << 2)))
                                zmm6 = zx.o(*(r9_17 + (rdx_72 << 2)))
                                double zmm8_1[0x2] = zx.o(*(r9_17 + (rdx_72 << 2)))
                                int32_t rax_132 = *(r9_17 + (r10_6 << 2) + 8)
                                zmm8_1[0].d = zmm8_1[0].d f- zmm10_1.d
                                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                double zmm5_1[0x2] = rax_132
                                double zmm7_1[0x2] = zmm8_1
                                arg9 = zmm10_1.q:4.d
                                zmm6[0].d = zmm6[0].d f- arg9[0].d
                                zmm7_1[0].d = zmm7_1[0].d f* zmm8_1[0].d
                                double zmm9_1[0x2] = *(r9_17 + (rdx_72 << 2) + 8)
                                zmm9_1[0].d = zmm9_1[0].d f- zmm5_1[0].d
                                zmm6[0].d = zmm6[0].d f* zmm6[0].d
                                zmm9_1[0].d = zmm9_1[0].d f* zmm9_1[0].d
                                zmm7_1[0].d = zmm7_1[0].d f+ zmm6[0].d
                                zmm7_1[0].d = zmm7_1[0].d f+ zmm9_1[0].d
                                double zmm3_1[0x2]
                                
                                if (not(zmm7_1[0].d f== 1f))
                                    if (zmm7_1[0].d f>= 9.99999994e-09f)
                                        double zmm4_1[0x2] = 0x3f000000
                                        zmm3_1 = zx.o(0)
                                        zmm2 = 0x3f000000
                                        zmm3_1[0].d = zmm7_1[0].d
                                        zmm5_1 = _mm_rsqrt_ss(zmm3_1[0].d, zmm3_1[0].d)
                                        zmm3_1[0].d = zmm3_1[0].d f* 0.5f
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                                        zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                                        zmm2[0].d = 0.5f f- zmm3_1[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm2[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                                        zmm3_1[0].d = zmm3_1[0].d f* zmm5_1[0].d
                                        zmm4_1[0].d = 0.5f f- zmm3_1[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm4_1[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                                        var_418 = zmm5_1[0].d
                                        zmm1 = zmm5_1
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm8_1[0].d
                                        zmm5_1[0].d = zmm5_1[0].d f* zmm9_1[0].d
                                        zmm1[0].d = zmm1[0].d f* zmm6[0].d
                                        zmm8_1 = zmm5_1
                                        zmm9_1 = zmm5_1
                                        zmm5_1 = rax_132
                                        zmm6 = zmm1
                                    else
                                        zmm8_1 = data_143dbb1f8
                                        zmm6 = data_143dbb1fc
                                        zmm9_1 = data_143dbb200
                                
                                var_3b8.q = 0
                                zmm6[0].d = zmm6[0].d f* arg7[0].d
                                int64_t var_3b0_2 = 0
                                var_3c8 = nullptr
                                arg5[0].d = arg5[0].d f* arg6[0].d
                                int64_t var_3c0_2 = 1
                                arg5[0].d = arg5[0].d f* arg7[0].d
                                arg5[0].d = arg5[0].d f- zmm10_1.d
                                arg5[0].d = arg5[0].d f* arg8[0].d
                                arg5[0].d = arg5[0].d f- arg9[0].d
                                zmm3_1 = zmm10_1
                                arg5[0].d = arg5[0].d f- zmm5_1[0].d
                                arg6[0].d = arg6[0].d f* arg5[0].d
                                arg7[0].d = arg7[0].d f* arg5[0].d
                                arg8[0].d = arg8[0].d f* arg5[0].d
                                arg6[0].d = arg6[0].d f+ arg7[0].d
                                zmm8_1[0].d = zmm8_1[0].d f* arg6[0].d
                                arg6[0].d = arg6[0].d f+ arg8[0].d
                                zmm6[0].d = zmm6[0].d f+ zmm8_1[0].d
                                zmm9_1[0].d = zmm9_1[0].d f* arg8[0].d
                                zmm6[0].d = zmm6[0].d f+ zmm9_1[0].d
                                arg6[0].d = arg6[0].d f/ zmm6[0].d
                                zmm8_1[0].d = zmm8_1[0].d f* arg6[0].d
                                arg6[0].d = arg6[0].d f* zmm6[0].d
                                zmm3_1[0].d = zmm3_1[0].d f+ zmm8_1[0].d
                                arg6[0].d = arg6[0].d f* zmm9_1[0].d
                                arg9[0].d = arg9[0].d f+ arg6[0].d
                                zmm0 = _mm_sqrt_ss(0, zmm7_1[0].d)
                                zmm3_1[0].d = zmm3_1[0].d f- zmm10_1.d
                                arg9[0].d = arg9[0].d f- arg9[0].d
                                zmm5_1[0].d = zmm5_1[0].d f+ arg6[0].d
                                zmm3_1[0].d = zmm3_1[0].d f* zmm3_1[0].d
                                arg9[0].d = arg9[0].d f* arg9[0].d
                                zmm5_1[0].d = zmm5_1[0].d f- zmm5_1[0].d
                                zmm3_1[0].d = zmm3_1[0].d f+ arg9[0].d
                                zmm1 = 0x3f800000
                                zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                                zmm1[0].d = 1f f/ zmm0[0].d
                                zmm3_1[0].d = zmm3_1[0].d f+ zmm5_1[0].d
                                zmm6 = _mm_sqrt_ss(0, zmm3_1[0].d)
                                zmm6[0].d = zmm6[0].d f* zmm1[0].d
                                sub_1406105e0(&var_3c8)
                                *var_3c8 = zmm6[0].d
                                sub_1409deb00(arg1, *r15_7, &var_3c8, &var_3b8)
                                int64_t rsi_17 = sx.q(r14_7)
                                r14_7 = (rsi_17 + 1).d
                                
                                if (r14_7 s> rbx_6)
                                    sub_1405a4cf0(&var_3d8)
                                    r12_7 = var_3d8
                                    rbx_6 = var_3cc_1
                                
                                int32_t* rsi_18 = var_3b8.q
                                r12_7[rsi_17] = *rsi_18
                                sub_140998bf0(&var_148, r15_7, rsi_18)
                                int32_t* rcx_99 = var_3c8
                                
                                if (rcx_99 != 0)
                                    sub_140a74f90(rcx_99)
                                
                                sub_140a74f90(rsi_18)
                                zmm6 = zx.o(0)
                                r8_31 = var_148
                        else
                            void var_110
                            void* rcx_88 = &var_110
                            int64_t r9_16 = sx.q(*r15_7)
                            
                            if (var_108 != 0)
                                rcx_88 = var_108
                            
                            int32_t rax_126 = *(rcx_88 + ((sx.q(var_100 - 1) & r9_16) << 2))
                            int32_t rcx_89 = rax_126
                            
                            if (rax_126 == 0xffffffff)
                                goto label_1409e0daa
                            
                            while (true)
                                int64_t rdx_70 = sx.q(rcx_89) * 2
                                
                                if (*(r8_31 + (rdx_70 << 3)) == r9_16.d)
                                    break
                                
                                rcx_89 = *(r8_31 + (rdx_70 << 3) + 8)
                                
                                if (rcx_89 == 0xffffffff)
                                    goto label_1409e0daa
                            
                            if (rcx_89 == 0xffffffff)
                                goto label_1409e0daa
                            
                            void* r13_4
                            
                            if (rax_126 == 0xffffffff)
                            label_1409e0f73:
                                r13_4 = nullptr
                            else
                                int64_t rcx_93
                                
                                while (true)
                                    rcx_93 = sx.q(rax_126) * 2
                                    
                                    if (*(r8_31 + (rcx_93 << 3)) == r9_16.d)
                                        break
                                    
                                    rax_126 = *(r8_31 + (rcx_93 << 3) + 8)
                                    
                                    if (rax_126 == 0xffffffff)
                                        goto label_1409e0f73_1
                                
                                r13_4 = r8_31 + (rcx_93 << 3)
                                
                                if (rax_126 == 0xffffffff)
                                label_1409e0f73_1:
                                    r13_4 = nullptr
                            
                            int64_t rsi_16 = sx.q(r14_7)
                            r14_7 = (rsi_16 + 1).d
                            
                            if (r14_7 s> rbx_6)
                                sub_1405a4cf0(&var_3d8)
                                r12_7 = var_3d8
                                rbx_6 = var_3cc_1
                            
                            r13_2 = arg2
                            r12_7[rsi_16] = *(r13_4 + 4)
                            r8_31 = var_148
                        
                        r15_7 = &r15_7[1]
                    while (r15_7 != rax_121)
                    
                    r9_15 = var_430_4
                
                if (r14_7 == 0)
                    int32_t var_248[0x4]
                    int128_t* rax_144
                    rax_144, zmm6 = sub_1409b2fe0(arg1, &var_248, i_2)
                    zmm2 = r13_2[1]
                    zmm1 = r13_2[2]
                    int64_t* rbx_7 = arg3
                    zmm2[0].d = zmm2[0].d f* *(rax_144 + 4)
                    zmm0 = *rax_144
                    zmm0[0].d = zmm0[0].d f* *r13_2
                    zmm1[0].d = zmm1[0].d f* *(rax_144 + 8)
                    zmm2[0].d = zmm2[0].d f+ zmm0[0].d
                    zmm2[0].d = zmm2[0].d f+ zmm1[0].d
                    zmm2[0].d = zmm2[0].d f- r13_2[3]
                    
                    if (not(zmm2[0].d f>= zmm6[0].d))
                        rbx_7 = arg4
                    
                    int64_t rsi_20 = sx.q(rbx_7[1].d)
                    int32_t rax_145 = (rsi_20 + 1).d
                    rbx_7[1].d = rax_145
                    
                    if (rax_145 s> *(rbx_7 + 0xc))
                        sub_1405a4cf0(rbx_7)
                    
                    *(*rbx_7 + (rsi_20 << 2)) = i_2
                else
                    var_458 = *r9_15
                    var_450 = nullptr
                    int32_t var_448_5
                    var_448_5.q = 1
                    sub_1405a4d70(&var_450)
                    int32_t* rcx_102 = var_450
                    int64_t rsi_19 = sx.q(var_3a0.d)
                    *rcx_102 = data_143a1c6b4
                    rcx_102[1] = data_143a1c6b4
                    *rcx_102 = *r12_7
                    rcx_102[1] = r12_7[1]
                    int32_t rax_142 = (rsi_19 + 1).d
                    var_3a0.d = rax_142
                    
                    if (rax_142 s> var_3a0:4.d)
                        sub_1405a4df0(&var_3a8)
                    
                    sub_1409aa240(var_3a8 + rsi_19 * 0x18, &var_458)
                    int32_t* rcx_106 = var_450
                    
                    if (rcx_106 != 0)
                        sub_140a74f90(rcx_106)
                
                if (r12_7 != 0)
                    sub_140a74f90(r12_7)
                
                r9_15 = &var_430_4[1]
                i_3 = i_4
                i_4 -= 1
                var_430_4 = r9_15
            while (i_3 != 1)
            rbx_4 = var_3f0
        
        int32_t* rax_147 = var_3e8
        
        if (rax_147 != 0)
            sub_140a74f90(rax_147)
        
        r15_2 = arg1
        r12_2 = arg3
    
    var_2f8.d &= not.d(var_308[0]:4.d)
    sub_14059bdd0(&var_308)
    rcx_35 = var_318
    r10_2 = rbx_4 + 0x10

int512_t zmm11
int512_t zmm12
int512_t zmm13
int512_t zmm14
int512_t zmm15
zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1409e1670(r15_2, &var_3a8, arg10)
uint64_t r12_9 = *arg10
uint64_t var_3f0_1 = r12_9
int64_t rax_156 = r12_9 + (sx.q(arg10[1].d) << 2)

while (r12_9 != rax_156)
    int64_t rax_157 = sx.q(*r12_9)
    void* r15_8 = r15_2[5]
    int32_t* r14_9 = nullptr
    var_408 = nullptr
    int32_t var_3fc_2 = 0
    int64_t rdi_4 = rax_157 * 3
    int32_t var_400_2 = 0
    int64_t rax_158 = *(r15_8 + 0x70)
    int32_t rdx_90 = *(rax_158 + (rdi_4 << 3) + 0x10)
    
    if (rdx_90 s> 0)
        sub_1405dadb0(&var_408, rdx_90)
        rax_158 = *(r15_8 + 0x70)
        r14_9 = var_408
    
    int32_t* rbx_9 = *(rax_158 + (rdi_4 << 3) + 8)
    int64_t rdi_5 = 0
    uint64_t rsi_24 = sx.q(*(rax_158 + (rdi_4 << 3) + 0x10)) << 2 u>> 2
    
    if (rbx_9 u> &rbx_9[sx.q(*(rax_158 + (rdi_4 << 3) + 0x10))])
        rsi_24 = 0
    
    if (rsi_24 != 0)
        do
            sub_1408d92c0(&var_408, *(r15_8 + 0xa8) + (sx.q(*rbx_9) << 4) + 0xc)
            rdi_5 += 1
            rbx_9 = &rbx_9[1]
        while (rdi_5 != rsi_24)
        
        r14_9 = var_408
    
    int32_t* rbx_10 = r14_9
    void* rsi_25 = &r14_9[sx.q(var_400_2)]
    
    if (r14_9 != rsi_25)
        do
            int32_t* rax_162
            int32_t zmm6_1
            rax_162, zmm6_1 = sub_1409b2fe0(arg1, &var_288, *rbx_10)
            
            if (not(rax_162[1] f* r13_2[1] + *r13_2 f* *rax_162
                    + rax_162[2] f* r13_2[2] f- r13_2[3] f< zmm6_1))
                int64_t rdi_6 = sx.q(arg3[1].d)
                int32_t rax_163 = (rdi_6 + 1).d
                arg3[1].d = rax_163
                
                if (rax_163 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (rdi_6 << 2)) = *rbx_10
            
            int64_t rdi_7 = sx.q(arg4[1].d)
            int32_t rax_165 = (rdi_7 + 1).d
            arg4[1].d = rax_165
            
            if (rax_165 s> *(arg4 + 0xc))
                sub_1405a4cf0(arg4)
            
            int32_t rax_166 = *rbx_10
            rbx_10 = &rbx_10[1]
            *(*arg4 + (rdi_7 << 2)) = rax_166
        while (rbx_10 != rsi_25)
        
        r14_9 = var_408
        r12_9 = var_3f0_1
    
    if (r14_9 != 0)
        sub_140a74f90(r14_9)
    
    r15_2 = arg1
    r12_9 += 4
    var_3f0_1 = r12_9

sub_1405ae180(&var_148)
sub_1408464b0(&var_3a8)
int32_t var_1f0_1 = 0

if (var_1f8 != 0)
    sub_140a74f90(var_1f8)

sub_140597460(&var_238)
int32_t var_150_1 = 0

if (var_158 != 0)
    sub_140a74f90(var_158)

void* result = sub_140909ff0(&var_198)
uint64_t i_8 = i_5

if (i_8 != 0)
    result = sub_140a74f90(i_8)

__security_check_cookie(rax_1 ^ &var_488)
zmm11.o = var_a8
zmm12.o = var_b8
zmm13.o = var_c8
zmm14.o = var_d8
zmm15.o = var_e8
return result
