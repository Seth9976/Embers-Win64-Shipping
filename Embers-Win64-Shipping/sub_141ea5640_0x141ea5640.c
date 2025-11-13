// 函数: sub_141ea5640
// 地址: 0x141ea5640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = sub_14078ee20(arg2[9], arg1) & 0x7fffffff
arg1[2] = rax_1

if ((rax_1 & 0x7fffffff) == 0x7fffffff)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*arg1, 0) == 0
    
    if ((arg1[1] != 0 | rcx_1.b) != 0)
        void* rax_4 = sub_140d3c6e0(&arg2[8])
        
        if (rax_4 != 0)
            sub_14078ee20(rax_4 + 0x58, arg1)

int32_t rax_5 = arg1[2]
int32_t rcx_4 = rax_5 * 2
int32_t i_1 = rcx_4 s>> 1
int32_t i

if (i_1 == 0xffffffff)
    i = -1
else if (rax_5 s>= 0)
    i = i_1
else
    i = *(arg2[0xa] + (sx.q(rcx_4) s>> 1 << 2))

int16_t* r10 = *arg2
int16_t* rcx_7 = r10
void* r8 = &r10[sx.q(arg2[1].d)]
int32_t rcx_8

if (r10 == r8)
label_141ea56f3:
    rcx_8 = -1
else
    while (zx.d(*rcx_7) != i)
        rcx_7 = &rcx_7[1]
        
        if (rcx_7 == r8)
            goto label_141ea56f3
    
    rcx_8 = ((rcx_7 - r10) s>> 1).d

arg1[3] = rcx_8
i.b = i_1 != 0xffffffff
return i
