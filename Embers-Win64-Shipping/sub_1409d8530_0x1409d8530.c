// 函数: sub_1409d8530
// 地址: 0x1409d8530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3
int64_t rbp = sx.q(arg2)
int32_t i_3 = arg3

if (arg3 != 0)
    int64_t rdi_2 = rbp << 5
    int32_t i
    
    do
        int64_t* rsi_1 = *arg1
        int64_t rcx = *(rsi_1 + rdi_2 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rsi_1 + rdi_2)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rdi_2 += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3 == 0)
    return 

int32_t rdx = rol.d(1, rbp.b)
int64_t r8_1 = rbp << 5
int32_t i_1

do
    if (*(arg1 + 0x34) != 0)
        *((sx.q(arg1[6].d) << 5) + *arg1) = rbp.d
    
    int64_t* rcx_5 = *arg1
    *(rcx_5 + r8_1) = 0xffffffff
    int32_t rax_2
    
    if (*(arg1 + 0x34) s<= 0)
        rax_2 = -1
    else
        rax_2 = arg1[6].d
    
    *(rcx_5 + r8_1 + 4) = rax_2
    void* rcx_6 = &arg1[2]
    *(arg1 + 0x34) += 1
    arg1[6].d = rbp.d
    void* rax_3 = arg1[4]
    
    if (rax_3 != 0)
        rcx_6 = rax_3
    
    int32_t rax_4 = rbp.d
    
    if (rbp.d s< 0)
        rax_4 = (rbp + 0x1f).d
    
    rbp = zx.q(rbp.d + 1)
    r8_1 += 0x20
    void* rcx_7 = rcx_6 + (sx.q(rax_4 s>> 5) << 2)
    int32_t rax = not.d(rdx)
    rdx = rol.d(rdx, 1)
    *rcx_7 &= rax
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
