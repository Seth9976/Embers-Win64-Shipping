// 函数: sub_14040bbd0
// 地址: 0x14040bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg1)
int32_t rcx_1 = temp0 s>> 1
uint64_t result = 0
int32_t rdx = 1 << rcx_1.b
int32_t temp0_1

do
    int32_t r8_2 = (rdx + (result << 1).d) << rcx_1.b
    
    if (r8_2 u<= r9)
        result = zx.q(result.d + rdx)
        r9 -= r8_2
    
    rdx u>>= 1
    temp0_1 = rcx_1
    rcx_1 -= 1
while (temp0_1 - 1 s>= 0)
return result
