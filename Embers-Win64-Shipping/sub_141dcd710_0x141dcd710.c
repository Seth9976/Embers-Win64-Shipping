// 函数: sub_141dcd710
// 地址: 0x141dcd710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rdi = 0
int32_t var_1c = 0x18
void* var_28 = nullptr
int32_t var_20 = 0
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

void var_e8
void* r8 = &var_e8

if (rsi_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_2, r8)
else
    sub_1419f6fe0(arg1, rax_2, r8)

void* rcx_4 = var_28
void* rsi_2 = &var_e8

if (rcx_4 != 0)
    rsi_2 = rcx_4

int64_t rbp_1 = sx.q(var_20) << 3
void* result = rsi_2 + rbp_1
uint64_t rbp_2 = rbp_1 u>> 3

if (rsi_2 u> result)
    rbp_2 = 0

if (rbp_2 != 0)
    do
        int64_t* rbx_1 = *rsi_2
        
        if ((rbx_1[0x11].b & 1) != 0)
            int64_t rdx_3
            
            if (*(rbx_1 + 0x89) s< 0 && (*(rbx_1 + 0x8a) & 1) == 0)
                rdx_3.b = 1
                (*(*rbx_1 + 0x268))(rbx_1, rdx_3)
            
            result = zx.q(*(rbx_1 + 0x8a))
            
            if ((result.b & 0x10) != 0 && result.b s>= 0)
                result, rdx_3 = (*(*rbx_1 + 0x318))(rbx_1)
        
        rsi_2 += 8
        rdi += 1
    while (rdi != rbp_2)
    
    rcx_4 = var_28

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

__security_check_cookie(rax_1 ^ &var_108)
return result
