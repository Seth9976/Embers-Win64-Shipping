// 函数: sub_141393890
// 地址: 0x141393890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x110)
int32_t result = rcx + 1

if ((result & 0x7fffffff) != 0)
    void* r8_1 = *(arg1 + 0xf0) + 0xe68
    void* rax = *(r8_1 + 0x10)
    
    if (rax != 0)
        r8_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx)
    int64_t rdx_3 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    result = 1 << (rcx.b & 0x1f)
    *(r8_1 + (rdx_3 << 2)) |= result

return result
