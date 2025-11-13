// 函数: sub_142646300
// 地址: 0x142646300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_108
int64_t rax_2 = __security_cookie ^ &var_108
sub_14265f770(arg2)
int32_t rdi_1 = 0
int32_t var_1c_1 = 0x18
void** var_28_1 = nullptr
int32_t var_20_1 = 0
void* rax_3 = sub_142459c10()
void* const rbp_1

if (rax_3 == 0)
    rbp_1 = nullptr
else
    void* rax_4 = sub_142459c10()
    
    if (rax_4 == 0)
        rbp_1 = nullptr
    else
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rax_3 + 0x38))
            rbp_1 = nullptr
        else
            rbp_1 = rax_3
            
            if (*(*(rax_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rbp_1 = nullptr

void var_e8
void* r8_1 = &var_e8

if (rbp_1 != sub_142459c10())
    sub_1419f71f0(arg2, rax_3, r8_1)
else
    sub_1419f6fe0(arg2, rax_3, r8_1)

if (var_20_1 s> 0)
    int64_t rbx_2 = 0
    
    do
        void** rcx_3 = &var_e8
        
        if (var_28_1 != 0)
            rcx_3 = var_28_1
        
        sub_14265f840(*(rcx_3 + rbx_2))
        rdi_1 += 1
        rbx_2 += 8
    while (rdi_1 s< var_20_1)

if (var_28_1 != 0)
    sub_140a74f90(var_28_1)

__security_check_cookie(rax_2 ^ &var_108)
