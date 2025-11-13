// 函数: sub_1409d8630
// 地址: 0x1409d8630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t i_3 = arg3
int32_t rsi = rdi.d
int32_t i_2 = arg3

if (arg3 != 0)
    int32_t i
    
    do
        sub_1409ab120(*arg1 + sx.q(rsi) * 0x48)
        rsi += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3 == 0)
    return 

int32_t rdx = rol.d(1, rdi.b)
int64_t r8_1 = rdi * 0x48
int32_t i_1

do
    if (*(arg1 + 0x34) != 0)
        *(*arg1 + sx.q(arg1[6].d) * 0x48) = rdi.d
    
    int32_t* rcx_4 = *arg1
    *(rcx_4 + r8_1) = 0xffffffff
    int32_t rax_5
    
    if (*(arg1 + 0x34) s<= 0)
        rax_5 = -1
    else
        rax_5 = arg1[6].d
    
    *(rcx_4 + r8_1 + 4) = rax_5
    void* rcx_5 = &arg1[2]
    *(arg1 + 0x34) += 1
    arg1[6].d = rdi.d
    void* rax_6 = arg1[4]
    
    if (rax_6 != 0)
        rcx_5 = rax_6
    
    int32_t rax_7 = rdi.d
    
    if (rdi.d s< 0)
        rax_7 = (rdi + 0x1f).d
    
    rdi = zx.q(rdi.d + 1)
    r8_1 += 0x48
    void* rcx_6 = rcx_5 + (sx.q(rax_7 s>> 5) << 2)
    int32_t rax = not.d(rdx)
    rdx = rol.d(rdx, 1)
    *rcx_6 &= rax
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
