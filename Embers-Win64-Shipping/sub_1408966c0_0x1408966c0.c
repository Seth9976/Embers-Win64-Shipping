// 函数: sub_1408966c0
// 地址: 0x1408966c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
data_143cea5dc = _mm_and_ps(arg4, 0x7fffffff)[0]
data_143cea5d0 = 1
int32_t* rax_2 = sub_14283144c()
int64_t* rax_3 = sub_1428332a4(rax_2)
int16_t* const r13 = &data_142d40450
void* rdx = nullptr
int64_t r12 = -1
void* var_d8 = nullptr
void var_158
int16_t* rbx_1

if (arg2[1].d == 0)
    rbx_1 = &data_142d40450
label_14089677e:
    int64_t rax_4 = -1
    
    do
        rax_4 += 1
    while (rbx_1[rax_4] != 0)
    
    int32_t rsi_1 = (rax_4 + 1).d
    int32_t var_c8_1 = rax_4.d
    
    if (rsi_1 u> 0x80 && rsi_1 != 0)
        void* rax_5 = sub_140a84c80(0, sx.q(rsi_1), 0)
        rdx = rax_5
        var_d8 = rax_5
    
    void* rcx_1 = &var_158
    
    if (rdx != 0)
        rcx_1 = rdx
    
    sub_14060abb0(rcx_1, rsi_1, rbx_1, rsi_1, 0x3f)
    rdx = rcx_1
else
    rbx_1 = *arg2
    
    if (rbx_1 != 0)
        goto label_14089677e
    
    int64_t var_d0 = 0
    int32_t var_c8 = 0
