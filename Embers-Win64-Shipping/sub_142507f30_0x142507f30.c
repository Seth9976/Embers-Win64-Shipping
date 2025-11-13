// 函数: sub_142507f30
// 地址: 0x142507f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_18

if (rax_2 != 0)
    rdi = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbp
rbp.b = rax_3 != 0
*(arg2 + 0x20) = rbp + rax_3
int32_t result = _finite(_mm_cvtps_pd(*rdi))

if (result == 0)
    *arg3 = 1
else
    result = _finite(_mm_cvtps_pd(*(rdi + 4)))
    
    if (result == 0)
        *arg3 = 1
    else
        result = _finite(_mm_cvtps_pd(*(rdi + 8)))
        
        if (result == 0)
            *arg3 = 1
        else
            *arg3 = 0

return result
