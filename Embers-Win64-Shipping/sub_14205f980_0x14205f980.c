// 函数: sub_14205f980
// 地址: 0x14205f980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rax_2 = *(arg1 + 0x150)
void* rdi = arg1 + 0x160
int32_t rsi = 0
char* var_168

if (rax_2 != *rdi)
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0x10
    char* rax_3 = sub_1419c5250(arg1, &var_168, arg1 + 0x150, 0, 1)
    int64_t r15_1 = sx.q(var_48_1)
    int32_t rcx = (r15_1 + 1).d
    int32_t var_48_2 = rcx
    int64_t var_c8[0x4]
    
    if (rcx s> var_44_1)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_1] = *rax_3
    sub_1419d0260(arg1, &var_c8, 1)
    int32_t var_48_3 = 0
    int32_t var_44_2 = 0x10
    char* rax_5 = sub_1419c5250(arg1, &var_168, arg1 + 0x150, 0, 2)
    int64_t r15_2 = sx.q(var_48_3)
    int32_t rcx_4 = (r15_2 + 1).d
    
    if (rcx_4 s> var_44_2)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_2] = *rax_5
    char* rax_7 = sub_1419c5250(arg1, &var_168, arg1 + 0x170, 1, 2)
    int64_t r15_3 = sx.q(rcx_4)
    int32_t rcx_7 = (r15_3 + 1).d
    int32_t var_48_5 = rcx_7
    
    if (rcx_7 s> var_44_2)
        sub_14088f7f0(&var_c8)
    
    var_c8[r15_3] = *rax_7
    sub_1419d0260(arg1, &var_c8, 2)
    rax_2 = *(arg1 + 0x150)

int32_t var_d8 = 0
int32_t var_d4 = 0x10
void var_158

if (rax_2 != 0)
    char* rax_9 = sub_1419c5110(arg1, &var_168, arg1 + 0x150, 0)
    int64_t r14_1 = sx.q(var_d8)
    int32_t rcx_11 = (r14_1 + 1).d
    var_d8 = rcx_11
    
    if (rcx_11 s> var_d4)
        sub_14088f7f0(&var_158)
    
    *(&var_158 + (r14_1 << 3)) = *rax_9
    *(arg1 + 0x148) = zx.d(*(&var_158 + (sx.q(var_d8 - 1) << 3)))

int16_t var_178 = 0x201
int16_t* r15_5 = &var_178
void* r12_4 = rdi
int64_t i_2 = 2
char var_174
int64_t i

do
    if (*rdi != 0)
        char* rax_14 = sub_1419c5110(arg1, &var_174, r12_4, *r15_5)
        int64_t r14_2 = sx.q(var_d8)
        var_168 = rax_14
        int32_t rcx_15 = (r14_2 + 1).d
        var_d8 = rcx_15
        
        if (rcx_15 s> var_d4)
            sub_14088f7f0(&var_158)
            rax_14 = var_168
        
        *(&var_158 + (r14_2 << 3)) = *rax_14
    
    r12_4 += 0x10
    rdi += 0x10
    r15_5 += 1
    i = i_2
    i_2 -= 1
while (i != 1)
char** r8_8 = arg1 + 0x1c8

if (*r8_8 == 0)
    int32_t var_160_1 = 0
    var_168 = &data_1439c9120
    r8_8 = &var_168
    int32_t var_15c_1 = 0x80000

char* rax_16 = sub_1419c5110(arg1, &var_174, r8_8, 3)
int64_t rdi_1 = sx.q(var_d8)
int32_t rcx_18 = (rdi_1 + 1).d
int32_t var_d8_1 = rcx_18

if (rcx_18 s> var_d4)
    sub_14088f7f0(&var_158)

void* r8_9 = arg1 + 0x1d8
*(&var_158 + (rdi_1 << 3)) = *rax_16

if (*r8_9 != 0)
label_14205fc21:
    char* rax_18 = sub_1419c5110(arg1, &var_174, r8_9, 4)
    int64_t rdi_2 = sx.q(var_d8_1)
    int32_t rcx_21 = (rdi_2 + 1).d
    var_d8_1 = rcx_21
    
    if (rcx_21 s> var_d4)
        sub_14088f7f0(&var_158)
    
    *(&var_158 + (rdi_2 << 3)) = *rax_18
else
    r8_9 = arg1 + 0x150
    
    if (*r8_9 != 0)
        goto label_14205fc21

int32_t i_1 = *(arg1 + 0x1c0)
*(arg1 + 0x14c) = zx.d(*(&var_158 + (sx.q(var_d8_1 - 1) << 3)))

if (i_1 != 0)
    if (i_1 s> 0)
        do
            char* rax_23 =
                sub_1419c5110(arg1, &var_174, ((sx.q(rsi) + 0x18) << 4) + arg1, rsi.b + 5)
            int64_t rdi_3 = sx.q(var_d8_1)
            int32_t rcx_25 = (rdi_3 + 1).d
            var_d8_1 = rcx_25
            
            if (rcx_25 s> var_d4)
                sub_14088f7f0(&var_158)
            
            rsi += 1
            *(&var_158 + (rdi_3 << 3)) = *rax_23
            i_1 = *(arg1 + 0x1c0)
        while (rsi s< i_1)
    
    while (i_1 s< 4)
        char* rax_25 =
            sub_1419c5110(arg1, &var_174, ((sx.q(*(arg1 + 0x1c0)) + 0x17) << 4) + arg1, i_1.b + 5)
        int64_t rsi_1 = sx.q(var_d8_1)
        int32_t rcx_28 = (rsi_1 + 1).d
        var_d8_1 = rcx_28
        
        if (rcx_28 s> var_d4)
            sub_14088f7f0(&var_158)
        
        i_1 += 1
        *(&var_158 + (rsi_1 << 3)) = *rax_25

int64_t result = sub_1419d0260(arg1, &var_158, 0)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