sub_142832f44(rax_3, rdx, 1)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_142832a8c(rax_3, 0x3f800000)
void* rbx_2 = data_143f5b298
sub_140d19010(rbx_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rax_7 = sub_140d2dfc0(sub_140616f90(), rbx_2, 0, 0, 0, 0, 0, 0, 0)
int128_t* var_218
sub_14060faf0(rax_7, sub_140596d10(&var_218, arg1))
float zmm7[0x4]
int128_t zmm9
zmm7, zmm9 = sub_14060f280(rax_7, &var_218)
int32_t j
int32_t r9_2 = j - 1
int32_t temp0_1
int32_t temp1
temp0_1:temp1 = sx.q(j)
int32_t i_8 = (temp1 - temp0_1) s>> 1

if (i_8 s> 0)
    int128_t* rdx_8 = var_218
    uint64_t i_7 = zx.q(i_8)
    uint64_t i
    
    do
        int128_t* r8_4 = &var_218[sx.q(r9_2)]
        
        if (rdx_8 != r8_4)
            int128_t zmm1_1 = *rdx_8
            *rdx_8 = *r8_4
            *r8_4 = zmm1_1
        
        rdx_8 = &rdx_8[1]
        r9_2 -= 1
        i = i_7
        i_7 -= 1
    while (i != 1)

float zmm0_2[0x4]
int128_t zmm6
zmm0_2, zmm6 = sub_14060ee20(rax_7)
float zmm1_2[0x4] = data_143cea5dc
zmm1_2[0] = zmm1_2[0] * 44100f
zmm0_2[0] = zmm0_2[0] * 44100f
zmm1_2[0] = zmm1_2[0] + zmm0_2[0]
zmm1_2[0] = zmm1_2[0] + 441000f
int32_t rax_12 = int.d(zmm1_2[0])
data_143cea5d8 = rax_12
int32_t _Size_1 = rax_12 * 2
int64_t _Size = sx.q(_Size_1)
uint64_t var_220
var_220.d = _Size_1
float (* rax_13)[0x4] = calloc(4, _Size)
zmm0_2 = data_143cea5dc
int32_t zmm8 = (zx.o(0)).d
zmm0_2[0] = zmm0_2[0] * 44100f
data_143cea5d4 = 0
int32_t rax_14 = int.d(zmm0_2[0])
float var_238[0x4]

if (data_143cea5d8 != rax_14)
    int32_t r12_1 = rax_14 * 2
    int128_t var_58_1 = zmm6
    int32_t i_1 = 0
    int128_t var_88_1 = zmm9
    zmm9 = 0x37be37c6
    int64_t r13_1 = sx.q(rax_14) << 3
    int32_t rcx_27
    
    do
        zmm6.d = float.s(zx.q(i_1))
        zmm6.d = zmm6.d f* zmm9.d
        
        while (j s> 0)
            int128_t* r9_3 = var_218
            int64_t rcx_13 = sx.q(j - 1) * 2
            
            if (zmm6.d f<= *(r9_3 + (rcx_13 << 3)))
                break
            
            var_238 = *(r9_3 + (rcx_13 << 3))
            
            if (0 != 0)
                memmove(&r9_3[sx.q(j - 1)], &r9_3[sx.q(j)], 0 << 4)
            
            j -= 1
            sub_140638bc0(&var_218)
            uint32_t rcx_18 = zx.d(var_238[1].b)
            
            if (rcx_18 == 8)
                sub_142832370(rax_3, zx.d(var_238[3].b), zx.d(var_238[3]:1.b))
            else if (rcx_18 == 9)
                sub_1428324a8(rax_3, zx.d(var_238[3].b), zx.q(var_238[3]:1.b), zx.d(var_238[3]:2.b))
            else if (rcx_18 == 0xb)
                zmm6 = sub_142831bc8(rax_3, zx.d(var_238[3].b), zx.q(var_238[3]:1.b), 
                    zx.d(var_238[3]:2.b))
            else if (rcx_18 == 0xc)
                sub_1428327bc(rax_3, zx.d(var_238[3].b), zx.d(var_238[3]:1.b))
        
        int64_t var_250
        var_250.d = 2
        char var_258
        var_258.d = 1
        void* r8_11 = &(*rax_13)[sx.q(r12_1)]
        int32_t zmm10_1
        uint32_t zmm11_1[0x4]
        zmm7, zmm8, zmm9, zmm10_1, zmm11_1 =
            sub_142833130(rax_3, 1, r8_11, 0, 2, r8_11, var_258, var_250.d)
        r12_1 += 2
        zmm1_2 = *(rax_13 + r13_1 + 4)
        zmm0_2 = _mm_and_ps(*(rax_13 + r13_1), zmm11_1)
        int32_t rdx_17 = data_143cea5d4
        float temp0_3[0x4] = _mm_max_ss(zmm0_2[0], zmm8)
        rcx_27 = data_143cea5d8
        i_1 = rdx_17 + 1
        zmm1_2 = _mm_and_ps(zmm1_2, zmm11_1)
        data_143cea5d4 = i_1
        r13_1 += 8
        zmm8 = _mm_max_ss(zmm1_2[0], temp0_3[0])
        zmm0_2 = data_143cea5dc
        zmm0_2[0] = zmm0_2[0] f* zmm10_1
    while (i_1 u< rcx_27 - int.d(zmm0_2[0]))
    _Size_1 = var_220.d
    r13 = &data_142d40450
    r12 = -1

int32_t i_5 = 0
zmm7[0] = zmm7[0] f/ zmm8
float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)

if (_Size_1 s> 0 && _Size_1 u>= 0x10)
    int32_t rax_23 = _Size_1 & 0x8000000f
    
    if (rax_23 s< 0)
        rax_23 = ((rax_23 - 1) | 0xfffffff0) + 1
    
    int64_t i_2 = 0
    int64_t rax_26 = 0x20
    
    do
        zmm0_2 = *(rax_26 + rax_13 - 0x20)
        rax_26 += 0x40
        i_5 += 0x10
        i_2 += 0x10
        *(rax_26 + rax_13 - 0x60) = _mm_mul_ps(zmm0_2, temp0_6)
        *(rax_26 + rax_13 - 0x50) = _mm_mul_ps(*(rax_26 + rax_13 - 0x50), temp0_6)
        *(rax_26 + rax_13 - 0x40) = _mm_mul_ps(*(rax_26 + rax_13 - 0x40), temp0_6)
        *(rax_26 + rax_13 - 0x30) = _mm_mul_ps(temp0_6, *(rax_26 + rax_13 - 0x30))
    while (i_2 s< sx.q(_Size_1 - rax_23))

