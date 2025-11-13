// 函数: sub_14152ed20
// 地址: 0x14152ed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t r8 = arg_8

if (r8 s> *(arg2 + 0xc))
    sub_1405dadb0(arg2, r8)
    r8 = arg_8

int64_t rbp = sx.q(arg2[1].d)

if (r8 s> rbp.d)
    arg2[1].d = r8
    int32_t i_1 = r8 - rbp.d
    
    if (r8 s> *(arg2 + 0xc))
        sub_1405a4cf0(arg2)
        r8 = arg_8
    
    int32_t* rdx_4 = *arg2 + (rbp << 2)
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rdx_4 &= 0xff000000
            *(rdx_4 + 3) = 0
            rdx_4 = &rdx_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        r8 = arg_8
else if (r8 s< rbp.d)
    int32_t rax_5 = rbp.d
    
    if (rax_5 != r8)
        arg2[1].d = rbp.d - (rax_5 - r8)
        sub_1405dac90(arg2)
        r8 = arg_8

int32_t rbx_2 = 0

if (r8 s> 0)
    do
        sub_141708de0(arg1, *arg2 + (sx.q(rbx_2) << 2), arg3)
        rbx_2 += 1
    while (rbx_2 s< arg_8)

return arg1
