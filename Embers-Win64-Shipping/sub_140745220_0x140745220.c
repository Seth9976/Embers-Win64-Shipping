// 函数: sub_140745220
// 地址: 0x140745220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].w = arg2[2].w
*(arg1 + 0x12) = 0xffffffff
arg1[3] = 0
arg1[4] = 0

if (arg2[1] == 0)
    return arg1

int32_t rsi = arg2[4].d

if (rsi s> 0)
    int16_t rax_4 = *(arg2 + 0x12)
    
    if (rax_4 == 0xffff)
        if (arg2[2].w == 1)
            *(arg2 + 0x12) = 0
            rax_4 = 0
        else
            void* rax_5 = sub_140761a70(&arg2[1])
            int16_t rcx_1 = *(rax_5 + 0x5c)
            rax_4 = (*(rax_5 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
            *(arg2 + 0x12) = rax_4
    
    if (rsi == sx.d(rax_4))
        int64_t rbx_1 = arg2[3]
        sub_14074a0e0(arg1)
        memcpy(arg1[3], rbx_1, arg1[4].d)

return arg1
