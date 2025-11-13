// 函数: sub_141f1d7d0
// 地址: 0x141f1d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rcx = *(arg1 + 0x290)
int32_t rbx = 0

if (rcx s> 0)
    int32_t rdx = rcx
    int64_t* rsi_1 = nullptr
    
    do
        int64_t r9_1 = *(arg1 + 0x288)
        rcx = rdx
        
        if (*(rsi_1 + r9_1) == 0)
            int32_t rax_3 = rdx - rbx - 1
            
            if (rax_3 s>= 1)
                rax_3 = 1
            
            if (rax_3 != 0)
                memcpy(r9_1 + (sx.q(rbx) << 3), r9_1 + (sx.q(rdx - rax_3) << 3), rax_3 << 3)
                rdx = *(arg1 + 0x290)
            
            *(arg1 + 0x290) = rdx - 1
            sub_1405c53d0(arg1 + 0x288)
            rcx = *(arg1 + 0x290)
            rbx -= 1
            rsi_1 -= 8
        
        rbx += 1
        rsi_1 = &rsi_1[1]
        rdx = rcx
    while (rbx s< rcx)

if (arg2 == 0)
    return 

if (arg3 != 0)
    sub_1405a7050(arg1 + 0x288, &arg_10)
    return 

int64_t r10_1 = *(arg1 + 0x288)
int64_t rax = r10_1
int64_t rdx_4 = r10_1 + (sx.q(rcx) << 3)

if (r10_1 == rdx_4)
    return 

while (*rax != arg2)
    rax += 8
    
    if (rax == rdx_4)
        return 

rax = (rax - r10_1) s>> 3

if (rax.d == 0xffffffff)
    return 

int32_t rdx_5 = *(arg1 + 0x290)
int32_t rcx_7 = rdx_5 - rax.d - 1

if (rcx_7 s>= 1)
    rcx_7 = 1

if (rcx_7 != 0)
    memcpy(r10_1 + (sx.q(rax.d) << 3), r10_1 + (sx.q(rdx_5 - rcx_7) << 3), rcx_7 << 3)
    rdx_5 = *(arg1 + 0x290)

*(arg1 + 0x290) = rdx_5 - 1
sub_1405c53d0(arg1 + 0x288)
