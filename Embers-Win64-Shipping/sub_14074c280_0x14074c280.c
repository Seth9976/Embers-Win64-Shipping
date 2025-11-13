// 函数: sub_14074c280
// 地址: 0x14074c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t r14 = 0
void* rdi = arg3

if (arg3 == 0)
    rdi = nullptr
else
    void* rax_2 = sub_14086a680()
    void* rdx = *(rdi + 0x10)
    arg3 = rax_2 + 0x30
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != arg3)
        rdi = nullptr

int32_t* rax_6 = (*(*(rdi + 0x418) + 0x30))(rdi + 0x418, arg1 + 8, arg3)
int64_t rax_7

if (rax_6 != 0)
    rax_7 = sx.q(*rax_6)

int64_t r15_1

if (rax_6 == 0 || rax_7.d == 0xffffffff)
    r15_1 = 0
else
    r15_1 = rax_7 + *(rdi + 0x438)

int64_t r12
r12.b = 0
void* rdi_1
rdi_1.b = 0
int64_t var_b8
int32_t count

if (r15_1 == 0)
    int32_t count_1
    count = count_1
    r14 = var_b8
else
    int16_t count_3 = *(arg1 + 0x1a)
    var_b8 = 0
    int32_t var_ac_1 = 0
    
    if (count_3 == 0xffff)
        if (*(arg1 + 0x10) == 0 || *(arg1 + 0x18) == 1)
            *(arg1 + 0x1a) = 0
            count_3 = 0
        else
            void* rax_8 = sub_140761a70(arg1 + 0x10)
            int16_t rcx_3 = *(rax_8 + 0x5c)
            count_3 = (*(rax_8 + 0x58) - 1 + rcx_3) & not.w(rcx_3 - 1)
            *(arg1 + 0x1a) = count_3
    
    count = sx.d(count_3)
    
    if (count s> 0)
        sub_1405daba0(&var_b8)
        count_3 = *(arg1 + 0x1a)
        r14 = var_b8
    
    if (count_3 == 0xffff)
        if (*(arg1 + 0x10) == 0 || *(arg1 + 0x18) == 1)
            *(arg1 + 0x1a) = 0
            count_3 = 0
        else
            void* rax_9 = sub_140761a70(arg1 + 0x10)
            int16_t rcx_6 = *(rax_9 + 0x5c)
            int16_t count_4 = (*(rax_9 + 0x58) - 1 + rcx_6) & not.w(rcx_6 - 1)
            *(arg1 + 0x1a) = count_4
            count_3 = count_4
    
    memcpy(r14, r15_1, sx.d(count_3))
    r12.b = 1
    rdi_1 = 1

int64_t* rax_10 = sub_140745220(&var_b8, arg1 + 8)
void** const var_90 = &data_142d9ad90
void var_88
sub_140745220(&var_88, rax_10)
char var_50 = 0
int64_t var_60
int32_t count_2
int32_t var_54

if (rdi_1.b != 0)
    count_2 = count
    var_60 = 0
    
    if (count != 0)
        sub_1405da9e0(&var_60, count, 0)
        memcpy(var_60, r14, count)
    else
        var_54 = 0
    
    var_50 = 1

int64_t rcx_12 = rax_10[3]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg2[4].b &= 0xfc
void*** rax_11 = sub_140a82f30(0x48, 8)
arg2[4].b |= 1
void*** rdi_3 = arg2
bool cond:0 = (arg2[4].b & 2) != 0
*arg2 = rax_11

if (not(cond:0))
    rdi_3 = rax_11

*rdi_3 = &data_142d9ad90
sub_140745220(&rdi_3[1], &var_88)
rdi_3[8].b = 0

if (var_50 != 0)
    rdi_3[6] = var_60
    rdi_3[7].d = count_2
    *(rdi_3 + 0x3c) = var_54
    rdi_3[8].b = 1

int64_t var_70

if (var_70 != 0)
    sub_140a74f90(var_70)

if (r12.b != 0 && r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
