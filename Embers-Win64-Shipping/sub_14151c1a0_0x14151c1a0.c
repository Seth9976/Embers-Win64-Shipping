// 函数: sub_14151c1a0
// 地址: 0x14151c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg4)
int64_t rsi = sx.q(sub_141507440(arg1, rbx.b, arg5))
uint32_t rbp_1 = rbx << 0x18
int32_t r9_2 = (arg5 & 0xffffff) | rbp_1
int32_t rdx_1 = (r9_2 u>> 0x10 ^ r9_2) * 0x85ebca6b
int32_t rdx_2 = (rdx_1 u>> 0xd ^ rdx_1) * 0xc2b2ae35

if (rsi.d u< *(arg1 + 0x20))
    uint64_t rcx_5 = (zx.q((rdx_2 u>> 0x10).w) ^ zx.q(rdx_2.w)) & zx.q(*(arg1 + 0x1c))
    int64_t rax_8 = *(arg1 + 0x28)
    uint64_t rax_9 = zx.q(*(rax_8 + (rcx_5 << 2)))
    
    if (rax_9.d == rsi.d)
        *(rax_8 + (rcx_5 << 2)) = *(*(arg1 + 0x30) + (zx.q(rsi.d) << 2))
    else if (rax_9.d != 0xffffffff)
        int64_t r8_1 = *(arg1 + 0x30)
        
        do
            uint64_t rdx_4 = rax_9 << 2
            rax_9 = zx.q(*(r8_1 + (rax_9 << 2)))
            
            if (rax_9.d == rsi.d)
                *(rdx_4 + r8_1) = *(r8_1 + (zx.q(rsi.d) << 2))
                break
        while (rax_9.d != 0xffffffff)

if (arg6 != 0)
    int32_t rax_12 =
        sub_1415072b0(arg1, rbx.b + 1, 0xffffffff << ((*(arg1 + 4)).b * (rbx.b + 1)) & arg5)
    
    if (rax_12 != 0xffffffff)
        char arg_f = rbx.b
        int32_t r8_4 = *(*(arg1 + 8) + sx.q(rax_12) * 0x10 + 0xc)
        uint32_t rax_14 = zx.d(r8_4.w)
        int64_t* rbx_4 = ((zx.q(*arg1) + 0x60) << 4) + arg3
        uint8_t arg_e = (r8_4 u>> 0x1c).b
        int64_t r14_1 = sx.q(rbx_4[1].d)
        int32_t rcx_15 = *(*(*(arg2 + 0x88) + ((zx.q(r8_4 u>> 0x10) & 0xfff) << 3)) + 0x1b8)
        uint32_t temp1_1 = modu.dp.d(0:rax_14, rcx_15)
        uint8_t arg_31 = (divu.dp.d(0:rax_14, rcx_15)).b
        int16_t arg_c = temp1_1.b.w
        int32_t rax_18 = (r14_1 + 1).d
        uint32_t var_38_1 = temp1_1
        rbx_4[1].d = rax_18
        
        if (rax_18 s> *(rbx_4 + 0xc))
            sub_1405a4d70(rbx_4)
        
        *(*rbx_4 + (r14_1 << 3)) = arg5.q

int32_t r8_6 = *(arg1 + 0x68)
int32_t rbp_2 = rbp_1 | arg5
int32_t rbx_5 = 0

if (r8_6 != 0)
    do
        int32_t rdx_15 = ((r8_6 - rbx_5) u>> 1) + rbx_5
        int32_t temp7_1 = *(*(arg1 + 0x60) + (sx.q(rdx_15) << 2))
        
        if (rbp_2 u<= temp7_1)
            r8_6 = rdx_15
        
        if (rbp_2 u> temp7_1)
            rbx_5 = rdx_15 + 1
    while (rbx_5 != r8_6)

int64_t rbp_3 = sx.q(*(arg1 + 0x90))
int32_t rax_22 = (rbp_3 + 1).d
*(arg1 + 0x90) = rax_22

if (rax_22 s> *(arg1 + 0x94))
    sub_1405a4cf0(&arg1[0x88])

int64_t r9_5 = rsi * 2
*(*(arg1 + 0x88) + (rbp_3 << 2)) = rbx_5
int64_t rdx_17 = *(arg1 + 8)
void* r8_7 = rdx_17 + (r9_5 << 3)
*(rdx_17 + sx.q(*(r8_7 + 8)) * 0x10 + 4) = *(rdx_17 + (r9_5 << 3) + 4)
*(*(arg1 + 8) + sx.q(*(r8_7 + 4)) * 0x10 + 8) = *(r8_7 + 8)
*(r8_7 + 8) = rsi.d
*(r8_7 + 4) = rsi.d
void* rdx_20 = *(arg1 + 8)
*(rdx_20 + (r9_5 << 3) + 4) = 2
*(rdx_20 + (r9_5 << 3) + 8) = *(rdx_20 + 0x28)
int64_t result = *(arg1 + 8)
*(result + sx.q(*(rdx_20 + 0x28)) * 0x10 + 4) = rsi.d
*(rdx_20 + 0x28) = rsi.d
*(arg1 + 0x38) -= 1
arg1[0x80] = 1
return result
