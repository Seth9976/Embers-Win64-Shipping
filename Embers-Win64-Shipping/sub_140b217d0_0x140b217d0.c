// 函数: sub_140b217d0
// 地址: 0x140b217d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rsi = 0
int32_t var_cc = 0x10
void* var_d8 = nullptr
int32_t var_d0 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0x10
EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) += 1
int64_t rdi = sx.q(*(arg1 + 0x2b8))
void var_158

if (rdi.d != 0)
    int32_t r9_1 = var_d0
    int32_t rdx_1 = r9_1 + rdi.d
    
    if (rdx_1 s> var_cc)
        sub_140b26b00(&var_158, rdx_1)
        r9_1 = var_d0
    
    void* rcx_2 = &var_158
    
    if (var_d8 != 0)
        rcx_2 = var_d8
    
    memcpy(rcx_2 + (sx.q(r9_1) << 3), *(arg1 + 0x2b0), (rdi << 3).d)
    var_d0 += rdi.d

int64_t rdi_1 = sx.q(*(arg1 + 0x2c8))
void var_c8

if (rdi_1.d != 0)
    int32_t r9_2 = var_40
    int32_t rdx_3 = r9_2 + rdi_1.d
    
    if (rdx_3 s> var_3c)
        sub_140b26b00(&var_c8, rdx_3)
        r9_2 = var_40
    
    void* rcx_5 = &var_c8
    
    if (var_48 != 0)
        rcx_5 = var_48
    
    memcpy(rcx_5 + (sx.q(r9_2) << 3), *(arg1 + 0x2c0), (rdi_1 << 3).d)
    var_40 += rdi_1.d

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

sub_140b1c1f0(arg1, &var_158, 0)
void* r14 = &var_158
int64_t r15 = 0

if (var_d8 != 0)
    r14 = var_d8

int64_t r12 = sx.q(var_d0) << 3
uint64_t r12_1 = r12 u>> 3

if (r14 u> r14 + r12)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rdi_2 = *r14
        
        if ((*(*rdi_2 + 0x38))(rdi_2) != 0)
            (*(*rdi_2 + 0x18))(rdi_2)
        
        r14 += 8
        r15 += 1
    while (r15 != r12_1)

void* rdi_3 = &var_c8

if (var_48 != 0)
    rdi_3 = var_48

int64_t r14_1 = sx.q(var_40) << 3
uint64_t r14_2 = r14_1 u>> 3

if (rdi_3 u> rdi_3 + r14_1)
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rcx_11 = *rdi_3
        (*(*rcx_11 + 0x18))(rcx_11)
        rsi += 1
        rdi_3 += 8
    while (rsi != r14_2)

int64_t result = EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) -= 1

if (arg1 != -0x330)
    result = LeaveCriticalSection(arg1 + 0x330)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

__security_check_cookie(rax_1 ^ &var_178)
return result
