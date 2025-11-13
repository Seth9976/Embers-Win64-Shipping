// 函数: sub_1423989a0
// 地址: 0x1423989a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x13) == 0 || *(arg1 + 0x12) != 0 || *(arg1 + 0x11) != 0)
    return 

*(arg1 + 0x13) = 0
int64_t r8_1 = 0
void* const rdx_1 = arg1[1]

if (rdx_1 != 0)
    int32_t rax_1 = *(rdx_1 + 8)
    
    if (rax_1 != 0)
        *(rdx_1 + 8) = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdx_1 = nullptr
    
    if (rdx_1 != 0)
        r8_1 = *arg1

void* rcx = arg1[0x13]
void* const var_10_1 = rdx_1
int64_t var_18 = r8_1
sub_142398740(rcx, &var_18, arg2, r8_1)
