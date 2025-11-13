// 函数: sub_141dbebd0
// 地址: 0x141dbebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_128
int64_t rax_2 = __security_cookie ^ &var_128
int64_t rdi_1 = 0
int32_t var_3c_1 = 0x18
void* var_48_1 = nullptr
int32_t var_40_1 = 0
void* rax_3 = sub_1425881f0()
void* const rsi_1

if (rax_3 == 0)
    rsi_1 = nullptr
else
    void* rax_4 = sub_142459c10()
    
    if (rax_4 == 0)
        rsi_1 = nullptr
    else
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rax_3 + 0x38))
            rsi_1 = nullptr
        else
            rsi_1 = rax_3
            
            if (*(*(rax_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rsi_1 = nullptr

void var_108
void* r8 = &var_108

if (rsi_1 != sub_142459c10())
    sub_1419f71f0(arg1, rax_3, r8)
else
    sub_1419f6fe0(arg1, rax_3, r8)

void* rcx_3 = var_48_1
void* rbx_2 = &var_108

if (rcx_3 != 0)
    rbx_2 = rcx_3

int64_t rsi_2 = sx.q(var_40_1) << 3
uint64_t rsi_3 = rsi_2 u>> 3

if (rbx_2 u> rbx_2 + rsi_2)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_2 = *rbx_2
        
        if (rcx_2[0x18] == arg2)
            (*(*rcx_2 + 0x400))(rcx_2, arg3)
        
        rbx_2 += 8
        rdi_1 += 1
    while (rdi_1 != rsi_3)
    
    rcx_3 = var_48_1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

__security_check_cookie(rax_2 ^ &var_128)
