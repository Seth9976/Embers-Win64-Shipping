// 函数: sub_1429e4920
// 地址: 0x1429e4920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg6)
char r11 = r10.b
int64_t r13 = *(arg1 + 0x3588)
int32_t rax_3 = (sx.d(*(*(arg1 + 0x3648) + sx.q(arg3))) s>> r11 & 1)
    + (((sx.d(*((zx.q(arg2) & 7) + arg1 + 0x3650)) s>> r11 & 1) + (r10 << 1).d) << 1)
int64_t rdx_4 = sx.q(rax_3)
void* r15_1 = rdx_4 * 3 + *(arg1 + 0x35c8)
int32_t result

if (arg4 == 0)
    if (arg5 == 0)
        result = 3
    else
        int64_t rsi_2 = 0
        uint32_t rdi_14 = (zx.d(*(r15_1 + 1)) * (*(arg1 + 0x18) - 1) + 0x100) u>> 8
        
        if (*(arg1 + 0x1c) s< 0)
            sub_142a23140(arg1 + 0x10)
        
        int64_t r8_7 = *(arg1 + 0x10)
        uint64_t rcx_14 = zx.q(rdi_14) << 0x38
        
        if (r8_7 u>= rcx_14)
            rsi_2 = 1
            rdi_14 = *(arg1 + 0x18) - rdi_14
            r8_7 -= rcx_14
        
        uint32_t rdx_7 = zx.d(*(zx.q(rdi_14) + &data_143603f00))
        result = ((rsi_2 << 1) + 1).d
        *(arg1 + 0x1c) -= rdx_7
        *(arg1 + 0x18) = rdi_14 << rdx_7.b
        *(arg1 + 0x10) = r8_7 << rdx_7.b
else if (arg5 == 0)
    int32_t rsi_1 = 0
    uint32_t rdi_9 = (zx.d(*(r15_1 + 2)) * (*(arg1 + 0x18) - 1) + 0x100) u>> 8
    
    if (*(arg1 + 0x1c) s< 0)
        sub_142a23140(arg1 + 0x10)
    
    int64_t r8_5 = *(arg1 + 0x10)
    uint64_t rcx_9 = zx.q(rdi_9) << 0x38
    
    if (r8_5 u>= rcx_9)
        rsi_1 = 1
        rdi_9 = *(arg1 + 0x18) - rdi_9
        r8_5 -= rcx_9
    
    uint32_t rdx_6 = zx.d(*(zx.q(rdi_9) + &data_143603f00))
    result = rsi_1 + 2
    *(arg1 + 0x1c) -= rdx_6
    *(arg1 + 0x18) = rdi_9 << rdx_6.b
    *(arg1 + 0x10) = r8_5 << rdx_6.b
else
    uint64_t r14
    r14.b = 0
    
    do
        int32_t rbp_1 = 0
        uint32_t rdi_4 = (zx.d(*((sx.q(r14.b) s>> 1) + r15_1)) * (*(arg1 + 0x18) - 1) + 0x100) u>> 8
        
        if (*(arg1 + 0x1c) s< 0)
            sub_142a23140(arg1 + 0x10)
        
        int64_t r8_3 = *(arg1 + 0x10)
        uint64_t rcx_3 = zx.q(rdi_4) << 0x38
        
        if (r8_3 u>= rcx_3)
            rbp_1 = 1
            rdi_4 = *(arg1 + 0x18) - rdi_4
            r8_3 -= rcx_3
        
        uint32_t rdx_5 = zx.d(*(zx.q(rdi_4) + &data_143603f00))
        *(arg1 + 0x1c) -= rdx_5
        *(arg1 + 0x10) = r8_3 << rdx_5.b
        *(arg1 + 0x18) = rdi_4 << rdx_5.b
        r14 = zx.q(*(sx.q(sx.d(r14.b) + rbp_1) + &data_143603260))
    while (r14.b s> 0)
    
    result = neg.d(sx.d(r14.b))

if (r13 != 0)
    int64_t rdx_8 = sx.q(result) + (rdx_4 << 2)
    *(r13 + (rdx_8 << 2) + 0x230) += 1

return result
