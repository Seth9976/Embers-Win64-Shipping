// 函数: sub_1408b8e30
// 地址: 0x1408b8e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(arg4)
uint64_t rsi = zx.q(arg3)
int64_t rax = *arg5
*(arg1 + 0x10) = rax

if (rax != 0)
    *(arg1 + 0x18) = arg5[1]

*(arg1 + 0x20) = sub_140a491d0(0)
arg1[0xa] = 0
arg1[0xb] = 0
*(arg1 + 0x32) = rbp.b
arg1[0xc].w = 0
int32_t rcx_1

if ((arg6 & 2) == 0)
    *arg1 = 0
    uint32_t r8_1 = (rsi * 3).d * 2
    int32_t i_1 = 6
    int32_t i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(arg2), r8_1)
        arg1[1] = temp0_1
        rcx_1 = temp0_1
        
        if (temp0_1 != 0)
            int32_t temp0_2 = divs.dp.d(sx.q(arg2), rcx_1)
            *arg1 = temp0_2
            
            if (temp0_2 s>= rsi.d + rbp)
                break
        
        r8_1 -= rsi.d
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    rcx_1 = 1
    *arg1 = arg2
    arg1[1] = 1

arg1[2] = arg2 - rcx_1 * *arg1
return arg1
