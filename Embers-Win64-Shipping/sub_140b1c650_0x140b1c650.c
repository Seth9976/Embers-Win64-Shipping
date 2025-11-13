// 函数: sub_140b1c650
// 地址: 0x140b1c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t var_bc = 0x10
void* var_c8 = nullptr
int32_t var_c0 = 0
void* var_38 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0x10
EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) += 1
int64_t rsi = sx.q(*(arg1 + 0x2b8))
void var_148

if (rsi.d != 0)
    int32_t r9_1 = var_c0
    int32_t rdx = r9_1 + rsi.d
    
    if (rdx s> var_bc)
        sub_140b26b00(&var_148, rdx)
        r9_1 = var_c0
    
    void* rcx_2 = &var_148
    
    if (var_c8 != 0)
        rcx_2 = var_c8
    
    memcpy(rcx_2 + (sx.q(r9_1) << 3), *(arg1 + 0x2b0), (rsi << 3).d)
    int32_t var_c0_1 = var_c0 + rsi.d

int64_t rsi_1 = sx.q(*(arg1 + 0x2c8))

if (rsi_1.d != 0)
    int32_t r9_2 = var_30
    int32_t rdx_2 = r9_2 + rsi_1.d
    void var_b8
    
    if (rdx_2 s> var_2c)
        sub_140b26b00(&var_b8, rdx_2)
        r9_2 = var_30
    
    void* rcx_5 = &var_b8
    
    if (var_38 != 0)
        rcx_5 = var_38
    
    memcpy(rcx_5 + (sx.q(r9_2) << 3), *(arg1 + 0x2c0), (rsi_1 << 3).d)
    int32_t var_30_1 = var_30 + rsi_1.d

if (arg1 != -0x330)
    LeaveCriticalSection(arg1 + 0x330)

sub_140b1c1f0(arg1, &var_148, arg2)
int64_t result = EnterCriticalSection(arg1 + 0x330)
*(arg1 + 0x358) -= 1

if (arg1 != -0x330)
    result = LeaveCriticalSection(arg1 + 0x330)

if (var_38 != 0)
    result = sub_140a74f90(var_38)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

__security_check_cookie(rax_1 ^ &var_168)
return result
