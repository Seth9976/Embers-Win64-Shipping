// 函数: sub_142262770
// 地址: 0x142262770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rdi = 0
int32_t var_1c = 0x18
int64_t* result_2 = nullptr
int32_t var_20 = 0
void* rax_2 = sub_142470a10()
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
int64_t* result

if (rsi_1 != sub_142459c10())
    result = sub_1419f71f0(arg1, rax_2, r8)
else
    result = sub_1419f6fe0(arg1, rax_2, r8)

int32_t rdx_3 = var_20
int64_t* result_1 = result_2

if (rdx_3 s> 0)
    int64_t rbx_1 = 0
    
    do
        result = &var_e8
        
        if (result_1 != 0)
            result = result_1
        
        int64_t* r8_1 = *(result + rbx_1)
        
        if (r8_1[0x3e] == 0)
            result = (*(*r8_1 + 0x3a0))(r8_1, 0)
            rdx_3 = var_20
            result_1 = result_2
        
        rdi += 1
        rbx_1 += 8
    while (rdi s< rdx_3)

if (result_1 != 0)
    result = sub_140a74f90(result_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
