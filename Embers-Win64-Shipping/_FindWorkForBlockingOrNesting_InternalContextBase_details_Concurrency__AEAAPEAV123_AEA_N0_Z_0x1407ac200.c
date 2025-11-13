// 函数: ?FindWorkForBlockingOrNesting@InternalContextBase@details@Concurrency@@AEAAPEAV123@AEA_N0@Z
// 地址: 0x1407ac200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r10 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r10

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int64_t rbx = *(arg2 + 0x18)
void* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(rbx + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rsi_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r8_4

if ((not.b(rsi_1) & 1) == 0)
    r8_4 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r10
    int32_t r8_2 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_7
            rdx_2 += 1
            rax_7 = r10[rdx_2]
            r8_2 += 1
        while (rcx_3 s>= rax_7)
    
    r8_4 = sx.q(rcx_3) + *(rbx + (sx.q(r8_2) << 3))

uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rcx_5 = rcx_4 & 0x7fff
int32_t var_70 = 0
int32_t var_78 = rcx_5
int32_t rdi
rdi.b = rcx_5 != 0x7fff
int32_t var_74 = rdi
int32_t* r10_3

if (rcx_5 == 0x7fff)
    r10_3 = &var_70
else
    r10_3 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)

int32_t* var_68 = r10_3
int32_t rcx_7 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_60 = rcx_7
int32_t rax_9
rax_9.b = rcx_7 != 0x7fff
void* var_50
void var_58

if (rcx_7 == 0x7fff)
    var_50 = &var_58
else
    var_50 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_10 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_6 = rcx_10 & 0x7fff
int32_t var_48 = rdx_6
int32_t result_1
result_1.b = rdx_6 != 0x7fff
void* var_38
void var_40

if (rdx_6 == 0x7fff)
    var_38 = &var_40
else
    var_38 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)
int64_t result = *(r14 + 8)
int32_t r14_1 = 0
void* r15 = *(result + 0x778)
int32_t r12 = *(r15 + 0x68)
int32_t r13 = *(r15 + 0x58)

if (*(arg2 + 0x40) s> 0)
    while (true)
        int64_t rcx_14 = sx.q(*r8_4)
        r8_4 = &r8_4[zx.q(rsi_1)]
        int32_t rax_11
        int32_t rbx_1
        int32_t r11_2
        
        if (rcx_14.d s< 0 || rcx_14.d s>= r12)
            rax_11 = 0
            r11_2 = 0
            rbx_1 = 0
        else
            rax_11 = -1
            rbx_1 = r13
            r11_2 = *(*(r15 + 0x60) + (rcx_14 << 2))
        
        r14_1 += 1
        *r10_3 = rax_11
        int32_t* rdx_9 = var_50
        var_50 = &rdx_9[sx.q(rax_9)]
        *rdx_9 = r11_2
        int32_t* rdx_10 = var_38
        result = sx.q(result_1)
        var_38 = &rdx_10[result]
        *rdx_10 = rbx_1
        
        if (r14_1 s>= *(arg2 + 0x40))
            break
        
        r10_3 = &r10_3[sx.q(rdi)]
        rdi = var_74

return result
