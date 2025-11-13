// 函数: sub_1420fe4c0
// 地址: 0x1420fe4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char rax_2 = sub_1411a4ac0(data_143f0f1a0, data_1439c7a08)
int64_t rcx_1 = arg1[0x26]
void* rdi = &arg1[0x28]
char r14 = rax_2

if (rcx_1 != *rdi)
    int64_t* var_128 = arg1
    char var_120_1 = rax_2
    sub_1420f5880(&var_128, 1, 0)
    sub_1420f5880(&var_128, 2, 1)
    rcx_1 = arg1[0x26]

int32_t var_44 = 0x10
int32_t var_48 = 0
void var_c8

if (rcx_1 != 0)
    char var_118
    char* rax_3 = sub_1419c5110(arg1, &var_118, &arg1[0x26], 0)
    int64_t rsi_1 = sx.q(var_48)
    int32_t rcx_5 = (rsi_1 + 1).d
    var_48 = rcx_5
    
    if (rcx_5 s> var_44)
        sub_14088f7f0(&var_c8)
    
    r14 = rax_2
    *(&var_c8 + (rsi_1 << 3)) = *rax_3

*(arg1 + 0xa2) = 0xff

if (((*((*(*arg1 + 0x40))(arg1) + 0x28) u>> 6).b & 1) != 0 && r14 != 0)
    int32_t var_198_1 = 0
    void** var_1a0 = &data_1439c9480
    int32_t var_194_1 = 0x1140400
    char var_110
    char* rax_7 = sub_1419c5110(arg1, &var_110, &var_1a0, 0xd)
    int64_t rsi_2 = sx.q(var_48)
    int32_t rcx_11 = (rsi_2 + 1).d
    var_48 = rcx_11
    
    if (rcx_11 s> var_44)
        sub_14088f7f0(&var_c8)
    
    *(&var_c8 + (rsi_2 << 3)) = *rax_7
    *(arg1 + 0xa2) = *(&var_c8 + (sx.q(var_48 - 1) << 3))

int16_t var_1a4 = 0x201
int16_t* rsi_3 = &var_1a4
void* r14_3 = rdi
int64_t i_2 = 2
int64_t i

do
    if (*rdi != 0)
        char var_108
        char* rax_12 = sub_1419c5110(arg1, &var_108, r14_3, *rsi_3)
        int64_t r15_1 = sx.q(var_48)
        int32_t rcx_15 = (r15_1 + 1).d
        var_48 = rcx_15
        
        if (rcx_15 s> var_44)
            sub_14088f7f0(&var_c8)
        
        *(&var_c8 + (r15_1 << 3)) = *rax_12
    
    r14_3 += 0x10
    rdi += 0x10
    rsi_3 += 1
    i = i_2
    i_2 -= 1
while (i != 1)

if (arg1[0x3c] == 0)
    arg1[0x3c] = data_1439c9138
    arg1[0x3e].d = 0

void* r8_5 = &arg1[0x37]
arg1[0x41].d = 0xffffffff
char* rdx_8
void var_100

if (*r8_5 == 0)
    int32_t var_188_1 = 0
    void** var_190 = &data_1439c9120
    r8_5 = &var_190
    int32_t var_184_1 = 0x4080000
    void var_f8
    rdx_8 = &var_f8
else
    rdx_8 = &var_100
char* rax_15 = sub_1419c5110(arg1, rdx_8, r8_5, 3)
int64_t rdi_1 = sx.q(var_48)
int32_t rcx_18 = (rdi_1 + 1).d
int32_t var_48_1 = rcx_18

if (rcx_18 s> var_44)
    sub_14088f7f0(&var_c8)

*(&var_c8 + (rdi_1 << 3)) = *rax_15
arg1[0x41].d = zx.d(*(&var_c8 + (sx.q(var_48_1 - 1) << 3)))
int32_t i_1 = arg1[0x34].d

