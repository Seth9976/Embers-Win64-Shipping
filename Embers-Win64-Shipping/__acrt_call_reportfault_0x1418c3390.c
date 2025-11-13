// 函数: __acrt_call_reportfault
// 地址: 0x1418c3390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_608
int64_t rax_1 = __security_cookie ^ &var_608
int32_t rdx = *(arg1 + 0x157c)
int64_t* var_5c0
int64_t* var_5e0 = &var_5c0
int64_t* var_5b0 = nullptr
int64_t* var_5e8 = &var_5b0
int64_t rcx = *(arg1 + 0x7c0)
int32_t i_5 = 0
var_5c0 = nullptr
int32_t i_4 = 0
sub_1418bf1e0(rcx, rdx, arg1 + 0x1ad0, arg1 + 0x1ae0, var_5e8, var_5e0, arg1 + 0x1ac8)
sub_1418c64a0(arg1 + 0x1af0, arg1 + 0x1ad0)
int32_t var_248 = 0x3b9dc7a0
void var_244
memset(&var_244, 0, 0x214)

if ((*(*(arg1 + 0x1ac0) + 0xc0) & 2) != 0)
    int32_t var_598 = 0x3b9bb079
    void var_594
    memset(&var_594, 0, 0x344)
    *(arg1 + 0xb00) = 0x3b9bdf5c
    __builtin_memset(arg1 + 0xb04, 0, 0x3c)
    void* var_590_1 = arg1 + 0xb00
    
    if ((*(arg1 + 0x1af0) & 0x200) != 0)
        *(arg1 + 0xb08) = &var_248
    
    data_143efbb28(*(arg1 + 0x7c0), &var_598)

data_143efb6c0(*(arg1 + 0x7c0), arg1 + 0x7c8)
int64_t rcx_6 = *(arg1 + 0x7c0)
char var_5c8 = 0
int32_t var_5c4 = 0
data_143efb6c8(rcx_6, &var_5c4, 0)
int32_t rcx_7 = *(arg1 + 0xc28) + var_5c4
*(arg1 + 0xc28) = rcx_7

if (rcx_7 s> *(arg1 + 0xc2c))
    sub_1405a4df0(arg1 + 0xc20)

data_143efb6c8(*(arg1 + 0x7c0), &var_5c4, *(arg1 + 0xc20))
int32_t i_2 = i_4
int64_t* rsi = var_5c0
int64_t* rbx = rsi

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int32_t i_3 = i_5
int64_t* rsi_1 = var_5b0
int64_t* rbx_1 = rsi_1

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_12 = *rbx_1
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

__security_check_cookie(rax_1 ^ &var_608)
return zx.q(var_5c8)
