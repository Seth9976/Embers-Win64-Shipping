// 函数: sub_14088e6d0
// 地址: 0x14088e6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rsi = 0
int32_t var_48 = 0
int32_t var_44 = 0x10
char* var_e0
int64_t var_c8[0xd]

if (*(arg1 + 0x158) != 0)
    char* rax_2 = sub_1419c5110(arg1, &var_e0, arg1 + 0x158, 0)
    int64_t rbx_1 = sx.q(var_48)
    int32_t rcx = (rbx_1 + 1).d
    var_48 = rcx
    
    if (rcx s> var_44)
        sub_14088f7f0(&var_c8)
    
    var_c8[rbx_1] = *rax_2

int64_t* rbx_2 = arg1 + 0x168
int16_t var_e8 = 0x201
int64_t* r15 = rbx_2
int16_t* r14_2 = &var_e8
int64_t i_2 = 2
char var_d0
int64_t i

do
    if (*rbx_2 != 0)
        char* rax_4 = sub_1419c5110(arg1, &var_d0, r15, *r14_2)
        int64_t r13_1 = sx.q(var_48)
        var_e0 = rax_4
        int32_t rcx_3 = (r13_1 + 1).d
        var_48 = rcx_3
        
        if (rcx_3 s> var_44)
            sub_14088f7f0(&var_c8)
            rax_4 = var_e0
        
        var_c8[r13_1] = *rax_4
    
    r15 = &r15[2]
    rbx_2 = &rbx_2[2]
    r14_2 += 1
    i = i_2
    i_2 -= 1
while (i != 1)

if (*(arg1 + 0x208) == 0)
    *(arg1 + 0x208) = data_1439c9138
    *(arg1 + 0x218) = 0

char** r8_2 = arg1 + 0x1e0

if (*r8_2 == 0)
    int32_t var_d8_1 = 0
    var_e0 = &data_1439c9120
    r8_2 = &var_e0
    int32_t var_d4_1 = 0x4080000

char* rax_7 = sub_1419c5110(arg1, &var_d0, r8_2, 3)
int64_t rbx_3 = sx.q(var_48)
int32_t rcx_6 = (rbx_3 + 1).d
int32_t var_48_1 = rcx_6

if (rcx_6 s> var_44)
    sub_14088f7f0(&var_c8)

var_c8[rbx_3] = *rax_7
int32_t i_1 = *(arg1 + 0x1c8)

if (i_1 != 0)
    if (i_1 s> 0)
        do
            char* rax_11 = sub_1419c5110(arg1, &var_d0, arg1 + 0x188 + (sx.q(rsi) << 4), rsi.b + 4)
            int64_t rbx_4 = sx.q(var_48_1)
            int32_t rcx_9 = (rbx_4 + 1).d
            var_48_1 = rcx_9
            
            if (rcx_9 s> var_44)
                sub_14088f7f0(&var_c8)
            
            rsi += 1
            var_c8[rbx_4] = *rax_11
            i_1 = *(arg1 + 0x1c8)
        while (rsi s< i_1)
    
    while (i_1 s< 4)
        char* rax_15 =
            sub_1419c5110(arg1, &var_d0, arg1 + 0x178 + (sx.q(*(arg1 + 0x1c8)) << 4), i_1.b + 4)
        int64_t rsi_1 = sx.q(var_48_1)
        int32_t rcx_12 = (rsi_1 + 1).d
        var_48_1 = rcx_12
        
        if (rcx_12 s> var_44)
            sub_14088f7f0(&var_c8)
        
        i_1 += 1
        var_c8[rsi_1] = *rax_15

int64_t result = sub_1419d0260(arg1, &var_c8, 0)
__security_check_cookie(rax_1 ^ &var_108)
return result
