// 函数: sub_1421478c0
// 地址: 0x1421478c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x338].b == 0)
    return 

int32_t i = *(arg1 + 0x19cc)

if (i s<= 0)
    return 

int64_t r8_1 = sx.q(arg1[0x339].d)
arg1[0x344].b = 1
int64_t rsi

if (arg2 != 0 || *(arg1[0x336] + (((r8_1 - 1) & sx.q(arg1[0x335].d)) << 3)) != 0)
    rsi.b = 1
else
    rsi.b = 0

do
    uint64_t r10_2 = sx.q(arg1[0x335].d)
    int64_t rcx_3 = r10_2 & sx.q(r8_1.d)
    uint64_t rax = arg1[0x336]
    int64_t* rdx = *(rax + (rcx_3 << 3))
    int64_t rdi_1 = rax + (rcx_3 << 3)
    
    if (rdx != 0)
        rax, arg4, arg5, arg3 = sub_1421500c0(arg1, rdx, 0, arg4, arg5, arg3)
        int64_t* rcx_5 = *rdi_1
        
        if (rcx_5 != 0)
            *rdi_1 = 0
            (**rcx_5)(rcx_5, 1)
        
        *(arg1 + 0x19cc) -= 1
        i = *(arg1 + 0x19cc)
        r8_1 = zx.q(arg1[0x339].d)
        r10_2 = zx.q(arg1[0x335].d)
    else if (rsi.b == 0)
        break
    
    r8_1 = zx.q(r8_1.d + 1) & zx.q(r10_2.d)
    arg1[0x339].d = r8_1.d
while (i s> 0)

arg1[0x344].b = 0
