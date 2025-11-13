// 函数: sub_142c38380
// 地址: 0x142c38380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
int32_t r9 = *arg2

if (r8 != r9)
    if (r8 s< r9)
        return 0xffffffff
    
    return 1

int32_t rcx = arg1[2]
int32_t rdx = arg2[2]

if (rcx u< rdx)
    return 0xffffffff

int64_t result
result.b = rcx u> rdx
return result
