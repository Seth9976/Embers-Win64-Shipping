// 函数: sub_1409d8440
// 地址: 0x1409d8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3
int64_t rsi = sx.q(arg2)
int32_t i_3 = arg3

if (arg3 != 0)
    int64_t rdi_2 = rsi << 4
    int32_t i
    
    do
        int64_t rcx = *(rdi_2 + *arg1)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rdi_2 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3 == 0)
    return 

int32_t rdx = rol.d(1, rsi.b)
int64_t r8_1 = rsi << 4
int32_t i_1

do
    if (*(arg1 + 0x34) != 0)
        *(*arg1 + sx.q(arg1[6].d) * 0x10) = rsi.d
    
    int32_t* rcx_4 = *arg1
    *(rcx_4 + r8_1) = 0xffffffff
    int32_t rax_2
    
    if (*(arg1 + 0x34) s<= 0)
        rax_2 = -1
    else
        rax_2 = arg1[6].d
    
    *(rcx_4 + r8_1 + 4) = rax_2
    void* rcx_5 = &arg1[2]
    *(arg1 + 0x34) += 1
    arg1[6].d = rsi.d
    void* rax_3 = arg1[4]
    
    if (rax_3 != 0)
        rcx_5 = rax_3
    
    int32_t rax_4 = rsi.d
    
    if (rsi.d s< 0)
        rax_4 = (rsi + 0x1f).d
    
    rsi = zx.q(rsi.d + 1)
    r8_1 += 0x10
    void* rcx_6 = rcx_5 + (sx.q(rax_4 s>> 5) << 2)
    uint64_t rax = zx.q(not.d(rdx))
    rdx = rol.d(rdx, 1)
    *rcx_6 &= rax.d
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
