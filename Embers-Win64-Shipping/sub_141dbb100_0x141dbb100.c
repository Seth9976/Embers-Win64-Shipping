// 函数: sub_141dbb100
// 地址: 0x141dbb100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int512_t zmm1
zmm1.o = *(arg1 + 0x94)
(*(*arg1 + 0x390))(arg1, zmm1)
int64_t rsi = 0

if (sub_140d23dc0(arg1, 0x30) == 0 && (*(arg1 + 0x5b) & 0x80) == 0)
    char var_108 = 0
    char* var_f8_1 = &var_108
    void*** (* var_100)() = sub_141dbb950
    void* rax_4
    int64_t rdx_1
    rax_4, rdx_1 = sub_140a756e0(&var_100, &data_143a2d218)
    int64_t r8_1 = *arg1
    rdx_1.b = 1
    (*(r8_1 + 0x528))(arg1, rdx_1, r8_1)
    *(arg1 + 0x5b) |= 0x80
    *(rax_4 + 0x10) = 0

void* var_30 = nullptr
int32_t var_24 = 0x18
int32_t var_28 = 0
void* rax_5 = sub_142459c10()
void* const rbp_1

if (rax_5 == 0)
    rbp_1 = nullptr
else
    void* rax_6 = sub_142459c10()
    
    if (rax_6 == 0)
        rbp_1 = nullptr
    else
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s> *(rax_5 + 0x38))
            rbp_1 = nullptr
        else
            rbp_1 = rax_5
            
            if (*(*(rax_5 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                rbp_1 = nullptr

void var_f0
void* r8_2 = &var_f0

if (rbp_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_5, r8_2)
else
    sub_1419f6fe0(arg1, rax_5, r8_2)

void* r14 = &var_f0

if (var_30 != 0)
    r14 = var_30

int64_t rbp_2 = sx.q(var_28) << 3
uint64_t rbp_3 = rbp_2 u>> 3

if (r14 u> r14 + rbp_2)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rbx_3 = *r14
        
        if ((rbx_3[0x11].b & 1) != 0 && (*(rbx_3 + 0x8b) & 1) == 0)
            sub_141ef1330(rbx_3, 1)
            (*(*rbx_3 + 0x320))(rbx_3)
        
        r14 += 8
        rsi += 1
    while (rsi != rbp_3)

if ((*(arg1 + 0x59) & 0x40) != 0)
    void* rax_15 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_15 != 0)
        void* rax_16 = sub_141db59f0(rax_15)
        
        if (rax_16 != 0)
            sub_14200d070(rax_16, arg1)

int64_t result = sub_142452b90(arg1)
*(arg1 + 0x5c) &= 0xdf
*(arg1 + 0x5c) |= 0x40

if (var_30 != 0)
    result = sub_140a74f90(var_30)

__security_check_cookie(rax_1 ^ &var_128)
return result
