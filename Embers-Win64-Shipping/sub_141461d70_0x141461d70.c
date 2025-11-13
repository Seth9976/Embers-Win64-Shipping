// 函数: sub_141461d70
// 地址: 0x141461d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1]
int32_t rcx_1 = rcx s% 7
int32_t rdx_4 = (rcx s/ 7) & 0x80000003

if (rdx_4 s< 0)
    rdx_4 = ((rdx_4 - 1) | 0xfffffffc) + 1

int32_t result

if (rcx_1 u<= 6)
    result = 1
    
    if (rcx_1 == 0)
        result = 4
    
    if (rdx_4 + 1 s<= result)
        return sub_141461df0(rcx_1, *arg1) __tailcall

result.b = 0
return result
