// 函数: sub_141f71500
// 地址: 0x141f71500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x5b0)
int32_t r8 = 0
void* rax

if (rax_2 == 0)
    void* rax_1 = *(arg1 + 0x430)
    
    if (rax_1 != 0)
        rax = *(rax_1 + 0x58)
        goto label_141f71525
else
    rax = *(rax_2 + 0x40)
label_141f71525:
    
    if (rax != 0)
        r8 = *(rax + 8)
int32_t result = r8 - 1

if (arg2 s< 0)
    *(arg1 + 0x554) = 0
    return result

if (arg2 s< result)
    result = arg2

*(arg1 + 0x554) = result
return result
