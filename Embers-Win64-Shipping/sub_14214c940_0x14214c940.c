// 函数: sub_14214c940
// 地址: 0x14214c940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rsi = 0
int32_t var_48 = 0
int32_t var_44 = 0x10
char var_f8
int64_t var_e0
int64_t var_c8[0x10]

if (*(arg1 + 0x288) != 0)
    void* rdi_1 = arg1 + 0x10
    int64_t var_d8_1 = 0
    int64_t r14_1 = sx.q(*(rdi_1 + 0x88))
    var_e0 = 0
    int32_t rax_2 = (r14_1 + 1).d
    *(rdi_1 + 0x88) = rax_2
    
    if (rax_2 s> *(rdi_1 + 0x8c))
        sub_14088f800(rdi_1, r14_1.d)
    
    int128_t* rax_3 = *(rdi_1 + 0x80)
    int128_t* rcx_1 = rdi_1
    int128_t zmm0 = var_e0.o
    var_f8 = 0
    char var_f5_1 = 8
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    rcx_1[r14_1] = zmm0
    int64_t r15_1 = sx.q(var_48)
    int16_t r14_2 = *(arg1 + 0x294)
    char var_f7_1 = *(arg1 + 0x234)
    char var_f6_1 = *(arg1 + 0x236)
    int16_t var_f4_1 = r14_2
    uint16_t var_f2_1 = zx.w(*(arg1 + 0x237)) & 1
    int32_t rax_10 = (r15_1 + 1).d
    
    if (rax_10 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_1] = var_f8.q
    int64_t r15_2 = sx.q(rax_10)
    char var_f7_2 = *(arg1 + 0x244)
    char var_f6_2 = *(arg1 + 0x246)
    char rax_14 = *(arg1 + 0x247) & 1
    var_f8 = 0
    uint16_t var_f2_2 = zx.w(rax_14)
    int32_t rax_16 = (r15_2 + 1).d
    char var_f5_2 = 9
    int16_t var_f4_2 = r14_2
    
    if (rax_16 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_2] = var_f8.q
    int64_t r15_3 = sx.q(rax_16)
    char var_f7_3 = *(arg1 + 0x254)
    char var_f6_3 = *(arg1 + 0x256)
    char rax_20 = *(arg1 + 0x257) & 1
    var_f8 = 0
    uint16_t var_f2_3 = zx.w(rax_20)
    int32_t rax_22 = (r15_3 + 1).d
    char var_f5_3 = 0xa
    int16_t var_f4_3 = r14_2
    
    if (rax_22 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_3] = var_f8.q
    int64_t r15_4 = sx.q(rax_22)
    char var_f7_4 = *(arg1 + 0x274)
    char var_f6_4 = *(arg1 + 0x276)
    char rax_26 = *(arg1 + 0x277) & 1
    var_f8 = 0
    uint16_t var_f2_4 = zx.w(rax_26)
    int32_t rax_28 = (r15_4 + 1).d
    char var_f5_4 = 0xb
    int16_t var_f4_4 = r14_2
    
    if (rax_28 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_4] = var_f8.q
    int64_t r15_5 = sx.q(rax_28)
    char var_f7_5 = *(arg1 + 0x284)
    char var_f6_5 = *(arg1 + 0x286)
    char rax_32 = *(arg1 + 0x287) & 1
    var_f8 = 0
    uint16_t var_f2_5 = zx.w(rax_32)
    int32_t rax_34 = (r15_5 + 1).d
    char var_f5_5 = 0xc
    int16_t var_f4_5 = r14_2
    
    if (rax_34 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_5] = var_f8.q
    int64_t r15_6 = sx.q(rax_34)
    char var_f7_6 = *(arg1 + 0x224)
    char var_f6_6 = *(arg1 + 0x226)
    char rax_38 = *(arg1 + 0x227) & 1
    var_f8 = 0
    uint16_t var_f2_6 = zx.w(rax_38)
    int32_t rax_40 = (r15_6 + 1).d
    char var_f5_6 = 0xe
    int16_t var_f4_6 = r14_2
    
    if (rax_40 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_6] = var_f8.q
    char var_f7_7 = *(arg1 + 0x264)
    char var_f6_7 = *(arg1 + 0x266)
    int16_t var_f4_7 = r14_2
    int64_t r14_3 = sx.q(rax_40)
    uint16_t var_f2_7 = zx.w(*(arg1 + 0x267)) & 1
    var_f8 = 0
    int32_t rax_46 = (r14_3 + 1).d
    char var_f5_7 = 0xf
    
    if (rax_46 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[r14_3] = var_f8.q
    int64_t r14_4 = sx.q(*(rdi_1 + 0x88))
    int64_t var_d8_2 = 0
    var_e0 = 0
    int32_t rax_48 = (r14_4 + 1).d
    *(rdi_1 + 0x88) = rax_48
    
    if (rax_48 s> *(rdi_1 + 0x8c))
        sub_14088f800(rdi_1, r14_4.d)
    
    void* rax_49 = *(rdi_1 + 0x80)
    var_f8.d = 0xd040001
    
    if (rax_49 != 0)
        rdi_1 = rax_49
    
    *(rdi_1 + r14_4 * 0x10) = var_e0.o
    int64_t rdi_2 = sx.q(rax_46)
    int16_t var_f4_8 = *(arg1 + 0x298)
    int16_t var_f2_8 = 1
    int32_t rax_53 = (rdi_2 + 1).d
    var_48 = rax_53
    
    if (rax_53 s> var_44)
        sub_14088f7f0(&var_c8)
    
    bool cond:4_1 = data_1439c7a08 s< 3
    var_c8[rdi_2] = var_f8.q
    
    if (not(cond:4_1))
        *(arg1 + 0x2c0) = 0
        sub_1405d16e0(arg1 + 0x2b0, data_143a2ebb0)
        sub_1405d16e0(arg1 + 0x2b8, data_143a2ebb8)

if (*(arg1 + 0x150) != 0)
    char* rax_55 = sub_1419c5110(arg1, &var_f8, arg1 + 0x150, 0)
    int64_t rdi_3 = sx.q(var_48)
    int32_t rcx_14 = (rdi_3 + 1).d
    var_48 = rcx_14
    
    if (rcx_14 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rdi_3] = *rax_55

void* rdi_4 = arg1 + 0x160
int16_t var_e8 = 0x201
void* r15_7 = rdi_4
int16_t* r14_6 = &var_e8
int64_t i_2 = 2
int64_t i

do
    if (*rdi_4 != 0)
        char* rax_57 = sub_1419c5110(arg1, &var_e0, r15_7, *r14_6)
        int64_t r13_1 = sx.q(var_48)
        var_f8.q = rax_57
        int32_t rcx_17 = (r13_1 + 1).d
        var_48 = rcx_17
        
        if (rcx_17 s> var_44)
            sub_14088f7f0(&var_c8)
            rax_57 = var_f8.q
        
        var_c8[r13_1] = *rax_57
    
    r15_7 += 0x10
    rdi_4 += 0x10
    r14_6 += 1
    i = i_2
    i_2 -= 1
while (i != 1)

if (*(arg1 + 0x200) == 0)
    *(arg1 + 0x200) = data_1439c9138
    *(arg1 + 0x210) = 0

void* r8_2 = arg1 + 0x1d8

if (*r8_2 == 0)
    int32_t var_f0_1 = 0
    var_f8.q = &data_1439c9120
    r8_2 = &var_f8
    int32_t var_ec_1 = 0x4080000

char* rax_60 = sub_1419c5110(arg1, &var_e0, r8_2, 3)
int64_t rdi_5 = sx.q(var_48)
int32_t rcx_20 = (rdi_5 + 1).d
int32_t var_48_8 = rcx_20

if (rcx_20 s> var_44)
    sub_14088f7f0(&var_c8)

int64_t result = *rax_60
var_c8[rdi_5] = result
int32_t i_1 = *(arg1 + 0x1c0)

if (i_1 != 0)
    if (i_1 s> 0)
        do
            char* rax_61 = sub_1419c5110(arg1, &var_e0, ((sx.q(rsi) + 0x18) << 4) + arg1, rsi.b + 4)
            int64_t rdi_6 = sx.q(var_48_8)
            int32_t rcx_23 = (rdi_6 + 1).d
            var_48_8 = rcx_23
            
            if (rcx_23 s> var_44)
                sub_14088f7f0(&var_c8)
            
            result = *rax_61
            rsi += 1
            var_c8[rdi_6] = result
            i_1 = *(arg1 + 0x1c0)
        while (rsi s< i_1)
    
    while (i_1 s< 4)
        char* rax_62 =
            sub_1419c5110(arg1, &var_e0, ((sx.q(*(arg1 + 0x1c0)) + 0x17) << 4) + arg1, i_1.b + 4)
        int64_t rsi_1 = sx.q(var_48_8)
        int32_t rcx_26 = (rsi_1 + 1).d
        var_48_8 = rcx_26
        
        if (rcx_26 s> var_44)
            sub_14088f7f0(&var_c8)
        
        result = *rax_62
        i_1 += 1
        var_c8[rsi_1] = result

if (*(arg1 + 0x98) s> 0)
    result = sub_1419d0260(arg1, &var_c8, 0)

__security_check_cookie(rax_1 ^ &var_118)
return result
