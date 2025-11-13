// 函数: sub_141dd6120
// 地址: 0x141dd6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if ((*(arg1 + 0x5b) & 0x20) != 0)
    if ((*(arg1 + 0x5c) & 0x60) == 0x40)
        (*(*arg1 + 0x330))()
    
    if (arg2 == 3)
        sub_141dbcc60(arg1)
        int64_t rax_4 = *arg1
        *(arg1 + 0x5b) &= 0xdf
        int64_t rax_5 = (*(rax_4 + 0x150))(arg1)
        
        if (rax_5 != 0)
            sub_1424414e0(rax_5, arg1)
    
    if (arg1[0x29] != 0)
        int512_t zmm1
        zmm1.o = zx.o(0)
        (*(*arg1 + 0x390))(arg1, zmm1)

int64_t rdi = 0
int32_t var_2c = 0x18
void* var_38 = nullptr
int32_t var_30 = 0
void* rax_7 = sub_142459c10()
void* rbp_1

if (rax_7 == 0)
    rbp_1 = nullptr
else
    void* rax_8 = sub_142459c10()
    
    if (rax_8 == 0)
        rbp_1 = nullptr
    else
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s> *(rax_7 + 0x38))
            rbp_1 = nullptr
        else
            rbp_1 = rax_7
            
            if (*(*(rax_7 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                rbp_1 = nullptr

void var_f8
void* r8 = &var_f8

if (rbp_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_7, r8)
else
    sub_1419f6fe0(arg1, rax_7, r8)

void* rcx_7 = var_38
void* rbx_2 = &var_f8

if (rcx_7 != 0)
    rbx_2 = rcx_7

int64_t rsi_1 = sx.q(var_30) << 3
void* result = rbx_2 + rsi_1
uint64_t rsi_2 = rsi_1 u>> 3

if (rbx_2 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_6 = *rbx_2
        
        if (*(rcx_6 + 0x8a) s< 0)
            result = (*(*rcx_6 + 0x330))(rcx_6)
        
        rbx_2 += 8
        rdi += 1
    while (rdi != rsi_2)
    
    rcx_7 = var_38

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_118)
return result
