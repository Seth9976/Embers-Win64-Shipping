// 函数: sub_141ddade0
// 地址: 0x141ddade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rdi = 0
int32_t var_2c = 0x18
void* var_38 = nullptr
int32_t var_30 = 0
void* rax_2 = sub_142459c10()
void* const rsi_1

if (rax_2 == 0)
    rsi_1 = nullptr
else
    void* rax_3 = sub_142459c10()
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rax_2 + 0x38))
            rsi_1 = nullptr
        else
            rsi_1 = rax_2
            
            if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rsi_1 = nullptr

void var_f8
void* r8 = &var_f8

if (rsi_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_2, r8)
else
    sub_1419f6fe0(arg1, rax_2, r8)

void* rbx_1 = &var_f8

if (var_38 != 0)
    rbx_1 = var_38

int64_t rsi_2 = sx.q(var_30) << 3
uint64_t rsi_3 = rsi_2 u>> 3

if (rbx_1 u> rbx_1 + rsi_2)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_2 = *rbx_1
        
        if ((rcx_2[0x11].b & 1) != 0 && (arg2 == 0 || (*(rcx_2 + 0x89) & 4) != 0))
            sub_141efdf10(rcx_2)
        
        rbx_1 += 8
        rdi += 1
    while (rdi != rsi_3)

int64_t result = (*(*arg1 + 0x4d0))(arg1)

if (var_38 != 0)
    result = sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_118)
return result
