// 函数: sub_141037ba0
// 地址: 0x141037ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[6])
uint32_t r10 = arg1[0xe].d
int32_t rax_3
int32_t r11_1

if (*(arg1 + 0xbc) != r10)
    r11_1 = arg2
    
    if (arg3 != 0 && modu.dp.d(0:(*(arg1 + 0x74)), arg3) != 0)
        r11_1 = arg2 + arg3
    
    rax_3 = arg1[0x16].d

int64_t* rdi

if (*(arg1 + 0xbc) == r10 || rax_3 - 1 s< 0)
label_141037c3e:
    arg1[0xd].d += arg2
    rdi.b = 0
else
    int64_t r8 = sx.q(rax_3 - 1)
    int32_t* rdx_3 = arg1[0x15] + 8 + r8 * 0x50
    
    while (true)
        rdx_3[0xb]
        
        if (*rdx_3 != rdx_3[0xb] && r10 u>= r11_1)
            sub_141012f40(arg1, arg2, arg3, arg4, arg5)
            rdi.b = 1
            break
        
        r10 u>>= 1
        
        if (r10 u< r11_1)
            goto label_141037c3e
        
        rdx_3 -= 0x50
        int64_t temp10_1 = r8
        r8 -= 1
        
        if (temp10_1 - 1 s< 0)
            goto label_141037c3e

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

return zx.q(rdi.b)