int64_t i_3 = sx.q(i_5)

if (i_3 s< _Size)
    if (_Size - i_3 s< 4)
    label_140896c53:
        
        do
            zmm7[0] = zmm7[0] * (*rax_13)[i_3]
            (*rax_13)[i_3] = zmm7[0]
            i_3 += 1
        while (i_3 s< _Size)
    else
        do
            zmm7[0] = zmm7[0] * (*rax_13)[i_3]
            (*rax_13)[i_3] = zmm7[0]
            zmm7[0] = zmm7[0] * (*rax_13)[i_3 + 1]
            (*rax_13)[i_3 + 1] = zmm7[0]
            zmm7[0] = zmm7[0] * (*rax_13)[i_3 + 2]
            (*rax_13)[i_3 + 2] = zmm7[0]
            zmm7[0] = zmm7[0] * (*rax_13)[i_3 + 3]
            (*rax_13)[i_3 + 3] = zmm7[0]
            i_3 += 4
        while (i_3 s< _Size - 3)
        
        if (i_3 s< _Size)
            goto label_140896c53

int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x19)
int64_t var_180 = 0
int64_t var_178 = 0xf
char var_164 = 1
int32_t var_168 = 0x10
int32_t var_16c = 0xac44
sub_140897b00(&var_1a8, 1)
sub_140897a60(var_1a8.q, 0)
int32_t var_170 = 1
int32_t var_168_1 = 0x20
int32_t var_16c_1 = 0xac44
__builtin_memset(&var_238, 0, 0x18)
sub_140897b00(&var_238, 2)
int64_t* rbx_6 = var_238[0].q
sub_140897a60(rbx_6, zx.q(data_143cea5d8))
sub_140897a60(&rbx_6[3], zx.q(data_143cea5d8))
int32_t i_4 = 0

if (data_143cea5d8 u> 0)
    int64_t r10_1 = *rbx_6
    int64_t r11_1 = rbx_6[3]
    
    do
        uint64_t i_6 = zx.q(i_4)
        uint64_t rdx_21 = zx.q(i_4 * 2)
        i_4 += 1
        *(r10_1 + (i_6 << 2)) = (*rax_13)[rdx_21]
        *(r11_1 + (i_6 << 2)) = (*rax_13)[zx.q((rdx_21 + 1).d)]
    while (i_4 u< data_143cea5d8)

if (sub_1408986f0(&var_1a8, &var_238) != 0)
    char* rdx_23 = nullptr
    char* var_d8_1 = nullptr
    
    if (arg3[1].d != 0)
        r13 = *arg3
    
    if (arg3[1].d == 0 || r13 != 0)
        int64_t rax_33 = -1
        
        do
            rax_33 += 1
        while (r13[rax_33] != 0)
        
        int32_t rbx_7 = (rax_33 + 1).d
        int32_t var_c8_3 = rax_33.d
        
        if (rbx_7 u> 0x80 && rbx_7 != 0)
            char* rax_34 = sub_140a84c80(0, sx.q(rbx_7), 0)
            rdx_23 = rax_34
            var_d8_1 = rax_34
        
        int32_t var_268_1
        var_268_1.b = 0x3f
        char* rcx_36 = &var_158
        
        if (rdx_23 != 0)
            rcx_36 = rdx_23
        
        sub_14060abb0(rcx_36, rbx_7, r13, rbx_7, var_268_1.b)
        rdx_23 = rcx_36
    else
        int64_t var_d0_2 = 0
        int32_t var_c8_2 = 0
    
    int128_t zmm0_3 = data_143702ea0
    char var_1f0 = 0
    
    do
        r12 += 1
    while (rdx_23[r12] != 0)
    
    sub_14058ad40(&var_1f0, rdx_23, r12)
    void var_1d0
    sub_140897be0(&var_1a8, sub_140592d30(&var_1d0, &var_1f0))
    int64_t rdx_28 = zmm0_3:8.q
    
    if (rdx_28 u>= 0x10)
        void* rcx_40 = var_1f0.q
        void* rax_36 = rcx_40
        
        if (rdx_28 + 1 u>= 0x1000)
            rcx_40 = *(rcx_40 - 8)
            
            if (rax_36 - rcx_40 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_40)
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)

