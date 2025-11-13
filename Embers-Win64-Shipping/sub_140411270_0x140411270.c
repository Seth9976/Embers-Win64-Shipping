// 函数: sub_140411270
// 地址: 0x140411270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int64_t rbx_1 = sx.q(arg5)
int64_t i = 0

do
    int32_t r10_1 = 0
    int64_t r9 = 0
    
    if (rbx_1 s> 0)
        do
            int16_t rcx = *(arg2 + (r9 << 1))
            r9 += 2
            uint16_t rax_2 = (zx.d(*arg3) << 7).w
            arg3 = &arg3[2]
            int32_t rdx = sx.d(rcx - rax_2)
            int32_t rax_5 = sx.d(*(arg2 + (r9 << 1) - 2) - (zx.d(arg3[-1]) << 7).w)
            r10_1 += (rax_5 * rax_5 + rdx * rdx) s>> 4
        while (r9 s< rbx_1)
    
    *(arg1 + (i << 2)) = r10_1
    i += 1
while (i s< sx.q(arg4))
