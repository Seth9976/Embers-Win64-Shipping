// 函数: sub_140b163a0
// 地址: 0x140b163a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rdi = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0x10
void* var_d8 = nullptr
int32_t var_d0 = 0
int32_t var_cc = 0x10
EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) += 1
int64_t rsi = sx.q(*(arg1 + 0x2b8))
void var_c8

if (rsi.d != 0)
    int32_t r9_1 = var_40
    int32_t rdx_1 = r9_1 + rsi.d
    
    if (rdx_1 s> var_3c)
        sub_140b26b00(&var_c8, rdx_1)
        r9_1 = var_40
    
    void* rcx_2 = &var_c8
    
    if (var_48 != 0)
        rcx_2 = var_48
    
    memcpy(rcx_2 + (sx.q(r9_1) << 3), *(arg1 + 0x2b0), (rsi << 3).d)
    var_40 += rsi.d

int64_t rsi_1 = sx.q(*(arg1 + 0x2c8))
void var_158

if (rsi_1.d != 0)
    int32_t r9_2 = var_d0
    int32_t rdx_3 = r9_2 + rsi_1.d
    
    if (rdx_3 s> var_cc)
        sub_140b26b00(&var_158, rdx_3)
        r9_2 = var_d0
    
    void* rcx_5 = &var_158
    
    if (var_d8 != 0)
        rcx_5 = var_d8
    
    memcpy(rcx_5 + (sx.q(r9_2) << 3), *(arg1 + 0x2c0), (rsi_1 << 3).d)
    var_d0 += rsi_1.d

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

if (GetCurrentThreadId() == *(arg1 + 0x2d0))
    sub_140b1c650(arg1, 1)
    void* rsi_2 = &var_c8
    int64_t r14_1 = 0
    
    if (var_48 != 0)
        rsi_2 = var_48
    
    int64_t r12_1 = sx.q(var_40) << 3
    uint64_t r12_2 = r12_1 u>> 3
    
    if (rsi_2 u> rsi_2 + r12_1)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* rcx_9 = *rsi_2
            (*(*rcx_9 + 0x18))(rcx_9)
            r14_1 += 1
            rsi_2 += 8
        while (r14_1 != r12_2)

void* rsi_3 = &var_158

if (var_d8 != 0)
    rsi_3 = var_d8

int64_t r14_2 = sx.q(var_d0) << 3
uint64_t r14_3 = r14_2 u>> 3

if (rsi_3 u> rsi_3 + r14_2)
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rcx_10 = *rsi_3
        (*(*rcx_10 + 0x18))(rcx_10)
        rdi += 1
        rsi_3 += 8
    while (rdi != r14_3)

int64_t result = EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) -= 1

if (arg1 != -0x330)
    result = LeaveCriticalSection(arg1 + 0x330)

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_178)
return result
