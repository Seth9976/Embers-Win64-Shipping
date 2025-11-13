// 函数: sub_142098100
// 地址: 0x142098100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_48 = 0
int32_t var_44 = 0x10
int64_t var_c8[0x10]

if (*(arg1 + 0x288) != 0)
    char var_16c
    char* rax_2 = sub_1419c5110(arg1, &var_16c, arg1 + 0x288, 0)
    int64_t rbx_1 = sx.q(var_48)
    int32_t rcx = (rbx_1 + 1).d
    var_48 = rcx
    
    if (rcx s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_1] = *rax_2

int64_t* rbx_2 = arg1 + 0x298
int16_t var_198 = 0x201
int64_t* r15 = rbx_2
int16_t* r14 = &var_198
int64_t i_2 = 2
int64_t i

do
    if (*rbx_2 != 0)
        char var_164
        char* rax_4 = sub_1419c5110(arg1, &var_164, r15, *r14)
        int64_t rsi_2 = sx.q(var_48)
        int32_t rcx_3 = (rsi_2 + 1).d
        var_48 = rcx_3
        
        if (rcx_3 s> var_44)
            sub_14088f7f0(&var_c8)
        
        var_c8[rsi_2] = *rax_4
    
    r15 = &r15[2]
    rbx_2 = &rbx_2[2]
    r14 += 1
    i = i_2
    i_2 -= 1
while (i != 1)
void* r15_1 = nullptr

if (*(arg1 + 0x338) == 0)
    *(arg1 + 0x338) = data_1439c9138
    *(arg1 + 0x348) = 0

void* r8_2 = arg1 + 0x310
char* rdx_5
void var_15c

if (*r8_2 == 0)
    int32_t var_180_1 = 0
    void** var_188 = &data_1439c9120
    r8_2 = &var_188
    int32_t var_17c_1 = 0x4080000
    void var_154
    rdx_5 = &var_154
else
    rdx_5 = &var_15c
char* rax_7 = sub_1419c5110(arg1, rdx_5, r8_2, 3)
int64_t rbx_3 = sx.q(var_48)
int32_t rcx_6 = (rbx_3 + 1).d
int32_t var_48_1 = rcx_6

if (rcx_6 s> var_44)
    sub_14088f7f0(&var_c8)

var_c8[rbx_3] = *rax_7
int32_t i_1 = *(arg1 + 0x2f8)

if (i_1 != 0)
    int32_t rsi_4 = 0
    
    if (i_1 s> 0)
        do
            char var_14c
            char* rax_11 =
                sub_1419c5110(arg1, &var_14c, arg1 + 0x2b8 + (sx.q(rsi_4) << 4), rsi_4.b + 4)
            int64_t rbx_4 = sx.q(var_48_1)
            int32_t rcx_9 = (rbx_4 + 1).d
            var_48_1 = rcx_9
            
            if (rcx_9 s> var_44)
                sub_14088f7f0(&var_c8)
            
            rsi_4 += 1
            var_c8[rbx_4] = *rax_11
            i_1 = *(arg1 + 0x2f8)
        while (rsi_4 s< i_1)
    
    while (i_1 s< 4)
        char var_144
        char* rax_15 =
            sub_1419c5110(arg1, &var_144, arg1 + 0x2a8 + (sx.q(*(arg1 + 0x2f8)) << 4), i_1.b + 4)
        int64_t rsi_5 = sx.q(var_48_1)
        int32_t rcx_12 = (rsi_5 + 1).d
        var_48_1 = rcx_12
        
        if (rcx_12 s> var_44)
            sub_14088f7f0(&var_c8)
        
        i_1 += 1
        var_c8[rsi_5] = *rax_15

void* r8_7 = arg1 + 0x300
char* rdx_11

if (*r8_7 != 0)
    void var_13c
    rdx_11 = &var_13c
label_1420983c0:
    char* rax_17 = sub_1419c5110(arg1, rdx_11, r8_7, 0xf)
    int64_t rbx_5 = sx.q(var_48_1)
    int32_t rcx_15 = (rbx_5 + 1).d
    var_48_1 = rcx_15
    
    if (rcx_15 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_5] = *rax_17
else if (*(arg1 + 0x2f8) != 0)
    r8_7 = arg1 + 0x2b8
    void var_134
    rdx_11 = &var_134
    goto label_1420983c0

if (*(arg1 + 0x210) != 0)
    char var_12c
    char* rax_19 = sub_1419c5110(arg1, &var_12c, arg1 + 0x210, 8)
    int64_t rbx_6 = sx.q(var_48_1)
    int32_t rcx_18 = (rbx_6 + 1).d
    var_48_1 = rcx_18
    
    if (rcx_18 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_6] = *rax_19

if (*(arg1 + 0x220) != 0)
    char var_124
    char* rax_21 = sub_1419c5110(arg1, &var_124, arg1 + 0x220, 9)
    int64_t rbx_7 = sx.q(var_48_1)
    int32_t rcx_21 = (rbx_7 + 1).d
    
    if (rcx_21 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_7] = *rax_21
    char var_11c
    char* rax_23 = sub_1419c5110(arg1, &var_11c, arg1 + 0x230, 0xa)
    int64_t rbx_8 = sx.q(rcx_21)
    int32_t rcx_24 = (rbx_8 + 1).d
    
    if (rcx_24 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_8] = *rax_23
    char var_114
    char* rax_25 = sub_1419c5110(arg1, &var_114, arg1 + 0x240, 0xb)
    int64_t rbx_9 = sx.q(rcx_24)
    int32_t rcx_27 = (rbx_9 + 1).d
    var_48_1 = rcx_27
    
    if (rcx_27 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_9] = *rax_25

if (*(arg1 + 0x250) != 0)
    char var_10c[0x14]
    char* rax_27 = sub_1419c5110(arg1, &var_10c, arg1 + 0x250, 0xc)
    int64_t rbx_10 = sx.q(var_48_1)
    int32_t rcx_30 = (rbx_10 + 1).d
    int32_t var_48_4 = rcx_30
    
    if (rcx_30 s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_10] = *rax_27

sub_1419d0260(arg1, &var_c8, 0)
int64_t* rcx_33 = data_143f0f180
int64_t var_f8 = *(arg1 + 0x260)
int64_t var_f0 = *(arg1 + 0x268)
int64_t var_e8 = *(arg1 + 0x270)
int64_t var_e0 = *(arg1 + 0x278)
int32_t var_d8 = *(arg1 + 0x280)
void* var_178
(*(*rcx_33 + 0xf8))(rcx_33, &var_178, &var_f8, &data_143f47620, 2, 0)
void* const rbx_11 = var_178
void* const var_190 = rbx_11

if (rbx_11 != 0)
    *(rbx_11 + 8) += 1
    rbx_11 = var_190

sub_1405d1550(&var_178)

if (arg1 + 0x358 != &var_190)
    int64_t* rdi_1 = *(arg1 + 0x358)
    *(arg1 + 0x358) = rbx_11
    var_190 = nullptr
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_37
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_37 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_37 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_39 = sub_140a20af0()
                    
                    if (rax_39 != 0)
                        r15_1 = *(&data_143cf0bf8 + (zx.q(rax_39) u>> 0xe << 3))
                            + (zx.q(rax_39) & 0x3fff) * 0x18
                    
                    *(r15_1 + 8) = rdi_1
                    sub_1405a42f0(&data_143f02390, rax_39)

int64_t result = sub_1405d1550(&var_190)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
