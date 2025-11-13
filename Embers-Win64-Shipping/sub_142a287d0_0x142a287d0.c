// 函数: sub_142a287d0
// 地址: 0x142a287d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
int64_t rdi = sx.q(arg4)
int32_t arg_8 = 0
int32_t r10
r10.b = *(arg1 + 0xc) s> 0
int64_t rbx = sx.q(arg3)

if (*(arg1 + 8) s> 0)
    rax = 2

int32_t r10_1 = r10 | rax

if (r10_1 == 0)
    return zx.q(*(arg2 + (((rdi + 2) * 3 + rbx) << 2)))

if (r10_1 == 1)
    int64_t r8 = sx.q((rdi + 2).d)
    int32_t rdx_18 = sx.d(*(arg2 + (((r8 + 2) * 3 + rbx) << 2)))
    int32_t rax_33 = sx.d(*(arg2 + (((rdi + 2) * 3 + rbx) << 2)))
    int32_t rdx_19 = rdx_18 + rax_33
    int32_t rax_34 = rdx_19 - 1
    
    if (rdx_18 + rax_33 s>= 0)
        rax_34 = rdx_19 + 1
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rax_34)
    arg_8.w = ((temp4_1 - temp3_1) s>> 1).w
    int32_t rdx_21 = sx.d(*(arg2 + ((r8 * 3 + rbx) << 2) + 0x1a))
    int32_t rax_38 = sx.d(*(arg2 + ((rdi * 3 + rbx) << 2) + 0x1a))
    int32_t rdx_22 = rdx_21 + rax_38
    int32_t rax_39 = rdx_22 - 1
    
    if (rdx_21 + rax_38 s>= 0)
        rax_39 = rdx_22 + 1
    
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(rax_39)
    arg_8:2.w = ((temp8_1 - temp7_1) s>> 1).w
else
    if (r10_1 == 2)
        int64_t r10_4 = sx.q((rdi + 1).d)
        int32_t rdx_12 = sx.d(*(arg2 + (((rdi + 2) * 3 + rbx) << 2)))
        int32_t rax_19 = sx.d(*(arg2 + (((r10_4 + 2) * 3 + rbx) << 2)))
        int32_t rdx_13 = rdx_12 + rax_19
        int32_t rax_20 = rdx_13 - 1
        
        if (rdx_12 + rax_19 s>= 0)
            rax_20 = rdx_13 + 1
        
        int32_t temp9
        int32_t temp10
        temp9:temp10 = sx.q(rax_20)
        arg_8.w = ((temp10 - temp9) s>> 1).w
        int32_t rdx_15 = sx.d(*(arg2 + ((rdi * 3 + rbx) << 2) + 0x1a))
        int32_t rax_24 = sx.d(*(arg2 + ((r10_4 * 3 + rbx) << 2) + 0x1a))
        int32_t rdx_16 = rdx_15 + rax_24
        int32_t rax_25 = rdx_16 - 1
        
        if (rdx_15 + rax_24 s>= 0)
            rax_25 = rdx_16 + 1
        
        int32_t temp13
        int32_t temp14
        temp13:temp14 = sx.q(rax_25)
        arg_8:2.w = ((temp14 - temp13) s>> 1).w
        return zx.q(arg_8)
    
    if (r10_1 == 3)
        int32_t rdx_2 = sx.d(*(arg2 + (rbx << 2) + 0x3c)) + sx.d(*(arg2 + (rbx << 2) + 0x30))
            + sx.d(*(arg2 + (rbx << 2) + 0x24))
        int32_t rax_3 = sx.d(*(arg2 + (rbx << 2) + 0x18))
        int32_t rdx_3 = rdx_2 + rax_3
        int32_t rax_4 = rdx_3 - 2
        
        if (rdx_2 + rax_3 s>= 0)
            rax_4 = rdx_3 + 2
        
        int32_t temp15
        int32_t temp16
        temp15:temp16 = sx.q(rax_4)
        arg_8.w = ((temp16 + (temp15 & 3)) s>> 2).w
        int32_t rdx_8 = sx.d(*(arg2 + (rbx << 2) + 0x3e)) + sx.d(*(arg2 + (rbx << 2) + 0x32))
            + sx.d(*(arg2 + (rbx << 2) + 0x26))
        int32_t rax_10 = sx.d(*(arg2 + (rbx << 2) + 0x1a))
        int32_t rdx_9 = rdx_8 + rax_10
        int32_t rax_11 = rdx_9 - 2
        
        if (rdx_8 + rax_10 s>= 0)
            rax_11 = rdx_9 + 2
        
        int32_t temp18
        int32_t temp19
        temp18:temp19 = sx.q(rax_11)
        arg_8:2.w = ((temp19 + (temp18 & 3)) s>> 2).w

return zx.q(arg_8)
