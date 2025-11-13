// 函数: sub_140b28680
// 地址: 0x140b28680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
EnterCriticalSection(arg1 + 0x2e0)
int64_t r14 = 0
int32_t var_c4 = 0x10
void* var_d0 = nullptr
int32_t var_c8 = 0
void* var_40 = nullptr
int32_t var_38 = 0
int32_t var_34 = 0x10
EnterCriticalSection(arg1 + 0x330)
EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) += 1
int64_t rsi = sx.q(*(arg1 + 0x2b8))
void var_150

if (rsi.d != 0)
    int32_t r9_1 = var_c8
    int32_t rdx_1 = r9_1 + rsi.d
    
    if (rdx_1 s> var_c4)
        sub_140b26b00(&var_150, rdx_1)
        r9_1 = var_c8
    
    void* rcx_4 = &var_150
    
    if (var_d0 != 0)
        rcx_4 = var_d0
    
    memcpy(rcx_4 + (sx.q(r9_1) << 3), *(arg1 + 0x2b0), (rsi << 3).d)
    var_c8 += rsi.d

int64_t r13 = sx.q(*(arg1 + 0x2c8))
void var_c0

if (r13.d != 0)
    int32_t r9_2 = var_38
    int32_t rdx_3 = r9_2 + r13.d
    
    if (rdx_3 s> var_34)
        sub_140b26b00(&var_c0, rdx_3)
        r9_2 = var_38
    
    void* rcx_7 = &var_c0
    
    if (var_40 != 0)
        rcx_7 = var_40
    
    memcpy(rcx_7 + (sx.q(r9_2) << 3), *(arg1 + 0x2c0), (r13 << 3).d)
    var_38 += r13.d

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

*(arg1 + 0x2b8) = 0

if (*(arg1 + 0x2bc) != 0)
    sub_1405c5570(arg1 + 0x2b0, 0)

*(arg1 + 0x2c8) = 0

if (*(arg1 + 0x2cc) != 0)
    sub_1405c5570(arg1 + 0x2c0, 0)

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

sub_140b1c1f0(arg1, &var_150, 0)
void* r15_1 = &var_150
int64_t r12 = 0

if (var_d0 != 0)
    r15_1 = var_d0

int64_t r13_1 = sx.q(var_c8) << 3
uint64_t r13_2 = r13_1 u>> 3

if (r15_1 u> r15_1 + r13_1)
    r13_2 = 0

if (r13_2 != 0)
    do
        int64_t* rsi_1 = *r15_1
        
        if ((*(*rsi_1 + 0x38))(rsi_1) != 0)
            (*(*rsi_1 + 0x18))(rsi_1)
        
        (*(*rsi_1 + 0x20))(rsi_1)
        r15_1 += 8
        r12 += 1
    while (r12 != r13_2)

void* r15_2 = &var_c0

if (var_40 != 0)
    r15_2 = var_40

int64_t r12_1 = sx.q(var_38) << 3
uint64_t r12_2 = r12_1 u>> 3

if (r15_2 u> r15_2 + r12_1)
    r12_2 = 0

if (r12_2 != 0)
    do
        int64_t* rsi_2 = *r15_2
        (*(*rsi_2 + 0x18))(rsi_2)
        (*(*rsi_2 + 0x20))(rsi_2)
        r14 += 1
        r15_2 += 8
    while (r14 != r12_2)

EnterCriticalSection(arg1 + 0x330)
void* result = arg1
*(result + 0x358) -= 1

if (arg1 != -0x330)
    result = LeaveCriticalSection(arg1 + 0x330)

if (var_40 != 0)
    result = sub_140a74f90(var_40)

if (var_d0 != 0)
    result = sub_140a74f90(var_d0)

if (arg1 != -0x2e0)
    result = LeaveCriticalSection(arg1 + 0x2e0)

__security_check_cookie(rax_1 ^ &var_178)
return result
