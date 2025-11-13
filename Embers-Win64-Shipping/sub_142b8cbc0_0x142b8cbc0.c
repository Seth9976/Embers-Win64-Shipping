// 函数: sub_142b8cbc0
// 地址: 0x142b8cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1 + (sx.q(arg3) << 2)
int32_t* result = arg1 + (sx.q(arg2) << 2)
int64_t rcx = 0
uint64_t rdx_3 = (r8 - result + 3) u>> 2

if (arg6 == 0)
    if (result u> r8)
        rdx_3 = 0
    
    if (rdx_3 != 0)
        do
            if (*result == arg5)
                *result = arg4
            
            result = &result[1]
            rcx += 1
        while (rcx u< rdx_3)
else
    if (result u> r8)
        rdx_3 = 0
    
    if (rdx_3 != 0)
        do
            rcx += 1
            *result = arg4
            result = &result[1]
        while (rcx u< rdx_3)

return result
