// 函数: sub_142a1ee80
// 地址: 0x142a1ee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg3
int32_t rsi = 0

if (sub_142a20ce0(arg1, 0x80) != 0)
    int32_t r14_1 = 0
    int32_t r15_1 = 3
    int32_t temp0_1
    
    do
        int32_t rbp_1 = 0
        int32_t rbx_5 = (((*(arg1 + 0x1c) << 7) - 0x80) u>> 8) + 1
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t rdx = arg1[2]
        uint64_t rcx_2 = zx.q(rbx_5) << 0x38
        
        if (rdx u>= rcx_2)
            rbp_1 = 1
            rbx_5 = *(arg1 + 0x1c) - rbx_5
            rdx -= rcx_2
        
        uint32_t r8 = zx.d(*(zx.q(rbx_5) + &data_143609200))
        arg1[3].d -= r8
        r14_1 |= rbp_1 << r15_1.b
        arg1[2] = rdx << r8.b
        temp0_1 = r15_1
        r15_1 -= 1
        *(arg1 + 0x1c) = rbx_5 << r8.b
    while (temp0_1 - 1 s>= 0)
    rsi = r14_1
    r12 = arg3
    
    if (sub_142a20ce0(arg1, 0x80) != 0)
        rsi = neg.d(rsi)

if (rsi != arg2)
    *r12 = 1

return zx.q(rsi)