if (i_1 != 0)
    int32_t rsi_5 = 0
    
    if (i_1 s> 0)
        do
            char var_f0
            char* rax_21 =
                sub_1419c5110(arg1, &var_f0, &arg1[(sx.q(rsi_5) + 0x16) * 2], rsi_5.b + 4)
            int64_t rdi_2 = sx.q(var_48_1)
            int32_t rcx_22 = (rdi_2 + 1).d
            var_48_1 = rcx_22
            
            if (rcx_22 s> var_44)
                sub_14088f7f0(&var_c8)
            
            rsi_5 += 1
            *(&var_c8 + (rdi_2 << 3)) = *rax_21
            i_1 = arg1[0x34].d
        while (rsi_5 s< i_1)
    
    while (i_1 s< 4)
        char var_e8
        char* rax_23 =
            sub_1419c5110(arg1, &var_e8, &arg1[(sx.q(arg1[0x34].d) + 0x15) * 2], i_1.b + 4)
        int64_t rsi_6 = sx.q(var_48_1)
        int32_t rcx_25 = (rsi_6 + 1).d
        var_48_1 = rcx_25
        
        if (rcx_25 s> var_44)
            sub_14088f7f0(&var_c8)
        
        i_1 += 1
        *(&var_c8 + (rsi_6 << 3)) = *rax_23

int64_t* r8_14 = &arg1[0x35]
char* rdx_14

if (*r8_14 != 0)
    void var_e0
    rdx_14 = &var_e0
label_1420fe87c:
    char* rax_25 = sub_1419c5110(arg1, rdx_14, r8_14, 0xf)
    int64_t rdi_3 = sx.q(var_48_1)
    int32_t rcx_28 = (rdi_3 + 1).d
    int32_t var_48_2 = rcx_28
    
    if (rcx_28 s> var_44)
        sub_14088f7f0(&var_c8)
    
    *(&var_c8 + (rdi_3 << 3)) = *rax_25
else if (arg1[0x34].d != 0)
    r8_14 = &arg1[0x2c]
    void var_d8
    rdx_14 = &var_d8
    goto label_1420fe87c
sub_1419d0260(arg1, &var_c8, 0)
char result = sub_1419d5c70(data_143f0f1a0)

if (result != 0 || rax_2 != result)
    int32_t r8_15 = 0
    int64_t rdx_17 = data_1439c9138
    int32_t var_154_1 = *(arg1 + 0x1f4)
    int64_t var_148_1 = 0
    int64_t var_130_2
    
    if (result == 0)
        int64_t var_140_2 = rdx_17
        int64_t var_138_2 = rdx_17
        int64_t var_150_2 = rdx_17
        var_130_2 = rdx_17
    else
        int64_t rcx_33 = rdx_17
        r8_15 = arg1[0x3e].d
        int64_t var_148_2 = arg1[0x39]
        int64_t rax_28 = arg1[0x3f]
        
        if (rax_28 != 0)
            rcx_33 = rax_28
        
        int64_t var_138_1 = arg1[0x3a]
        int64_t var_150_1 = arg1[0x3b]
        int64_t rax_31 = arg1[0x3c]
        int64_t var_140_1 = rcx_33
        int64_t var_130_1 = rax_31
        
        if (rax_31 == 0)
            var_130_2 = rdx_17
    int32_t rax_32 = *(arg1 + 0x1ec)
    int32_t var_160_1 = arg1[0x3d].d
    int64_t* rcx_35 = data_143f0f180
    int32_t var_168 = r8_15
    int32_t var_164_1 = rax_32
    int64_t var_15c_1 = 0
    void* var_180
    (*(*rcx_35 + 0xf8))(rcx_35, &var_180, &var_168, &data_143f48570, 2, 1, rax_2)
    void* rax_34 = var_180
    void* var_178 = rax_34
    
    if (rax_34 != 0)
        *(rax_34 + 8) += 1
    
    sub_1405d1550(&var_180)
    sub_1405d1600(&arg1[0x40], &var_178)
    result = sub_1405d1550(&var_178)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
