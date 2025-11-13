// 函数: sub_1417d2b30
// 地址: 0x1417d2b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t* rax_2 = j_sub_140a82f30(0x2f8)
int64_t* rdi

if (rax_2 == 0)
    rdi = nullptr
else
    rdi = sub_1417cd420(rax_2, *(arg2 + 0x10), (*(arg1 + 0x168)).b)

int64_t r14 = sx.q(*(arg1 + 0x158))
int32_t rax_4 = (r14 + 1).d
*(arg1 + 0x158) = rax_4

if (rax_4 s> *(arg1 + 0x15c))
    sub_1405a4d70(arg1 + 0x150)

*(*(arg1 + 0x150) + (r14 << 3)) = rdi
(*(rdi[1] + 0x28))(&rdi[1])
int64_t* rcx_3 = *(arg2 + 0x18)
int64_t var_138
int64_t* var_240 = &var_138
void** const var_1d0 = &data_142fcc1a0
var_138 = 0
rdi[4].d = rcx_3[1].d
int32_t var_128 = 1
char var_110 = 0
int64_t var_108 = 0
int64_t var_1c8 = *rcx_3
int64_t* rcx_5 = data_143f0f180
int32_t var_114 = (1 << (data_1439c7a34).b) - 1
void** const* var_130 = &var_1d0
uint32_t var_1c0 = rcx_3[1].d * 0xc
int128_t var_124 = data_143dbb1e0
int32_t var_100 = 0
int32_t var_248 = 0x201
void var_238
(*(*rcx_5 + 0x498))(rcx_5, &var_238, &data_143f02b98)
sub_1405d1600(&rdi[3], &var_238)
sub_1405d1550(&var_238)
int64_t* rcx_8 = data_143f0f180
var_240.b = 0xd
void var_230
(*(*rcx_8 + 0x4b8))(rcx_8, &var_230, &data_143f02b98, rdi[3], 4, var_240)
sub_1405d1600(&rdi[0x5b], &var_230)
sub_1405ec8a0(&var_230)
(*(rdi[5] + 0x28))(&rdi[5])
int64_t* rax_15 = *(arg2 + 0x20)
int32_t rcx_12 = rax_15[1].d
int128_t zmm0_1

if (rcx_12 != 0)
    rdi[8].d = rcx_12
    zmm0_1 = data_143dbb1e0
    int64_t var_1b0_1 = *rax_15
    int64_t* rcx_14 = data_143f0f180
    int32_t var_d4_1 = (1 << (data_1439c7a34).b) - 1
    int64_t var_f8
    var_240 = &var_f8
    int32_t r9_4 = rax_15[1].d << 3
    void** const var_1b8
    int64_t* var_f0_1 = &var_1b8
    var_1b8 = &data_142fcc1a0
    int32_t var_1a8_1 = r9_4
    var_f8 = 0
    int32_t var_e8_1 = 1
    int128_t var_e4_1 = zmm0_1
    char var_d0_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    int32_t var_248_2 = 0x201
    void var_228
    (*(*rcx_14 + 0x498))(rcx_14, &var_228, &data_143f02b98)
    sub_1405d1600(&rdi[7], &var_228)
    sub_1405d1550(&var_228)
    int64_t* rcx_17 = data_143f0f180
    var_240.b = 0x11
    void var_220
    (*(*rcx_17 + 0x4b8))(rcx_17, &var_220, &data_143f02b98, rdi[7], 8, var_240)
    sub_1405d1600(&rdi[0x5c], &var_220)
    sub_1405ec8a0(&var_220)

(*(rdi[9] + 0x28))(&rdi[9])
int64_t* rax_22 = *(arg2 + 0x28)
int32_t rcx_21 = rax_22[1].d

if (rcx_21 != 0)
    rdi[0xc].d = rcx_21
    zmm0_1 = data_143dbb1e0
    int64_t var_198_1 = *rax_22
    int64_t* rcx_23 = data_143f0f180
    int32_t var_94_1 = (1 << (data_1439c7a34).b) - 1
    int64_t var_b8
    var_240 = &var_b8
    int32_t r9_7 = rax_22[1].d << 2
    void** const var_1a0
    int64_t* var_b0_1 = &var_1a0
    var_1a0 = &data_142fcc1a0
    int32_t var_190_1 = r9_7
    var_b8 = 0
    int32_t var_a8_1 = 1
    int128_t var_a4_1 = zmm0_1
    char var_90_1 = 0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    int32_t var_248_4 = 0x201
    void var_218
    (*(*rcx_23 + 0x498))(rcx_23, &var_218, &data_143f02b98)
    sub_1405d1600(&rdi[0xb], &var_218)
    sub_1405d1550(&var_218)

