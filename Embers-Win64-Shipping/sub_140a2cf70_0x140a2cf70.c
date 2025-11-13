// 函数: sub_140a2cf70
// 地址: 0x140a2cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)

if (arg3 == 0)
    if (result.d s> 1)
        int64_t r8 = *arg1
        int64_t result_1 = result
        result = zx.q(*(r8 + (result << 1) - 4))
        
        if (result.w != 0x2f && result.w != 0x5c)
            *(r8 + (result_1 << 1) - 2) = 0x2f
        label_140a2d04a:
            int64_t rdi_1 = sx.q(arg1[1].d)
            int32_t rax_2 = (rdi_1 + 1).d
            arg1[1].d = rax_2
            
            if (rax_2 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            result = *arg1
            *(result + (rdi_1 << 1)) = 0
    
    return result

if (result.d s> 0)
    int16_t rcx
    int64_t r8_1
    
    if (result.d s> 1)
        r8_1 = *arg1
        rcx = *(r8_1 + (result << 1) - 4)
    
    if (result.d s<= 1 || rcx == 0x2f || rcx == 0x5c || *arg2 == 0x2f)
        result = zx.q(result.d - 1)
        arg1[1].d = result.d
    else
        *(r8_1 + (result << 1) - 2) = 0x2f

int32_t rdx_1 = arg3 + 1 + result.d

if (rdx_1 s> *(arg1 + 0xc))
    sub_1405947f0(arg1, rdx_1)

int64_t rsi_1 = sx.q(arg1[1].d)
int32_t rax = rsi_1.d + arg3
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

memcpy(*arg1 + (rsi_1 << 1), arg2, arg3 * 2)
goto label_140a2d04a
