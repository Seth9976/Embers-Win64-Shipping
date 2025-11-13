// 函数: sub_141fd85c0
// 地址: 0x141fd85c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_48 = 0xffffffff
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x20)
int32_t rdx = 4
void* rcx = arg1[1]
int32_t rbx = 0
char rsi = 4
int32_t i = 0
int32_t var_98 = 0
int32_t var_94 = 4
int64_t var_90
__builtin_memset(&var_90, 0, 0x20)
int32_t var_44 = 0
int64_t var_40 = 0
int32_t var_110 = 0
int32_t var_10c = 0x30c00
int128_t var_108 = (rcx + 0x18).o
int32_t var_4c = *(rcx + 0xa8)
int32_t var_50 = *(rcx + 0xac)
int64_t var_68 = *(rcx + 0x78)
int64_t var_60 = *(rcx + 0x80)
int64_t var_58 = *(rcx + 0x88)
int64_t var_70 = *(rcx + 0x90)
char r12 = *(rcx + 0xb0)

if (r12 == 0)
    rsi = 8

int32_t rax_9 = *(rcx + 0xa8)
char r15_1 = rsi * rax_9.b
int128_t var_d8[0x4]

if (rax_9 - 1 s> 0)
    int32_t var_110_1 = 0
    char rax_11 = 0xd
    var_10c:1.b = r15_1
    
    if (r12 == 0)
        rax_11 = 4
    
    var_10c:3.b = 4
    var_10c:2.b = rax_11
    
    do
        var_10c.b = rsi * i.b
        
        if (rbx + 1 s> rdx)
            sub_1410348f0(&var_d8)
        
        i += 2
        var_d8[sx.q(rbx)] = (rcx + 0x48).o
        rcx = arg1[1]
        rdx = var_94
        rbx += 1
    while (i s< *(rcx + 0xa8) - 1)

if (i s< *(rcx + 0xa8))
    int32_t var_110_2 = 0
    char rax_21 = 0xc
    var_10c:1.b = r15_1
    var_10c:3.b = 4
    var_10c.b = i.b * rsi
    
    if (r12 == 0)
        rax_21 = 2
    
    var_10c:2.b = rax_21
    int32_t var_98_2 = rbx + 1
    
    if (rbx + 1 s> rdx)
        sub_1410348f0(&var_d8)
    
    var_d8[sx.q(rbx)] = (rcx + 0x48).o
    rcx = arg1[1]

int32_t var_110_3 = 0
int32_t var_10c_1 = 0x4050800
var_f8.o = (rcx + 0x30).o
int32_t var_110_4 = 0
int32_t var_10c_2 = 0x4050804
int32_t var_110_5 = 0
int64_t var_e8
var_e8.o = (rcx + 0x30).o
int32_t var_10c_3 = 0x4080400
int64_t var_80
var_80.o = (rcx + 0x60).o
int64_t result = sub_1421026a0(*arg1, &var_108)
__security_check_cookie(rax_1 ^ &var_138)
return result
