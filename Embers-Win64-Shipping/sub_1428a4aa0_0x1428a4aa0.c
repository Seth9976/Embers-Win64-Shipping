// 函数: sub_1428a4aa0
// 地址: 0x1428a4aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x170)
void var_188
int64_t rax_2 = __security_cookie ^ &var_188
uint32_t rbp_2 = arg1 u>> 0x18
int32_t r14_1 = 0
int32_t rcx = 0

if (sub_1428a5c60(&data_143feb13c, sub_1428a5870) != 0)
    rcx = data_143fec930

void* r12_1
void var_108

if (rcx == 0)
    sub_1428b7080(&var_108, 0x40, "lib(%lu)", zx.q(rbp_2))
    r12_1 = &var_108
else
    CRITICAL_SECTION* rcx_1 = data_143feb140
    int32_t var_130 = arg1 & 0xff000000
    sub_1428a5c40(rcx_1)
    int64_t* rax_6 = sub_1428a8d10(data_143feb148, &var_130)
    sub_1428a5d00(data_143feb140)
    
    if (rax_6 == 0)
        sub_1428b7080(&var_108, 0x40, "lib(%lu)", zx.q(rbp_2))
        r12_1 = &var_108
    else
        r12_1 = rax_6[1]
        
        if (r12_1 == 0)
            sub_1428b7080(&var_108, 0x40, "lib(%lu)", zx.q(rbp_2))
            r12_1 = &var_108
int32_t rcx_5 = 0

if (sub_1428a5c60(&data_143feb13c, sub_1428a5870) != 0)
    rcx_5 = data_143fec930

void* rsi_2

if (rcx_5 != 0)
    CRITICAL_SECTION* rcx_6 = data_143feb140
    int32_t var_120 = arg1 & 0xfffff000
    sub_1428a5c40(rcx_6)
    int64_t* rax_10 = sub_1428a8d10(data_143feb148, &var_120)
    sub_1428a5d00(data_143feb140)
    
    if (rax_10 != 0)
        rsi_2 = rax_10[1]
    else
        rsi_2 = nullptr
else
    rsi_2 = nullptr

int32_t rbp_5 = arg1 u>> 0xc & 0xfff

if (rsi_2 == 0)
    void var_c8
    sub_1428b7080(&var_c8, zx.q((rsi_2 + 0x40).d), "func(%lu)", zx.q(rbp_5))
    rsi_2 = &var_c8

int32_t r15_2 = arg1 & 0xfff

if (sub_1428a5c60(&data_143feb13c, sub_1428a5870) != 0)
    r14_1 = data_143fec930

void* rax_17
void var_88

if (r14_1 == 0)
    sub_1428b7080(&var_88, 0x40, "reason(%lu)", zx.q(r15_2))
    rax_17 = &var_88
else
    CRITICAL_SECTION* rcx_10 = data_143feb140
    int32_t var_140 = (arg1 & 0xff000000) | r15_2
    sub_1428a5c40(rcx_10)
    int64_t* r14_2 = sub_1428a8d10(data_143feb148, &var_140)
    sub_1428a5d00(data_143feb140)
    
    if (r14_2 != 0)
    label_1428a4cd4:
        rax_17 = r14_2[1]
        
        if (rax_17 == 0)
            sub_1428b7080(&var_88, 0x40, "reason(%lu)", zx.q(r15_2))
            rax_17 = &var_88
    else
        CRITICAL_SECTION* rcx_13 = data_143feb140
        var_140 = r15_2
        sub_1428a5c40(rcx_13)
        r14_2 = sub_1428a8d10(data_143feb148, &var_140)
        sub_1428a5d00(data_143feb140)
        
        if (r14_2 != 0)
            goto label_1428a4cd4
        
        sub_1428b7080(&var_88, 0x40, "reason(%lu)", zx.q(r15_2))
        rax_17 = &var_88
void* var_158_1 = rax_17
void* var_160_1 = rsi_2
void* var_168_1 = r12_1
sub_1428b7080(arg2, arg3, "error:%08lX:%s:%s:%s", zx.q(arg1))
int64_t r8 = -1

do
    r8 += 1
while (arg2[r8] != 0)

if (r8 == arg3 - 1)
    var_158_1.d = r15_2
    var_160_1.d = rbp_5
    var_168_1.d = rbp_2
    sub_1428b7080(arg2, arg3, "err:%lx:%lx:%lx:%lx", zx.q(arg1))

__security_check_cookie(rax_2 ^ &var_188)
