// 函数: sub_141d08ec0
// 地址: 0x141d08ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1].d
int32_t rdx = rcx - 1

if (rcx == 0)
    rdx = -1

uint64_t result = zx.q(rcx - 1)

if (rcx == 0)
    result = 0xffffffff

if (rcx == 0)
    result = 0

if (result.d s> 0)
    result = *arg1
    
    if (rcx == 0)
        rdx = 0
    
    if (*(result + (sx.q(rdx) << 1) - 2) != 0x2f)
        return sub_140a20ba0(arg1, &data_142d5a024, 1) __tailcall

return result