int64_t* r15_1 = var_238[0].q
data_143cea5d0 = 0

if (r15_1 == 0)
    goto label_140896f46

int64_t r12_2 = var_238[2].q
int64_t* rbx_8 = r15_1

if (r15_1 != r12_2)
    do
        void* rcx_43 = *rbx_8
        
        if (rcx_43 != 0)
            if (((rbx_8[2] - rcx_43) & 0xfffffffffffffffc) u>= 0x1000)
                void* r8_15 = *(rcx_43 - 8)
                
                if (rcx_43 - r8_15 - 8 u> 0x1f)
                    goto label_140897027
                
                rcx_43 = r8_15
            
            j_sub_140a74f90(rcx_43)
            __builtin_memset(rbx_8, 0, 0x18)
        
        rbx_8 = &rbx_8[3]
    while (rbx_8 != r12_2)

int64_t var_228
int64_t rdx_35 = (var_228 - r15_1) s/ 0x18
int64_t* rax_43 = r15_1

if (rdx_35 * 0x18 u>= 0x1000)
    r15_1 = r15_1[-1]

if (rdx_35 * 0x18 u< 0x1000 || rax_43 - r15_1 - 8 u<= 0x1f)
    j_sub_140a74f90(r15_1)
label_140896f46:
    
    if (var_178 u< 0x10)
        goto label_140896f7d
    
    char var_190
    void* rcx_47 = var_190.q
    void* rax_46 = rcx_47
    
    if (var_178 + 1 u>= 0x1000)
        rcx_47 = *(rcx_47 - 8)
    
    if (var_178 + 1 u< 0x1000 || rax_46 - rcx_47 - 8 u<= 0x1f)
        j_sub_140a74f90(rcx_47)
    label_140896f7d:
        int64_t* r15_2 = var_1a8.q
        
        if (r15_2 == 0)
            goto label_140897039
        
        int64_t r12_3 = var_1a8:8.q
        int64_t* rbx_9 = r15_2
        
        if (r15_2 != r12_3)
            do
                void* rcx_49 = *rbx_9
                
                if (rcx_49 != 0)
                    if (((rbx_9[2] - rcx_49) & 0xfffffffffffffffc) u>= 0x1000)
                        void* r8_16 = *(rcx_49 - 8)
                        
                        if (rcx_49 - r8_16 - 8 u> 0x1f)
                            goto label_140897027
                        
                        rcx_49 = r8_16
                    
                    j_sub_140a74f90(rcx_49)
                    __builtin_memset(rbx_9, 0, 0x18)
                
                rbx_9 = &rbx_9[3]
            while (rbx_9 != r12_3)
        
        int64_t var_198
        int64_t rdx_45 = (var_198 - r15_2) s/ 0x18
        int64_t* rax_53 = r15_2
        
        if (rdx_45 * 0x18 u>= 0x1000)
            r15_2 = r15_2[-1]
        
        if (rdx_45 * 0x18 u< 0x1000 || rax_53 - r15_2 - 8 u<= 0x1f)
            j_sub_140a74f90(r15_2)
        label_140897039:
            free(rax_13)
            int128_t* r9_7 = var_218
            
            if (r9_7 != 0)
                sub_140a74f90(r9_7)
            
            (*(*rax_7 + 0x3a0))(rax_7, 0)
            sub_142831534(rax_3)
            int64_t result = j_sub_142833c6c(rax_2)
            __security_check_cookie(rax_1 ^ &var_288)
            return result

label_140897027:
_invalid_parameter_noinfo_noreturn()
noreturn
