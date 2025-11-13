// 函数: sub_14175cee0
// 地址: 0x14175cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *arg1
int64_t rsi = sx.q(arg1[1].d)
int32_t* r8 = r10
int64_t r14 = rsi * 0xc
void* rcx = &r10[rsi * 3]

if (r10 != rcx)
    do
        if (*r8 == *arg2 && r8[1] == arg2[1] && r8[2] == arg2[2])
            int32_t rdx_5 = ((r8 - r10) s/ 0xc).d
            
            if (rdx_5 != 0xffffffff)
                return zx.q(rdx_5)
            
            break
        
        r8 = &r8[3]
    while (r8 != rcx)

int32_t rax_3 = (rsi + 1).d
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_14083a7e0(arg1)

int64_t* rdx_2 = *arg1
*(rdx_2 + r14) = *arg2
*(rdx_2 + r14 + 8) = arg2[2]
return zx.q(rsi.d)