int64_t rax_27 = sx.q(data_143f0f1a0)

if ((((rax_27.d u> 0x18 || not(test_bit(0x100a040, rax_27.d)))
        && *(&data_143f025f0 + rax_27 * 0x14) != data_143f025b8) || (rax_27 - 0x19).d u<= 1
        || *(&data_143f025f0 + rax_27 * 0x14) == data_143f025d0)
        && (rax_27.d u> 0x1e || not(test_bit(0x6562c800, rax_27.d)))
        && (*(rax_27 * 0x14 + &data_143f025fc) & 1) == 0)
    int64_t* rcx_29 = data_143f0f180
    var_240.b = 0x3d
    void var_210
    (*(*rcx_29 + 0x4b8))(rcx_29, &var_210, &data_143f02b98, rdi[0xb], 4, var_240)
    sub_1405d1600(&rdi[0x5d], &var_210)
    sub_1405ec8a0(&var_210)

(*(rdi[0xd] + 0x28))(&rdi[0xd])
int64_t* rax_31 = *(arg2 + 0x30)
int32_t rcx_33 = rax_31[1].d

if (rcx_33 != 0)
    rdi[0x10].d = rcx_33
    zmm0_1 = data_143dbb1e0
    int64_t var_180_1 = *rax_31
    int64_t* rcx_35 = data_143f0f180
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    int64_t var_78
    int64_t* var_240_1 = &var_78
    int32_t r9_10 = rax_31[1].d << 2
    void** const var_188
    int64_t* var_70_1 = &var_188
    var_188 = &data_142fcc1a0
    int32_t var_178_1 = r9_10
    var_78 = 0
    int32_t var_68_1 = 1
    int128_t var_64_1 = zmm0_1
    char var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int32_t var_248_6 = 0x201
    void var_208
    (*(*rcx_35 + 0x498))(rcx_35, &var_208, &data_143f02b98)
    sub_1405d1600(&rdi[0xf], &var_208)
    sub_1405d1550(&var_208)
    int64_t* rcx_38 = data_143f0f180
    var_240_1.b = 0x25
    void var_200
    (*(*rcx_38 + 0x4b8))(rcx_38, &var_200, &data_143f02b98, rdi[0xf], 4, var_240_1)
    sub_1405d1600(&rdi[0x5e], &var_200)
    sub_1405ec8a0(&var_200)

(*(rdi[0x11] + 0x28))(&rdi[0x11])
sub_1417d1df0(&rdi[0x11], *(arg2 + 0x38))
int64_t* var_1e0 = rdi
void* var_1e8 = &rdi[0x15]

if (sub_140a80f40() == 0)
    uint32_t rax_40
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_40.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_40.b == 0))
        void var_158
        int64_t* rax_41 = sub_1417d0430(&var_158, nullptr, 0xff)
        *(*rax_41 + 0x10) = var_1e8.o
        void* rcx_47 = *rax_41
        int32_t r8_2 = rax_41[2].d
        int64_t* rdx_23 = rax_41[1]
        int64_t* rbx_1 = *(rcx_47 + 0x28)
        int64_t* var_1f8_1 = rbx_1
        int32_t* r15_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *r15_1 += 1
            rbx_1 = var_1f8_1
        
        sub_1405e48c0(rcx_47, rdx_23, r8_2, 1)
        
        if (rbx_1 != 0)
            int32_t rax_42 = *r15_1
            *r15_1 -= 1
            
            if (rax_42 == 1)
                sub_140a2f6e0(var_1f8_1)
    else
        int128_t var_168 = var_1e8.o
        sub_1417cedf0(&var_168)
else
    sub_1417cedf0(&var_1e8)

*(rdi + 0x2b8) = *(arg2 + 0x40)
rdi[0x59] = *(arg2 + 0x50)
int32_t result = *(arg2 + 0x58)
rdi[0x5a].d = result
int64_t* rbx_2 = *(arg2 + 8)

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t r14_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (r14_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(r14_1))

__security_check_cookie(rax_1 ^ &var_268)
return result
