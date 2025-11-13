// 函数: sub_1406cb760
// 地址: 0x1406cb760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t i_1 = arg3
char* rsi = arg2
int32_t var_28 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_28_1 = 1

if (arg3 != 0)
    sub_1405947f0(arg1, arg3)
    int32_t i
    
    do
        uint16_t rbp_1 = zx.w(*rsi) + 1
        int32_t rdx_1 = arg1[1].d
        int32_t r14_1 = rdx_1 - 1
        
        if (rdx_1 s<= 0)
            r14_1 = 0
        
        int32_t rax_1
        rax_1.b = rdx_1 s<= 0
        int32_t rax_3 = rax_1 + 1 + rdx_1
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int64_t rcx_1 = sx.q(r14_1)
        *(*arg1 + (rcx_1 << 1)) = rbp_1
        *(*arg1 + (rcx_1 << 1) + 2) = 0
        rsi = &rsi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
