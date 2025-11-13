// 函数: sub_142a4b410
// 地址: 0x142a4b410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg5

if (*rsi s> 0)
    return 

int64_t rbp_2 = sx.q(arg3) + arg2
int64_t var_28 = arg2
int32_t rdx

if (arg3 s> 0x1b)
    rdx = (arg3 s>> 2) + arg3
else
    rdx = 0x1b

if (sub_142a487e0(arg1, rdx, rdx, 0, 0, 0) != 0)
    char i
    
    do
        void* rax_2 = sub_142a4b570(arg1)
        arg5 = rax_2 + (sx.q(sub_142a4a1f0(arg1)) << 1)
        int32_t* var_30_1 = rsi
        sub_142a85170(arg4, &arg5, rax_2 + (sx.q(sub_142a4a110(arg1)) << 1), &var_28, rbp_2, 0, 1)
        int32_t rax = ((arg5 - rax_2) s>> 1).d
        
        if (rax s> 0x3ff)
            *(arg1 + 8) |= 0xffe0
            *(arg1 + 0xc) = rax
        else
            *(arg1 + 8) &= 0x1f
            rax.w <<= 5
            *(arg1 + 8) |= rax.w
        
        if (*rsi != 0xf)
            return 
        
        *rsi = 0
        int32_t rdx_5 = sub_142a4a1f0(arg1) + ((rbp_2.d - var_28.d) << 1)
        i = sub_142a487e0(arg1, rdx_5, rdx_5, 1, 0, 0)
    while (i != 0)

sub_142a4ab40(arg1)
