// 函数: sub_1422938d0
// 地址: 0x1422938d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x20)
int64_t result = rcx s>> 1
char rdx = *(arg1 + 0x20) & 1
void* r8_1

if (rdx == 0)
    r8_1 = rcx
else
    r8_1 = arg1 + 0x20 + result

if (r8_1 != 0)
    if (rdx != 0)
        rcx = arg1 + 0x20 + result
    
    if (rcx != 0)
        result = (**rcx)(rcx, 1)
    
    *(arg1 + 0x20) = 0

return result
